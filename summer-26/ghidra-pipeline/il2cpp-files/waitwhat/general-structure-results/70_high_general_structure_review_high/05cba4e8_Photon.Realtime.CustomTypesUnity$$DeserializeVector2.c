/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector2
ENTRY_POINT: 05cba4e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector2(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  int unaff_w23;
  long *unaff_x26;
  uint unaff_w27;
  
  do {
    lVar3 = FUN_069e983c(param_1,unaff_w23,0);
    if ((lVar3 == 0) || (lVar3 = FUN_069d3b50(lVar3,0), lVar3 == 0)) break;
    uVar2 = FUN_069dd400(lVar3,0);
    FUN_069dd4d8(lVar3,uVar2 & unaff_w27,0);
    if ((uVar2 & unaff_w27) == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_05cba438(lVar3,unaff_w21,unaff_w20,unaff_w19 & 1);
    }
    unaff_w23 = unaff_w23 + 1;
    lVar3 = FUN_069d6e00();
    if (lVar3 == 0) break;
    iVar1 = FUN_069e8e08(lVar3,0);
    if (iVar1 <= unaff_w23) {
      return;
    }
    param_1 = FUN_069d6e00();
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


