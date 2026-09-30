/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 033e9be0
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


long OVRPlugin_Ktx__GetKtxTextureHeight(long param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x21;
  undefined8 *puVar14;
  long unaff_x24;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined2 in_stack_00000008;
  uint uStack000000000000000c;
  
  puVar14 = *(undefined8 **)(unaff_x21 + 0x98);
  if ((*(byte *)(unaff_x24 + 0xb09) & 1) == 0) {
    FUN_01d7d918(StringLiteral_9280);
    FUN_01d7d918(StringLiteral_9281);
    FUN_01d7d918(StringLiteral_9282);
    FUN_01d7d918(StringLiteral_9283);
    FUN_01d7d918(StringLiteral_9284);
    FUN_01d7d918(StringLiteral_1184);
    FUN_01d7d918(StringLiteral_9279);
    *(undefined1 *)(unaff_x24 + 0xb09) = 1;
  }
  in_stack_00000008 = 0;
  uStack000000000000000c = *param_2;
  lVar5 = thunk_FUN_01de27b8(*puVar14);
  FUN_033ea9b4(param_1,&stack0x0000000c);
  if (param_1 == 0) {
LAB_033ea410:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar16 = uStack000000000000000c;
  if ((int)uStack000000000000000c < *(int *)(param_1 + 0x10)) {
    do {
      uVar15 = uStack000000000000000c;
      uVar3 = FUN_03271744(param_1,uStack000000000000000c,0);
      if (uVar3 < 0x5b) {
        switch(uVar3) {
        case 0x26:
        case 0x2a:
switchD_033e9cd0_caseD_26:
          sVar4 = FUN_03271744(param_1,uVar15,0);
          if ((sVar4 != 0x5b) && ((param_3 & 1) != 0)) {
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar6 = thunk_FUN_01de27b8();
            puVar9 = StringLiteral_9300;
            goto FUN_033ea708;
          }
          uVar6 = System_DateTime__GetDatePart(param_1,uVar16,uVar15 - uVar16,0);
          if (lVar5 == 0) goto LAB_033ea410;
          FUN_033ea77c(lVar5,uVar6);
          bVar2 = true;
          uVar16 = uVar15 + 1;
          goto LAB_033e9d94;
        case 0x2b:
          uVar6 = System_DateTime__GetDatePart(param_1,uVar16,uVar15 - uVar16,0);
          if (lVar5 == 0) goto LAB_033ea410;
          FUN_033ea77c(lVar5,uVar6);
          uVar16 = uVar15 + 1;
          break;
        case 0x2c:
switchD_033e9cd0_caseD_2c:
          uVar6 = System_DateTime__GetDatePart(param_1,uVar16,uVar15 - uVar16,0);
          if (lVar5 == 0) goto LAB_033ea410;
          FUN_033ea77c(lVar5,uVar6);
          uVar16 = uVar15 + 1;
          bVar2 = true;
          if (((param_3 & 1) == 0) || ((param_4 & 1) != 0)) goto LAB_033e9d94;
          goto LAB_033ea3e8;
        }
      }
      else if (uVar3 == 0x5c) {
        uVar15 = uVar15 + 1;
      }
      else {
        if (uVar3 == 0x5b) goto switchD_033e9cd0_caseD_26;
        if (uVar3 == 0x5d) goto switchD_033e9cd0_caseD_2c;
      }
      uStack000000000000000c = uVar15 + 1;
    } while ((int)uStack000000000000000c < *(int *)(param_1 + 0x10));
    bVar2 = false;
    uVar15 = uStack000000000000000c;
  }
  else {
    bVar2 = false;
    uVar15 = uStack000000000000000c;
  }
LAB_033e9d94:
  iVar18 = uVar15 - uVar16;
  if (iVar18 == 0 || (int)uVar15 < (int)uVar16) {
    if (iVar18 == 0) {
      if (lVar5 == 0) goto LAB_033ea410;
      uVar6 = **(undefined8 **)(*(long *)StringLiteral_1184 + 0xb8);
      goto LAB_033e9dd4;
    }
  }
  else {
    uVar6 = System_DateTime__GetDatePart(param_1,uVar16,iVar18,0);
    if (lVar5 == 0) goto LAB_033ea410;
LAB_033e9dd4:
    FUN_033ea77c(lVar5,uVar6);
  }
  if ((bVar2) && ((int)uVar15 < *(int *)(param_1 + 0x10))) {
    puVar14 = (undefined8 *)(lVar5 + 0x18);
    uVar16 = uVar15;
LAB_033e9dfc:
    uVar3 = FUN_03271744(param_1,uVar16,0);
    if (uVar3 < 0x2b) {
      if (uVar3 != 0x26) {
        if (uVar3 != 0x2a) {
LAB_033ea47c:
          FUN_01a94b18(param_1);
          in_stack_00000008 = FUN_03271744(param_1,uVar16,0);
          thunk_FUN_01dd295c(StringLiteral_1167);
          FUN_01a94a5c();
          uVar6 = FUN_032835a0(&stack0x00000008,0);
          uVar10 = FUN_03390e50(&stack0x0000000c,0);
          uVar11 = thunk_FUN_01dd295c(StringLiteral_9288);
          uVar8 = thunk_FUN_01dd295c(StringLiteral_9289);
          uVar6 = FUN_03279ae0(uVar11,uVar6,uVar8,uVar10,0);
LAB_033ea65c:
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar10 = thunk_FUN_01de27b8();
          uVar11 = thunk_FUN_01dd295c(StringLiteral_5922);
          FUN_03287130(uVar10,uVar6,uVar11,0);
          uVar6 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar10,uVar6);
        }
        if (lVar5 == 0) goto LAB_033ea410;
        if (*(char *)(lVar5 + 0x38) == '\0') {
          if ((int)(uVar16 + 1) < *(int *)(param_1 + 0x10)) {
            iVar18 = 0;
            do {
              iVar17 = iVar18;
              uVar15 = uVar16 + iVar17 + 1;
              sVar4 = FUN_03271744(param_1,uVar15,0);
              if (sVar4 != 0x2a) {
                iVar18 = iVar17 + 1;
                uVar16 = uVar16 + iVar17;
                goto LAB_033ea040;
              }
              uVar1 = uVar16 + iVar17 + 1;
              iVar18 = iVar17 + 1;
              uStack000000000000000c = uVar15;
            } while ((int)(uVar1 + 1) < *(int *)(param_1 + 0x10));
            iVar18 = iVar17 + 2;
            uVar16 = uVar1;
          }
          else {
            iVar18 = 1;
          }
LAB_033ea040:
          lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9284);
          *(int *)(lVar7 + 0x10) = iVar18;
LAB_033ea0b4:
          FUN_033ea8b4(lVar5,lVar7);
          goto LAB_033ea0bc;
        }
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar6 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9291;
        goto FUN_033ea708;
      }
      if (lVar5 == 0) goto LAB_033ea410;
      if (*(char *)(lVar5 + 0x38) != '\0') {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar6 = thunk_FUN_01de27b8();
        puVar9 = StringLiteral_9292;
        goto FUN_033ea708;
      }
      *(undefined1 *)(lVar5 + 0x38) = 1;
    }
    else {
      uVar15 = uVar16;
      if (uVar3 != 0x2c) {
        if (uVar3 == 0x5b) {
          if (lVar5 == 0) goto LAB_033ea410;
          if (*(char *)(lVar5 + 0x38) == '\0') {
            uStack000000000000000c = uVar16 + 1;
            if ((int)uStack000000000000000c < *(int *)(param_1 + 0x10)) {
              FUN_033ea9b4(param_1,&stack0x0000000c);
              uVar16 = uStack000000000000000c;
              sVar4 = FUN_03271744(param_1,uStack000000000000000c,0);
              if (((sVar4 == 0x2c) || (sVar4 = FUN_03271744(param_1,uVar16,0), sVar4 == 0x2a)) ||
                 (sVar4 = FUN_03271744(param_1,uVar16,0), sVar4 == 0x5d)) {
                iVar18 = *(int *)(param_1 + 0x10);
                if ((int)uVar16 < iVar18) {
                  bVar2 = false;
                  iVar17 = 1;
                  do {
                    sVar4 = FUN_03271744(param_1,uVar16,0);
                    if (sVar4 == 0x5d) {
                      iVar18 = *(int *)(param_1 + 0x10);
                      break;
                    }
                    sVar4 = FUN_03271744(param_1,uVar16,0);
                    if (sVar4 == 0x2a) {
                      if (bVar2) {
                        thunk_FUN_01dd295c(StringLiteral_1149);
                        uVar6 = thunk_FUN_01de27b8();
                        puVar9 = StringLiteral_9286;
                        goto FUN_033ea708;
                      }
                      bVar2 = true;
                    }
                    else {
                      sVar4 = FUN_03271744(param_1,uVar16,0);
                      if (sVar4 != 0x2c) {
                        FUN_01a94b18(param_1);
                        in_stack_00000008 = FUN_03271744(param_1,uVar16,0);
                        thunk_FUN_01dd295c(StringLiteral_1167);
                        FUN_01a94a5c();
                        uVar6 = FUN_032835a0(&stack0x00000008,0);
                        puVar9 = StringLiteral_9287;
                        goto LAB_033ea64c;
                      }
                      iVar17 = iVar17 + 1;
                    }
                    uStack000000000000000c = uVar16 + 1;
                    FUN_033ea9b4(param_1,&stack0x0000000c);
                    iVar18 = *(int *)(param_1 + 0x10);
                    uVar16 = uStack000000000000000c;
                  } while ((int)uStack000000000000000c < iVar18);
                }
                else {
                  bVar2 = false;
                  iVar17 = 1;
                }
                if (((int)uVar16 < iVar18) &&
                   (sVar4 = FUN_03271744(param_1,uVar16,0), sVar4 == 0x5d)) {
                  if (iVar17 < 2 || bVar2 != true) {
                    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9280);
                    *(int *)(lVar7 + 0x10) = iVar17;
                    *(bool *)(lVar7 + 0x14) = bVar2;
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
              }
              else {
                lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9283);
                FUN_0319873c(lVar7,*(undefined8 *)StringLiteral_9282);
                if (*(long *)(lVar5 + 0x30) == 0) {
LAB_033ea100:
                  iVar18 = *(int *)(param_1 + 0x10);
                  if (iVar18 <= (int)uVar16) goto LAB_033ea2c0;
                  FUN_033ea9b4(param_1,&stack0x0000000c);
                  uVar16 = uStack000000000000000c;
                  sVar4 = FUN_03271744(param_1,uStack000000000000000c,0);
                  if (sVar4 != 0x5b) {
                    uVar6 = FUN_033e9bbc(param_1,&stack0x0000000c,1,0);
                    if (lVar7 == 0) goto LAB_033ea410;
                    lVar12 = *(long *)(lVar7 + 0x10);
                    lVar13 = *(long *)StringLiteral_9281;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_033ea410;
                    uVar16 = *(uint *)(lVar7 + 0x18);
                    if (uVar16 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar16 + 1;
                      *(undefined8 *)(lVar12 + (long)(int)uVar16 * 8 + 0x20) = uVar6;
                      thunk_FUN_01e10808();
                    }
                    else {
                      FUN_03198f70(lVar7,uVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
LAB_033ea26c:
                    uVar16 = uStack000000000000000c;
                    FUN_033eaa64(uStack000000000000000c,param_1);
                    sVar4 = FUN_03271744(param_1,uVar16,0);
                    if (sVar4 == 0x5d) {
                      iVar18 = *(int *)(param_1 + 0x10);
                      goto LAB_033ea2c0;
                    }
                    sVar4 = FUN_03271744(param_1,uVar16,0);
                    if (sVar4 != 0x2c) {
                      FUN_01a94b18(param_1);
                      in_stack_00000008 = FUN_03271744(param_1,uVar16,0);
                      thunk_FUN_01dd295c(StringLiteral_1167);
                      FUN_01a94a5c();
                      uVar6 = FUN_032835a0(&stack0x00000008,0);
                      puVar9 = StringLiteral_9295;
                      goto LAB_033ea64c;
                    }
                    uVar16 = uVar16 + 1;
                    uStack000000000000000c = uVar16;
                    goto LAB_033ea100;
                  }
                  uStack000000000000000c = uVar16 + 1;
                  uVar6 = FUN_033e9bbc(param_1,&stack0x0000000c,1,1);
                  if (lVar7 == 0) goto LAB_033ea410;
                  lVar12 = *(long *)(lVar7 + 0x10);
                  lVar13 = *(long *)StringLiteral_9281;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_033ea410;
                  uVar16 = *(uint *)(lVar7 + 0x18);
                  if (uVar16 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar16 + 1;
                    *(undefined8 *)(lVar12 + (long)(int)uVar16 * 8 + 0x20) = uVar6;
                    thunk_FUN_01e10808();
                  }
                  else {
                    FUN_03198f70(lVar7,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar16 = uStack000000000000000c;
                  FUN_033eaa64(uStack000000000000000c,param_1);
                  sVar4 = FUN_03271744(param_1,uVar16,0);
                  if (sVar4 == 0x5d) {
                    uStack000000000000000c = uVar16 + 1;
                    goto LAB_033ea26c;
                  }
                  FUN_01a94b18(param_1);
                  in_stack_00000008 = FUN_03271744(param_1,uVar16,0);
                  thunk_FUN_01dd295c(StringLiteral_1167);
                  FUN_01a94a5c();
                  uVar6 = FUN_032835a0(&stack0x00000008,0);
                  puVar9 = StringLiteral_9297;
LAB_033ea64c:
                  uVar10 = thunk_FUN_01dd295c(puVar9);
                  uVar6 = FUN_0326dc80(uVar10,uVar6,0);
                  goto LAB_033ea65c;
                }
                thunk_FUN_01dd295c(StringLiteral_1149);
                uVar6 = thunk_FUN_01de27b8();
                puVar9 = StringLiteral_9301;
              }
            }
            else {
              thunk_FUN_01dd295c(StringLiteral_1149);
              uVar6 = thunk_FUN_01de27b8();
              puVar9 = StringLiteral_9294;
            }
          }
          else {
            thunk_FUN_01dd295c(StringLiteral_1149);
            uVar6 = thunk_FUN_01de27b8();
            puVar9 = StringLiteral_9293;
          }
          goto FUN_033ea708;
        }
        if (uVar3 != 0x5d) goto LAB_033ea47c;
        if ((param_3 & 1) == 0) goto code_r0x033ea33c;
        goto LAB_033ea3e8;
      }
      if ((param_3 & param_4 & 1) != 0) {
        iVar18 = *(int *)(param_1 + 0x10);
        if (iVar18 <= (int)uVar16) goto LAB_033ea3a4;
        goto LAB_033ea370;
      }
      if ((param_3 & 1) != 0) goto LAB_033ea3e8;
      if ((param_4 & 1) != 0) {
        lVar7 = FUN_0327d024(param_1,uVar16 + 1,0);
        if ((lVar7 == 0) || (uVar6 = FUN_0327d400(lVar7,0), lVar5 == 0)) goto LAB_033ea410;
        *puVar14 = uVar6;
        thunk_FUN_01e10808(puVar14,uVar6);
        uVar16 = *(uint *)(param_1 + 0x10);
      }
    }
LAB_033ea0bc:
    uVar15 = uVar16 + 1;
    uVar16 = uVar15;
    uStack000000000000000c = uVar15;
    if (*(int *)(param_1 + 0x10) <= (int)uVar15) goto LAB_033ea3e8;
    goto LAB_033e9dfc;
  }
LAB_033ea3e8:
  *param_2 = uVar15;
  return lVar5;
LAB_033ea2c0:
  if ((iVar18 <= (int)uVar16) || (sVar4 = FUN_03271744(param_1,uVar16,0), sVar4 != 0x5d)) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9299;
    goto FUN_033ea708;
  }
  *(long *)(lVar5 + 0x28) = lVar7;
  thunk_FUN_01e10808((long *)(lVar5 + 0x28),lVar7);
  goto LAB_033ea0bc;
  while( true ) {
    iVar18 = *(int *)(param_1 + 0x10);
    uVar15 = uVar15 + 1;
    if (iVar18 <= (int)uVar15) break;
LAB_033ea370:
    sVar4 = FUN_03271744(param_1,uVar15,0);
    if (sVar4 == 0x5d) {
      iVar18 = *(int *)(param_1 + 0x10);
      break;
    }
  }
LAB_033ea3a4:
  if (iVar18 <= (int)uVar15) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar6 = thunk_FUN_01de27b8();
    uVar10 = thunk_FUN_01dd295c(StringLiteral_9302);
    FUN_0328dba4(uVar6,uVar10,0);
    goto LAB_033ea730;
  }
  lVar7 = System_DateTime__GetDatePart(param_1,uVar16 + 1,uVar15 + ~uVar16,0);
  if ((lVar7 == 0) || (uVar6 = FUN_0327d400(lVar7,0), lVar5 == 0)) goto LAB_033ea410;
  *puVar14 = uVar6;
  thunk_FUN_01e10808(puVar14,uVar6);
  goto LAB_033ea3e8;
code_r0x033ea33c:
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar6 = thunk_FUN_01de27b8();
  puVar9 = StringLiteral_9285;
FUN_033ea708:
  uVar10 = thunk_FUN_01dd295c(puVar9);
  uVar11 = thunk_FUN_01dd295c(StringLiteral_5922);
  FUN_03287130(uVar6,uVar10,uVar11,0);
LAB_033ea730:
  uVar10 = thunk_FUN_01dd295c(StringLiteral_9298);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar6,uVar10);
}


