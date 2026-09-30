/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bbbe7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01ecaf44();
  }
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_01f116d0(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  thunk_FUN_01f51358();
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_02bbb768();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03579868(uVar4,0);
    if (in_stack_00000008 == 0) goto LAB_02bbc048;
    lVar1 = FUN_03489498(in_stack_00000008,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                         uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    if (lVar1 == 0) {
      FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = thunk_FUN_01f116d0(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar1,lVar5);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar6 = 0;
      plVar7 = (long *)(lVar2 + 0x20);
      do {
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        if (uVar3 <= uVar6) {
LAB_02bbc044:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*plVar7 == 0) {
          FUN_0358b70c(0x11,0);
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        }
        if (uVar3 <= uVar6) goto LAB_02bbc044;
        FUN_02bbb848();
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 2;
      } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = FUN_0353ca4c(0);
  if (lVar1 != 0) {
    FUN_02a64cc0();
    return;
  }
LAB_02bbc048:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


