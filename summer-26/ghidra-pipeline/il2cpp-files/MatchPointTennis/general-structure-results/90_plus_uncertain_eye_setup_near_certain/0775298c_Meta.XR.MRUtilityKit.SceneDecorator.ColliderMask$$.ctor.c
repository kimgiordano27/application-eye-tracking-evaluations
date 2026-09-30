/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$.ctor
ENTRY_POINT: 0775298c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 in_x9;
  long lVar9;
  long lVar10;
  long lVar11;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000e0;
  int iStack00000000000000e4;
  int in_stack_000000e8;
  uint uStack00000000000000ec;
  
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x23 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack0000000000000014 = unaff_w27;
  uStack0000000000000018 = in_x9;
  uStack0000000000000024 = unaff_w29;
  if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f31aa0);
  }
  FUN_050e15f4(uVar7,uVar2,unaff_w26,uVar1,uVar3,uStack0000000000000024,uStack0000000000000014,
               *(undefined8 *)PTR_DAT_09f32818);
  uVar4 = *(uint *)(unaff_x23 + 8);
  uVar5 = uStack0000000000000024;
  if ((uVar4 >> 1 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f31aa0,in_stack_00000008);
    }
    FUN_050e15f4(uStack0000000000000018,in_stack_00000008,unaff_w26,uVar7,uVar1,
                 uStack0000000000000024,uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32818);
    uVar4 = *(uint *)(unaff_x23 + 8);
    uVar5 = uStack0000000000000024;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e16b8(in_stack_00000030,in_stack_00000028,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32820);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 4 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x98);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_00000040,in_stack_00000038,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e146c(in_stack_00000050,in_stack_00000048,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32808);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 6 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xa8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_00000060,in_stack_00000058,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 7 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_00000070,in_stack_00000068,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 8 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x23 + 200);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_00000080,in_stack_00000078,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 9 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_00000090,in_stack_00000088,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 10 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_000000a0,in_stack_00000098,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 0xb & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x23 + 0xf8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_000000b0,in_stack_000000a8,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x108);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e1530(in_stack_000000c0,in_stack_000000b8,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32810);
    uVar4 = *(uint *)(unaff_x23 + 8);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x23 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_050e13a8(in_stack_000000d0,in_stack_000000c8,unaff_w26,uVar7,uVar1,uVar5,
                 uStack0000000000000014,*(undefined8 *)PTR_DAT_09f32800);
  }
  puVar6 = PTR_DAT_09f31348;
  uStack00000000000000ec = 0;
  lVar9 = *(long *)(unaff_x23 + 0x130);
  while (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) <= (int)uStack00000000000000ec) {
      return;
    }
    if (unaff_x28 == 0) break;
    if (*(uint *)(unaff_x28 + 0x18) <= uStack00000000000000ec) {
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar9 = (long)(int)uStack00000000000000ec;
    lVar10 = *(long *)(unaff_x28 + lVar9 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar11 = *(long *)(unaff_x22 + 0x70), lVar11 == 0)) break;
    if (*(uint *)(lVar11 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    in_stack_000000e8 = *(int *)(lVar11 + lVar9 * 4 + 0x20);
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar10 = *(long *)(unaff_x22 + 0x78);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    iStack00000000000000e4 = *(int *)(lVar10 + lVar9 * 4 + 0x20);
    if (3 < unaff_w19) {
      lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
      if (lVar9 == 0) break;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
      uVar7 = FUN_07a3b850(&stack0x000000ec,0);
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar7);
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x30));
      uVar7 = FUN_07a3b850(&stack0x000000e8,0);
      if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x38) = uVar7;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar7);
      if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x40));
      uVar7 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
      if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x48) = uVar7;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar7);
      if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x23 + 0x130) == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
      uVar7 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x58) = uVar7;
      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar7);
      if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
      thunk_FUN_044bb4b4();
      if (unaff_x20 == 0) break;
      uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
      uVar7 = FUN_07a3b850(&stack0x000000e0,0);
      if (*(uint *)(lVar9 + 0x18) < 10) goto LAB_0775315c;
      *(undefined8 *)(lVar9 + 0x68) = uVar7;
      thunk_FUN_044bb4b4();
      uVar7 = FUN_078b57fc(lVar9,0);
      plVar8 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      lVar9 = thunk_FUN_04484e3c(*(undefined8 *)puVar6,&stack0x000000dc);
      if (plVar8 == (long *)0x0) break;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
        uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar7,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_0775315c;
      plVar8[4] = lVar9;
      thunk_FUN_044bb4b4(plVar8 + 4,lVar9);
      FUN_0771ec00(uVar7,plVar8,0);
    }
    if (in_stack_000000e8 < iStack00000000000000e4 + in_stack_000000e8) {
      if (lVar11 == 0) break;
      uVar4 = *(uint *)(lVar11 + 0x18);
      lVar9 = (long)in_stack_000000e8;
      do {
        if (uVar4 <= (uint)lVar9) goto LAB_0775315c;
        *(int *)(lVar11 + 0x20 + lVar9 * 4) = *(int *)(lVar11 + 0x20 + lVar9 * 4) - unaff_w21;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iStack00000000000000e4 + in_stack_000000e8);
    }
    lVar9 = *(long *)(unaff_x23 + 0x130);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    lVar9 = *(long *)(lVar9 + (long)(int)uStack00000000000000ec * 8 + 0x20);
    if ((lVar9 == 0) || (unaff_x20 == 0)) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
    FUN_07a612b4(lVar11,in_stack_000000e8,*(undefined8 *)(lVar9 + 0x10),
                 *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),
                 iStack00000000000000e4,0);
    uStack00000000000000ec = uStack00000000000000ec + 1;
    lVar9 = *(long *)(unaff_x23 + 0x130);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


