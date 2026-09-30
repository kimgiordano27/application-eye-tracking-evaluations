/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 033ea2f0
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


void OVRPlugin_Ktx__DestroyKtxTexture(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int unaff_w25;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    thunk_FUN_01e10808(param_1,param_2);
    iVar15 = unaff_w25;
LAB_033ea0bc:
    while( true ) {
      unaff_w25 = iVar15 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w25) goto LAB_033ea3e8;
      iStack000000000000000c = unaff_w25;
      uVar4 = FUN_03271744();
      if (0x2a < uVar4) break;
      if (uVar4 == 0x26) {
        if (unaff_x21 == 0) goto LAB_033ea410;
        if (*(char *)(unaff_x21 + 0x38) != '\0') {
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar8 = thunk_FUN_01de27b8();
          puVar9 = StringLiteral_9292;
          goto FUN_033ea708;
        }
        *(undefined1 *)(unaff_x21 + 0x38) = 1;
        iVar15 = unaff_w25;
      }
      else {
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
            iVar13 = iVar15;
            iVar14 = unaff_w25 + iVar13 + 1;
            sVar5 = FUN_03271744();
            if (sVar5 != 0x2a) {
              iVar15 = iVar13 + 1;
              unaff_w25 = unaff_w25 + iVar13;
              goto LAB_033ea040;
            }
            iVar1 = unaff_w25 + iVar13 + 1;
            iVar15 = iVar13 + 1;
            iStack000000000000000c = iVar14;
          } while (iVar1 + 1 < *(int *)(unaff_x20 + 0x10));
          iVar15 = iVar13 + 2;
          unaff_w25 = iVar1;
        }
        else {
          iVar15 = 1;
        }
LAB_033ea040:
        lVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
        *(int *)(lVar6 + 0x10) = iVar15;
LAB_033ea0b4:
        FUN_033ea8b4();
        iVar15 = unaff_w25;
      }
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
    if (((sVar5 == 0x2c) || (sVar5 = FUN_03271744(), sVar5 == 0x2a)) ||
       (sVar5 = FUN_03271744(), sVar5 == 0x5d)) {
      iVar15 = *(int *)(unaff_x20 + 0x10);
      if (unaff_w25 < iVar15) {
        bVar3 = false;
        iVar14 = 1;
        do {
          sVar5 = FUN_03271744();
          if (sVar5 == 0x5d) {
            iVar15 = *(int *)(unaff_x20 + 0x10);
            break;
          }
          sVar5 = FUN_03271744();
          if (sVar5 == 0x2a) {
            if (bVar3) {
              thunk_FUN_01dd295c(StringLiteral_1149);
              uVar8 = thunk_FUN_01de27b8();
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
              uVar8 = FUN_032835a0(&stack0x00000008,0);
              puVar9 = StringLiteral_9287;
              goto LAB_033ea64c;
            }
            iVar14 = iVar14 + 1;
          }
          iStack000000000000000c = unaff_w25 + 1;
          FUN_033ea9b4();
          iVar15 = *(int *)(unaff_x20 + 0x10);
          unaff_w25 = iStack000000000000000c;
        } while (iStack000000000000000c < iVar15);
      }
      else {
        bVar3 = false;
        iVar14 = 1;
      }
      if ((unaff_w25 < iVar15) && (sVar5 = FUN_03271744(), sVar5 == 0x5d)) {
        if (iVar14 < 2 || bVar3 != true) {
          lVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
          *(int *)(lVar6 + 0x10) = iVar14;
          *(bool *)(lVar6 + 0x14) = bVar3;
          goto LAB_033ea0b4;
        }
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9296;
      }
      else {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar8 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9290;
      }
      goto FUN_033ea708;
    }
    param_2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
    FUN_0319873c(param_2,*(undefined8 *)StringLiteral_9282);
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
        if (param_2 == 0) goto LAB_033ea410;
        lVar6 = *(long *)(param_2 + 0x10);
        lVar12 = *(long *)StringLiteral_9281;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_033ea410;
        uVar2 = *(uint *)(param_2 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70(param_2,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
        iStack000000000000000c = iVar15 + 1;
      }
      else {
        uVar8 = FUN_033e9bbc();
        if (param_2 == 0) goto LAB_033ea410;
        lVar6 = *(long *)(param_2 + 0x10);
        lVar12 = *(long *)StringLiteral_9281;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_033ea410;
        uVar2 = *(uint *)(param_2 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70(param_2,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
    if ((iVar15 <= unaff_w25) || (sVar5 = FUN_03271744(), sVar5 != 0x5d)) break;
    *in_stack_00000000 = param_2;
    param_1 = in_stack_00000000;
  } while( true );
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar8 = thunk_FUN_01de27b8();
  puVar9 = StringLiteral_9299;
FUN_033ea708:
  uVar10 = thunk_FUN_01dd295c(puVar9);
  uVar11 = thunk_FUN_01dd295c(StringLiteral_5922);
  FUN_03287130(uVar8,uVar10,uVar11,0);
  goto LAB_033ea730;
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


