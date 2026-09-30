/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Extensions.Vector2Extensions$$Add
ENTRY_POINT: 0775337c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Extensions_Vector2Extensions__Add(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int in_w9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w24;
  uint uVar17;
  long unaff_x25;
  uint unaff_w26;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  long *in_stack_000000a8;
  long in_stack_00000110;
  
  iVar6 = (**(code **)(param_1 + (long)(in_w9 + 0x24) * 0x10 + 0x138))();
  puVar4 = PTR_DAT_09f32840;
  if (iVar6 == 1) {
    FUN_060f74d0();
    FUN_060f7b4c();
    FUN_060f74d0(in_stack_00000098,in_stack_00000090,*(undefined8 *)puVar4);
    if (in_stack_000000a8 == (long *)0x0) goto LAB_07753b14;
    lVar9 = *in_stack_000000a8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 10) * 0x10 + 0x138);
          goto LAB_07753508;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(in_stack_000000a8,*(long *)PTR_DAT_09f312c0,10);
LAB_07753508:
    (*(code *)*puVar7)(in_stack_000000a8);
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) goto LAB_07753b14;
    uVar8 = FUN_0952a094(*(long *)(unaff_x20 + 0x18),0);
    FUN_07753b44(uVar8,uVar8,unaff_w24,unaff_w22,unaff_w19,in_stack_00000098,in_stack_00000090);
  }
  uVar17 = *(uint *)(unaff_x21 + 8);
  if (((unaff_w26 & uVar17) >> 4 & 1) != 0) {
    if (unaff_x20 == 0) goto LAB_07753b14;
    FUN_07753f60();
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 6 & 1) != 0) {
    FUN_077544cc();
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  puVar5 = PTR_DAT_09f32838;
  puVar4 = PTR_DAT_09f32830;
  if (((unaff_w26 & uVar17) >> 7 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x21 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 8 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x21 + 200);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 9 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x21 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 10 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x21 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 0xb & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x21 + 0xf8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 0xc & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748b04();
    auVar18 = FUN_060f6e6c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x21 + 0x108);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e18dc(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  puVar5 = PTR_DAT_09f32848;
  puVar4 = PTR_DAT_09f32828;
  if (((unaff_w26 & uVar17) >> 3 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_07753b14;
    auVar18 = FUN_07748cc8();
    auVar18 = FUN_060f26cc(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar5);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x21 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e184c(auVar18._0_8_,auVar18._8_8_,uVar8,uVar1,unaff_w19,*(undefined8 *)puVar4);
  }
  if ((in_stack_000000a0 & 0x100000000) != 0) {
    if (in_stack_000000a8 == (long *)0x0) goto LAB_07753b14;
    lVar9 = *in_stack_000000a8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
          goto LAB_07753920;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(in_stack_000000a8,*(long *)PTR_DAT_09f312c0,0xf);
LAB_07753920:
    (*(code *)*puVar7)(in_stack_000000a8);
  }
  if ((in_stack_000000a0 & 1) == 0) {
    return;
  }
  if (in_stack_00000110 != 0) {
    uVar17 = *(uint *)(in_stack_00000110 + 0x18);
    uVar10 = (ulong)uVar17;
    if (0 < (long)(uVar10 << 0x20)) {
      uVar11 = 0;
      do {
        if (unaff_x20 == 0) goto LAB_07753b14;
        if (uVar10 == uVar11) goto LAB_07753b38;
        lVar9 = *(long *)(unaff_x20 + 0x70);
        if (lVar9 == 0) goto LAB_07753b14;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_07753b38;
        lVar15 = uVar11 * 4;
        lVar14 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar9 + lVar14 + 0x20) = *(undefined4 *)(in_stack_00000110 + 0x20 + lVar15);
      } while ((long)(int)uVar17 != uVar11);
    }
    if ((unaff_x20 != 0) && (lVar9 = *(long *)(unaff_x20 + 0xd0), lVar9 != 0)) {
      uVar17 = 0;
      do {
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar17) {
          return;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar17) {
LAB_07753b38:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar9 == 0) break;
        lVar9 = *(long *)(lVar9 + 0x10);
        if (unaff_w19 != 0) {
          if (lVar9 == 0) break;
          uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
          if (0 < (long)(uVar11 << 0x20)) {
            lVar14 = (long)(int)*(uint *)(lVar9 + 0x18);
            piVar12 = (int *)(lVar9 + 0x20);
            do {
              if (uVar11 == 0) goto LAB_07753b38;
              lVar14 = lVar14 + -1;
              uVar11 = uVar11 - 1;
              *piVar12 = *piVar12 + unaff_w19;
              piVar12 = piVar12 + 1;
            } while (lVar14 != 0);
          }
        }
        if (*(char *)(unaff_x20 + 0x69) != '\0') {
          if (lVar9 == 0) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar2) {
            uVar13 = 1;
            do {
              if ((uVar2 <= uVar13 - 1) || (uVar2 <= uVar13)) goto LAB_07753b38;
              lVar14 = lVar9 + (long)(int)uVar13 * 4;
              puVar16 = (undefined4 *)(lVar9 + (long)(int)(uVar13 - 1) * 4 + 0x20);
              uVar3 = *puVar16;
              iVar6 = uVar13 + 2;
              uVar13 = uVar13 + 3;
              *puVar16 = *(undefined4 *)(lVar14 + 0x20);
              *(undefined4 *)(lVar14 + 0x20) = uVar3;
            } while (iVar6 < (int)uVar2);
          }
        }
        lVar14 = *(long *)(unaff_x20 + 0x80);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_07753b38;
        lVar15 = *(long *)(unaff_x21 + 0x130);
        if (lVar15 == 0) break;
        uVar2 = *(uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
        lVar14 = (long)(int)uVar2;
        if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_07753b38;
        lVar15 = *(long *)(lVar15 + lVar14 * 8 + 0x20);
        if (lVar15 == 0) break;
        if ((uint)uVar10 <= uVar2) goto LAB_07753b38;
        if (lVar9 == 0) break;
        piVar12 = (int *)(in_stack_00000110 + lVar14 * 4 + 0x20);
        FUN_07a61200(lVar9,*(undefined8 *)(lVar15 + 0x10),*piVar12,0);
        lVar15 = *(long *)(unaff_x20 + 0x78);
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_07753b38;
        lVar15 = lVar15 + lVar14 * 4;
        iVar6 = *(int *)(lVar9 + 0x18);
        *(int *)(lVar15 + 0x20) = *(int *)(lVar15 + 0x20) + iVar6;
        uVar10 = *(ulong *)(in_stack_00000110 + 0x18);
        if ((uint)uVar10 <= uVar2) goto LAB_07753b38;
        uVar17 = uVar17 + 1;
        *piVar12 = *piVar12 + iVar6;
        lVar9 = *(long *)(unaff_x20 + 0xd0);
      } while (lVar9 != 0);
    }
  }
LAB_07753b14:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


