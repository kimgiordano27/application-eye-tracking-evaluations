/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 07108694
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined2 uVar13;
  long unaff_x19;
  int iVar14;
  long unaff_x20;
  long unaff_x24;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xa88));
  FUN_03d2d2b0(PTR_DAT_091a3ee0);
  *(undefined1 *)(unaff_x20 + 0xbbd) = 1;
  puVar4 = PTR_DAT_091a3ee0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  uVar7 = FUN_06fd246c();
  if ((((uVar7 & 1) == 0) && (uVar7 = thunk_FUN_06fd18b4(), (uVar7 & 1) == 0)) &&
     (uVar7 = thunk_FUN_06fd18b4(), (uVar7 & 1) == 0)) {
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    FUN_06ff1388(unaff_x29 + -0x30,&uStack_40,0x20,0);
    puVar4 = PTR_DAT_091fa408;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    iVar1 = *(int *)(unaff_x19 + 0x10);
    if (0 < iVar1) {
      bVar3 = false;
      iVar14 = 0;
      do {
        uVar6 = FUN_06fcd2c8();
        if ((uVar6 & 0xffff) == 0x3f) {
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(puVar4);
            DAT_09842200 = '\x01';
          }
          uVar6 = *(uint *)(unaff_x29 + -0x18);
          lVar10 = (long)(int)uVar6;
          if ((int)uVar6 < (int)*(uint *)(unaff_x29 + -0x20)) {
            if (*(uint *)(unaff_x29 + -0x20) <= uVar6) goto LAB_071089b4;
            lVar11 = *(long *)(unaff_x29 + -0x28);
            iVar12 = uVar6 + 1;
            uVar13 = 0x3e;
LAB_07108964:
            *(undefined2 *)(lVar11 + lVar10 * 2) = uVar13;
            *(int *)(unaff_x29 + -0x18) = iVar12;
          }
          else {
            uVar9 = 0x3e;
LAB_07108984:
            FUN_06ff15f4(unaff_x29 + -0x30,uVar9,0);
          }
LAB_0710898c:
          bVar3 = true;
        }
        else {
          if ((uVar6 & 0xffff) == 0x2e) {
            if ((iVar14 == 0) || (iVar14 - iVar1 != -1)) {
LAB_07108884:
              if (iVar14 < iVar1 + -1) {
                sVar5 = FUN_06fcd2c8();
                if ((sVar5 == 0x3f) || (sVar5 = FUN_06fcd2c8(), sVar5 == 0x2a)) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(puVar4);
                    DAT_09842200 = '\x01';
                  }
                  uVar6 = *(uint *)(unaff_x29 + -0x18);
                  lVar10 = (long)(int)uVar6;
                  if ((int)*(uint *)(unaff_x29 + -0x20) <= (int)uVar6) {
                    uVar9 = 0x22;
                    goto LAB_07108984;
                  }
                  if (*(uint *)(unaff_x29 + -0x20) <= uVar6) goto LAB_071089b4;
                  lVar11 = *(long *)(unaff_x29 + -0x28);
                  iVar12 = uVar6 + 1;
                  uVar13 = 0x22;
                  goto LAB_07108964;
                }
              }
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(puVar4);
                DAT_09842200 = '\x01';
              }
              uVar6 = *(uint *)(unaff_x29 + -0x18);
              lVar10 = (long)(int)uVar6;
              if ((int)*(uint *)(unaff_x29 + -0x20) <= (int)uVar6) {
                uVar9 = 0x2e;
                goto LAB_07108984;
              }
              if (*(uint *)(unaff_x29 + -0x20) <= uVar6) {
LAB_071089b4:
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              lVar11 = *(long *)(unaff_x29 + -0x28);
              iVar12 = uVar6 + 1;
              uVar13 = 0x2e;
              goto LAB_07108964;
            }
            sVar5 = FUN_06fcd2c8();
            if (sVar5 != 0x2a) goto LAB_07108884;
            puVar8 = (undefined2 *)
                     FUN_06ff13a0(unaff_x29 + -0x30,*(int *)(unaff_x29 + -0x18) + -1,0);
            *puVar8 = 0x3c;
            goto LAB_0710898c;
          }
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(puVar4);
            DAT_09842200 = '\x01';
          }
          uVar2 = *(uint *)(unaff_x29 + -0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x29 + -0x20)) {
            if (*(uint *)(unaff_x29 + -0x20) <= uVar2) goto LAB_071089b4;
            *(short *)(*(long *)(unaff_x29 + -0x28) + (long)(int)uVar2 * 2) = (short)uVar6;
            *(uint *)(unaff_x29 + -0x18) = uVar2 + 1;
          }
          else {
            FUN_06ff15f4(unaff_x29 + -0x30,uVar6,0);
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar1);
      if (bVar3) {
        unaff_x19 = FUN_06ff13c4(unaff_x29 + -0x30,0);
      }
    }
  }
  else {
    unaff_x19 = *(long *)puVar4;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


