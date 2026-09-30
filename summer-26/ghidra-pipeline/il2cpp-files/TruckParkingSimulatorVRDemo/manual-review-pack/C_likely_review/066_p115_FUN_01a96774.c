/*
FUNCTION_NAME: FUN_01a96774
ENTRY_POINT: 01a96774
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3
*/


bool FUN_01a96774(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_022ccd14(0);
      lVar3 = *param_1;
      if (lVar3 == 0)
      goto UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>__Append
      ;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar4 = uVar2;
      if (uVar1 <= uVar4) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_01a96804;
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (lVar5 == 0)
      goto UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>__Append
      ;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012196e0();
      }
      lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
      uVar2 = uVar4 + 1;
    } while (*(int *)(lVar5 + 0x20) < 0);
    lVar3 = *(long *)(lVar5 + 0x28);
    param_1[3] = *(long *)(lVar5 + 0x30);
    param_1[2] = lVar3;
LAB_01a96804:
    return uVar4 < uVar1;
  }
UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>__Append:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


