/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 033e9d9c
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


void OVRPlugin_Ktx__TranscodeKtxTexture(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 uStack0000000000000008;
  int iStack000000000000000c;
  
  System_DateTime__GetDatePart();
  if (unaff_x21 == 0) goto LAB_033ea410;
  FUN_033ea77c();
  if ((unaff_w26 != 0) && (unaff_w25 < *(int *)(unaff_x20 + 0x10))) {
    puVar1 = (undefined8 *)(unaff_x21 + 0x18);
    do {
      uVar5 = FUN_03271744();
      if (uVar5 < 0x2b) {
        if (uVar5 == 0x26) {
          if (unaff_x21 == 0) goto LAB_033ea410;
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar9 = thunk_FUN_01de27b8();
            puVar10 = StringLiteral_9292;
            goto FUN_033ea708;
          }
          *(undefined1 *)(unaff_x21 + 0x38) = 1;
        }
        else {
          if (uVar5 != 0x2a) {
LAB_033ea47c:
            FUN_01a94b18();
            uStack0000000000000008 = FUN_03271744();
            thunk_FUN_01dd295c(StringLiteral_1167);
            FUN_01a94a5c();
            uVar9 = FUN_032835a0(&stack0x00000008,0);
            uVar11 = FUN_03390e50((long)&stack0x00000008 + 4,0);
            uVar12 = thunk_FUN_01dd295c(StringLiteral_9288);
            uVar8 = thunk_FUN_01dd295c(StringLiteral_9289);
            uVar9 = FUN_03279ae0(uVar12,uVar9,uVar8,uVar11,0);
LAB_033ea65c:
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar11 = thunk_FUN_01de27b8();
            uVar12 = thunk_FUN_01dd295c(StringLiteral_5922);
            FUN_03287130(uVar11,uVar9,uVar12,0);
            uVar9 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar11,uVar9);
          }
          if (unaff_x21 == 0) goto LAB_033ea410;
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar9 = thunk_FUN_01de27b8();
            puVar10 = StringLiteral_9291;
            goto FUN_033ea708;
          }
          if (unaff_w25 + 1 < *(int *)(unaff_x20 + 0x10)) {
            iVar17 = 0;
            do {
              iVar15 = iVar17;
              iVar16 = unaff_w25 + iVar15 + 1;
              sVar6 = FUN_03271744();
              if (sVar6 != 0x2a) {
                iVar17 = iVar15 + 1;
                unaff_w25 = unaff_w25 + iVar15;
                goto LAB_033ea040;
              }
              iVar2 = unaff_w25 + iVar15 + 1;
              iVar17 = iVar15 + 1;
              iStack000000000000000c = iVar16;
            } while (iVar2 + 1 < *(int *)(unaff_x20 + 0x10));
            iVar17 = iVar15 + 2;
            unaff_w25 = iVar2;
          }
          else {
            iVar17 = 1;
          }
LAB_033ea040:
          lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
          *(int *)(lVar7 + 0x10) = iVar17;
LAB_033ea0b4:
          FUN_033ea8b4();
        }
      }
      else {
        if (uVar5 != 0x2c) {
          if (uVar5 == 0x5b) {
            if (unaff_x21 == 0) goto LAB_033ea410;
            if (*(char *)(unaff_x21 + 0x38) == '\0') {
              iStack000000000000000c = unaff_w25 + 1;
              if (iStack000000000000000c < *(int *)(unaff_x20 + 0x10)) {
                FUN_033ea9b4();
                unaff_w25 = iStack000000000000000c;
                sVar6 = FUN_03271744();
                if (((sVar6 == 0x2c) || (sVar6 = FUN_03271744(), sVar6 == 0x2a)) ||
                   (sVar6 = FUN_03271744(), sVar6 == 0x5d)) {
                  iVar17 = *(int *)(unaff_x20 + 0x10);
                  if (unaff_w25 < iVar17) {
                    bVar4 = false;
                    iVar16 = 1;
                    do {
                      sVar6 = FUN_03271744();
                      if (sVar6 == 0x5d) {
                        iVar17 = *(int *)(unaff_x20 + 0x10);
                        break;
                      }
                      sVar6 = FUN_03271744();
                      if (sVar6 == 0x2a) {
                        if (bVar4) {
                          thunk_FUN_01dd295c(StringLiteral_1149);
                          uVar9 = thunk_FUN_01de27b8();
                          puVar10 = StringLiteral_9286;
                          goto FUN_033ea708;
                        }
                        bVar4 = true;
                      }
                      else {
                        sVar6 = FUN_03271744();
                        if (sVar6 != 0x2c) {
                          FUN_01a94b18();
                          uStack0000000000000008 = FUN_03271744();
                          thunk_FUN_01dd295c(StringLiteral_1167);
                          FUN_01a94a5c();
                          uVar9 = FUN_032835a0(&stack0x00000008,0);
                          puVar10 = StringLiteral_9287;
LAB_033ea64c:
                          uVar11 = thunk_FUN_01dd295c(puVar10);
                          uVar9 = FUN_0326dc80(uVar11,uVar9,0);
                          goto LAB_033ea65c;
                        }
                        iVar16 = iVar16 + 1;
                      }
                      iStack000000000000000c = unaff_w25 + 1;
                      FUN_033ea9b4();
                      iVar17 = *(int *)(unaff_x20 + 0x10);
                      unaff_w25 = iStack000000000000000c;
                    } while (iStack000000000000000c < iVar17);
                  }
                  else {
                    bVar4 = false;
                    iVar16 = 1;
                  }
                  if ((unaff_w25 < iVar17) && (sVar6 = FUN_03271744(), sVar6 == 0x5d)) {
                    if (iVar16 < 2 || bVar4 != true) {
                      lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
                      *(int *)(lVar7 + 0x10) = iVar16;
                      *(bool *)(lVar7 + 0x14) = bVar4;
                      goto LAB_033ea0b4;
                    }
                    thunk_FUN_01dd295c(StringLiteral_1149);
                    uVar9 = thunk_FUN_01de27b8();
                    puVar10 = StringLiteral_9296;
                  }
                  else {
                    thunk_FUN_01dd295c(StringLiteral_1149);
                    uVar9 = thunk_FUN_01de27b8();
                    puVar10 = StringLiteral_9290;
                  }
                }
                else {
                  lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
                  FUN_0319873c(lVar7,*(undefined8 *)StringLiteral_9282);
                  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    while (iVar17 = *(int *)(unaff_x20 + 0x10), unaff_w25 < iVar17) {
                      FUN_033ea9b4();
                      iVar17 = iStack000000000000000c;
                      sVar6 = FUN_03271744();
                      if (sVar6 == 0x5b) {
                        iStack000000000000000c = iVar17 + 1;
                        uVar9 = FUN_033e9bbc();
                        if (lVar7 == 0) goto LAB_033ea410;
                        lVar13 = *(long *)(lVar7 + 0x10);
                        lVar14 = *(long *)StringLiteral_9281;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar13 == 0) goto LAB_033ea410;
                        uVar3 = *(uint *)(lVar7 + 0x18);
                        if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = uVar9;
                          thunk_FUN_01e10808();
                        }
                        else {
                          FUN_03198f70(lVar7,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        iVar17 = iStack000000000000000c;
                        FUN_033eaa64(iStack000000000000000c);
                        sVar6 = FUN_03271744();
                        if (sVar6 != 0x5d) {
                          FUN_01a94b18();
                          uStack0000000000000008 = FUN_03271744();
                          thunk_FUN_01dd295c(StringLiteral_1167);
                          FUN_01a94a5c();
                          uVar9 = FUN_032835a0(&stack0x00000008,0);
                          puVar10 = StringLiteral_9297;
                          goto LAB_033ea64c;
                        }
                        iStack000000000000000c = iVar17 + 1;
                      }
                      else {
                        uVar9 = FUN_033e9bbc();
                        if (lVar7 == 0) goto LAB_033ea410;
                        lVar13 = *(long *)(lVar7 + 0x10);
                        lVar14 = *(long *)StringLiteral_9281;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar13 == 0) goto LAB_033ea410;
                        uVar3 = *(uint *)(lVar7 + 0x18);
                        if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = uVar9;
                          thunk_FUN_01e10808();
                        }
                        else {
                          FUN_03198f70(lVar7,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      unaff_w25 = iStack000000000000000c;
                      FUN_033eaa64(iStack000000000000000c);
                      sVar6 = FUN_03271744();
                      if (sVar6 == 0x5d) {
                        iVar17 = *(int *)(unaff_x20 + 0x10);
                        break;
                      }
                      sVar6 = FUN_03271744();
                      if (sVar6 != 0x2c) {
                        FUN_01a94b18();
                        uStack0000000000000008 = FUN_03271744();
                        thunk_FUN_01dd295c(StringLiteral_1167);
                        FUN_01a94a5c();
                        uVar9 = FUN_032835a0(&stack0x00000008,0);
                        puVar10 = StringLiteral_9295;
                        goto LAB_033ea64c;
                      }
                      unaff_w25 = unaff_w25 + 1;
                      iStack000000000000000c = unaff_w25;
                    }
                    if ((unaff_w25 < iVar17) && (sVar6 = FUN_03271744(), sVar6 == 0x5d)) {
                      *(long *)(unaff_x21 + 0x28) = lVar7;
                      thunk_FUN_01e10808((long *)(unaff_x21 + 0x28),lVar7);
                      goto LAB_033ea0bc;
                    }
                    thunk_FUN_01dd295c(StringLiteral_1149);
                    uVar9 = thunk_FUN_01de27b8();
                    puVar10 = StringLiteral_9299;
                  }
                  else {
                    thunk_FUN_01dd295c(StringLiteral_1149);
                    uVar9 = thunk_FUN_01de27b8();
                    puVar10 = StringLiteral_9301;
                  }
                }
              }
              else {
                thunk_FUN_01dd295c(StringLiteral_1149);
                uVar9 = thunk_FUN_01de27b8();
                puVar10 = StringLiteral_9294;
              }
            }
            else {
              thunk_FUN_01dd295c(StringLiteral_1149);
              uVar9 = thunk_FUN_01de27b8();
              puVar10 = StringLiteral_9293;
            }
          }
          else {
            if (uVar5 != 0x5d) goto LAB_033ea47c;
            if ((unaff_w22 & 1) != 0) break;
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar9 = thunk_FUN_01de27b8();
            puVar10 = StringLiteral_9285;
          }
FUN_033ea708:
          uVar11 = thunk_FUN_01dd295c(puVar10);
          uVar12 = thunk_FUN_01dd295c(StringLiteral_5922);
          FUN_03287130(uVar9,uVar11,uVar12,0);
          goto LAB_033ea730;
        }
        if ((unaff_w22 & unaff_w23 & 1) != 0) {
          iVar17 = *(int *)(unaff_x20 + 0x10);
          if (unaff_w25 < iVar17) goto LAB_033ea370;
          goto LAB_033ea3a4;
        }
        if ((unaff_w22 & 1) != 0) break;
        if ((unaff_w23 & 1) != 0) {
          lVar7 = FUN_0327d024();
          if ((lVar7 == 0) || (uVar9 = FUN_0327d400(lVar7,0), unaff_x21 == 0)) goto LAB_033ea410;
          *puVar1 = uVar9;
          thunk_FUN_01e10808(puVar1,uVar9);
          unaff_w25 = *(int *)(unaff_x20 + 0x10);
        }
      }
LAB_033ea0bc:
      unaff_w25 = unaff_w25 + 1;
      iStack000000000000000c = unaff_w25;
    } while (unaff_w25 < *(int *)(unaff_x20 + 0x10));
  }
  goto LAB_033ea3e8;
  while( true ) {
    iVar17 = *(int *)(unaff_x20 + 0x10);
    unaff_w25 = unaff_w25 + 1;
    if (iVar17 <= unaff_w25) break;
LAB_033ea370:
    sVar6 = FUN_03271744();
    if (sVar6 == 0x5d) {
      iVar17 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_033ea3a4:
  if (iVar17 <= unaff_w25) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar9 = thunk_FUN_01de27b8();
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9302);
    FUN_0328dba4(uVar9,uVar11,0);
LAB_033ea730:
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar9,uVar11);
  }
  lVar7 = System_DateTime__GetDatePart();
  if ((lVar7 == 0) || (uVar9 = FUN_0327d400(lVar7,0), unaff_x21 == 0)) {
LAB_033ea410:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  *puVar1 = uVar9;
  thunk_FUN_01e10808(puVar1,uVar9);
LAB_033ea3e8:
  *unaff_x19 = unaff_w25;
  return;
}


