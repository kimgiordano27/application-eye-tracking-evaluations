/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetUserArray
ENTRY_POINT: 04eb15e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Oculus_Platform_CAPI__ovr_Message_GetUserArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  
  thunk_FUN_02b79644();
  FUN_0409c824();
  puVar1 = UnityEngine_Networking_UnityWebRequestAsyncOperation_var;
  if (unaff_x20 != 0) {
    FUN_0409e370();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x118);
      uVar2 = thunk_FUN_02b79644(*unaff_x22);
      FUN_0409c824();
      if (lVar3 != 0) {
        FUN_0409e370(lVar3,uVar2,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


