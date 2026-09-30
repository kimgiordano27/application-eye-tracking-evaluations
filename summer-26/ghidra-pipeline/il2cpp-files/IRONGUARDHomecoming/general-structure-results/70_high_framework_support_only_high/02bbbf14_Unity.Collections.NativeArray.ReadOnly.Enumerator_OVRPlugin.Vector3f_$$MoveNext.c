/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 02bbbf14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__MoveNext(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x26;
  
  lVar1 = FUN_03489498();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  if (lVar1 == 0) {
    FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = thunk_FUN_01f116d0(lVar1,lVar4);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar1,lVar4);
  }
  if (0 < *(int *)(lVar2 + 0x18)) {
    uVar5 = 0;
    plVar6 = (long *)(lVar2 + 0x20);
    do {
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      if (uVar3 <= uVar5) {
LAB_02bbc044:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*plVar6 == 0) {
        FUN_0358b70c(0x11,0);
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      }
      if (uVar3 <= uVar5) goto LAB_02bbc044;
      FUN_02bbb848();
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 2;
    } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = FUN_0353ca4c(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02a64cc0();
  return;
}


