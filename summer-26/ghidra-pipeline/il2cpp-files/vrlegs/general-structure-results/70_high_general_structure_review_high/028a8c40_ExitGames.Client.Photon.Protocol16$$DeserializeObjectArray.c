/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeObjectArray
ENTRY_POINT: 028a8c40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeObjectArray(code *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *in_stack_00000000;
  
  uVar1 = (*param_1)();
  FUN_036d0224(uVar1,0);
  FUN_03673798();
  lVar2 = *(long *)(unaff_x20 + 0x50);
  if (*(char *)(unaff_x20 + 0x71) == '\0') {
    lVar4 = *(long *)(unaff_x20 + 0x98);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_028a8d1c;
      if (lVar2 != 0) {
        FUN_03674eb0(lVar2,*(undefined8 *)(lVar4 + 0x20),0);
        if (*unaff_x23 != 0) {
          FUN_03674bb8(0,0,0x3f800000,0x3f800000,*unaff_x23,0);
          goto LAB_028a8cdc;
        }
      }
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x88);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_028a8d1c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (lVar2 != 0) {
        FUN_03674eb0(lVar2,*(undefined8 *)(lVar4 + 0x20),0);
LAB_028a8cdc:
        uVar3 = FUN_036cbbbc();
        *in_stack_00000000 = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000000,uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


