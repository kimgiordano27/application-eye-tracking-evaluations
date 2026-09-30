/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_FloatFormatHandling
ENTRY_POINT: 0768a25c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_FloatFormatHandling(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined2 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if ((unaff_w24 == 10) || ((unaff_w21 >> 5 & 1) == 0)) {
    if (unaff_w24 != 10) {
FUN_0768a36c:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0767a564(unaff_w23,unaff_w22,0);
      lVar4 = thunk_FUN_040b28f8(uVar3,0);
      if (lVar4 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar2 = thunk_FUN_04083428(0);
        puVar6 = (undefined2 *)(lVar4 + iVar2);
        iVar2 = *(int *)(lVar4 + 0x10) - unaff_w22;
        if ((unaff_w21 & 1) == 0) {
          if (0 < (int)unaff_w22) {
            uVar8 = (ulong)unaff_w22;
            puVar5 = puVar6;
            do {
              if (0x43 < unaff_w22) goto LAB_0768a460;
              uVar8 = uVar8 - 1;
              puVar6 = puVar5 + 1;
              *puVar5 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
              puVar5 = puVar6;
            } while (uVar8 != 0);
          }
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              *puVar6 = unaff_w19;
              puVar6 = puVar6 + 1;
            } while (iVar2 != 0);
          }
        }
        else {
          puVar5 = puVar6;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              puVar6 = puVar5 + 1;
              *puVar5 = unaff_w19;
              puVar5 = puVar6;
            } while (iVar2 != 0);
          }
          if (0 < (int)unaff_w22) {
            uVar8 = (ulong)unaff_w22;
            do {
              if (0x43 < unaff_w22) goto LAB_0768a460;
              uVar8 = uVar8 - 1;
              *puVar6 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar4;
        }
      }
      goto LAB_0768a4f4;
    }
    if (unaff_x25 < 0) {
      if (unaff_w22 < 0x43) {
        uVar7 = 0x2d;
LAB_0768a364:
        *(undefined2 *)(unaff_x20 + (ulong)unaff_w22 * 2) = uVar7;
        unaff_w22 = unaff_w22 + 1;
        goto FUN_0768a36c;
      }
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto FUN_0768a36c;
      if (unaff_w22 < 0x43) {
        uVar7 = 0x20;
        goto LAB_0768a364;
      }
    }
    else if (unaff_w22 < 0x43) {
      uVar7 = 0x2b;
      goto LAB_0768a364;
    }
  }
  else if (unaff_w24 == 8) {
    if (unaff_w22 < 0x43) {
      uVar7 = 0x30;
      goto LAB_0768a364;
    }
  }
  else if (unaff_w24 == 0x10) {
    if (unaff_w22 < 0x43) {
      puVar6 = (undefined2 *)(unaff_x20 + (ulong)unaff_w22 * 2);
      *puVar6 = 0x78;
      if (unaff_w22 != 0x42) {
        puVar6[1] = 0x30;
        unaff_w22 = unaff_w22 + 2;
        goto FUN_0768a36c;
      }
    }
  }
  else {
    if ((unaff_w21 >> 0xe & 1) == 0) goto FUN_0768a36c;
    if (unaff_w22 < 0x43) {
      puVar6 = (undefined2 *)(unaff_x20 + (ulong)unaff_w22 * 2);
      *puVar6 = 0x23;
      if (unaff_w22 != 0x42) {
        uVar1 = (ushort)(unaff_w24 / 10);
        puVar6[1] = (short)unaff_w24 + uVar1 * -10 | 0x30;
        if (unaff_w22 < 0x41) {
          puVar6[2] = uVar1 | 0x30;
          unaff_w22 = unaff_w22 + 3;
          goto FUN_0768a36c;
        }
      }
    }
  }
LAB_0768a460:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


