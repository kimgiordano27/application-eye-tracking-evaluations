/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 07736854
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long in_x9;
  long in_x10;
  int *piVar17;
  long unaff_x19;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined8 in_stack_00000008;
  
  piVar17 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar17 + -2) == param_3) {
      puVar8 = (undefined8 *)(param_1 + (long)(*piVar17 + 0x24) * 0x10 + 0x138);
      goto LAB_07736890;
    }
    in_x9 = in_x9 + -1;
    piVar17 = piVar17 + 4;
  } while (in_x9 != 0);
  puVar8 = (undefined8 *)FUN_044822ac();
LAB_07736890:
  iVar6 = (*(code *)*puVar8)();
  puVar5 = PTR_DAT_09f31978;
  puVar4 = PTR_DAT_09f218d8;
  puVar3 = PTR_DAT_09f217e8;
  puVar1 = PTR_DAT_09f1e540;
  if (iVar6 != 1) {
    return 1;
  }
  lVar13 = *(long *)(unaff_x19 + 0x10);
  if (lVar13 != 0) {
    iVar6 = 0;
    while (lVar13 = *(long *)(lVar13 + 0x108), lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) <= iVar6) {
        return 1;
      }
      lVar13 = FUN_05badb74(lVar13,iVar6,*(undefined8 *)PTR_DAT_09f31320);
      puVar2 = PTR_DAT_09f217e0;
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f217e0);
      FUN_05648f00(lVar9,*(undefined8 *)puVar3);
      lVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_05648f00(lVar10,*(undefined8 *)puVar3);
      if (lVar13 == 0) break;
      iVar18 = *(int *)(lVar13 + 0x28);
      lVar21 = (long)iVar18;
      if (iVar18 < *(int *)(lVar13 + 0x30) + iVar18) {
        lVar14 = lVar21 * 0x20;
        do {
          lVar14 = lVar14 + 0x20;
          lVar15 = *(long *)(unaff_x19 + 0x60);
          if (lVar15 == 0) goto LAB_07736bb0;
          uVar20 = (uint)lVar21;
          if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_07736bd8;
          uVar7 = FUN_094fd900(lVar15 + lVar14,0);
          if (lVar9 == 0) goto LAB_07736bb0;
          FUN_0564a0ec(lVar9,uVar7,*(undefined8 *)puVar4);
          lVar15 = *(long *)(unaff_x19 + 0x60);
          if (lVar15 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_07736bd8;
          uVar7 = FUN_094fd910(lVar15 + lVar14,0);
          FUN_0564a0ec(lVar9,uVar7,*(undefined8 *)puVar4);
          lVar15 = *(long *)(unaff_x19 + 0x60);
          if (lVar15 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_07736bd8;
          uVar7 = FUN_094fd920(lVar15 + lVar14,0);
          FUN_0564a0ec(lVar9,uVar7,*(undefined8 *)puVar4);
          lVar15 = *(long *)(unaff_x19 + 0x60);
          if (lVar15 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_07736bd8;
          uVar7 = FUN_094fd930(lVar15 + lVar14,0);
          FUN_0564a0ec(lVar9,uVar7,*(undefined8 *)puVar4);
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar13 + 0x30) + *(int *)(lVar13 + 0x28));
      }
      lVar21 = *(long *)(lVar13 + 0x40);
      if (lVar21 == 0) break;
      uVar19 = 0;
      while ((long)uVar19 < (long)(int)*(uint *)(lVar21 + 0x18)) {
        if (*(uint *)(lVar21 + 0x18) <= uVar19) {
LAB_07736bd8:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (lVar10 == 0) goto LAB_07736bb0;
        FUN_0564a0ec(lVar10,*(undefined4 *)(lVar21 + uVar19 * 4 + 0x20),*(undefined8 *)puVar4);
        lVar21 = *(long *)(lVar13 + 0x40);
        uVar19 = uVar19 + 1;
        if (lVar21 == 0) goto LAB_07736bb0;
      }
      if (lVar10 == 0) break;
      FUN_0564a5fc(lVar10,lVar9,*(undefined8 *)PTR_DAT_09f31968);
      if (0 < *(int *)(lVar10 + 0x20)) {
        if (lVar9 == 0) break;
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar9 + 0x20);
        uVar11 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar10 + 0x20);
        uVar12 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        uVar11 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31970,uVar11,*(undefined8 *)PTR_DAT_09f1e7d0
                              ,uVar12,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        FUN_094c6b48(uVar11,0);
      }
      lVar9 = *(long *)(lVar13 + 0x40);
      if (lVar9 == 0) break;
      iVar18 = 0;
      while (iVar16 = (int)*(undefined8 *)(lVar9 + 0x18), iVar18 < iVar16) {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07736bb0;
        if (*(int *)(*(long *)(unaff_x19 + 0x38) + 0x18) < iVar18) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6b48(*(undefined8 *)puVar5,0);
          lVar9 = *(long *)(lVar13 + 0x40);
        }
        iVar18 = iVar18 + 1;
        if (lVar9 == 0) goto LAB_07736bb0;
      }
      if (iVar16 < 1) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c652c(*(undefined8 *)PTR_DAT_09f31980,0);
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      iVar6 = iVar6 + 1;
      if (lVar13 == 0) break;
    }
  }
LAB_07736bb0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


