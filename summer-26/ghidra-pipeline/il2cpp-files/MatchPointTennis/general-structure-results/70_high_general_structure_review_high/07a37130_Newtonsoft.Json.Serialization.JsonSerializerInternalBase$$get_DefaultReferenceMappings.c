/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 07a37130
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x26;
  int unaff_w27;
  uint uVar9;
  long unaff_x29;
  undefined8 auStack_10 [2];
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  *(undefined8 *)(unaff_x29 + -8) = 0;
  *(undefined2 *)(unaff_x19 + 4) = 0;
  uVar4 = FUN_07a37d34();
  *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -4);
  puVar2 = PTR_DAT_09f40e98;
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_07a37a9c();
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      uVar9 = unaff_w22 + unaff_w27 + 3;
      if (unaff_w20 < uVar9) {
        FUN_07a5ec1c(0);
      }
      if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      lVar6 = unaff_x21 + (long)(int)uVar9 * 2;
      uVar3 = FUN_07a4c808(lVar6,unaff_w20 - uVar9,0x2c,*unaff_x26);
      if (0 < (int)uVar3) {
        lVar8 = *(long *)PTR_DAT_09f404c8;
        if ((unaff_w20 < uVar9) || (unaff_w20 - uVar9 < uVar3)) {
          FUN_07a5ec1c(0);
        }
        if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        *(undefined8 *)(unaff_x29 + -8) = 0;
        *(undefined2 *)(unaff_x19 + 6) = 0;
        uVar4 = FUN_07a37d34(lVar6,uVar3,unaff_x29 + -8,0xffffffff,0x1000,unaff_x29 + -4);
        uVar5 = 0;
        *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -4);
        plVar7 = (long *)PTR_DAT_09f40e98;
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar3 + uVar9;
        if ((int)uVar1 < (int)unaff_w20) {
          if (unaff_w20 <= uVar1) {
LAB_07a374cc:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c(uVar5);
          }
          if (*(short *)(unaff_x21 + (long)(int)uVar1 * 2) == 0x7b) {
            *(undefined8 **)(unaff_x29 + -0x18) = auStack_10;
            uVar4 = 0;
            auStack_10[0] = 0;
            do {
              uVar5 = FUN_07a37a9c();
              if ((uVar5 & 1) == 0) goto LAB_07a373fc;
              lVar6 = *plVar7;
              uVar9 = uVar9 + uVar3 + 3;
              if (unaff_w20 < uVar9) {
                FUN_07a5ec1c(0);
              }
              if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              uVar1 = unaff_w20 - uVar9;
              lVar6 = unaff_x21 + (long)(int)uVar9 * 2;
              if (uVar4 < 7) {
                uVar3 = FUN_07a4c808(lVar6,uVar1,0x2c,*unaff_x26);
              }
              else {
                uVar3 = FUN_07a4c808(lVar6,uVar1,0x7d,*unaff_x26);
              }
              if ((int)uVar3 < 1) goto LAB_07a373fc;
              lVar8 = *(long *)PTR_DAT_09f404c8;
              if ((unaff_w20 < uVar9) || (uVar1 < uVar3)) {
                FUN_07a5ec1c(0);
              }
              if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              *(undefined4 *)(unaff_x29 + -4) = 0;
              uVar5 = FUN_07a37d34(lVar6,uVar3,unaff_x29 + -4,0xffffffff,0x1000,unaff_x29 + -0xc);
              plVar7 = (long *)PTR_DAT_09f40e98;
              if ((uVar5 & 1) == 0) {
                return 0;
              }
              if (0xff < *(uint *)(unaff_x29 + -0xc)) goto LAB_07a373fc;
              *(char *)(*(long *)(unaff_x29 + -0x18) + uVar4) = (char)*(uint *)(unaff_x29 + -0xc);
              uVar4 = uVar4 + 1;
            } while (uVar4 != 8);
            uVar9 = uVar9 + uVar3 + 1;
            *(undefined8 *)(unaff_x19 + 8) = **(undefined8 **)(unaff_x29 + -0x18);
            if ((int)uVar9 < (int)unaff_w20) {
              if (unaff_w20 <= uVar9) goto LAB_07a374cc;
              if ((*(short *)(unaff_x21 + (long)(int)uVar9 * 2) == 0x7d) && (uVar9 == unaff_w20 - 1)
                 ) {
                return 1;
              }
            }
          }
        }
      }
    }
LAB_07a373fc:
    FUN_07a377cc();
  }
  return 0;
}


