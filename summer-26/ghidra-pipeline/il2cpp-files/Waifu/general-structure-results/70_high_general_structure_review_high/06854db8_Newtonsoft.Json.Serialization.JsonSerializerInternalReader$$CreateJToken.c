/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 06854db8
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  
  if ((uint)*(byte *)(param_1 + 0x132) != *(uint *)(unaff_x19 + 0x18)) {
    FUN_033d1ba8(&DAT_083c8a08);
    uVar3 = thunk_FUN_03398a84();
    uVar4 = FUN_033d1ba8(&DAT_0843d440);
    FUN_067863a4(uVar3,uVar4,0);
LAB_06854e78:
    uVar4 = FUN_033d1ba8(&DAT_084016a0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar3,uVar4);
  }
  lVar2 = FUN_03398188(DAT_083c7838);
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(unaff_x19 + (long)(int)uVar8 * 8 + 0x20);
      iVar6 = (int)lVar7;
      if (lVar7 != iVar6) {
        FUN_033d1ba8(&DAT_083c8a18);
        uVar3 = thunk_FUN_03398a84();
        uVar4 = FUN_033d1ba8(&DAT_08453df8);
        uVar5 = FUN_033d1ba8(&DAT_08433e20);
        FUN_06782c1c(uVar3,uVar4,uVar5,0);
        goto LAB_06854e78;
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar7 = (long)(int)uVar8;
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar8 = uVar8 + 1;
      *(int *)(lVar2 + lVar7 * 4 + 0x20) = iVar6;
    } while (uVar1 != uVar8);
  }
  FUN_0334d0b0();
  return;
}


