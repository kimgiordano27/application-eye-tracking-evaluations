/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeObjectArray
ENTRY_POINT: 034284d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeObjectArray(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(param_1);
    }
    uVar2 = FUN_033f3d00();
    uVar3 = thunk_FUN_01c496e0(*unaff_x26);
    FUN_0342821c(uVar3,uVar2);
    if (unaff_x22 == 0) break;
    lVar4 = *(long *)(unaff_x22 + 0x10);
    lVar5 = *unaff_x27;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
    }
    else {
      FUN_02d5004c(unaff_x22,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (unaff_x28 == unaff_x21) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_033f3d84();
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      return;
    }
    unaff_x22 = *(long *)(unaff_x19 + 0x10);
    unaff_x21 = unaff_x21 + 1;
    FUN_0332aed8(unaff_x21,0);
    param_1 = *unaff_x25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


