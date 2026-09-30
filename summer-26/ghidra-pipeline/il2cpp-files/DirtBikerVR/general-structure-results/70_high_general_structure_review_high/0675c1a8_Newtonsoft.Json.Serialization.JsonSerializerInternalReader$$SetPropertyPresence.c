/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 0675c1a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence
          (long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long unaff_x19;
  int iVar8;
  undefined1 *unaff_x20;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  uint uVar12;
  long unaff_x26;
  uint *unaff_x27;
  uint unaff_w28;
  uint uStack000000000000001c;
  
  uVar4 = thunk_FUN_065cbffc(param_2,**(undefined8 **)(param_1 + 0x150));
  if ((uVar4 & 1) == 0) {
    bVar3 = unaff_w23 < unaff_w24;
    unaff_w23 = unaff_w23 - unaff_w24;
    lVar5 = *(long *)PTR_DAT_084a5db0;
    if (bVar3) {
      FUN_06771580(0);
    }
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    unaff_x21 = unaff_x21 + (long)(int)unaff_w24 * 2;
    uVar4 = FUN_065cd268();
    if ((uVar4 & 1) == 0) {
      if (DAT_089760b7 == '\0') {
        FUN_03a8a718(PTR_DAT_08493e18);
        DAT_089760b7 = '\x01';
      }
      if (unaff_x26 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_065cab58();
        uVar7 = *(undefined4 *)(unaff_x26 + 0x10);
      }
      uVar4 = FUN_0675fba0(unaff_x21,unaff_w23,uVar6,uVar7,*(undefined8 *)PTR_DAT_084a9b78);
      if ((uVar4 & 1) == 0) goto LAB_0675c2a8;
      if (unaff_x26 == 0) goto LAB_0675c63c;
      unaff_w24 = *(uint *)(unaff_x26 + 0x10);
      if (unaff_w23 <= unaff_w24) goto LAB_0675c5d8;
      uVar10 = 1;
LAB_0675c330:
      unaff_x19 = 0;
      goto LAB_0675c354;
    }
LAB_0675c2a8:
    uVar4 = FUN_065cd268();
    if ((uVar4 & 1) == 0) {
      if (DAT_089760b7 == '\0') {
        FUN_03a8a718(PTR_DAT_08493e18);
        DAT_089760b7 = '\x01';
      }
      if (unaff_x25 == 0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = FUN_065cab58();
        uVar7 = *(undefined4 *)(unaff_x25 + 0x10);
      }
      uVar4 = FUN_0675fba0(unaff_x21,unaff_w23,uVar6,uVar7,*(undefined8 *)PTR_DAT_084a9b78);
      if ((uVar4 & 1) != 0) {
        if (unaff_x25 == 0) {
LAB_0675c63c:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        unaff_w24 = *(uint *)(unaff_x25 + 0x10);
        uVar10 = 0;
        if (unaff_w23 <= unaff_w24) goto LAB_0675c4f4;
        goto LAB_0675c330;
      }
    }
    unaff_x19 = 0;
    unaff_w24 = 0;
    uVar10 = 1;
LAB_0675c35c:
    puVar2 = PTR_DAT_084a5b08;
    if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = unaff_w28 - 0x30;
    if (uVar11 < 10) {
      uStack000000000000001c = uVar10;
      if (unaff_w28 != 0x30) {
LAB_0675c3c0:
        uVar10 = unaff_w24 + 9;
        iVar8 = 0;
        do {
          uVar12 = unaff_w24 + 1 + iVar8;
          if (unaff_w23 <= uVar12) goto LAB_0675c60c;
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar12 * 2);
          uVar12 = (uint)uVar1;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (9 < uVar1 - 0x30) {
            bVar3 = false;
            uVar10 = unaff_w24 + iVar8 + 1;
            goto LAB_0675c514;
          }
          iVar8 = iVar8 + 1;
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
        } while (iVar8 != 8);
        if (uVar10 < unaff_w23) {
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (9 < uVar1 - 0x30) goto LAB_0675c510;
          uVar10 = unaff_w24 + 10;
          if ((0x19999999 < uVar11) || ((bVar3 = false, uVar11 == 0x19999999 && (0x35 < uVar1)))) {
            bVar3 = true;
          }
          uVar11 = ((uint)uVar1 + uVar11 * 10) - 0x30;
          if (unaff_w23 <= uVar10) goto LAB_0675c608;
          lVar5 = *(long *)puVar2;
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar12 = (uint)uVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *(long *)puVar2;
            }
            if (9 < uVar1 - 0x30) goto LAB_0675c514;
            uVar10 = uVar10 + 1;
            bVar3 = true;
          } while (unaff_w23 != uVar10);
        }
        else {
LAB_0675c60c:
          if (uVar11 == 0) {
            uStack000000000000001c = 1;
          }
          if ((uStack000000000000001c & 1) != 0) {
LAB_0675c61c:
            uVar6 = 1;
            goto LAB_0675c5e0;
          }
        }
LAB_0675c624:
        uVar11 = 0;
        uVar6 = 0;
        *unaff_x20 = 1;
        goto LAB_0675c5e0;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar11 = 0;
          goto LAB_0675c61c;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      } while (uVar1 == 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar11 = uVar1 - 0x30;
      if (uVar11 < 10) goto LAB_0675c3c0;
      uVar11 = 0;
      uVar10 = unaff_w24;
LAB_0675c510:
      uVar12 = (uint)uVar1;
      bVar3 = false;
LAB_0675c514:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((uVar12 - 9 < 5) || (uVar12 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              uVar1 = *puVar9;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_0675c598:
            if (uVar10 < unaff_w23) goto LAB_0675c5ac;
          }
          goto LAB_0675c608;
        }
      }
      else {
LAB_0675c5ac:
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar4 = FUN_0675d708(unaff_x21,(ulong)unaff_w23 | unaff_x19 << 0x20,uVar10);
        if ((uVar4 & 1) != 0) {
LAB_0675c608:
          if (!bVar3) goto LAB_0675c60c;
          goto LAB_0675c624;
        }
      }
    }
  }
  else {
    if (unaff_w28 == 0x2d) {
      unaff_w24 = unaff_w24 + 1;
      uVar10 = 0;
      if (unaff_w23 <= unaff_w24) {
LAB_0675c4f4:
        uVar11 = 0;
        uVar6 = 0;
        goto LAB_0675c5e0;
      }
LAB_0675c354:
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      goto LAB_0675c35c;
    }
    if (unaff_w28 != 0x2b) {
      uVar10 = 1;
      goto LAB_0675c35c;
    }
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 < unaff_w23) {
      uVar10 = 1;
      goto LAB_0675c354;
    }
  }
LAB_0675c5d8:
  uVar11 = 0;
  uVar6 = 0;
LAB_0675c5e0:
  *unaff_x27 = uVar11;
  return uVar6;
}


