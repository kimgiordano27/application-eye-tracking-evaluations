/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 06854330
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint unaff_w19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  int unaff_w23;
  long unaff_x24;
  undefined1 unaff_w25;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7a10,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0xe29) = unaff_w25;
  if (unaff_x22 == (long *)0x0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar7 = thunk_FUN_03398a84();
    uVar11 = FUN_033d1ba8(&DAT_0844fcf0);
    FUN_0677f140(uVar7,uVar11,0);
  }
  else {
    if ((unaff_w23 < 0) || ((int)unaff_w19 < 0)) {
      puVar5 = &DAT_08453df8;
      if (-1 < (int)unaff_w19) {
        puVar5 = &DAT_08454c18;
      }
      uVar11 = FUN_0335b6c8(puVar5,1);
      FUN_033d1ba8(&DAT_083c8a18);
      uVar7 = thunk_FUN_03398a84();
      uVar6 = FUN_033d1ba8(&DAT_08441cd8);
      FUN_06782c1c(uVar7,uVar11,uVar6,0);
      uVar11 = FUN_033d1ba8(&DAT_08401648);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar7,uVar11);
    }
    iVar2 = FUN_068485f0();
    if ((int)(iVar2 - unaff_w19) < unaff_w23) {
      FUN_033d1ba8(&DAT_083c8a08);
      uVar7 = thunk_FUN_03398a84();
      uVar11 = FUN_033d1ba8(&DAT_084426a8);
      FUN_067863a4(uVar7,uVar11,0);
    }
    else {
      if (*(char *)(*unaff_x22 + 0x132) == '\x01') {
        if (unaff_x21 == (long *)0x0) {
          if (*(int *)(DAT_083c9b78 + 0xe0) == 0) {
            FUN_033b9870();
          }
          unaff_x21 = (long *)**(undefined8 **)(DAT_083c9b78 + 0xb8);
        }
        iVar2 = unaff_w19 + unaff_w23 + -1;
        lVar4 = FUN_0339898c();
        if (lVar4 == 0) {
          if ((int)unaff_w19 <= iVar2) {
            do {
              uVar1 = unaff_w19 + ((int)(iVar2 - unaff_w19) >> 1);
              uVar11 = FUN_06848650();
              if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              lVar4 = *unaff_x21;
              uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_083cc5d0) {
                    puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_06854504;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_0338f71c(unaff_x21,DAT_083cc5d0,0);
LAB_06854504:
              iVar3 = (*(code *)*puVar5)(unaff_x21,uVar11);
              if (iVar3 == 0) {
                return uVar1;
              }
              if (iVar3 < 0) {
                unaff_w19 = uVar1 + 1;
              }
              else {
                iVar2 = uVar1 - 1;
              }
            } while ((int)unaff_w19 <= iVar2);
          }
        }
        else if ((int)unaff_w19 <= iVar2) {
          do {
            uVar1 = unaff_w19 + ((int)(iVar2 - unaff_w19) >> 1);
            if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            lVar8 = *unaff_x21;
            uVar11 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_083cc5d0) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_06854440;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0338f71c(unaff_x21,DAT_083cc5d0,0);
LAB_06854440:
            iVar3 = (*(code *)*puVar5)(unaff_x21,uVar11);
            if (iVar3 == 0) {
              return uVar1;
            }
            if (iVar3 < 0) {
              unaff_w19 = uVar1 + 1;
            }
            else {
              iVar2 = uVar1 - 1;
            }
          } while ((int)unaff_w19 <= iVar2);
        }
        return ~unaff_w19;
      }
      FUN_033d1ba8(&DAT_083d0470);
      uVar7 = thunk_FUN_03398a84();
      uVar11 = FUN_033d1ba8(&DAT_08442c00);
      FUN_06841a44(uVar7,uVar11);
    }
  }
  uVar11 = FUN_033d1ba8(&DAT_08401648);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar7,uVar11);
}


