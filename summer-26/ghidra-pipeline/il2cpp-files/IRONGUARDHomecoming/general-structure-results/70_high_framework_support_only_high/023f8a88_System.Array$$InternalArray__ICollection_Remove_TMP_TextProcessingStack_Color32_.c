/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<TMP_TextProcessingStack<Color32>>
ENTRY_POINT: 023f8a88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023f8b94) */

undefined8
System_Array__InternalArray__ICollection_Remove<TMP_TextProcessingStack<Color32>>
          (undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  puVar3 = (undefined8 *)(*(long **)(unaff_x23 + 0x38))[1];
  uVar1 = *puVar3;
  if (-1 < *(int *)(**(long **)(unaff_x23 + 0x38) + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x30) = param_1;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w22;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar3[2])(uVar1,puVar3,0,unaff_x29 + -0x38);
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar2 = (long *)FUN_039109dc(unaff_x19[3],0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f8b4c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_023f8b4c:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


