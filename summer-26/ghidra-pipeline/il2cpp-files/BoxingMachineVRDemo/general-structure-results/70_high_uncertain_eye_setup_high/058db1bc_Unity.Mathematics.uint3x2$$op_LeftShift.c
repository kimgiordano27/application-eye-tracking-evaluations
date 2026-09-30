/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_LeftShift
ENTRY_POINT: 058db1bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_LeftShift(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  int iVar13;
  undefined8 uVar14;
  undefined8 unaff_x25;
  long *plVar15;
  undefined8 *unaff_x26;
  undefined1 unaff_w27;
  long lVar16;
  undefined8 uStack0000000000000000;
  ulong in_stack_00000008;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(param_1);
    }
    if (*(char *)(unaff_x22 + 0xb98) == '\0') {
      FUN_02d6084c();
      *(undefined1 *)(unaff_x22 + 0xb98) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_033c3938(unaff_x25);
    puVar3 = PTR_DAT_0675e1b8;
    lVar6 = *(long *)(unaff_x19 + 0xf0);
    unaff_w24 = unaff_w24 + 1;
    if (lVar6 == 0) goto LAB_058db308;
    if (*(int *)(lVar6 + 0x18) <= unaff_w24) break;
    unaff_x25 = FUN_03aac1c4(lVar6,unaff_w24,*unaff_x26);
    param_1 = *unaff_x21;
  }
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt();
  if ((uVar7 & 1) == 0) {
    uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = UnityEngine_Font__add_textureRebuilt(uVar14,0,0);
    if ((uVar7 & 1) == 0) {
LAB_058db380:
      plVar15 = (long *)(unaff_x19 + 0x20);
      lVar6 = *plVar15;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606f530();
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      lVar6 = FUN_0636fcc4(*plVar15);
      if (lVar6 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_0606a288(lVar6,0);
      }
      if (unaff_x23 != 0) {
        plVar8 = (long *)FUN_033f3a08();
        if (plVar8 == (long *)0x0) {
          uStack0000000000000000 = 0;
        }
        else {
          bVar5 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88();
          }
          uStack0000000000000000 = FUN_06066c74(plVar8,0);
        }
        lVar6 = *plVar15;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606a004(lVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (*plVar15 == 0) goto LAB_058db308;
          lVar6 = FUN_0606a288(*plVar15,0);
          while( true ) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_0606a004(lVar6,0,0);
            if ((uVar7 & 1) == 0) break;
            if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uStack0000000000000000,0);
              if ((uVar7 & 1) != 0) break;
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar14,0);
              if ((uVar7 & 1) != 0) break;
              if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_0606a004(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              bVar5 = 0;
            }
            else {
              lVar16 = *plVar15;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              bVar5 = FUN_0606a004(lVar16);
              bVar5 = bVar5 & 1;
            }
            *(byte *)(unaff_x19 + 0x17c) = bVar5;
            if (lVar6 == 0) goto LAB_058db308;
            uVar9 = FUN_06066d44(lVar6,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*unaff_x21);
            }
            if (DAT_06b80b99 == '\0') {
              FUN_02d6084c();
              DAT_06b80b99 = '\x01';
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_033c3938(uVar9);
            lVar16 = *(long *)(unaff_x19 + 0xf0);
            uVar9 = FUN_06066d44(lVar6,0);
            if (lVar16 == 0) goto LAB_058db308;
            FUN_03aad8e0(lVar16,uVar9,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
            if (*(char *)(unaff_x20 + 0x28) != '\0') {
              lVar6 = thunk_FUN_060795f8(lVar6,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar14,0);
            if ((uVar7 & 1) != 0) break;
            if (*(char *)(unaff_x20 + 0x28) == '\0') {
              if (lVar6 == 0) goto LAB_058db308;
              lVar6 = thunk_FUN_060795f8(lVar6,0);
            }
          }
        }
        lVar6 = *plVar15;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606f530(lVar6,0);
        uVar9 = 0;
        if ((uVar7 & 1) != 0) {
          if (*plVar15 == 0) goto LAB_058db308;
          uVar9 = FUN_0606a288(*plVar15,0);
        }
        *plVar15 = unaff_x23;
        thunk_FUN_02dd37b4(plVar15);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606a004();
        if ((uVar7 & 1) != 0) {
          lVar6 = FUN_0606a288();
          puVar4 = PTR_DAT_06761100;
          while( true ) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = FUN_0606a004(lVar6,0,0);
            if (((uVar7 & 1) == 0) || (uVar7 = FUN_058daf80(), (uVar7 & 1) != 0)) break;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              *(undefined1 *)(unaff_x19 + 0x17d) = 0;
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              bVar5 = FUN_0606a004(lVar6,uVar9,0);
              *(byte *)(unaff_x19 + 0x17d) = bVar5 & 1;
              if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar5 & 1) != 0)) {
                return;
              }
            }
            if (lVar6 == 0) goto LAB_058db308;
            uVar10 = FUN_06066d44(lVar6,0);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*unaff_x21);
            }
            if (DAT_06b80b9a == '\0') {
              FUN_02d6084c();
              DAT_06b80b9a = '\x01';
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_033c3938(uVar10);
            if ((in_stack_00000008 & 0x100000000) != 0) {
              uVar10 = FUN_06066d44(lVar6,0);
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*unaff_x21);
              }
              if (DAT_06b80b98 == '\0') {
                FUN_02d6084c();
                DAT_06b80b98 = '\x01';
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_033c3938(uVar10);
            }
            lVar16 = *(long *)(unaff_x19 + 0xf0);
            uVar10 = FUN_06066d44(lVar6,0);
            if (lVar16 == 0) goto LAB_058db308;
            lVar11 = *(long *)(lVar16 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_058db308;
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(lVar16,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if (*(char *)(unaff_x20 + 0x28) == '\0') {
              lVar16 = FUN_0335b1b8(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
              if (lVar16 != 0) {
                return;
              }
              if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
            }
            else {
LAB_058db90c:
              lVar6 = thunk_FUN_060795f8(lVar6,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar14,0);
            if ((uVar7 & 1) != 0) {
              return;
            }
            if (*(char *)(unaff_x20 + 0x28) == '\0') {
              if (lVar6 == 0) goto LAB_058db308;
              lVar6 = thunk_FUN_060795f8(lVar6,0);
            }
          }
        }
        return;
      }
      goto LAB_058db308;
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0xf0);
  if (lVar6 != 0) {
    iVar13 = 0;
    do {
      iVar1 = *(int *)(lVar6 + 0x18);
      if (iVar1 <= iVar13) {
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05029664(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = UnityEngine_Font__add_textureRebuilt();
        if ((uVar7 & 1) != 0) {
          *(undefined8 *)(unaff_x19 + 0x20) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x20),0);
          return;
        }
        goto LAB_058db380;
      }
      uVar14 = FUN_03aac1c4(lVar6,iVar13,*unaff_x26);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*unaff_x21);
      }
      if (DAT_06b80b99 == '\0') {
        FUN_02d6084c();
        DAT_06b80b99 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_033c3938(uVar14);
      lVar6 = *(long *)(unaff_x19 + 0xf0);
      iVar13 = iVar13 + 1;
    } while (lVar6 != 0);
  }
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


