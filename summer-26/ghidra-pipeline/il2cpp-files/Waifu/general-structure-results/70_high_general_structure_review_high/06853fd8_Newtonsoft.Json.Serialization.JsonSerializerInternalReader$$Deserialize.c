/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 06853fd8
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int unaff_w22;
  
  iVar1 = FUN_068485f0();
  if (unaff_w22 == iVar1) {
    iVar1 = FUN_068485f0();
    if (iVar1 < 1) {
      uVar2 = 1;
    }
    else {
      iVar1 = 0;
      do {
        FUN_06848650();
        FUN_06848650();
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar5 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc888) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06854070;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06854070:
        uVar2 = (*(code *)*puVar4)();
        if ((uVar2 & 1) == 0) break;
        iVar1 = iVar1 + 1;
        iVar3 = FUN_068485f0();
      } while (iVar1 < iVar3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


