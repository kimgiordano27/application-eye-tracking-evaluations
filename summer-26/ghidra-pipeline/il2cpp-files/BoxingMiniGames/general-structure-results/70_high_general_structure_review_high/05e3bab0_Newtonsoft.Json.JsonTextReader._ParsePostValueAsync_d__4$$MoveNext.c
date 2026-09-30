/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 05e3bab0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x7b8));
  *(undefined1 *)(unaff_x21 + 0xe1a) = 1;
  if (unaff_x22 != (long *)0x0) {
    if (unaff_x20 == unaff_x22) {
LAB_05e3bbe8:
      uVar5 = 1;
      goto LAB_05e3bbec;
    }
    bVar1 = *(byte *)(*(long *)(PTR_DAT_079f4610 + 0xa0) + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x22 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)(PTR_DAT_079f4610 + 0xa0))) {
      iVar3 = FUN_05e310c0();
      iVar4 = FUN_05e310c0();
      if (iVar3 == iVar4) {
        iVar3 = FUN_05e310c0();
        puVar2 = PTR_DAT_079fd7b8;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            FUN_05e31120();
            FUN_05e31120(unaff_x22,iVar3);
            if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar7 = *unaff_x19;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_05e3bbac;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30();
LAB_05e3bbac:
            uVar5 = (*(code *)*puVar6)();
            if ((uVar5 & 1) == 0) break;
            iVar3 = iVar3 + 1;
            iVar4 = FUN_05e310c0(unaff_x22);
          } while (iVar3 < iVar4);
          goto LAB_05e3bbec;
        }
        goto LAB_05e3bbe8;
      }
    }
  }
  uVar5 = 0;
LAB_05e3bbec:
  return uVar5 & 1;
}


