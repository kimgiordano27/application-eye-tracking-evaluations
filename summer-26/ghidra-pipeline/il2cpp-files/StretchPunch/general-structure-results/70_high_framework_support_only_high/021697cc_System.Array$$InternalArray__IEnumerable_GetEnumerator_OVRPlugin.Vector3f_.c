/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector3f>
ENTRY_POINT: 021697cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02169934) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector3f>
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__src;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  void *unaff_x20;
  undefined8 unaff_x22;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01dde7f8(param_2);
    }
    lVar2 = thunk_FUN_01de26bc(unaff_x22,param_2);
    if (lVar2 != 0) {
      memcpy(unaff_x25,unaff_x28,unaff_x23);
      uVar3 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8(lVar2);
      }
      uVar3 = thunk_FUN_01de26bc(uVar3,lVar2);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8(lVar2);
      }
      __src = (void *)FUN_01d7da60(uVar3,lVar2);
      memcpy(unaff_x20,__src,unaff_x24);
      memcpy(unaff_x27,unaff_x20,unaff_x24);
      if (*(long *)(unaff_x29 + -0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      puVar5 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x27;
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40);
      uVar3 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
      (*(code *)puVar4[2])(uVar3,puVar4,*(undefined8 *)(unaff_x29 + -0x18),unaff_x29 + -0x10);
    }
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x48))();
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar2 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
        lVar6 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_01d7e454(lVar2,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(unaff_x29 + -0x28));
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar3 = *puVar5;
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    (*(code *)puVar5[2])(uVar3);
    memcpy(unaff_x28,unaff_x25,unaff_x23);
    memcpy(unaff_x26,unaff_x28,unaff_x23);
    unaff_x22 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  } while( true );
}


