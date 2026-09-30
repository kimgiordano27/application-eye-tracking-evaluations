/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 071088c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  uint in_w8;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined2 uVar9;
  int unaff_w20;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x29;
  
code_r0x071088c0:
  if (in_w8 != 0x2a) goto Newtonsoft_Json_JsonConvert__SerializeXNode;
LAB_071088c8:
  if (*(char *)(unaff_x27 + 0x200) == '\0') {
    FUN_03d2d2b0();
    *(undefined1 *)(unaff_x27 + 0x200) = 1;
  }
  uVar3 = *(uint *)(unaff_x29 + -0x18);
  lVar6 = (long)(int)uVar3;
  if ((int)*(uint *)(unaff_x29 + -0x20) <= (int)uVar3) {
    uVar5 = 0x22;
    goto LAB_07108984;
  }
  if (*(uint *)(unaff_x29 + -0x20) <= uVar3) {
LAB_071089b4:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  lVar7 = *(long *)(unaff_x29 + -0x28);
  iVar8 = uVar3 + 1;
  uVar9 = 0x22;
LAB_07108964:
  *(undefined2 *)(lVar7 + lVar6 * 2) = uVar9;
  *(int *)(unaff_x29 + -0x18) = iVar8;
LAB_07108990:
  do {
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w26 + unaff_w20 == 0) {
      uVar5 = FUN_06ff13c4(unaff_x29 + -0x30,0);
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = FUN_06fcd2c8();
    if ((uVar3 & 0xffff) == 0x3f) {
      if (*(char *)(unaff_x27 + 0x200) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x27 + 0x200) = 1;
      }
      uVar3 = *(uint *)(unaff_x29 + -0x18);
      lVar6 = (long)(int)uVar3;
      if ((int)uVar3 < (int)*(uint *)(unaff_x29 + -0x20)) {
        if (*(uint *)(unaff_x29 + -0x20) <= uVar3) goto LAB_071089b4;
        lVar7 = *(long *)(unaff_x29 + -0x28);
        iVar8 = uVar3 + 1;
        uVar9 = 0x3e;
        goto LAB_07108964;
      }
      uVar5 = 0x3e;
    }
    else {
      if ((uVar3 & 0xffff) != 0x2e) {
        if (*(char *)(unaff_x27 + 0x200) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x27 + 0x200) = 1;
        }
        uVar1 = *(uint *)(unaff_x29 + -0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x29 + -0x20)) {
          if (*(uint *)(unaff_x29 + -0x20) <= uVar1) goto LAB_071089b4;
          *(short *)(*(long *)(unaff_x29 + -0x28) + (long)(int)uVar1 * 2) = (short)uVar3;
          *(uint *)(unaff_x29 + -0x18) = uVar1 + 1;
        }
        else {
          FUN_06ff15f4(unaff_x29 + -0x30,uVar3,0);
        }
        goto LAB_07108990;
      }
      if (((unaff_w20 != 0) && (unaff_w26 + unaff_w20 == -1)) &&
         (sVar2 = FUN_06fcd2c8(), sVar2 == 0x2a)) {
        puVar4 = (undefined2 *)FUN_06ff13a0(unaff_x29 + -0x30,*(int *)(unaff_x29 + -0x18) + -1,0);
        *puVar4 = 0x3c;
        goto LAB_07108990;
      }
      if (unaff_w20 < unaff_w25) {
        sVar2 = FUN_06fcd2c8();
        if (sVar2 == 0x3f) goto LAB_071088c8;
        uVar3 = FUN_06fcd2c8();
        in_w8 = uVar3 & 0xffff;
        goto code_r0x071088c0;
      }
Newtonsoft_Json_JsonConvert__SerializeXNode:
      if (*(char *)(unaff_x27 + 0x200) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x27 + 0x200) = 1;
      }
      uVar3 = *(uint *)(unaff_x29 + -0x18);
      lVar6 = (long)(int)uVar3;
      if ((int)uVar3 < (int)*(uint *)(unaff_x29 + -0x20)) break;
      uVar5 = 0x2e;
    }
LAB_07108984:
    FUN_06ff15f4(unaff_x29 + -0x30,uVar5,0);
  } while( true );
  if (*(uint *)(unaff_x29 + -0x20) <= uVar3) goto LAB_071089b4;
  lVar7 = *(long *)(unaff_x29 + -0x28);
  iVar8 = uVar3 + 1;
  uVar9 = 0x2e;
  goto LAB_07108964;
}


