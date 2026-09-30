/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtility$$<ReadTypeArray>g__GetTypeName|10_0
ENTRY_POINT: 030cd418
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Entities_Serialization_SerializeUtility__<ReadTypeArray>g__GetTypeName_10_0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_027a7930();
  *(long *)(unaff_x19 + 0x90) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x20 != 0) {
    uVar1 = FUN_03943788();
    *(undefined4 *)(unaff_x19 + 0x98) = uVar1;
    uVar2 = FUN_039435e4();
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0xa0),uVar2);
    uVar2 = FUN_039437c4();
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      lVar3 = FUN_039430b4(*(long *)(unaff_x19 + 0x90),0);
      if (((lVar3 != 0) && (plVar4 = (long *)FUN_039430b4(), plVar4 != (long *)0x0)) &&
         (*plVar4 == *(long *)PTR_DAT_03cbedc0)) {
        uVar2 = FUN_03941ea8(plVar4,0);
        *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      uVar2 = FUN_03943f74();
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0xb8),uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


