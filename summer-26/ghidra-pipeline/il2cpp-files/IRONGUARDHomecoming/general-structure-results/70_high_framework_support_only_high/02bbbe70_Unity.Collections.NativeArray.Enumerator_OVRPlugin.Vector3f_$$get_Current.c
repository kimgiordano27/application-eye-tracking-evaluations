/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 02bbbe70
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


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__get_Current(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar7);
  }
  if ((unaff_x23 != 0) && (lVar7 = thunk_FUN_01f116d0(), lVar7 == 0)) {
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
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03579868(uVar3,0);
    if (in_stack_00000008 == 0) goto LAB_02bbc048;
    lVar7 = FUN_03489498(in_stack_00000008,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,
                         uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    if (lVar7 == 0) {
      FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = thunk_FUN_01f116d0(lVar7,lVar4);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar7,lVar4);
    }
    if (0 < *(int *)(lVar1 + 0x18)) {
      uVar5 = 0;
      plVar6 = (long *)(lVar1 + 0x20);
      do {
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        if (uVar2 <= uVar5) {
LAB_02bbc044:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*plVar6 == 0) {
          FUN_0358b70c(0x11,0);
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        }
        if (uVar2 <= uVar5) goto LAB_02bbc044;
        FUN_02bbb848();
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 2;
      } while ((long)uVar5 < (long)*(int *)(lVar1 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_0353ca4c(0);
  if (lVar7 != 0) {
    FUN_02a64cc0();
    return;
  }
LAB_02bbc048:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


