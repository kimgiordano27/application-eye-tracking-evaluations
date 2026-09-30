/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 033ea094
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int unaff_w25;
  int iVar14;
  int iVar15;
  int unaff_w26;
  byte unaff_w27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
code_r0x033ea094:
  lVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
  *(int *)(lVar5 + 0x10) = unaff_w26;
  *(byte *)(lVar5 + 0x14) = unaff_w27 & 1;
  do {
    FUN_033ea8b4();
    iVar15 = unaff_w25;
LAB_033ea0bc:
    while( true ) {
      unaff_w25 = iVar15 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w25) goto LAB_033ea3e8;
      iStack000000000000000c = unaff_w25;
      uVar3 = FUN_03271744();
      if (uVar3 < 0x2b) break;
      if (uVar3 == 0x2c) {
        if ((unaff_x28 & 1) != 0) {
          iVar15 = *(int *)(unaff_x20 + 0x10);
          if (unaff_w25 < iVar15) goto LAB_033ea370;
          goto LAB_033ea3a4;
        }
        if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
        iVar15 = unaff_w25;
        if ((unaff_x23 & 1) != 0) {
          lVar5 = FUN_0327d024();
          if ((lVar5 == 0) || (uVar7 = FUN_0327d400(lVar5,0), unaff_x21 == 0)) goto LAB_033ea410;
          *unaff_x29 = uVar7;
          thunk_FUN_01e10808();
          iVar15 = *(int *)(unaff_x20 + 0x10);
        }
      }
      else {
        if (uVar3 != 0x5b) {
          if (uVar3 != 0x5d) goto LAB_033ea47c;
          if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          puVar8 = StringLiteral_9285;
          goto FUN_033ea708;
        }
        if (unaff_x21 == 0) goto LAB_033ea410;
        if (*(char *)(unaff_x21 + 0x38) != '\0') {
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          puVar8 = StringLiteral_9293;
          goto FUN_033ea708;
        }
        iStack000000000000000c = iVar15 + 2;
        if (*(int *)(unaff_x20 + 0x10) <= iStack000000000000000c) {
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          puVar8 = StringLiteral_9294;
          goto FUN_033ea708;
        }
        FUN_033ea9b4();
        iVar15 = iStack000000000000000c;
        sVar4 = FUN_03271744();
        if (((sVar4 == 0x2c) || (sVar4 = FUN_03271744(), sVar4 == 0x2a)) ||
           (sVar4 = FUN_03271744(), sVar4 == 0x5d)) {
          iVar11 = *(int *)(unaff_x20 + 0x10);
          if (iVar11 <= iVar15) {
            unaff_w27 = 0;
            unaff_w26 = 1;
            unaff_w25 = iVar15;
            goto LAB_033ea060;
          }
          unaff_w27 = 0;
          unaff_w26 = 1;
          goto LAB_033e9f3c;
        }
        lVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
        FUN_0319873c(lVar5,*(undefined8 *)StringLiteral_9282);
        if (*(long *)(unaff_x21 + 0x30) != 0) {
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          puVar8 = StringLiteral_9301;
          goto FUN_033ea708;
        }
        while (iVar11 = *(int *)(unaff_x20 + 0x10), iVar15 < iVar11) {
          FUN_033ea9b4();
          iVar15 = iStack000000000000000c;
          sVar4 = FUN_03271744();
          if (sVar4 == 0x5b) {
            iStack000000000000000c = iVar15 + 1;
            uVar7 = FUN_033e9bbc();
            if (lVar5 == 0) goto LAB_033ea410;
            lVar12 = *(long *)(lVar5 + 0x10);
            lVar13 = *(long *)StringLiteral_9281;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_033ea410;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
              thunk_FUN_01e10808();
            }
            else {
              FUN_03198f70(lVar5,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            iVar15 = iStack000000000000000c;
            FUN_033eaa64(iStack000000000000000c);
            sVar4 = FUN_03271744();
            if (sVar4 != 0x5d) {
              FUN_01a94b18();
              uStack0000000000000008 = FUN_03271744();
              thunk_FUN_01dd295c(StringLiteral_1167);
              FUN_01a94a5c();
              uVar7 = FUN_032835a0(&stack0x00000008,0);
              puVar8 = StringLiteral_9297;
              goto LAB_033ea64c;
            }
            iStack000000000000000c = iVar15 + 1;
          }
          else {
            uVar7 = FUN_033e9bbc();
            if (lVar5 == 0) goto LAB_033ea410;
            lVar12 = *(long *)(lVar5 + 0x10);
            lVar13 = *(long *)StringLiteral_9281;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_033ea410;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
              thunk_FUN_01e10808();
            }
            else {
              FUN_03198f70(lVar5,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar15 = iStack000000000000000c;
          FUN_033eaa64(iStack000000000000000c);
          sVar4 = FUN_03271744();
          if (sVar4 == 0x5d) {
            iVar11 = *(int *)(unaff_x20 + 0x10);
            break;
          }
          sVar4 = FUN_03271744();
          if (sVar4 != 0x2c) {
            FUN_01a94b18();
            uStack0000000000000008 = FUN_03271744();
            thunk_FUN_01dd295c(StringLiteral_1167);
            FUN_01a94a5c();
            uVar7 = FUN_032835a0(&stack0x00000008,0);
            puVar8 = StringLiteral_9295;
            goto LAB_033ea64c;
          }
          iStack000000000000000c = iVar15 + 1;
          iVar15 = iStack000000000000000c;
        }
        if ((iVar11 <= iVar15) || (sVar4 = FUN_03271744(), sVar4 != 0x5d)) {
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          puVar8 = StringLiteral_9299;
          goto FUN_033ea708;
        }
        *in_stack_00000000 = lVar5;
        thunk_FUN_01e10808(in_stack_00000000,lVar5);
      }
    }
    if (uVar3 == 0x26) {
      if (unaff_x21 == 0) goto LAB_033ea410;
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar7 = thunk_FUN_01de27b8();
        puVar8 = StringLiteral_9292;
        goto FUN_033ea708;
      }
      *(undefined1 *)(unaff_x21 + 0x38) = 1;
      iVar15 = unaff_w25;
      goto LAB_033ea0bc;
    }
    if (uVar3 != 0x2a) {
LAB_033ea47c:
      FUN_01a94b18();
      uStack0000000000000008 = FUN_03271744();
      thunk_FUN_01dd295c(StringLiteral_1167);
      FUN_01a94a5c();
      uVar7 = FUN_032835a0(&stack0x00000008,0);
      uVar9 = FUN_03390e50((long)&stack0x00000008 + 4,0);
      uVar10 = thunk_FUN_01dd295c(StringLiteral_9288);
      uVar6 = thunk_FUN_01dd295c(StringLiteral_9289);
      uVar7 = FUN_03279ae0(uVar10,uVar7,uVar6,uVar9,0);
      goto LAB_033ea65c;
    }
    if (unaff_x21 == 0) goto LAB_033ea410;
    if (*(char *)(unaff_x21 + 0x38) != '\0') {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar7 = thunk_FUN_01de27b8();
      puVar8 = StringLiteral_9291;
      goto FUN_033ea708;
    }
    if (iVar15 + 2 < *(int *)(unaff_x20 + 0x10)) {
      iVar15 = 0;
      do {
        iVar14 = iVar15;
        iVar11 = unaff_w25 + iVar14 + 1;
        sVar4 = FUN_03271744();
        if (sVar4 != 0x2a) {
          iVar15 = iVar14 + 1;
          unaff_w25 = unaff_w25 + iVar14;
          goto LAB_033ea040;
        }
        iVar1 = unaff_w25 + iVar14 + 1;
        iVar15 = iVar14 + 1;
        iStack000000000000000c = iVar11;
      } while (iVar1 + 1 < *(int *)(unaff_x20 + 0x10));
      iVar15 = iVar14 + 2;
      unaff_w25 = iVar1;
    }
    else {
      iVar15 = 1;
    }
LAB_033ea040:
    lVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
    *(int *)(lVar5 + 0x10) = iVar15;
  } while( true );
LAB_033e9f3c:
  do {
    sVar4 = FUN_03271744();
    if (sVar4 == 0x5d) {
      iVar11 = *(int *)(unaff_x20 + 0x10);
      unaff_w25 = iVar15;
      break;
    }
    sVar4 = FUN_03271744();
    if (sVar4 == 0x2a) {
      if (unaff_w27 != 0) {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar7 = thunk_FUN_01de27b8();
        puVar8 = StringLiteral_9286;
        goto FUN_033ea708;
      }
      unaff_w27 = 1;
    }
    else {
      sVar4 = FUN_03271744();
      if (sVar4 != 0x2c) {
        FUN_01a94b18();
        uStack0000000000000008 = FUN_03271744();
        thunk_FUN_01dd295c(StringLiteral_1167);
        FUN_01a94a5c();
        uVar7 = FUN_032835a0(&stack0x00000008,0);
        puVar8 = StringLiteral_9287;
LAB_033ea64c:
        uVar9 = thunk_FUN_01dd295c(puVar8);
        uVar7 = FUN_0326dc80(uVar9,uVar7,0);
LAB_033ea65c:
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar9 = thunk_FUN_01de27b8();
        uVar10 = thunk_FUN_01dd295c(StringLiteral_5922);
        FUN_03287130(uVar9,uVar7,uVar10,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar9,uVar7);
      }
      unaff_w26 = unaff_w26 + 1;
    }
    iStack000000000000000c = iVar15 + 1;
    FUN_033ea9b4();
    iVar11 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = iStack000000000000000c;
    iVar15 = iStack000000000000000c;
  } while (iStack000000000000000c < iVar11);
LAB_033ea060:
  if ((iVar11 <= unaff_w25) || (sVar4 = FUN_03271744(), sVar4 != 0x5d)) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar7 = thunk_FUN_01de27b8();
    puVar8 = StringLiteral_9290;
    goto FUN_033ea708;
  }
  if (1 < unaff_w26 && ((unaff_w27 ^ 0xff) & 1) == 0) goto LAB_033ea5e8;
  goto code_r0x033ea094;
LAB_033ea5e8:
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar7 = thunk_FUN_01de27b8();
  puVar8 = StringLiteral_9296;
FUN_033ea708:
  uVar9 = thunk_FUN_01dd295c(puVar8);
  uVar10 = thunk_FUN_01dd295c(StringLiteral_5922);
  FUN_03287130(uVar7,uVar9,uVar10,0);
  goto LAB_033ea730;
  while( true ) {
    iVar15 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = unaff_w25 + 1;
    if (iVar15 <= unaff_w25) break;
LAB_033ea370:
    sVar4 = FUN_03271744();
    if (sVar4 == 0x5d) {
      iVar15 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_033ea3a4:
  if (unaff_w25 < iVar15) {
    lVar5 = System_DateTime__GetDatePart();
    if ((lVar5 != 0) && (uVar7 = FUN_0327d400(lVar5,0), unaff_x21 != 0)) {
      *unaff_x29 = uVar7;
      thunk_FUN_01e10808();
LAB_033ea3e8:
      *unaff_x19 = unaff_w25;
      return;
    }
LAB_033ea410:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar7 = thunk_FUN_01de27b8();
  uVar9 = thunk_FUN_01dd295c(StringLiteral_9302);
  FUN_0328dba4(uVar7,uVar9,0);
LAB_033ea730:
  uVar9 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar7,uVar9);
}


