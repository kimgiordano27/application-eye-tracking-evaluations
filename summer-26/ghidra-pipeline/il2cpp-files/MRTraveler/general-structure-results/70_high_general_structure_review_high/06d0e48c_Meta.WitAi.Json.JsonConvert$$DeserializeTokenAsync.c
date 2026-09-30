/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeTokenAsync
ENTRY_POINT: 06d0e48c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Meta_WitAi_Json_JsonConvert__DeserializeTokenAsync(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x20 + 0x188))();
    puVar1 = PTR_DAT_08e8cc20;
    if (unaff_x19 != (long *)0x0) {
      uVar3 = (**(code **)(*unaff_x19 + 0x198))();
      lVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_06d0d650(lVar6,uVar2,uVar3);
      iVar4 = (**(code **)(*unaff_x20 + 0x188))();
      puVar1 = PTR_DAT_08e8cc08;
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          if (((unaff_x20[2] == 0) ||
              (FUN_05212a24(unaff_x20[2],iVar4,*(undefined8 *)puVar1), lVar6 == 0)) ||
             (*(long *)(lVar6 + 0x10) == 0)) goto LAB_06d0e580;
          FUN_05212a24(*(long *)(lVar6 + 0x10),iVar4,*(undefined8 *)puVar1);
          (**(code **)(*unaff_x19 + 0x1c8))();
          iVar4 = iVar4 + 1;
          iVar5 = (**(code **)(*unaff_x20 + 0x188))();
        } while (iVar4 < iVar5);
      }
      return lVar6;
    }
  }
LAB_06d0e580:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


