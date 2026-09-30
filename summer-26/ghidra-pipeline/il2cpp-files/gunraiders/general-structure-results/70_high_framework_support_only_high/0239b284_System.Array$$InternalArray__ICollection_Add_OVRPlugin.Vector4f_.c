/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector4f>
ENTRY_POINT: 0239b284
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector4f>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong __n;
  void *__src;
  void *unaff_x24;
  undefined8 *__dest;
  long unaff_x26;
  long *plVar5;
  long unaff_x29;
  
  FUN_01c723f0();
  plVar5 = *(long **)(unaff_x20 + 0x38);
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  uVar4 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar4);
  __src = (void *)((long)__dest - uVar4);
  if (unaff_x21 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(PTR_DAT_04231c48);
    FUN_0323fc78(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2);
  }
  if (-1 < *(int *)(*plVar5 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x24,__n);
  if (*(int *)(*(long *)PTR_DAT_0422fdb8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    plVar5 = *(long **)(unaff_x20 + 0x38);
  }
  puVar1 = (undefined8 *)plVar5[1];
  uVar2 = *puVar1;
  if (-1 < *(int *)(*plVar5 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(long *)(unaff_x29 + -0x20) = unaff_x21;
  *(undefined8 **)(unaff_x29 + -0x18) = __dest;
  *(void **)(unaff_x29 + -0x10) = __src;
  (*(code *)puVar1[2])(uVar2,puVar1,0,unaff_x29 + -0x20,__src);
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


