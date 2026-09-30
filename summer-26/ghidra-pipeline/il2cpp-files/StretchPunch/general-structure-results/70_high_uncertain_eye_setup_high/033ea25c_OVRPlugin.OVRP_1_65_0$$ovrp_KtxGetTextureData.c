/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 033ea25c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar14;
  ulong unaff_x22;
  ulong unaff_x23;
  int iVar15;
  int iVar16;
  long unaff_x27;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar9;
  
code_r0x033ea25c:
  FUN_03198f70(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  param_2 = unaff_x27;
LAB_033ea26c:
  do {
    iVar16 = iStack000000000000000c;
    FUN_033eaa64(iStack000000000000000c);
    sVar5 = FUN_03271744();
    if (sVar5 == 0x5d) {
      iVar14 = *(int *)(unaff_x20 + 0x10);
      goto LAB_033ea2c0;
    }
    sVar5 = FUN_03271744();
    if (sVar5 != 0x2c) {
      FUN_01a94b18();
      uStack0000000000000008 = FUN_03271744();
      thunk_FUN_01dd295c(StringLiteral_1167);
      FUN_01a94a5c();
      uVar6 = FUN_032835a0(&stack0x00000008,0);
      puVar9 = StringLiteral_9295;
LAB_033ea64c:
      uVar8 = thunk_FUN_01dd295c(puVar9);
      uVar6 = FUN_0326dc80(uVar8,uVar6,0);
LAB_033ea65c:
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar8 = thunk_FUN_01de27b8();
      uVar10 = thunk_FUN_01dd295c(StringLiteral_5922);
      FUN_03287130(uVar8,uVar6,uVar10,0);
      uVar6 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,uVar6);
    }
    iStack000000000000000c = iVar16 + 1;
    iVar16 = iStack000000000000000c;
LAB_033ea100:
    iVar14 = *(int *)(unaff_x20 + 0x10);
    if (iVar14 <= iVar16) {
LAB_033ea2c0:
      if ((iVar16 < iVar14) && (sVar5 = FUN_03271744(), sVar5 == 0x5d)) break;
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar6 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9299;
      goto FUN_033ea708;
    }
    FUN_033ea9b4();
    iVar16 = iStack000000000000000c;
    sVar5 = FUN_03271744();
    if (sVar5 == 0x5b) {
      iStack000000000000000c = iVar16 + 1;
      uVar6 = FUN_033e9bbc();
      if (param_2 == 0) goto LAB_033ea410;
      lVar12 = *(long *)(param_2 + 0x10);
      lVar13 = *(long *)StringLiteral_9281;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_033ea410;
      uVar2 = *(uint *)(param_2 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
        thunk_FUN_01e10808();
      }
      else {
        FUN_03198f70(param_2,uVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      iVar16 = iStack000000000000000c;
      FUN_033eaa64(iStack000000000000000c);
      sVar5 = FUN_03271744();
      if (sVar5 != 0x5d) {
        FUN_01a94b18();
        uStack0000000000000008 = FUN_03271744();
        thunk_FUN_01dd295c(StringLiteral_1167);
        FUN_01a94a5c();
        uVar6 = FUN_032835a0(&stack0x00000008,0);
        puVar9 = StringLiteral_9297;
        goto LAB_033ea64c;
      }
      iStack000000000000000c = iVar16 + 1;
      goto LAB_033ea26c;
    }
    param_3 = FUN_033e9bbc();
    if (param_2 == 0) goto LAB_033ea410;
    lVar12 = *(long *)(param_2 + 0x10);
    lVar13 = *(long *)StringLiteral_9281;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_033ea410;
    uVar2 = *(uint *)(param_2 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_033ea254;
    *(uint *)(param_2 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = param_3;
    thunk_FUN_01e10808();
  } while( true );
  *in_stack_00000000 = param_2;
  thunk_FUN_01e10808(in_stack_00000000,param_2);
LAB_033ea0bc:
  while( true ) {
    iVar14 = iVar16 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= iVar14) goto LAB_033ea3e8;
    iStack000000000000000c = iVar14;
    uVar4 = FUN_03271744();
    if (0x2a < uVar4) break;
    if (uVar4 == 0x26) {
      if (unaff_x21 == 0) goto LAB_033ea410;
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar6 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9292;
        goto FUN_033ea708;
      }
      *(undefined1 *)(unaff_x21 + 0x38) = 1;
      iVar16 = iVar14;
    }
    else {
      if (uVar4 != 0x2a) {
LAB_033ea47c:
        FUN_01a94b18();
        uStack0000000000000008 = FUN_03271744();
        thunk_FUN_01dd295c(StringLiteral_1167);
        FUN_01a94a5c();
        uVar6 = FUN_032835a0(&stack0x00000008,0);
        uVar8 = FUN_03390e50((long)&stack0x00000008 + 4,0);
        uVar10 = thunk_FUN_01dd295c(StringLiteral_9288);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_9289);
        uVar6 = FUN_03279ae0(uVar10,uVar6,uVar7,uVar8,0);
        goto LAB_033ea65c;
      }
      if (unaff_x21 == 0) goto LAB_033ea410;
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar6 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9291;
        goto FUN_033ea708;
      }
      if (iVar16 + 2 < *(int *)(unaff_x20 + 0x10)) {
        iVar16 = 0;
        do {
          iVar15 = iVar16;
          iVar11 = iVar14 + iVar15 + 1;
          sVar5 = FUN_03271744();
          if (sVar5 != 0x2a) {
            iVar16 = iVar15 + 1;
            iVar14 = iVar14 + iVar15;
            goto LAB_033ea040;
          }
          iVar1 = iVar14 + iVar15 + 1;
          iVar16 = iVar15 + 1;
          iStack000000000000000c = iVar11;
        } while (iVar1 + 1 < *(int *)(unaff_x20 + 0x10));
        iVar16 = iVar15 + 2;
        iVar14 = iVar1;
      }
      else {
        iVar16 = 1;
      }
LAB_033ea040:
      lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
      *(int *)(lVar12 + 0x10) = iVar16;
LAB_033ea0b4:
      FUN_033ea8b4();
      iVar16 = iVar14;
    }
  }
  if (uVar4 == 0x2c) {
    if ((unaff_x28 & 1) != 0) {
      iVar16 = *(int *)(unaff_x20 + 0x10);
      if (iVar14 < iVar16) goto LAB_033ea370;
      goto LAB_033ea3a4;
    }
    if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
    iVar16 = iVar14;
    if ((unaff_x23 & 1) != 0) {
      lVar12 = FUN_0327d024();
      if ((lVar12 == 0) || (uVar6 = FUN_0327d400(lVar12,0), unaff_x21 == 0)) goto LAB_033ea410;
      *unaff_x29 = uVar6;
      thunk_FUN_01e10808();
      iVar16 = *(int *)(unaff_x20 + 0x10);
    }
    goto LAB_033ea0bc;
  }
  if (uVar4 != 0x5b) {
    if (uVar4 != 0x5d) goto LAB_033ea47c;
    if ((unaff_x22 & 1) != 0) goto LAB_033ea3e8;
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9285;
    goto FUN_033ea708;
  }
  if (unaff_x21 == 0) goto LAB_033ea410;
  if (*(char *)(unaff_x21 + 0x38) != '\0') {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9293;
    goto FUN_033ea708;
  }
  iStack000000000000000c = iVar16 + 2;
  if (*(int *)(unaff_x20 + 0x10) <= iStack000000000000000c) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9294;
    goto FUN_033ea708;
  }
  FUN_033ea9b4();
  iVar16 = iStack000000000000000c;
  sVar5 = FUN_03271744();
  if (((sVar5 == 0x2c) || (sVar5 = FUN_03271744(), sVar5 == 0x2a)) ||
     (sVar5 = FUN_03271744(), sVar5 == 0x5d)) {
    iVar11 = *(int *)(unaff_x20 + 0x10);
    if (iVar16 < iVar11) {
      bVar3 = false;
      iVar15 = 1;
      do {
        sVar5 = FUN_03271744();
        if (sVar5 == 0x5d) {
          iVar11 = *(int *)(unaff_x20 + 0x10);
          iVar14 = iVar16;
          break;
        }
        sVar5 = FUN_03271744();
        if (sVar5 == 0x2a) {
          if (bVar3) {
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar6 = thunk_FUN_01de27b8();
            puVar9 = StringLiteral_9286;
            goto FUN_033ea708;
          }
          bVar3 = true;
        }
        else {
          sVar5 = FUN_03271744();
          if (sVar5 != 0x2c) {
            FUN_01a94b18();
            uStack0000000000000008 = FUN_03271744();
            thunk_FUN_01dd295c(StringLiteral_1167);
            FUN_01a94a5c();
            uVar6 = FUN_032835a0(&stack0x00000008,0);
            puVar9 = StringLiteral_9287;
            goto LAB_033ea64c;
          }
          iVar15 = iVar15 + 1;
        }
        iStack000000000000000c = iVar16 + 1;
        FUN_033ea9b4();
        iVar11 = *(int *)(unaff_x20 + 0x10);
        iVar16 = iStack000000000000000c;
        iVar14 = iStack000000000000000c;
      } while (iStack000000000000000c < iVar11);
    }
    else {
      bVar3 = false;
      iVar15 = 1;
      iVar14 = iVar16;
    }
    if ((iVar14 < iVar11) && (sVar5 = FUN_03271744(), sVar5 == 0x5d)) {
      if (iVar15 < 2 || bVar3 != true) {
        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
        *(int *)(lVar12 + 0x10) = iVar15;
        *(bool *)(lVar12 + 0x14) = bVar3;
        goto LAB_033ea0b4;
      }
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar6 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9296;
    }
    else {
      thunk_FUN_01dd295c(StringLiteral_1149);
      uVar6 = thunk_FUN_01de27b8();
      puVar9 = StringLiteral_9290;
    }
    goto FUN_033ea708;
  }
  param_2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
  FUN_0319873c(param_2,*(undefined8 *)StringLiteral_9282);
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9301;
FUN_033ea708:
    uVar8 = thunk_FUN_01dd295c(puVar9);
    uVar10 = thunk_FUN_01dd295c(StringLiteral_5922);
    FUN_03287130(uVar6,uVar8,uVar10,0);
    goto LAB_033ea730;
  }
  goto LAB_033ea100;
LAB_033ea254:
  param_1 = *(long *)(lVar13 + 0x20);
  unaff_x27 = param_2;
  goto code_r0x033ea25c;
  while( true ) {
    iVar16 = *(int *)(unaff_x20 + 0x10);
    iVar14 = iVar14 + 1;
    if (iVar16 <= iVar14) break;
LAB_033ea370:
    sVar5 = FUN_03271744();
    if (sVar5 == 0x5d) {
      iVar16 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_033ea3a4:
  if (iVar16 <= iVar14) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9302);
    FUN_0328dba4(uVar6,uVar8,0);
LAB_033ea730:
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar6,uVar8);
  }
  lVar12 = System_DateTime__GetDatePart();
  if ((lVar12 != 0) && (uVar6 = FUN_0327d400(lVar12,0), unaff_x21 != 0)) {
    *unaff_x29 = uVar6;
    thunk_FUN_01e10808();
LAB_033ea3e8:
    *unaff_x19 = iVar14;
    return;
  }
LAB_033ea410:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


