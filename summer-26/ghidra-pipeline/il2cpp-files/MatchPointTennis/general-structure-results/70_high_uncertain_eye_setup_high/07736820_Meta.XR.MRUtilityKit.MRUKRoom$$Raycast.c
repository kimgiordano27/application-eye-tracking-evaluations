/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 07736820
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__Raycast(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  int iVar20;
  uint uVar21;
  long lVar22;
  undefined8 in_stack_00000008;
  
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (plVar8 = (long *)FUN_07715da0(*(long *)(unaff_x19 + 0x10),0), plVar8 != (long *)0x0)) {
    lVar14 = *plVar8;
    uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar19 + 0x24) * 0x10 + 0x138);
          goto LAB_07736890;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_07736890:
    iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar5 = PTR_DAT_09f31978;
    puVar4 = PTR_DAT_09f218d8;
    puVar3 = PTR_DAT_09f217e8;
    puVar1 = PTR_DAT_09f1e540;
    if (iVar6 != 1) {
      return 1;
    }
    lVar14 = *(long *)(unaff_x19 + 0x10);
    if (lVar14 != 0) {
      iVar6 = 0;
      while (lVar14 = *(long *)(lVar14 + 0x108), lVar14 != 0) {
        if (*(int *)(lVar14 + 0x18) <= iVar6) {
          return 1;
        }
        lVar14 = FUN_05badb74(lVar14,iVar6,*(undefined8 *)PTR_DAT_09f31320);
        puVar2 = PTR_DAT_09f217e0;
        lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f217e0);
        FUN_05648f00(lVar10,*(undefined8 *)puVar3);
        lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_05648f00(lVar11,*(undefined8 *)puVar3);
        if (lVar14 == 0) break;
        iVar20 = *(int *)(lVar14 + 0x28);
        lVar22 = (long)iVar20;
        if (iVar20 < *(int *)(lVar14 + 0x30) + iVar20) {
          lVar15 = lVar22 * 0x20;
          do {
            lVar15 = lVar15 + 0x20;
            lVar16 = *(long *)(unaff_x19 + 0x60);
            if (lVar16 == 0) goto LAB_07736bb0;
            uVar21 = (uint)lVar22;
            if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_07736bd8;
            uVar7 = FUN_094fd900(lVar16 + lVar15,0);
            if (lVar10 == 0) goto LAB_07736bb0;
            FUN_0564a0ec(lVar10,uVar7,*(undefined8 *)puVar4);
            lVar16 = *(long *)(unaff_x19 + 0x60);
            if (lVar16 == 0) goto LAB_07736bb0;
            if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_07736bd8;
            uVar7 = FUN_094fd910(lVar16 + lVar15,0);
            FUN_0564a0ec(lVar10,uVar7,*(undefined8 *)puVar4);
            lVar16 = *(long *)(unaff_x19 + 0x60);
            if (lVar16 == 0) goto LAB_07736bb0;
            if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_07736bd8;
            uVar7 = FUN_094fd920(lVar16 + lVar15,0);
            FUN_0564a0ec(lVar10,uVar7,*(undefined8 *)puVar4);
            lVar16 = *(long *)(unaff_x19 + 0x60);
            if (lVar16 == 0) goto LAB_07736bb0;
            if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_07736bd8;
            uVar7 = FUN_094fd930(lVar16 + lVar15,0);
            FUN_0564a0ec(lVar10,uVar7,*(undefined8 *)puVar4);
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)(lVar14 + 0x30) + *(int *)(lVar14 + 0x28));
        }
        lVar22 = *(long *)(lVar14 + 0x40);
        if (lVar22 == 0) break;
        uVar18 = 0;
        while ((long)uVar18 < (long)(int)*(uint *)(lVar22 + 0x18)) {
          if (*(uint *)(lVar22 + 0x18) <= uVar18) {
LAB_07736bd8:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          if (lVar11 == 0) goto LAB_07736bb0;
          FUN_0564a0ec(lVar11,*(undefined4 *)(lVar22 + uVar18 * 4 + 0x20),*(undefined8 *)puVar4);
          lVar22 = *(long *)(lVar14 + 0x40);
          uVar18 = uVar18 + 1;
          if (lVar22 == 0) goto LAB_07736bb0;
        }
        if (lVar11 == 0) break;
        FUN_0564a5fc(lVar11,lVar10,*(undefined8 *)PTR_DAT_09f31968);
        if (0 < *(int *)(lVar11 + 0x20)) {
          if (lVar10 == 0) break;
          in_stack_00000008._4_4_ = *(undefined4 *)(lVar10 + 0x20);
          uVar12 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
          in_stack_00000008._4_4_ = *(undefined4 *)(lVar11 + 0x20);
          uVar13 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
          uVar12 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31970,uVar12,
                                *(undefined8 *)PTR_DAT_09f1e7d0,uVar13,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)puVar1);
          }
          FUN_094c6b48(uVar12,0);
        }
        lVar10 = *(long *)(lVar14 + 0x40);
        if (lVar10 == 0) break;
        iVar20 = 0;
        while (iVar17 = (int)*(undefined8 *)(lVar10 + 0x18), iVar20 < iVar17) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07736bb0;
          if (*(int *)(*(long *)(unaff_x19 + 0x38) + 0x18) < iVar20) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_094c6b48(*(undefined8 *)puVar5,0);
            lVar10 = *(long *)(lVar14 + 0x40);
          }
          iVar20 = iVar20 + 1;
          if (lVar10 == 0) goto LAB_07736bb0;
        }
        if (iVar17 < 1) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c652c(*(undefined8 *)PTR_DAT_09f31980,0);
        }
        lVar14 = *(long *)(unaff_x19 + 0x10);
        iVar6 = iVar6 + 1;
        if (lVar14 == 0) break;
      }
    }
  }
LAB_07736bb0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


