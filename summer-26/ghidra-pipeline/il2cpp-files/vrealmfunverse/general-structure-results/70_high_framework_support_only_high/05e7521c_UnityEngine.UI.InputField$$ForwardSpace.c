/*
FUNCTION_NAME: UnityEngine.UI.InputField$$ForwardSpace
ENTRY_POINT: 05e7521c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_UI_InputField__ForwardSpace(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *in_x9;
  long lVar16;
  uint uVar17;
  int iVar18;
  long unaff_x19;
  int iVar19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint unaff_w28;
  long unaff_x29;
  
code_r0x05e7521c:
  lVar10 = *in_x9;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *in_x9;
  }
  puVar6 = PTR_DAT_0631eb50;
  iVar20 = **(int **)(lVar10 + 0xb8);
  if (DAT_066dc62d == '\0') {
    FUN_02b3c81c(PTR_DAT_0631eb50);
    lVar10 = *(long *)puVar6;
    DAT_066dc62d = '\x01';
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (unaff_w26 == iVar20) {
    iVar19 = *(int *)(unaff_x29 + -0x154);
    iVar8 = -1;
    iVar18 = *(int *)(unaff_x29 + -0x148);
    iVar20 = *(int *)(unaff_x29 + -0x144);
    uVar11 = unaff_w24;
LAB_05e75330:
    puVar6 = PTR_DAT_06312520;
    uVar17 = (uint)(*(int *)(unaff_x22 + 0x44) != *(int *)(unaff_x29 + -0x74));
    uVar15 = uVar17 | unaff_w24;
    if ((*(int *)(unaff_x29 + -0x134) != 0) || (uVar17 != 0 || (unaff_w28 & 1) != 0)) {
      uVar17 = (uint)(0 < iVar18 && *(int *)(unaff_x29 + -0x174) == 0x3ff) & (uVar17 | unaff_w28);
      if (*(int *)(unaff_x22 + 0x44) != *(int *)(unaff_x29 + -0x74)) {
        uVar17 = 1;
      }
      if (*(int *)(unaff_x29 + -0x134) != 0) {
        uVar17 = 1;
      }
      uVar17 = uVar17 | uVar11;
      lVar10 = *(long *)(unaff_x29 + -0x150);
      goto LAB_05e75484;
    }
    lVar10 = *(long *)(unaff_x22 + 0x58);
    if (iVar18 == 0) {
      if (lVar10 != 0) {
        iVar18 = *(int *)(unaff_x22 + 100);
        iVar8 = *(int *)(unaff_x22 + 0x60) + *(int *)(lVar10 + 0x30);
        *(int *)(unaff_x29 + -0x11c) = iVar8;
        *(int *)(unaff_x29 + -0x138) = iVar8;
        iVar8 = iVar18;
        goto LAB_05e75394;
      }
      goto LAB_05e75940;
    }
    if (lVar10 == 0) goto LAB_05e75940;
    iVar18 = *(int *)(unaff_x22 + 100) + iVar18;
    iVar8 = *(int *)(unaff_x22 + 100);
LAB_05e75394:
    iVar3 = *(int *)(lVar10 + 0x18);
    iVar20 = iVar19 + iVar20;
    iVar1 = *(int *)(lVar10 + 0x1c) + iVar3;
    if (iVar3 <= iVar19) {
      iVar19 = iVar3;
    }
    if (iVar20 <= iVar1) {
      iVar20 = iVar1;
    }
    *(int *)(unaff_x19 + 0x74) = *(int *)(unaff_x19 + 0x74) + iVar8;
    if (uVar17 != 0 || (unaff_w24 & 1) != 0) {
      FUN_05e81b74();
    }
    unaff_x22 = *(long *)(unaff_x22 + 0x28);
    iVar20 = iVar20 - iVar19;
    *(int *)(unaff_x29 + -0x11c) = iVar8 + *(int *)(unaff_x29 + -0x11c);
    lVar10 = *(long *)(unaff_x29 + -0x150);
    puVar5 = PTR_DAT_063224e8;
    while (puVar7 = PTR_DAT_063224e8, lVar12 = unaff_x22, PTR_DAT_063224e8 = puVar5, unaff_x22 != 0)
    {
LAB_05e750b0:
      iVar8 = *(int *)(lVar12 + 0x34);
      if (iVar8 == 10) {
        iVar8 = -1;
LAB_05e750f0:
        unaff_x22 = *(long *)(lVar12 + 0x28);
        unaff_w21 = unaff_w21 + iVar8;
        *(int *)(unaff_x19 + 0x78) = *(int *)(unaff_x19 + 0x78) + 1;
        puVar5 = PTR_DAT_063224e8;
        PTR_DAT_063224e8 = puVar7;
      }
      else {
        if (iVar8 == 9) {
          iVar8 = 1;
          goto LAB_05e750f0;
        }
        if (0 < unaff_w21) goto code_r0x05e750cc;
        iVar1 = *(int *)(unaff_x19 + 0x80);
        if (iVar8 == 0) {
          iVar1 = iVar1 + 1;
        }
        *(int *)(unaff_x19 + 0x80) = iVar1;
        if (*(int *)(unaff_x22 + 0x34) == 0) {
          lVar12 = *(long *)puVar6;
          *(int *)(unaff_x29 + -0x144) = iVar20;
          uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
          *(int *)(unaff_x29 + -0x148) = iVar18;
          iVar20 = *(int *)(lVar12 + 0xe4);
          *(undefined4 *)(unaff_x29 + -0x174) = *(undefined4 *)(unaff_x29 + -0x48);
          if (iVar20 == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar9 = FUN_05c8c45c(uVar21,0,0);
          uVar21 = *(undefined8 *)(unaff_x29 + -0x118);
          if ((uVar9 & 1) != 0) {
            uVar21 = *(undefined8 *)(unaff_x22 + 0x38);
          }
          uVar22 = *(undefined8 *)(unaff_x29 + -0x80);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          unaff_w24 = FUN_05c8c45c(uVar21,uVar22,0);
          lVar12 = *(long *)(unaff_x22 + 0x58);
          if (lVar12 == 0) goto LAB_05e75928;
          *(undefined8 *)(unaff_x29 + -0x160) = uVar21;
          *(long *)(unaff_x29 + -0x150) = lVar10;
          lVar10 = *(long *)(lVar12 + 0x50);
          *(uint *)(unaff_x29 + -0x164) = unaff_w24;
          if (lVar10 == *(long *)(unaff_x29 + -0x60)) {
            uVar15 = *(uint *)(lVar12 + 0x30);
            *(int *)(unaff_x29 + -0x154) = iVar19;
            unaff_w28 = (long)*(int *)(unaff_x22 + 0x60) + (ulong)uVar15 !=
                        (long)*(int *)(unaff_x29 + -0x11c) | unaff_w24;
          }
          else {
            unaff_w24 = 1;
            unaff_w28 = 1;
            *(int *)(unaff_x29 + -0x154) = iVar19;
          }
          unaff_w26 = *(int *)(unaff_x22 + 0x40);
          in_x9 = (long *)PTR_DAT_0631eb50;
          goto code_r0x05e7521c;
        }
        uVar15 = 0;
        iVar8 = -1;
        *(undefined8 *)(unaff_x29 + -0x160) = 0;
        uVar17 = 1;
        *(undefined4 *)(unaff_x29 + -0x164) = 0;
LAB_05e75484:
        *(int *)(unaff_x29 + -0x150) = iVar8;
        if (0 < iVar18) {
          iVar8 = *(int *)(unaff_x29 + -0x48);
          puVar2 = (undefined4 *)
                   (((ulong)(uint)(iVar8 + *(int *)(unaff_x29 + -0x44)) & 0x3ff) * 0x10 +
                   *(long *)(unaff_x29 + -0x128));
          uVar4 = *(undefined4 *)(unaff_x29 + -0x138);
          puVar2[2] = iVar19;
          puVar2[3] = iVar20;
          iVar8 = iVar8 + 1;
          *(int *)(unaff_x29 + -0x48) = iVar8;
          *puVar2 = uVar4;
          puVar2[1] = iVar18;
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(uVar17 & 1 | (uint)(iVar8 < 0x400),0);
          iVar20 = 0;
          *(undefined4 *)(unaff_x29 + -0x138) = 0;
          iVar19 = 0;
          iVar18 = 0;
          *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
        }
        if (*(int *)(unaff_x22 + 0x34) == 0) {
          lVar12 = *(long *)(unaff_x22 + 0x58);
          if (lVar12 != 0) {
            iVar18 = *(int *)(unaff_x22 + 100);
            iVar1 = *(int *)(unaff_x19 + 0x74);
            iVar19 = *(int *)(lVar12 + 0x18);
            iVar20 = *(int *)(lVar12 + 0x1c);
            iVar8 = *(int *)(unaff_x22 + 0x60) + *(int *)(lVar12 + 0x30);
            *(int *)(unaff_x29 + -0x138) = iVar8;
            *(int *)(unaff_x29 + -0x11c) = iVar18 + iVar8;
            *(int *)(unaff_x19 + 0x74) = iVar1 + iVar18;
            goto LAB_05e75564;
          }
          goto LAB_05e75928;
        }
LAB_05e75564:
        if ((uVar17 & 1) != 0) {
          *(int *)(unaff_x29 + -0x144) = iVar20;
          *(int *)(unaff_x29 + -0x148) = iVar18;
          if (0 < *(int *)(unaff_x29 + -0x48)) {
            FUN_05e80980();
            FUN_05e810d8();
            iVar18 = *(int *)(unaff_x29 + -0x148);
            iVar20 = *(int *)(unaff_x29 + -0x144);
          }
          if (*(int *)(unaff_x22 + 0x34) == 0) goto LAB_05e75794;
          if (*(int *)(unaff_x22 + 0x34) == 0xb) {
            if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_05e75928;
            FUN_05e80dc0();
          }
          FUN_05e83294(unaff_x22,unaff_x20,*(undefined8 *)(unaff_x29 + -0x170),0);
          if ((8 < *(uint *)(unaff_x22 + 0x34)) ||
             ((1 << (ulong)(*(uint *)(unaff_x22 + 0x34) & 0x1f) & 0x186U) == 0)) {
LAB_05e7577c:
            iVar18 = *(int *)(unaff_x29 + -0x148);
            iVar20 = *(int *)(unaff_x29 + -0x144);
            goto LAB_05e75794;
          }
          *(undefined8 *)(unaff_x29 + -0x80) = 0;
          thunk_FUN_02bb0e9c(unaff_x29 + -0x80,0);
          iVar20 = *(int *)(unaff_x19 + 0x94);
          *(undefined1 *)(unaff_x29 + -0x58) = 0;
          *(int *)(unaff_x19 + 0x94) = iVar20 + 1;
          iVar20 = *(int *)(unaff_x22 + 0x34);
          if (iVar20 == 8) {
            lVar12 = *(long *)(unaff_x20 + 0x20);
            if (lVar12 != 0) {
              iVar20 = *(int *)(lVar12 + 0x18) + -1;
              uVar21 = FUN_037a6268(lVar12,iVar20,
                                    *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_73__);
              lVar12 = *(long *)(unaff_x20 + 0x20);
              *(undefined8 *)(unaff_x29 + -0x118) = uVar21;
              if (lVar12 != 0) {
                FUN_037a7c9c(lVar12,iVar20,
                             *(undefined8 *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__
                            );
                iVar20 = *(int *)(unaff_x22 + 0x34);
                goto LAB_05e756d8;
              }
            }
          }
          else {
LAB_05e756d8:
            uVar4 = *(undefined4 *)(unaff_x29 + -0x150);
            if (iVar20 != 7) {
              iVar18 = *(int *)(unaff_x29 + -0x148);
              iVar20 = *(int *)(unaff_x29 + -0x144);
              goto LAB_05e75794;
            }
            lVar12 = *(long *)(unaff_x20 + 0x20);
            if (lVar12 != 0) {
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)UnityEngine_AudioClip_TypeInfo;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar11 = *(uint *)(lVar12 + 0x18);
                if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                  uVar21 = *(undefined8 *)(unaff_x29 + -0x118);
                  puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar11 * 8 + 0x20);
                  *puVar14 = uVar21;
                  thunk_FUN_02bb0e9c(puVar14,uVar21,uVar4);
                }
                else {
                  FUN_037a6538(lVar12,*(undefined8 *)(unaff_x29 + -0x118),
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                *(undefined8 *)(unaff_x29 + -0x118) = *(undefined8 *)(unaff_x22 + 0x38);
                goto LAB_05e7577c;
              }
            }
          }
LAB_05e75928:
          lVar10 = *(long *)(lVar10 + 0x28);
          goto LAB_05e7592c;
        }
LAB_05e75794:
        if (*(int *)(unaff_x22 + 0x34) == 0 && ((uVar15 ^ 0xffffffff) & 1) == 0) {
          FUN_05e81b74();
        }
        unaff_x22 = *(long *)(unaff_x22 + 0x28);
        puVar5 = PTR_DAT_063224e8;
      }
    }
LAB_05e757e4:
    iVar8 = *(int *)(unaff_x29 + -0x48);
    if (0 < iVar18) {
      uVar15 = iVar8 + *(int *)(unaff_x29 + -0x44);
      iVar8 = iVar8 + 1;
      *(int *)(unaff_x29 + -0x48) = iVar8;
      puVar2 = (undefined4 *)(((ulong)uVar15 & 0x3ff) * 0x10 + *(long *)(unaff_x29 + -0x128));
      uVar4 = *(undefined4 *)(unaff_x29 + -0x138);
      puVar2[2] = iVar19;
      puVar2[3] = iVar20;
      *puVar2 = uVar4;
      puVar2[1] = iVar18;
    }
    if (0 < iVar8) {
      FUN_05e80980();
      FUN_05e810d8();
    }
    puVar6 = 
    Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
    ;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45830(unaff_w21 == 0,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e83e7c(unaff_x20,0);
    FUN_05e8070c();
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e52ddc(0);
    if (*(long *)(lVar10 + 0x28) == *(long *)(unaff_x29 + -0x40)) {
      return;
    }
  }
  else {
    iVar20 = *(int *)(unaff_x29 + -0x144);
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      iVar8 = FUN_05e7b2a8(*(long *)(unaff_x19 + 0xb0),*(undefined4 *)(unaff_x22 + 0x40));
      if (iVar8 < 0) {
        iVar19 = *(int *)(unaff_x29 + -0x154);
        iVar18 = *(int *)(unaff_x29 + -0x148);
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_05e75940;
        uVar15 = (uint)(*(int *)(*(long *)(unaff_x19 + 0xb0) + 0x30) < 1);
      }
      else {
        uVar15 = 0;
        iVar19 = *(int *)(unaff_x29 + -0x154);
        iVar18 = *(int *)(unaff_x29 + -0x148);
      }
      uVar11 = uVar15 | unaff_w24;
      unaff_w28 = uVar15 | unaff_w28;
      unaff_w24 = 1;
      goto LAB_05e75330;
    }
LAB_05e75940:
    lVar10 = *(long *)(*(long *)(unaff_x29 + -0x150) + 0x28);
LAB_05e7592c:
    if (lVar10 == *(long *)(unaff_x29 + -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x05e750cc:
  lVar12 = *(long *)(lVar12 + 0x28);
  *(int *)(unaff_x19 + 0x7c) = *(int *)(unaff_x19 + 0x7c) + 1;
  if (lVar12 == 0) {
    unaff_w21 = 1;
    goto LAB_05e757e4;
  }
  goto LAB_05e750b0;
}


