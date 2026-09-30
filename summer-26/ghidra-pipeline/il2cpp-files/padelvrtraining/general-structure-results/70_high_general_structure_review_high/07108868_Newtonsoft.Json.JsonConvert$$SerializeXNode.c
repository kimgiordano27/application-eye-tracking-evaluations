/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 07108868
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint in_w9;
  long lVar6;
  int iVar7;
  undefined2 uVar8;
  undefined8 unaff_x19;
  int unaff_w20;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x07108868:
  if (in_w9 <= (uint)param_1) {
LAB_071089b4:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(short *)(*(long *)(unaff_x29 + -0x28) + param_1 * 2) = (short)unaff_w23;
  *(uint *)(unaff_x29 + -0x18) = (uint)param_1 + 1;
  do {
    while( true ) {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w26 + unaff_w20 == 0) {
        if ((unaff_x28 & 1) != 0) {
          unaff_x19 = FUN_06ff13c4(unaff_x29 + -0x30,0);
        }
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return unaff_x19;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      unaff_w23 = FUN_06fcd2c8();
      if ((unaff_w23 & 0xffff) != 0x3f) break;
      if (*(char *)(unaff_x27 + 0x200) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x27 + 0x200) = 1;
      }
      uVar1 = *(uint *)(unaff_x29 + -0x18);
      lVar5 = (long)(int)uVar1;
      if ((int)uVar1 < (int)*(uint *)(unaff_x29 + -0x20)) {
        if (*(uint *)(unaff_x29 + -0x20) <= uVar1) goto LAB_071089b4;
        lVar6 = *(long *)(unaff_x29 + -0x28);
        iVar7 = uVar1 + 1;
        uVar8 = 0x3e;
LAB_07108964:
        *(undefined2 *)(lVar6 + lVar5 * 2) = uVar8;
        *(int *)(unaff_x29 + -0x18) = iVar7;
      }
      else {
        uVar4 = 0x3e;
LAB_07108984:
        FUN_06ff15f4(unaff_x29 + -0x30,uVar4,0);
      }
LAB_0710898c:
      unaff_x28 = 1;
    }
    if ((unaff_w23 & 0xffff) == 0x2e) {
      if ((unaff_w20 != 0) && (unaff_w26 + unaff_w20 == -1)) {
        sVar2 = FUN_06fcd2c8();
        if (sVar2 != 0x2a) goto LAB_07108884;
        puVar3 = (undefined2 *)FUN_06ff13a0(unaff_x29 + -0x30,*(int *)(unaff_x29 + -0x18) + -1,0);
        *puVar3 = 0x3c;
        goto LAB_0710898c;
      }
LAB_07108884:
      if (unaff_w20 < unaff_w25) {
        sVar2 = FUN_06fcd2c8();
        if ((sVar2 == 0x3f) || (sVar2 = FUN_06fcd2c8(), sVar2 == 0x2a)) {
          if (*(char *)(unaff_x27 + 0x200) == '\0') {
            FUN_03d2d2b0();
            *(undefined1 *)(unaff_x27 + 0x200) = 1;
          }
          uVar1 = *(uint *)(unaff_x29 + -0x18);
          lVar5 = (long)(int)uVar1;
          if ((int)*(uint *)(unaff_x29 + -0x20) <= (int)uVar1) {
            uVar4 = 0x22;
            goto LAB_07108984;
          }
          if (uVar1 < *(uint *)(unaff_x29 + -0x20)) {
            lVar6 = *(long *)(unaff_x29 + -0x28);
            iVar7 = uVar1 + 1;
            uVar8 = 0x22;
            goto LAB_07108964;
          }
          goto LAB_071089b4;
        }
      }
      if (*(char *)(unaff_x27 + 0x200) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x27 + 0x200) = 1;
      }
      uVar1 = *(uint *)(unaff_x29 + -0x18);
      lVar5 = (long)(int)uVar1;
      if ((int)*(uint *)(unaff_x29 + -0x20) <= (int)uVar1) {
        uVar4 = 0x2e;
        goto LAB_07108984;
      }
      if (uVar1 < *(uint *)(unaff_x29 + -0x20)) {
        lVar6 = *(long *)(unaff_x29 + -0x28);
        iVar7 = uVar1 + 1;
        uVar8 = 0x2e;
        goto LAB_07108964;
      }
      goto LAB_071089b4;
    }
    if (*(char *)(unaff_x27 + 0x200) == '\0') {
      FUN_03d2d2b0();
      *(undefined1 *)(unaff_x27 + 0x200) = 1;
    }
    param_1 = (long)*(int *)(unaff_x29 + -0x18);
    in_w9 = *(uint *)(unaff_x29 + -0x20);
    if (*(int *)(unaff_x29 + -0x18) < (int)in_w9) goto code_r0x07108868;
    FUN_06ff15f4(unaff_x29 + -0x30,unaff_w23,0);
  } while( true );
}


