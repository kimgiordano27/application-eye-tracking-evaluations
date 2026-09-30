/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 02707ee0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar3 = *unaff_x19;
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
LAB_02707f7c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar5 = (long)(int)uVar4;
        lVar6 = *(long *)(lVar2 + lVar5 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar3 == 0)) goto LAB_02707f78;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02707f7c;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(lVar3 + lVar5 * 4 + 0x20) = *(undefined4 *)(lVar6 + 0x10);
      } while ((int)uVar4 < (int)uVar1);
    }
    if (*unaff_x19 != 0) {
      lVar2 = FUN_027941f0(*unaff_x19,0);
      if (lVar2 != 0) {
        uVar7 = *unaff_x21;
        lVar3 = thunk_FUN_01a89d6c(lVar2,uVar7);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar2,uVar7);
        }
      }
      return;
    }
  }
LAB_02707f78:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


