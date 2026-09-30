/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.JsonTokenUtils$$IsStartToken
ENTRY_POINT: 050b2e60
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Utilities_JsonTokenUtils__IsStartToken(void)

{
  ulong uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  long unaff_x19;
  undefined8 uVar19;
  ulong uVar20;
  long unaff_x20;
  short *unaff_x21;
  undefined8 unaff_x22;
  uint unaff_w24;
  uint uVar21;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_02f08768(System_AttributeUsageAttribute_var);
  FUN_02f08768(PTR_DAT_067cb890);
  FUN_02f08768(UnityEngine_InputSystem_Controls_ButtonControl_var);
  FUN_02f08768(PTR_DAT_067dc020);
  FUN_02f08768(PTR_DAT_067d5bb0);
  FUN_02f08768(PTR_DAT_067d5dc0);
  FUN_02f08768(UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
  FUN_02f08768(PTR_DAT_067d15f8);
  FUN_02f08768(PTR_DAT_067d1610);
  FUN_02f08768(UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var);
  *(undefined1 *)(unaff_x19 + 0xa21) = 1;
  uVar7 = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  if ((unaff_w24 != 0) && (uVar19 = *(undefined8 *)(unaff_x29 + -0x50), (int)uVar19 != 0)) {
    sVar2 = *unaff_x21;
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x22;
    if (sVar2 == 0x2a) {
      iVar11 = unaff_w24 - 1;
      if (iVar11 == 0) {
        uVar7 = 1;
      }
      else {
        if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_067dc020 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        puVar4 = System_AttributeUsageAttribute_var;
        lVar8 = *(long *)System_AttributeUsageAttribute_var;
        if ((*(uint *)(unaff_x29 + -0x34) & 1) == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar8 = *(long *)puVar4;
          }
          uVar19 = *(undefined8 *)(unaff_x29 + -0x50);
          puVar9 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
        }
        else {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar8 = *(long *)puVar4;
          }
          uVar19 = *(undefined8 *)(unaff_x29 + -0x50);
          puVar9 = *(undefined8 **)(lVar8 + 0xb8);
        }
        auVar24 = FUN_04185560(*puVar9,*(undefined8 *)PTR_DAT_067d5dc0);
        uVar7 = FUN_050b3700(unaff_x21 + 1,iVar11,auVar24._0_8_,auVar24._8_8_,
                             *(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var);
        if ((int)uVar7 != -1) goto LAB_050b2fbc;
        if (iVar11 <= (int)uVar19) {
          uVar13 = 4;
          if ((*(uint *)(unaff_x29 + -0x9c) & 1) != 0) {
            uVar13 = 5;
          }
          if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
            FUN_050d7208(*(undefined8 *)(unaff_x29 + -0x98),uVar19,unaff_x21 + 1,iVar11,uVar13,0);
            return;
          }
          goto LAB_050b3568;
        }
LAB_050b34c0:
        uVar7 = 0;
      }
    }
    else {
LAB_050b2fbc:
      *(long *)(unaff_x29 + -0xa8) = unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x20) = &uStack_40;
      uVar22 = DAT_011b1ca8;
      *(undefined8 *)(unaff_x29 + -0x18) = DAT_011b1ca8;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      uVar6 = 0;
      uVar21 = 1;
      *(undefined4 *)(unaff_x29 + -0x8c) = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      *(uint *)(unaff_x29 + -0x38) = unaff_w24 << 1;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      *(undefined8 **)(unaff_x29 + -0x30) = &uStack_80;
      uStack_80 = 0;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar22;
LAB_050b3020:
      if ((int)uVar6 < (int)(uint)uVar19) {
        if (uVar6 < (uint)uVar19) {
          lVar8 = *(long *)(unaff_x29 + -0x98);
          uVar18 = uVar6 + 1;
          uVar16 = (uint)*(ushort *)(lVar8 + (long)(int)uVar6 * 2);
          goto LAB_050b3070;
        }
LAB_050b3550:
        lVar8 = *(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28);
        goto Newtonsoft_Json_Utilities_MathUtils__ApproxEquals;
      }
      uVar10 = *(uint *)(unaff_x29 + -0x28);
      uVar12 = uVar21 - 1;
      if (uVar10 <= uVar12) goto LAB_050b3550;
      uVar16 = *(uint *)(unaff_x29 + -0x8c);
      lVar8 = *(long *)(unaff_x29 + -0x98);
      uVar18 = uVar6;
      if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar12 * 4) !=
          *(int *)(unaff_x29 + -0x38)) {
LAB_050b3070:
        uVar7 = (ulong)(int)uVar21;
        uVar20 = 0;
        uVar12 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        uVar21 = 0;
        *(uint *)(unaff_x29 + -0x90) = uVar18;
        *(uint *)(unaff_x29 + -0x8c) = uVar16;
        bVar5 = (uVar16 & 0xffff) == 0x2e;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(ulong *)(unaff_x29 + -0x80) = uVar7;
        uVar10 = (uint)((int)uVar12 <= (int)uVar6);
        uVar16 = uVar10;
        if (bVar5) {
          uVar16 = 1;
        }
        *(uint *)(unaff_x29 + -0x58) = uVar16;
        *(uint *)(unaff_x29 + -0x54) = uVar6;
        if (!bVar5) {
          uVar10 = 1;
        }
        iVar11 = uVar12 - uVar18;
        *(uint *)(unaff_x29 + -0x40) = uVar10;
        if (iVar11 == 0 || (int)uVar12 < (int)uVar18) {
          uVar10 = 1;
        }
        *(uint *)(unaff_x29 + -0x3c) = uVar10;
        iVar15 = 0;
        if (uVar18 <= uVar12) {
          iVar15 = iVar11;
        }
        *(long *)(unaff_x29 + -0x68) = lVar8 + (long)(int)uVar18 * 2;
        *(int *)(unaff_x29 + -0x5c) = iVar11;
        *(int *)(unaff_x29 + -0x6c) = iVar15;
        do {
          uVar20 = (ulong)(int)uVar20;
          uVar1 = uVar20;
          if ((long)uVar20 <= (long)uVar7) {
            uVar1 = uVar7;
          }
          *(ulong *)(unaff_x29 + -0x78) = uVar1;
          do {
            if (uVar20 == *(ulong *)(unaff_x29 + -0x78)) {
              if (uVar21 == 0) {
                unaff_x20 = *(long *)(unaff_x29 + -0xa8);
                goto LAB_050b34c0;
              }
              uVar23 = *(undefined8 *)(unaff_x29 + -0x28);
              uVar22 = *(undefined8 *)(unaff_x29 + -0x30);
              uVar19 = *(undefined8 *)(unaff_x29 + -0x50);
              uVar6 = *(uint *)(unaff_x29 + -0x90);
              *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x18);
              *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x20);
              *(undefined8 *)(unaff_x29 + -0x18) = uVar23;
              *(undefined8 *)(unaff_x29 + -0x20) = uVar22;
              if (*(int *)(unaff_x29 + -0x54) < (int)uVar19) goto LAB_050b3020;
              uVar10 = *(uint *)(unaff_x29 + -0x28);
              uVar12 = uVar21 - 1;
              goto LAB_050b3498;
            }
            if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar20) goto LAB_050b3550;
            *(ulong *)(unaff_x29 + -0x48) = uVar20;
            iVar15 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar20 * 4);
            iVar11 = iVar15 + 2;
            if (-1 < iVar15 + 1) {
              iVar11 = iVar15 + 1;
            }
            if (iVar11 >> 1 < (int)unaff_w24) {
              lVar8 = (long)(iVar11 >> 1);
              do {
                puVar4 = PTR_DAT_067cb890;
                uVar6 = (uint)lVar8;
                if (unaff_w24 <= uVar6) goto LAB_050b3550;
                uVar3 = unaff_x21[lVar8];
                if (*(int *)(unaff_x29 + -0x18) + -2 <= (int)uVar21) {
                  iVar11 = *(int *)(unaff_x29 + -0x18) << 1;
                  uVar19 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,iVar11);
                  auVar24 = FUN_0426a99c(uVar19,*(undefined8 *)
                                                 UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                        );
                  FUN_0426a488(unaff_x29 + -0x20,auVar24._0_8_,auVar24._8_8_,
                               *(undefined8 *)
                                UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
                  uVar19 = *(undefined8 *)puVar4;
                  *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar24;
                  uVar19 = FUN_02f0880c(uVar19,iVar11);
                  auVar24 = FUN_0426a99c(uVar19,*(undefined8 *)
                                                 UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                        );
                  uVar7 = FUN_0426a488(unaff_x29 + -0x30,auVar24._0_8_,auVar24._8_8_,
                                       *(undefined8 *)
                                        UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var
                                      );
                  *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar24;
                }
                uVar18 = uVar6 * 2;
                if (uVar3 == 0x2a) {
LAB_050b3280:
                  if (*(uint *)(unaff_x29 + -0x18) <= uVar21) goto LAB_050b3550;
                  uVar6 = uVar21 + 1;
                  *(uint *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar21 * 4) = uVar18;
Newtonsoft_Json_Utilities_MathUtils__Min:
                  if (*(uint *)(unaff_x29 + -0x18) <= uVar6) goto LAB_050b3550;
                  uVar21 = uVar6 + 1;
                  *(uint *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar6 * 4) = uVar18 | 1;
                }
                else {
                  if (((*(uint *)(unaff_x29 + -0x34) & 1) != 0) && (uVar3 == 0x3c)) {
                    if ((*(uint *)(unaff_x29 + -0x3c) & 1) == 0) {
                      iVar11 = *(int *)(unaff_x29 + -0x5c);
                      psVar14 = *(short **)(unaff_x29 + -0x68);
                      iVar15 = *(int *)(unaff_x29 + -0x6c);
                      do {
                        if (iVar15 == 0) goto LAB_050b3550;
                        if (*psVar14 == 0x2e) {
                          bVar5 = true;
                          goto LAB_050b3274;
                        }
                        iVar11 = iVar11 + -1;
                        iVar15 = iVar15 + -1;
                        psVar14 = psVar14 + 1;
                      } while (iVar11 != 0);
                      bVar5 = false;
                    }
                    else {
                      bVar5 = false;
                    }
LAB_050b3274:
                    uVar6 = uVar21;
                    if (bVar5 || *(int *)(unaff_x29 + -0x40) != 0) goto LAB_050b3280;
                    goto Newtonsoft_Json_Utilities_MathUtils__Min;
                  }
                  if (((*(uint *)(unaff_x29 + -0x34) & 1) == 0) || (uVar3 != 0x3e)) {
                    if (((*(uint *)(unaff_x29 + -0x34) & 1) != 0) && (uVar3 == 0x22)) {
                      if ((int)*(undefined8 *)(unaff_x29 + -0x50) <= *(int *)(unaff_x29 + -0x54))
                      goto LAB_050b32bc;
                      if ((*(uint *)(unaff_x29 + -0x8c) & 0xffff) == 0x2e) goto LAB_050b3324;
                      break;
                    }
                    if (uVar3 == 0x5c) {
                      uVar6 = uVar6 + 1;
                      if (uVar6 != unaff_w24) {
                        if (uVar6 < unaff_w24) {
                          uVar18 = uVar6 * 2;
                          uVar3 = unaff_x21[(int)uVar6];
                          goto LAB_050b3344;
                        }
                        goto LAB_050b3550;
                      }
                      uVar6 = *(uint *)(unaff_x29 + -0x18);
                      iVar11 = *(int *)(unaff_x29 + -0x38);
                    }
                    else {
LAB_050b3344:
                      if ((int)*(undefined8 *)(unaff_x29 + -0x50) <= *(int *)(unaff_x29 + -0x54))
                      break;
                      iVar11 = uVar18 + 2;
                      if (uVar3 != 0x3f) {
                        if ((*(uint *)(unaff_x29 + -0x9c) & 1) == 0) {
                          if ((uint)uVar3 != (*(uint *)(unaff_x29 + -0x8c) & 0xffff)) break;
                        }
                        else {
                          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x88) + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          uVar6 = FUN_0505b3e8(uVar3,0);
                          uVar7 = FUN_0505b3e8(*(undefined4 *)(unaff_x29 + -0x8c),0);
                          if ((uVar6 & 0xffff) != ((uint)uVar7 & 0xffff)) break;
                        }
                      }
                      uVar6 = *(uint *)(unaff_x29 + -0x18);
                    }
                    if (uVar6 <= uVar21) goto LAB_050b3550;
LAB_050b336c:
                    *(int *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar21 * 4) = iVar11;
                    uVar21 = uVar21 + 1;
                    break;
                  }
                  if ((*(uint *)(unaff_x29 + -0x58) & 1) == 0) {
LAB_050b3324:
                    if (uVar21 < *(uint *)(unaff_x29 + -0x18)) {
                      iVar11 = uVar18 + 2;
                      goto LAB_050b336c;
                    }
                    goto LAB_050b3550;
                  }
                }
LAB_050b32bc:
                lVar8 = lVar8 + 1;
                if (lVar8 == (int)unaff_w24) {
                  if (*(uint *)(unaff_x29 + -0x18) <= uVar21) goto LAB_050b3550;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar21 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x38);
                  uVar21 = uVar21 + 1;
                }
              } while (lVar8 != (int)unaff_w24);
            }
            uVar7 = *(ulong *)(unaff_x29 + -0x80);
            uVar20 = *(long *)(unaff_x29 + -0x48) + 1;
          } while (((long)uVar7 <= (long)uVar20) ||
                  ((int)uVar21 <= (int)*(undefined8 *)(unaff_x29 + -0x88)));
          uVar6 = *(uint *)(unaff_x29 + -0x28);
          lVar8 = (long)(int)*(undefined8 *)(unaff_x29 + -0x88);
          do {
            uVar18 = (uint)uVar20;
            if ((int)uVar18 < (int)uVar6) {
              piVar17 = (int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar18 * 4);
              if (uVar18 <= uVar6) {
                uVar18 = uVar6;
              }
              do {
                if ((uVar18 == (uint)uVar20) || (*(uint *)(unaff_x29 + -0x18) <= (uint)lVar8))
                goto LAB_050b3550;
                if (*(int *)(*(long *)(unaff_x29 + -0x20) + lVar8 * 4) <= *piVar17)
                goto LAB_050b3458;
                uVar16 = (uint)uVar20 + 1;
                uVar20 = (ulong)uVar16;
                piVar17 = piVar17 + 1;
              } while (uVar6 != uVar16);
              uVar20 = (ulong)uVar6;
            }
LAB_050b3458:
            lVar8 = lVar8 + 1;
          } while (lVar8 != (int)uVar21);
          *(ulong *)(unaff_x29 + -0x88) = (ulong)uVar21;
        } while( true );
      }
LAB_050b3498:
      unaff_x20 = *(long *)(unaff_x29 + -0xa8);
      if (uVar10 <= uVar12) {
        lVar8 = *(long *)(unaff_x20 + 0x28);
Newtonsoft_Json_Utilities_MathUtils__ApproxEquals:
        if (lVar8 == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0(uVar7);
        }
        goto LAB_050b3568;
      }
      uVar7 = (ulong)(*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar12 * 4) ==
                     *(int *)(unaff_x29 + -0x38));
    }
  }
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_050b3568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


