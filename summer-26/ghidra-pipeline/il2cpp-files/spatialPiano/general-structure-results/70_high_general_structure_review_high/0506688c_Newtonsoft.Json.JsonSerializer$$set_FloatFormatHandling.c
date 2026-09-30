/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatFormatHandling
ENTRY_POINT: 0506688c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__set_FloatFormatHandling(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar4 = (**(code **)(param_1 + 0x178))();
  if (param_2 != lVar4) {
    lVar4 = (**(code **)(*unaff_x20 + 0x188))();
    lVar5 = (**(code **)(*unaff_x19 + 0x188))();
    if ((lVar4 == 0) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar1 = *(int *)(lVar4 + 0x18);
    iVar2 = *(int *)(lVar5 + 0x18);
    iVar6 = iVar2;
    if (iVar1 <= iVar2) {
      iVar6 = iVar1;
    }
    if (0 < iVar6) {
      pbVar7 = (byte *)(lVar4 + 0x20);
      pbVar8 = (byte *)(lVar5 + 0x20);
      iVar9 = iVar1;
      iVar3 = iVar2;
      do {
        if ((iVar9 == 0) || (iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*pbVar7 != *pbVar8) {
          if (*pbVar8 <= *pbVar7) {
            return 1;
          }
          return 0xffffffff;
        }
        pbVar7 = pbVar7 + 1;
        iVar6 = iVar6 + -1;
        pbVar8 = pbVar8 + 1;
        iVar3 = iVar3 + -1;
        iVar9 = iVar9 + -1;
      } while (iVar6 != 0);
    }
    if (iVar1 != iVar2) {
      if (iVar2 <= iVar1) {
        return 1;
      }
      return 0xffffffff;
    }
  }
  return 0;
}


