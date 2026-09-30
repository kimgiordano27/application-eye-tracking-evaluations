/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_UnaryNegation
ENTRY_POINT: 058db14c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_UnaryNegation(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int iVar16;
  long *plVar17;
  long lVar18;
  undefined8 uStack0000000000000000;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x21 + 0xb27) = 1;
  puVar5 = PTR_DAT_06767fc8;
  puVar4 = PTR_DAT_067626c0;
  if (unaff_x19 != 0) {
    uVar7 = FUN_0636a7fc();
    if ((uVar7 & 1) == 0) {
LAB_058db21c:
      puVar3 = PTR_DAT_0675e1b8;
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar10 & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = UnityEngine_Font__add_textureRebuilt(uVar9,0,0);
        if ((uVar10 & 1) == 0) {
LAB_058db380:
          plVar17 = (long *)(unaff_x19 + 0x20);
          lVar8 = *plVar17;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0606f530();
            if ((uVar10 & 1) != 0) {
              return;
            }
          }
          lVar8 = FUN_0636fcc4(*plVar17);
          if (lVar8 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_0606a288(lVar8,0);
          }
          if (unaff_x23 != 0) {
            plVar11 = (long *)FUN_033f3a08();
            if (plVar11 == (long *)0x0) {
              uStack0000000000000000 = 0;
            }
            else {
              bVar6 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar6) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) !=
                  *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88();
              }
              uStack0000000000000000 = FUN_06066c74(plVar11,0);
            }
            lVar8 = *plVar17;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0606a004(lVar8,0,0);
            if ((uVar10 & 1) != 0) {
              if (*plVar17 == 0) goto LAB_058db308;
              lVar8 = FUN_0606a288(*plVar17,0);
              while( true ) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_0606a004(lVar8,0,0);
                if ((uVar10 & 1) == 0) break;
                if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,uStack0000000000000000,0);
                  if ((uVar10 & 1) != 0) break;
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar9,0);
                  if ((uVar10 & 1) != 0) break;
                  if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_0606a004(lVar8,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  bVar6 = 0;
                }
                else {
                  lVar18 = *plVar17;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  bVar6 = FUN_0606a004(lVar18);
                  bVar6 = bVar6 & 1;
                }
                *(byte *)(unaff_x19 + 0x17c) = bVar6;
                if (lVar8 == 0) goto LAB_058db308;
                uVar12 = FUN_06066d44(lVar8,0);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)puVar5);
                }
                if (DAT_06b80b99 == '\0') {
                  FUN_02d6084c(puVar5);
                  DAT_06b80b99 = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_033c3938(uVar12);
                lVar18 = *(long *)(unaff_x19 + 0xf0);
                uVar12 = FUN_06066d44(lVar8,0);
                if (lVar18 == 0) goto LAB_058db308;
                FUN_03aad8e0(lVar18,uVar12,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
                if (*(char *)(unaff_x20 + 0x28) != '\0') {
                  lVar8 = thunk_FUN_060795f8(lVar8,0);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar9,0);
                if ((uVar10 & 1) != 0) break;
                if (*(char *)(unaff_x20 + 0x28) == '\0') {
                  if (lVar8 == 0) goto LAB_058db308;
                  lVar8 = thunk_FUN_060795f8(lVar8,0);
                }
              }
            }
            lVar8 = *plVar17;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0606f530(lVar8,0);
            uVar12 = 0;
            if ((uVar10 & 1) != 0) {
              if (*plVar17 == 0) goto LAB_058db308;
              uVar12 = FUN_0606a288(*plVar17,0);
            }
            *plVar17 = unaff_x23;
            thunk_FUN_02dd37b4(plVar17);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_0606a004();
            if ((uVar10 & 1) != 0) {
              lVar8 = FUN_0606a288();
              puVar4 = PTR_DAT_06761100;
              while( true ) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_0606a004(lVar8,0,0);
                if (((uVar10 & 1) == 0) || (uVar10 = FUN_058daf80(), (uVar10 & 1) != 0)) break;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  *(undefined1 *)(unaff_x19 + 0x17d) = 0;
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  bVar6 = FUN_0606a004(lVar8,uVar12,0);
                  *(byte *)(unaff_x19 + 0x17d) = bVar6 & 1;
                  if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar6 & 1) != 0)) {
                    return;
                  }
                }
                if (lVar8 == 0) goto LAB_058db308;
                uVar13 = FUN_06066d44(lVar8,0);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)puVar5);
                }
                if (DAT_06b80b9a == '\0') {
                  FUN_02d6084c(puVar5);
                  DAT_06b80b9a = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_033c3938(uVar13);
                if ((uVar7 & 1) != 0) {
                  uVar13 = FUN_06066d44(lVar8,0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)puVar5);
                  }
                  if (DAT_06b80b98 == '\0') {
                    FUN_02d6084c(puVar5);
                    DAT_06b80b98 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_033c3938(uVar13);
                }
                lVar18 = *(long *)(unaff_x19 + 0xf0);
                uVar13 = FUN_06066d44(lVar8,0);
                if (lVar18 == 0) goto LAB_058db308;
                lVar14 = *(long *)(lVar18 + 0x10);
                lVar15 = *(long *)puVar4;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_058db308;
                uVar2 = *(uint *)(lVar18 + 0x18);
                if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar18,uVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                if (*(char *)(unaff_x20 + 0x28) == '\0') {
                  lVar18 = FUN_0335b1b8(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
                  if (lVar18 != 0) {
                    return;
                  }
                  if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
                }
                else {
LAB_058db90c:
                  lVar8 = thunk_FUN_060795f8(lVar8,0);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar9,0);
                if ((uVar10 & 1) != 0) {
                  return;
                }
                if (*(char *)(unaff_x20 + 0x28) == '\0') {
                  if (lVar8 == 0) goto LAB_058db308;
                  lVar8 = thunk_FUN_060795f8(lVar8,0);
                }
              }
            }
            return;
          }
          goto LAB_058db308;
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0xf0);
      if (lVar8 != 0) {
        iVar16 = 0;
        do {
          iVar1 = *(int *)(lVar8 + 0x18);
          if (iVar1 <= iVar16) {
            *(undefined4 *)(lVar8 + 0x18) = 0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_05029664(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = UnityEngine_Font__add_textureRebuilt();
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)(unaff_x19 + 0x20) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x20),0);
              return;
            }
            goto LAB_058db380;
          }
          uVar9 = FUN_03aac1c4(lVar8,iVar16,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar5);
          }
          if (DAT_06b80b99 == '\0') {
            FUN_02d6084c(puVar5);
            DAT_06b80b99 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_033c3938(uVar9);
          lVar8 = *(long *)(unaff_x19 + 0xf0);
          iVar16 = iVar16 + 1;
        } while (lVar8 != 0);
      }
    }
    else {
      lVar8 = *(long *)(unaff_x19 + 0xf0);
      if (lVar8 != 0) {
        iVar16 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar16) goto LAB_058db21c;
          uVar9 = FUN_03aac1c4(lVar8,iVar16,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar5);
          }
          if (DAT_06b80b98 == '\0') {
            FUN_02d6084c(puVar5);
            DAT_06b80b98 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_033c3938(uVar9);
          lVar8 = *(long *)(unaff_x19 + 0xf0);
          iVar16 = iVar16 + 1;
        } while (lVar8 != 0);
      }
    }
  }
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


