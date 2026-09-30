/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 0566eec4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  
  do {
    if (unaff_w28 < (in_w8 >> 3 | in_w8 << 0x1d)) {
      if ((in_w8 >> 1 | in_w8 << 0x1f) <= unaff_w27) {
        FUN_05672ebc(0,0);
        iVar3 = 0;
        goto LAB_0566ef24;
      }
      thunk_FUN_02e6a19c(0);
    }
    else {
      FUN_05672ebc(1,0);
      iVar3 = unaff_w24 - (unaff_w24 / 10) * unaff_w25;
LAB_0566ef24:
      if ((unaff_w21 != -1) && (iVar3 == 0)) {
        iVar3 = thunk_FUN_02e6f048(0);
        if ((iVar3 - unaff_w22 < 0) || (unaff_w21 - (iVar3 - unaff_w22) < 1)) {
          if (*(int *)(*(long *)PTR_DAT_06a864a8 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_0566f2dc();
          return;
        }
      }
    }
    unaff_w24 = unaff_w24 + 1;
    uVar1 = *unaff_x19;
    thunk_FUN_02e4aa50();
    if ((uVar1 & 1) == 0) {
      FUN_056735f0(0);
      thunk_FUN_02e4aa50();
      uVar2 = thunk_FUN_02e754b4();
      if (uVar2 == uVar1) {
        return;
      }
      FUN_05673640(0);
    }
    in_w8 = unaff_w27 + unaff_w24 * unaff_w26;
  } while( true );
}


