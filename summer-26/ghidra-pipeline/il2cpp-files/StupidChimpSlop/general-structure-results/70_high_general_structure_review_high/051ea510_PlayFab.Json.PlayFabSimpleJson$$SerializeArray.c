/*
FUNCTION_NAME: PlayFab.Json.PlayFabSimpleJson$$SerializeArray
ENTRY_POINT: 051ea510
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void PlayFab_Json_PlayFabSimpleJson__SerializeArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint in_w9;
  ulong in_x10;
  long lVar3;
  long in_x11;
  ulong in_x12;
  ulong uVar4;
  ulong in_x13;
  long unaff_x19;
  long unaff_x20;
  
  while ((*(int *)(in_x11 + in_x12 * 4) == 0 &&
         (*(int *)(unaff_x19 + 0x18) = (int)in_x12 + -1, 2 < in_x13 + 1))) {
    uVar4 = in_x13 - 1;
    in_x12 = in_x13;
    in_x13 = uVar4;
    if (in_x10 <= uVar4) {
LAB_051ea574:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
  }
  if ((unaff_x20 == 0) || (lVar3 = *(long *)(unaff_x20 + 0x10), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(lVar3 + 0x18) < 0x46) goto LAB_051ea574;
  if ((int)*(uint *)(lVar3 + 0x134) < 0) {
    if (in_w9 < 0x46) goto LAB_051ea574;
    if ((int)(*(uint *)(param_1 + 0x134) ^ *(uint *)(lVar3 + 0x134)) < 0) {
      thunk_FUN_02db45e8(PTR_DAT_06649f80);
      uVar1 = thunk_FUN_02d8a638();
      uVar2 = thunk_FUN_02db45e8(Cysharp_Threading_Tasks_UniTask_NextFramePromise_var);
      FUN_04f70674(uVar1,uVar2,0);
      uVar2 = thunk_FUN_02db45e8(Cysharp_Threading_Tasks_UniTask_WaitForEndOfFramePromise_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar1,uVar2);
    }
  }
  return;
}


