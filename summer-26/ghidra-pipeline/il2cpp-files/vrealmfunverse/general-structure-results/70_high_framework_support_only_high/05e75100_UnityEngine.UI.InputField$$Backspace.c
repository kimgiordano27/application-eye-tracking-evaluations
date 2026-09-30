/*
FUNCTION_NAME: UnityEngine.UI.InputField$$Backspace
ENTRY_POINT: 05e75100
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UI_InputField__Backspace(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int in_w8;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int in_w13;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  undefined8 uVar18;
  undefined8 uVar19;
  long *unaff_x27;
  uint uVar20;
  long unaff_x28;
  long unaff_x29;
  
  for (; *(int *)(unaff_x19 + 0x78) = in_w8, lVar13 = unaff_x22, unaff_x22 != 0;
      unaff_x22 = *(long *)(unaff_x22 + 0x28)) {
    while (iVar8 = *(int *)(unaff_x22 + 0x34), iVar8 != 10) {
      if (iVar8 == 9) {
        iVar8 = 1;
        goto LAB_05e750f0;
      }
      if (unaff_w21 < 1) {
        iVar4 = *(int *)(unaff_x19 + 0x80);
        if (iVar8 == 0) {
          iVar4 = iVar4 + 1;
        }
        *(int *)(unaff_x19 + 0x80) = iVar4;
        if (*(int *)(lVar13 + 0x34) == 0) {
          lVar9 = *unaff_x23;
          *(int *)(unaff_x29 + -0x144) = unaff_w26;
          uVar18 = *(undefined8 *)(lVar13 + 0x38);
          *(int *)(unaff_x29 + -0x148) = in_w13;
          iVar8 = *(int *)(lVar9 + 0xe4);
          *(undefined4 *)(unaff_x29 + -0x174) = *(undefined4 *)(unaff_x29 + -0x48);
          if (iVar8 == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_05c8c45c(uVar18,0,0);
          uVar18 = *(undefined8 *)(unaff_x29 + -0x118);
          if ((uVar10 & 1) != 0) {
            uVar18 = *(undefined8 *)(lVar13 + 0x38);
          }
          uVar19 = *(undefined8 *)(unaff_x29 + -0x80);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar7 = FUN_05c8c45c(uVar18,uVar19,0);
          lVar9 = *(long *)(lVar13 + 0x58);
          if (lVar9 == 0) goto LAB_05e75928;
          *(undefined8 *)(unaff_x29 + -0x160) = uVar18;
          *(long *)(unaff_x29 + -0x150) = unaff_x28;
          lVar15 = *(long *)(lVar9 + 0x50);
          *(uint *)(unaff_x29 + -0x164) = uVar7;
          if (lVar15 == *(long *)(unaff_x29 + -0x60)) {
            uVar14 = *(uint *)(lVar9 + 0x30);
            *(int *)(unaff_x29 + -0x154) = unaff_w20;
            uVar20 = (long)*(int *)(lVar13 + 0x60) + (ulong)uVar14 !=
                     (long)*(int *)(unaff_x29 + -0x11c) | uVar7;
          }
          else {
            uVar7 = 1;
            uVar20 = 1;
            *(int *)(unaff_x29 + -0x154) = unaff_w20;
          }
          puVar6 = PTR_DAT_0631eb50;
          iVar8 = *(int *)(lVar13 + 0x40);
          lVar9 = *(long *)PTR_DAT_0631eb50;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar9 = *(long *)puVar6;
          }
          puVar6 = PTR_DAT_0631eb50;
          iVar4 = **(int **)(lVar9 + 0xb8);
          if (DAT_066dc62d == '\0') {
            FUN_02b3c81c(PTR_DAT_0631eb50);
            lVar9 = *(long *)puVar6;
            DAT_066dc62d = '\x01';
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (iVar8 != iVar4) {
            unaff_w26 = *(int *)(unaff_x29 + -0x144);
            if (*(long *)(unaff_x19 + 0xb0) != 0) {
              iVar8 = FUN_05e7b2a8(*(long *)(unaff_x19 + 0xb0),*(undefined4 *)(lVar13 + 0x40));
              if (iVar8 < 0) {
                unaff_w20 = *(int *)(unaff_x29 + -0x154);
                in_w13 = *(int *)(unaff_x29 + -0x148);
                if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_05e75940;
                uVar14 = (uint)(*(int *)(*(long *)(unaff_x19 + 0xb0) + 0x30) < 1);
              }
              else {
                uVar14 = 0;
                unaff_w20 = *(int *)(unaff_x29 + -0x154);
                in_w13 = *(int *)(unaff_x29 + -0x148);
              }
              uVar11 = uVar14 | uVar7;
              uVar20 = uVar14 | uVar20;
              uVar7 = 1;
              goto LAB_05e75330;
            }
            goto LAB_05e75940;
          }
          unaff_w20 = *(int *)(unaff_x29 + -0x154);
          iVar8 = -1;
          in_w13 = *(int *)(unaff_x29 + -0x148);
          unaff_w26 = *(int *)(unaff_x29 + -0x144);
          uVar11 = uVar7;
LAB_05e75330:
          unaff_x23 = (long *)PTR_DAT_06312520;
          uVar17 = (uint)(*(int *)(lVar13 + 0x44) != *(int *)(unaff_x29 + -0x74));
          uVar14 = uVar17 | uVar7;
          if ((*(int *)(unaff_x29 + -0x134) != 0) || (uVar17 != 0 || (uVar20 & 1) != 0)) {
            uVar7 = (uint)(0 < in_w13 && *(int *)(unaff_x29 + -0x174) == 0x3ff) & (uVar17 | uVar20);
            if (*(int *)(lVar13 + 0x44) != *(int *)(unaff_x29 + -0x74)) {
              uVar7 = 1;
            }
            if (*(int *)(unaff_x29 + -0x134) != 0) {
              uVar7 = 1;
            }
            uVar7 = uVar7 | uVar11;
            unaff_x28 = *(long *)(unaff_x29 + -0x150);
            goto LAB_05e75484;
          }
          lVar9 = *(long *)(lVar13 + 0x58);
          if (in_w13 == 0) {
            if (lVar9 == 0) goto LAB_05e75940;
            in_w13 = *(int *)(lVar13 + 100);
            iVar8 = *(int *)(lVar13 + 0x60) + *(int *)(lVar9 + 0x30);
            *(int *)(unaff_x29 + -0x11c) = iVar8;
            *(int *)(unaff_x29 + -0x138) = iVar8;
            iVar8 = in_w13;
          }
          else {
            if (lVar9 == 0) {
LAB_05e75940:
              lVar13 = *(long *)(*(long *)(unaff_x29 + -0x150) + 0x28);
              goto LAB_05e7592c;
            }
            in_w13 = *(int *)(lVar13 + 100) + in_w13;
            iVar8 = *(int *)(lVar13 + 100);
          }
          iVar3 = *(int *)(lVar9 + 0x18);
          iVar4 = unaff_w20 + unaff_w26;
          iVar1 = *(int *)(lVar9 + 0x1c) + iVar3;
          if (iVar3 <= unaff_w20) {
            unaff_w20 = iVar3;
          }
          if (iVar4 <= iVar1) {
            iVar4 = iVar1;
          }
          *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x19 + 0x74) + iVar8;
          if (uVar17 != 0 || (uVar7 & 1) != 0) {
            FUN_05e81b74();
          }
          unaff_x22 = *(long *)(lVar13 + 0x28);
          unaff_w26 = iVar4 - unaff_w20;
          *(int *)(unaff_x29 + -0x11c) = iVar8 + *(int *)(unaff_x29 + -0x11c);
          unaff_x28 = *(long *)(unaff_x29 + -0x150);
        }
        else {
          uVar14 = 0;
          iVar8 = -1;
          *(undefined8 *)(unaff_x29 + -0x160) = 0;
          uVar7 = 1;
          *(undefined4 *)(unaff_x29 + -0x164) = 0;
LAB_05e75484:
          *(int *)(unaff_x29 + -0x150) = iVar8;
          if (0 < in_w13) {
            iVar8 = *(int *)(unaff_x29 + -0x48);
            puVar2 = (undefined4 *)
                     (((ulong)(uint)(iVar8 + *(int *)(unaff_x29 + -0x44)) & 0x3ff) * 0x10 +
                     *(long *)(unaff_x29 + -0x128));
            uVar5 = *(undefined4 *)(unaff_x29 + -0x138);
            puVar2[2] = unaff_w20;
            puVar2[3] = unaff_w26;
            iVar8 = iVar8 + 1;
            *(int *)(unaff_x29 + -0x48) = iVar8;
            *puVar2 = uVar5;
            puVar2[1] = in_w13;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c45700(uVar7 & 1 | (uint)(iVar8 < 0x400),0);
            unaff_w26 = 0;
            *(undefined4 *)(unaff_x29 + -0x138) = 0;
            unaff_w20 = 0;
            in_w13 = 0;
            *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
          }
          if (*(int *)(lVar13 + 0x34) == 0) {
            lVar9 = *(long *)(lVar13 + 0x58);
            if (lVar9 == 0) goto LAB_05e75928;
            in_w13 = *(int *)(lVar13 + 100);
            iVar4 = *(int *)(unaff_x19 + 0x74);
            unaff_w20 = *(int *)(lVar9 + 0x18);
            unaff_w26 = *(int *)(lVar9 + 0x1c);
            iVar8 = *(int *)(lVar13 + 0x60) + *(int *)(lVar9 + 0x30);
            *(int *)(unaff_x29 + -0x138) = iVar8;
            *(int *)(unaff_x29 + -0x11c) = in_w13 + iVar8;
            *(int *)(unaff_x19 + 0x74) = iVar4 + in_w13;
          }
          if ((uVar7 & 1) != 0) {
            *(int *)(unaff_x29 + -0x144) = unaff_w26;
            *(int *)(unaff_x29 + -0x148) = in_w13;
            if (0 < *(int *)(unaff_x29 + -0x48)) {
              FUN_05e80980();
              FUN_05e810d8();
              in_w13 = *(int *)(unaff_x29 + -0x148);
              unaff_w26 = *(int *)(unaff_x29 + -0x144);
            }
            if (*(int *)(lVar13 + 0x34) != 0) {
              if (*(int *)(lVar13 + 0x34) == 0xb) {
                if (*(long *)(lVar13 + 0x18) == 0) goto LAB_05e75928;
                FUN_05e80dc0();
              }
              FUN_05e83294(lVar13,unaff_x25,*(undefined8 *)(unaff_x29 + -0x170),0);
              if ((*(uint *)(lVar13 + 0x34) < 9) &&
                 ((1 << (ulong)(*(uint *)(lVar13 + 0x34) & 0x1f) & 0x186U) != 0)) {
                *(undefined8 *)(unaff_x29 + -0x80) = 0;
                thunk_FUN_02bb0e9c(unaff_x29 + -0x80,0);
                iVar8 = *(int *)(unaff_x19 + 0x94);
                *(undefined1 *)(unaff_x29 + -0x58) = 0;
                *(int *)(unaff_x19 + 0x94) = iVar8 + 1;
                iVar8 = *(int *)(lVar13 + 0x34);
                if (iVar8 == 8) {
                  lVar9 = *(long *)(unaff_x25 + 0x20);
                  if (lVar9 != 0) {
                    iVar8 = *(int *)(lVar9 + 0x18) + -1;
                    uVar18 = FUN_037a6268(lVar9,iVar8,
                                          *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_73__);
                    lVar9 = *(long *)(unaff_x25 + 0x20);
                    *(undefined8 *)(unaff_x29 + -0x118) = uVar18;
                    if (lVar9 != 0) {
                      FUN_037a7c9c(lVar9,iVar8,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__
                                  );
                      iVar8 = *(int *)(lVar13 + 0x34);
                      goto LAB_05e756d8;
                    }
                  }
                }
                else {
LAB_05e756d8:
                  uVar5 = *(undefined4 *)(unaff_x29 + -0x150);
                  if (iVar8 != 7) {
                    in_w13 = *(int *)(unaff_x29 + -0x148);
                    unaff_w26 = *(int *)(unaff_x29 + -0x144);
                    goto LAB_05e75794;
                  }
                  lVar9 = *(long *)(unaff_x25 + 0x20);
                  if (lVar9 != 0) {
                    lVar15 = *(long *)(lVar9 + 0x10);
                    lVar16 = *(long *)UnityEngine_AudioClip_TypeInfo;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar15 != 0) {
                      uVar7 = *(uint *)(lVar9 + 0x18);
                      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar7 + 1;
                        uVar18 = *(undefined8 *)(unaff_x29 + -0x118);
                        puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
                        *puVar12 = uVar18;
                        thunk_FUN_02bb0e9c(puVar12,uVar18,uVar5);
                      }
                      else {
                        FUN_037a6538(lVar9,*(undefined8 *)(unaff_x29 + -0x118),
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      *(undefined8 *)(unaff_x29 + -0x118) = *(undefined8 *)(lVar13 + 0x38);
                      goto LAB_05e7577c;
                    }
                  }
                }
LAB_05e75928:
                lVar13 = *(long *)(unaff_x28 + 0x28);
LAB_05e7592c:
                if (lVar13 == *(long *)(unaff_x29 + -0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e7593c;
              }
LAB_05e7577c:
              in_w13 = *(int *)(unaff_x29 + -0x148);
              unaff_w26 = *(int *)(unaff_x29 + -0x144);
            }
          }
LAB_05e75794:
          if (*(int *)(lVar13 + 0x34) == 0 && ((uVar14 ^ 0xffffffff) & 1) == 0) {
            FUN_05e81b74();
          }
          unaff_x22 = *(long *)(lVar13 + 0x28);
        }
        unaff_x24 = (long *)PTR_DAT_063224e8;
        lVar13 = unaff_x22;
        if (unaff_x22 == 0) goto LAB_05e757e4;
      }
      else {
        unaff_x22 = *(long *)(unaff_x22 + 0x28);
        *(int *)(unaff_x19 + 0x7c) = *(int *)(unaff_x19 + 0x7c) + 1;
        if (unaff_x22 == 0) {
          unaff_w21 = 1;
          goto LAB_05e757e4;
        }
      }
    }
    iVar8 = -1;
LAB_05e750f0:
    unaff_w21 = unaff_w21 + iVar8;
    in_w8 = *(int *)(unaff_x19 + 0x78) + 1;
  }
LAB_05e757e4:
  iVar8 = *(int *)(unaff_x29 + -0x48);
  if (0 < in_w13) {
    uVar7 = iVar8 + *(int *)(unaff_x29 + -0x44);
    iVar8 = iVar8 + 1;
    *(int *)(unaff_x29 + -0x48) = iVar8;
    puVar2 = (undefined4 *)(((ulong)uVar7 & 0x3ff) * 0x10 + *(long *)(unaff_x29 + -0x128));
    uVar5 = *(undefined4 *)(unaff_x29 + -0x138);
    puVar2[2] = unaff_w20;
    puVar2[3] = unaff_w26;
    *puVar2 = uVar5;
    puVar2[1] = in_w13;
  }
  if (0 < iVar8) {
    FUN_05e80980();
    FUN_05e810d8();
  }
  puVar6 = 
  Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
  ;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c45830(unaff_w21 == 0,*(undefined8 *)puVar6,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05e83e7c(unaff_x25,0);
  FUN_05e8070c();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05e52ddc(0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x40)) {
    return;
  }
LAB_05e7593c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


