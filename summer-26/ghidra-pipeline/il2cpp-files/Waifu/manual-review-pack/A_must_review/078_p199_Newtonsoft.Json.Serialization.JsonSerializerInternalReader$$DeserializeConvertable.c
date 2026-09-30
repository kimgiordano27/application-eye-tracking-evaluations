/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 0685439c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  int unaff_w23;
  int iVar10;
  
  plVar8 = (long *)**(undefined8 **)(*(long *)(unaff_x21 + 0xb78) + 0xb8);
  iVar10 = unaff_w19 + unaff_w23 + -1;
  lVar3 = FUN_0339898c();
  if (lVar3 == 0) {
    if ((int)unaff_w19 <= iVar10) {
      do {
        uVar1 = unaff_w19 + ((int)(iVar10 - unaff_w19) >> 1);
        uVar9 = FUN_06848650();
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc5d0) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06854504;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc5d0,0);
LAB_06854504:
        iVar2 = (*(code *)*puVar4)(plVar8,uVar9);
        if (iVar2 == 0) {
          return uVar1;
        }
        if (iVar2 < 0) {
          unaff_w19 = uVar1 + 1;
        }
        else {
          iVar10 = uVar1 - 1;
        }
      } while ((int)unaff_w19 <= iVar10);
    }
  }
  else if ((int)unaff_w19 <= iVar10) {
    do {
      uVar1 = unaff_w19 + ((int)(iVar10 - unaff_w19) >> 1);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar5 = *plVar8;
      uVar9 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_083cc5d0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06854440;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc5d0,0);
LAB_06854440:
      iVar2 = (*(code *)*puVar4)(plVar8,uVar9);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        unaff_w19 = uVar1 + 1;
      }
      else {
        iVar10 = uVar1 - 1;
      }
    } while ((int)unaff_w19 <= iVar10);
  }
  return ~unaff_w19;
}


