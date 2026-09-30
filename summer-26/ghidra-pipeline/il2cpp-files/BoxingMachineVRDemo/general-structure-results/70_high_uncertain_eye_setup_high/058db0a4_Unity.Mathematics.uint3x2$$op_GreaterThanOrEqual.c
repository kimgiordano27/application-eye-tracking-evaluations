/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_GreaterThanOrEqual
ENTRY_POINT: 058db0a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_13
*/


void Unity_Mathematics_uint3x2__op_GreaterThanOrEqual
               (ulong param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x21;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined8 uStack0000000000000000;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767c48);
    FUN_02d6084c(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06761100);
    FUN_02d6084c(PTR_DAT_06761098);
    FUN_02d6084c(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067626b8);
    FUN_02d6084c(PTR_DAT_067626c0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    *(undefined1 *)(unaff_x21 + 0xb27) = 1;
  }
  puVar5 = PTR_DAT_06767fc8;
  puVar4 = PTR_DAT_067626c0;
  if (param_3 != 0) {
    uVar8 = FUN_0636a7fc(param_3,0);
    puVar3 = OVRPlugin_OVRP_1_51_0_TypeInfo;
    if ((uVar8 & 1) == 0) {
LAB_058db21c:
      puVar3 = PTR_DAT_0675e1b8;
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      puVar6 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      uVar11 = UnityEngine_Font__add_textureRebuilt(param_4,0,0);
      if ((uVar11 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_3 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = UnityEngine_Font__add_textureRebuilt(uVar10,0,0);
        if ((uVar11 & 1) == 0) {
LAB_058db380:
          plVar18 = (long *)(param_3 + 0x20);
          lVar9 = *plVar18;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,param_4,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_0606f530(param_4,0);
            if ((uVar11 & 1) != 0) {
              return;
            }
          }
          lVar9 = FUN_0636fcc4(*plVar18,param_4,0);
          if (lVar9 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_0606a288(lVar9,0);
          }
          if (param_4 != 0) {
            plVar12 = (long *)FUN_033f3a08(param_4,*(undefined8 *)OVRPlugin_OVRP_1_52_0_TypeInfo);
            if (plVar12 == (long *)0x0) {
              uStack0000000000000000 = 0;
            }
            else {
              bVar7 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar7) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar7 * 8 + -8) !=
                  *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88();
              }
              uStack0000000000000000 = FUN_06066c74(plVar12,0);
            }
            lVar9 = *plVar18;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_0606a004(lVar9,0,0);
            if ((uVar11 & 1) != 0) {
              if (*plVar18 == 0) goto LAB_058db308;
              lVar9 = FUN_0606a288(*plVar18,0);
              while( true ) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_0606a004(lVar9,0,0);
                if ((uVar11 & 1) == 0) break;
                if (*(char *)(param_2 + 0x28) == '\0') {
LAB_058db4f4:
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,uStack0000000000000000,0);
                  if ((uVar11 & 1) != 0) break;
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,uVar10,0);
                  if ((uVar11 & 1) != 0) break;
                  if (*(char *)(param_2 + 0x28) == '\0') goto LAB_058db4f4;
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_0606a004(lVar9,uVar10,0);
                if ((uVar11 & 1) == 0) {
                  bVar7 = 0;
                }
                else {
                  lVar19 = *plVar18;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  bVar7 = FUN_0606a004(lVar19,param_4,0);
                  bVar7 = bVar7 & 1;
                }
                *(byte *)(param_3 + 0x17c) = bVar7;
                if (lVar9 == 0) goto LAB_058db308;
                uVar13 = FUN_06066d44(lVar9,0);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)puVar5);
                }
                if (DAT_06b80b99 == '\0') {
                  FUN_02d6084c(puVar5);
                  DAT_06b80b99 = '\x01';
                }
                lVar19 = *(long *)puVar5;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar19 = *(long *)puVar5;
                }
                FUN_033c3938(uVar13,param_3,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x10),
                             *(undefined8 *)puVar6);
                lVar19 = *(long *)(param_3 + 0xf0);
                uVar13 = FUN_06066d44(lVar9,0);
                if (lVar19 == 0) goto LAB_058db308;
                FUN_03aad8e0(lVar19,uVar13,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
                if (*(char *)(param_2 + 0x28) != '\0') {
                  lVar9 = thunk_FUN_060795f8(lVar9,0);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,uVar10,0);
                if ((uVar11 & 1) != 0) break;
                if (*(char *)(param_2 + 0x28) == '\0') {
                  if (lVar9 == 0) goto LAB_058db308;
                  lVar9 = thunk_FUN_060795f8(lVar9,0);
                }
              }
            }
            lVar9 = *plVar18;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_0606f530(lVar9,0);
            uVar13 = 0;
            if ((uVar11 & 1) != 0) {
              if (*plVar18 == 0) goto LAB_058db308;
              uVar13 = FUN_0606a288(*plVar18,0);
            }
            *plVar18 = param_4;
            thunk_FUN_02dd37b4(plVar18,param_4);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_0606a004(param_4,0,0);
            if ((uVar11 & 1) != 0) {
              lVar9 = FUN_0606a288(param_4,0);
              puVar6 = OVRPlugin_OVRP_1_49_0_TypeInfo;
              puVar4 = PTR_DAT_06761100;
              while( true ) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_0606a004(lVar9,0,0);
                if (((uVar11 & 1) == 0) || (uVar11 = FUN_058daf80(param_2,lVar9), (uVar11 & 1) != 0)
                   ) break;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,uVar10,0);
                if ((uVar11 & 1) == 0) {
                  *(undefined1 *)(param_3 + 0x17d) = 0;
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  bVar7 = FUN_0606a004(lVar9,uVar13,0);
                  *(byte *)(param_3 + 0x17d) = bVar7 & 1;
                  if ((*(char *)(param_2 + 0x28) != '\0') && ((bVar7 & 1) != 0)) {
                    return;
                  }
                }
                if (lVar9 == 0) goto LAB_058db308;
                uVar14 = FUN_06066d44(lVar9,0);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)puVar5);
                }
                if (DAT_06b80b9a == '\0') {
                  FUN_02d6084c(puVar5);
                  DAT_06b80b9a = '\x01';
                }
                lVar19 = *(long *)puVar5;
                if (*(int *)(lVar19 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar19 = *(long *)puVar5;
                }
                FUN_033c3938(uVar14,param_3,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8),
                             *(undefined8 *)puVar6);
                if ((uVar8 & 1) != 0) {
                  uVar14 = FUN_06066d44(lVar9,0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)puVar5);
                  }
                  if (DAT_06b80b98 == '\0') {
                    FUN_02d6084c(puVar5);
                    DAT_06b80b98 = '\x01';
                  }
                  lVar19 = *(long *)puVar5;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar19 = *(long *)puVar5;
                  }
                  FUN_033c3938(uVar14,param_3,**(undefined8 **)(lVar19 + 0xb8),
                               *(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo);
                }
                lVar19 = *(long *)(param_3 + 0xf0);
                uVar14 = FUN_06066d44(lVar9,0);
                if (lVar19 == 0) goto LAB_058db308;
                lVar15 = *(long *)(lVar19 + 0x10);
                lVar16 = *(long *)puVar4;
                *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_058db308;
                uVar2 = *(uint *)(lVar19 + 0x18);
                if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar19 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar19,uVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                if (*(char *)(param_2 + 0x28) == '\0') {
                  lVar19 = FUN_0335b1b8(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
                  if (lVar19 != 0) {
                    return;
                  }
                  if (*(char *)(param_2 + 0x28) != '\0') goto LAB_058db90c;
                }
                else {
LAB_058db90c:
                  lVar9 = thunk_FUN_060795f8(lVar9,0);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = UnityEngine_Font__add_textureRebuilt(lVar9,uVar10,0);
                if ((uVar11 & 1) != 0) {
                  return;
                }
                if (*(char *)(param_2 + 0x28) == '\0') {
                  if (lVar9 == 0) goto LAB_058db308;
                  lVar9 = thunk_FUN_060795f8(lVar9,0);
                }
              }
            }
            return;
          }
          goto LAB_058db308;
        }
      }
      lVar9 = *(long *)(param_3 + 0xf0);
      if (lVar9 != 0) {
        iVar17 = 0;
        do {
          iVar1 = *(int *)(lVar9 + 0x18);
          if (iVar1 <= iVar17) {
            *(undefined4 *)(lVar9 + 0x18) = 0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_05029664(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = UnityEngine_Font__add_textureRebuilt(param_4,0,0);
            if ((uVar11 & 1) != 0) {
              *(undefined8 *)(param_3 + 0x20) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x20),0);
              return;
            }
            goto LAB_058db380;
          }
          uVar10 = FUN_03aac1c4(lVar9,iVar17,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar5);
          }
          if (DAT_06b80b99 == '\0') {
            FUN_02d6084c(puVar5);
            DAT_06b80b99 = '\x01';
          }
          lVar9 = *(long *)puVar5;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *(long *)puVar5;
          }
          FUN_033c3938(uVar10,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),
                       *(undefined8 *)puVar6);
          lVar9 = *(long *)(param_3 + 0xf0);
          iVar17 = iVar17 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      lVar9 = *(long *)(param_3 + 0xf0);
      if (lVar9 != 0) {
        iVar17 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar17) goto LAB_058db21c;
          uVar10 = FUN_03aac1c4(lVar9,iVar17,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar5);
          }
          if (DAT_06b80b98 == '\0') {
            FUN_02d6084c(puVar5);
            DAT_06b80b98 = '\x01';
          }
          lVar9 = *(long *)puVar5;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *(long *)puVar5;
          }
          FUN_033c3938(uVar10,param_3,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar3);
          lVar9 = *(long *)(param_3 + 0xf0);
          iVar17 = iVar17 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


