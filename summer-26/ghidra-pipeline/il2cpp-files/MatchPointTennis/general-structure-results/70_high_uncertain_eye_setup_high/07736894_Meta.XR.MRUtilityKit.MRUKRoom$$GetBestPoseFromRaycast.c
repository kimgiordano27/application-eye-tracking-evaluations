/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 07736894
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long unaff_x19;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 in_stack_00000008;
  
  iVar6 = (*param_1)();
  puVar5 = PTR_DAT_09f31978;
  puVar4 = PTR_DAT_09f218d8;
  puVar3 = PTR_DAT_09f217e8;
  puVar1 = PTR_DAT_09f1e540;
  if (iVar6 != 1) {
    return 1;
  }
  lVar12 = *(long *)(unaff_x19 + 0x10);
  if (lVar12 != 0) {
    iVar6 = 0;
    while (lVar12 = *(long *)(lVar12 + 0x108), lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) <= iVar6) {
        return 1;
      }
      lVar12 = FUN_05badb74(lVar12,iVar6,*(undefined8 *)PTR_DAT_09f31320);
      puVar2 = PTR_DAT_09f217e0;
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f217e0);
      FUN_05648f00(lVar8,*(undefined8 *)puVar3);
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_05648f00(lVar9,*(undefined8 *)puVar3);
      if (lVar12 == 0) break;
      iVar16 = *(int *)(lVar12 + 0x28);
      lVar19 = (long)iVar16;
      if (iVar16 < *(int *)(lVar12 + 0x30) + iVar16) {
        lVar13 = lVar19 * 0x20;
        do {
          lVar13 = lVar13 + 0x20;
          lVar14 = *(long *)(unaff_x19 + 0x60);
          if (lVar14 == 0) goto LAB_07736bb0;
          uVar18 = (uint)lVar19;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07736bd8;
          uVar7 = FUN_094fd900(lVar14 + lVar13,0);
          if (lVar8 == 0) goto LAB_07736bb0;
          FUN_0564a0ec(lVar8,uVar7,*(undefined8 *)puVar4);
          lVar14 = *(long *)(unaff_x19 + 0x60);
          if (lVar14 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07736bd8;
          uVar7 = FUN_094fd910(lVar14 + lVar13,0);
          FUN_0564a0ec(lVar8,uVar7,*(undefined8 *)puVar4);
          lVar14 = *(long *)(unaff_x19 + 0x60);
          if (lVar14 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07736bd8;
          uVar7 = FUN_094fd920(lVar14 + lVar13,0);
          FUN_0564a0ec(lVar8,uVar7,*(undefined8 *)puVar4);
          lVar14 = *(long *)(unaff_x19 + 0x60);
          if (lVar14 == 0) goto LAB_07736bb0;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_07736bd8;
          uVar7 = FUN_094fd930(lVar14 + lVar13,0);
          FUN_0564a0ec(lVar8,uVar7,*(undefined8 *)puVar4);
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x28));
      }
      lVar19 = *(long *)(lVar12 + 0x40);
      if (lVar19 == 0) break;
      uVar17 = 0;
      while ((long)uVar17 < (long)(int)*(uint *)(lVar19 + 0x18)) {
        if (*(uint *)(lVar19 + 0x18) <= uVar17) {
LAB_07736bd8:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (lVar9 == 0) goto LAB_07736bb0;
        FUN_0564a0ec(lVar9,*(undefined4 *)(lVar19 + uVar17 * 4 + 0x20),*(undefined8 *)puVar4);
        lVar19 = *(long *)(lVar12 + 0x40);
        uVar17 = uVar17 + 1;
        if (lVar19 == 0) goto LAB_07736bb0;
      }
      if (lVar9 == 0) break;
      FUN_0564a5fc(lVar9,lVar8,*(undefined8 *)PTR_DAT_09f31968);
      if (0 < *(int *)(lVar9 + 0x20)) {
        if (lVar8 == 0) break;
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar8 + 0x20);
        uVar10 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar9 + 0x20);
        uVar11 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31970,uVar10,*(undefined8 *)PTR_DAT_09f1e7d0
                              ,uVar11,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        FUN_094c6b48(uVar10,0);
      }
      lVar8 = *(long *)(lVar12 + 0x40);
      if (lVar8 == 0) break;
      iVar16 = 0;
      while (iVar15 = (int)*(undefined8 *)(lVar8 + 0x18), iVar16 < iVar15) {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07736bb0;
        if (*(int *)(*(long *)(unaff_x19 + 0x38) + 0x18) < iVar16) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6b48(*(undefined8 *)puVar5,0);
          lVar8 = *(long *)(lVar12 + 0x40);
        }
        iVar16 = iVar16 + 1;
        if (lVar8 == 0) goto LAB_07736bb0;
      }
      if (iVar15 < 1) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c652c(*(undefined8 *)PTR_DAT_09f31980,0);
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      iVar6 = iVar6 + 1;
      if (lVar12 == 0) break;
    }
  }
LAB_07736bb0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


