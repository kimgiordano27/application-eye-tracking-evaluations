/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 07452e60
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  
  FUN_07452f30();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar3 = *(uint *)(unaff_x19 + 0x1c);
    if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_03f4e590(), lVar5 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
    thunk_FUN_03f86000();
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      iVar1 = *(int *)(unaff_x19 + 0x1c) + 1;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar1 / iVar2;
      }
      *(int *)(unaff_x19 + 0x1c) = iVar1 - iVar4 * iVar2;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


