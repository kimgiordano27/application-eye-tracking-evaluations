/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 033e9f5c
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


void OVRPlugin_Ktx__GetKtxTextureSize(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int unaff_w25;
  int iVar14;
  int unaff_w26;
  int iVar15;
  byte unaff_w27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    sVar5 = FUN_03271744();
    if (sVar5 == 0x2a) {
      if ((unaff_w27 & 1) != 0) {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9286;
FUN_033ea708:
        uVar10 = thunk_FUN_01dd295c(puVar9);
        uVar11 = thunk_FUN_01dd295c(StringLiteral_5922);
        FUN_03287130(uVar8,uVar10,uVar11,0);
        goto LAB_033ea730;
      }
      unaff_w27 = 1;
    }
    else {
      sVar5 = FUN_03271744();
      if (sVar5 != 0x2c) {
        FUN_01a94b18();
        uStack0000000000000008 = FUN_03271744();
        thunk_FUN_01dd295c(StringLiteral_1167);
        FUN_01a94a5c();
        uVar8 = FUN_032835a0(&stack0x00000008,0);
        puVar9 = StringLiteral_9287;
LAB_033ea64c:
        uVar10 = thunk_FUN_01dd295c(puVar9);
        uVar8 = FUN_0326dc80(uVar10,uVar8,0);
LAB_033ea65c:
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar10 = thunk_FUN_01de27b8();
        uVar11 = thunk_FUN_01dd295c(StringLiteral_5922);
        FUN_03287130(uVar10,uVar8,uVar11,0);
        uVar8 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar10,uVar8);
      }
      unaff_w26 = unaff_w26 + 1;
    }
    iStack000000000000000c = unaff_w25 + 1;
    FUN_033ea9b4();
    iVar15 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = iStack000000000000000c;
    if (iStack000000000000000c < iVar15) goto LAB_033e9f3c;
LAB_033ea060:
    if ((iVar15 <= unaff_w25) || (sVar5 = FUN_03271744(), sVar5 != 0x5d)) {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9290;
      goto FUN_033ea708;
    }
    if (1 < unaff_w26 && ((unaff_w27 ^ 0xff) & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9296;
      goto FUN_033ea708;
    }
    lVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
    *(int *)(lVar6 + 0x10) = unaff_w26;
    *(byte *)(lVar6 + 0x14) = unaff_w27 & 1;
LAB_033ea0b4:
    FUN_033ea8b4();
    iVar15 = unaff_w25;
LAB_033ea0bc:
    unaff_w25 = iVar15 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w25) goto LAB_033ea3e8;
    iStack000000000000000c = unaff_w25;
    uVar4 = FUN_03271744();
    if (uVar4 < 0x2b) {
      if (uVar4 != 0x26) break;
      if (unaff_x21 == 0) goto LAB_033ea410;
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9292;
        goto FUN_033ea708;
      }
      *(undefined1 *)(unaff_x21 + 0x38) = 1;
      iVar15 = unaff_w25;
      goto LAB_033ea0bc;
    }
    if (uVar4 == 0x2c) {
      if ((unaff_x28 & 1) != 0) {
        iVar15 = *(int *)(unaff_x20 + 0x10);
        if (unaff_w25 < iVar15) goto LAB_033ea370;
        goto LAB_033ea3a4;
      }
      if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
      iVar15 = unaff_w25;
      if ((unaff_x23 & 1) != 0) {
        lVar6 = FUN_0327d024();
        if ((lVar6 == 0) || (uVar8 = FUN_0327d400(lVar6,0), unaff_x21 == 0)) goto LAB_033ea410;
        *unaff_x29 = uVar8;
        thunk_FUN_01e10808();
        iVar15 = *(int *)(unaff_x20 + 0x10);
      }
      goto LAB_033ea0bc;
    }
    if (uVar4 != 0x5b) {
      if (uVar4 != 0x5d) goto LAB_033ea47c;
      if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9285;
      goto FUN_033ea708;
    }
    if (unaff_x21 == 0) goto LAB_033ea410;
    if (*(char *)(unaff_x21 + 0x38) != '\0') {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9293;
      goto FUN_033ea708;
    }
    iStack000000000000000c = iVar15 + 2;
    if (*(int *)(unaff_x20 + 0x10) <= iStack000000000000000c) {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9294;
      goto FUN_033ea708;
    }
    FUN_033ea9b4();
    unaff_w25 = iStack000000000000000c;
    sVar5 = FUN_03271744();
    if (((sVar5 != 0x2c) && (sVar5 = FUN_03271744(), sVar5 != 0x2a)) &&
       (sVar5 = FUN_03271744(), sVar5 != 0x5d)) {
      lVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
      FUN_0319873c(lVar6,*(undefined8 *)StringLiteral_9282);
      if (*(long *)(unaff_x21 + 0x30) != 0) {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9301;
        goto FUN_033ea708;
      }
      while (iVar15 = *(int *)(unaff_x20 + 0x10), unaff_w25 < iVar15) {
        FUN_033ea9b4();
        iVar15 = iStack000000000000000c;
        sVar5 = FUN_03271744();
        if (sVar5 == 0x5b) {
          iStack000000000000000c = iVar15 + 1;
          uVar8 = FUN_033e9bbc();
          if (lVar6 == 0) goto LAB_033ea410;
          lVar12 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)StringLiteral_9281;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_033ea410;
          uVar3 = *(uint *)(lVar6 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
            thunk_FUN_01e10808();
          }
          else {
            FUN_03198f70(lVar6,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          iVar15 = iStack000000000000000c;
          FUN_033eaa64(iStack000000000000000c);
          sVar5 = FUN_03271744();
          if (sVar5 != 0x5d) {
            FUN_01a94b18();
            uStack0000000000000008 = FUN_03271744();
            thunk_FUN_01dd295c(StringLiteral_1167);
            FUN_01a94a5c();
            uVar8 = FUN_032835a0(&stack0x00000008,0);
            puVar9 = StringLiteral_9297;
            goto LAB_033ea64c;
          }
          iStack000000000000000c = iVar15 + 1;
        }
        else {
          uVar8 = FUN_033e9bbc();
          if (lVar6 == 0) goto LAB_033ea410;
          lVar12 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)StringLiteral_9281;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_033ea410;
          uVar3 = *(uint *)(lVar6 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
            thunk_FUN_01e10808();
          }
          else {
            FUN_03198f70(lVar6,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        unaff_w25 = iStack000000000000000c;
        FUN_033eaa64(iStack000000000000000c);
        sVar5 = FUN_03271744();
        if (sVar5 == 0x5d) {
          iVar15 = *(int *)(unaff_x20 + 0x10);
          break;
        }
        sVar5 = FUN_03271744();
        if (sVar5 != 0x2c) {
          FUN_01a94b18();
          uStack0000000000000008 = FUN_03271744();
          thunk_FUN_01dd295c(StringLiteral_1167);
          FUN_01a94a5c();
          uVar8 = FUN_032835a0(&stack0x00000008,0);
          puVar9 = StringLiteral_9295;
          goto LAB_033ea64c;
        }
        iStack000000000000000c = unaff_w25 + 1;
        unaff_w25 = iStack000000000000000c;
      }
      if ((iVar15 <= unaff_w25) || (sVar5 = FUN_03271744(), sVar5 != 0x5d)) {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9299;
        goto FUN_033ea708;
      }
      *in_stack_00000000 = lVar6;
      thunk_FUN_01e10808(in_stack_00000000,lVar6);
      iVar15 = unaff_w25;
      goto LAB_033ea0bc;
    }
    iVar15 = *(int *)(unaff_x20 + 0x10);
    if (iVar15 <= unaff_w25) {
      unaff_w27 = 0;
      unaff_w26 = 1;
      goto LAB_033ea060;
    }
    unaff_w27 = 0;
    unaff_w26 = 1;
LAB_033e9f3c:
    sVar5 = FUN_03271744();
    if (sVar5 == 0x5d) {
      iVar15 = *(int *)(unaff_x20 + 0x10);
      goto LAB_033ea060;
    }
  } while( true );
  if (uVar4 != 0x2a) {
LAB_033ea47c:
    FUN_01a94b18();
    uStack0000000000000008 = FUN_03271744();
    thunk_FUN_01dd295c(StringLiteral_1167);
    FUN_01a94a5c();
    uVar8 = FUN_032835a0(&stack0x00000008,0);
    uVar10 = FUN_03390e50((long)&stack0x00000008 + 4,0);
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9288);
    uVar7 = thunk_FUN_01dd295c(StringLiteral_9289);
    uVar8 = FUN_03279ae0(uVar11,uVar8,uVar7,uVar10,0);
    goto LAB_033ea65c;
  }
  if (unaff_x21 == 0) goto LAB_033ea410;
  if (*(char *)(unaff_x21 + 0x38) != '\0') {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar8 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9291;
    goto FUN_033ea708;
  }
  if (iVar15 + 2 < *(int *)(unaff_x20 + 0x10)) {
    iVar15 = 0;
    do {
      iVar14 = iVar15;
      iVar1 = unaff_w25 + iVar14 + 1;
      sVar5 = FUN_03271744();
      if (sVar5 != 0x2a) {
        iVar15 = iVar14 + 1;
        unaff_w25 = unaff_w25 + iVar14;
        goto LAB_033ea040;
      }
      iVar2 = unaff_w25 + iVar14 + 1;
      iVar15 = iVar14 + 1;
      iStack000000000000000c = iVar1;
    } while (iVar2 + 1 < *(int *)(unaff_x20 + 0x10));
    iVar15 = iVar14 + 2;
    unaff_w25 = iVar2;
  }
  else {
    iVar15 = 1;
  }
LAB_033ea040:
  lVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
  *(int *)(lVar6 + 0x10) = iVar15;
  goto LAB_033ea0b4;
  while( true ) {
    iVar15 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = unaff_w25 + 1;
    if (iVar15 <= unaff_w25) break;
LAB_033ea370:
    sVar5 = FUN_03271744();
    if (sVar5 == 0x5d) {
      iVar15 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_033ea3a4:
  if (unaff_w25 < iVar15) {
    lVar6 = System_DateTime__GetDatePart();
    if ((lVar6 != 0) && (uVar8 = FUN_0327d400(lVar6,0), unaff_x21 != 0)) {
      *unaff_x29 = uVar8;
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
  uVar8 = thunk_FUN_01de27b8();
  uVar10 = thunk_FUN_01dd295c(StringLiteral_9302);
  FUN_0328dba4(uVar8,uVar10,0);
LAB_033ea730:
  uVar10 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar8,uVar10);
}


