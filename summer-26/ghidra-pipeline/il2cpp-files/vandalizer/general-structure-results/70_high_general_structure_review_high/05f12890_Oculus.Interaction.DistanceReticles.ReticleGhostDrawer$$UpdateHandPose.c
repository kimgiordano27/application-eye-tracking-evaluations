/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 05f12890
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05f12bdc) */

long Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *plVar17;
  long unaff_x20;
  
  FUN_031f20f4(PTR_DAT_0759e2a8);
  FUN_031f20f4(PTR_DAT_075f2a68);
  FUN_031f20f4(PTR_DAT_075f2a70);
  FUN_031f20f4(PTR_DAT_075f2a78);
  FUN_031f20f4(PTR_DAT_075f1360);
  FUN_031f20f4(PTR_DAT_075f2a80);
  *(undefined1 *)(unaff_x19 + 0xfd9) = 1;
  plVar17 = (long *)(unaff_x20 + 0x18);
  if (*plVar17 == 0) {
    plVar8 = *(long **)(unaff_x20 + 0x10);
    if (plVar8 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
      puVar4 = PTR_DAT_075f1360;
      if ((uVar9 & 1) == 0) {
        lVar13 = *(long *)PTR_DAT_075f1360;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar13 = *(long *)puVar4;
        }
        *plVar17 = **(long **)(lVar13 + 0xb8);
        thunk_FUN_0329bf60(plVar17);
        goto LAB_05f12bb0;
      }
      plVar8 = *(long **)(unaff_x20 + 0x10);
      if ((plVar8 != (long *)0x0) &&
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200)),
         plVar8 != (long *)0x0)) {
        uVar7 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        uVar10 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f2a78);
        FUN_047aec7c(uVar10,uVar7,*(undefined8 *)PTR_DAT_075f2a70);
        *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
        thunk_FUN_0329bf60(plVar17,uVar10);
        plVar8 = *(long **)(unaff_x20 + 0x10);
        if ((plVar8 != (long *)0x0) &&
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200))
           , plVar8 != (long *)0x0)) {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
          puVar6 = PTR_DAT_075f2a80;
          puVar5 = PTR_DAT_075f2a68;
          puVar4 = PTR_DAT_0759e2a8;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          do {
            lVar14 = *plVar8;
            lVar13 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_05f129fc;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_0322c1e8(plVar8,lVar13,0);
LAB_05f129fc:
            uVar9 = (*(code *)*puVar11)(plVar8,puVar11[1]);
            puVar3 = PTR_DAT_0759b580;
            if ((uVar9 & 1) == 0) {
              plVar8 = (long *)thunk_FUN_0322f04c(plVar8,*(undefined8 *)PTR_DAT_0759b580);
              if (plVar8 == (long *)0x0) goto LAB_05f12bb0;
              lVar13 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar9 == 0) goto LAB_05f12b84;
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_05f12b6c;
            }
            lVar14 = *plVar8;
            lVar13 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                  goto LAB_05f12a5c;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_0322c1e8(plVar8,lVar13,1);
LAB_05f12a5c:
            plVar12 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
              {
                    /* WARNING: Subroutine does not return */
                FUN_031f2730();
              }
            }
            lVar13 = *plVar17;
            uVar10 = FUN_05f12cb0();
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            lVar14 = *(long *)(lVar13 + 0x10);
            lVar15 = *(long *)puVar5;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            uVar2 = *(uint *)(lVar13 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
              thunk_FUN_0329bf60();
            }
            else {
              FUN_047af440(lVar13,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  goto LAB_05f12bb0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_05f12b6c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05f12ba0;
    }
  }
LAB_05f12b84:
  puVar11 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar3,0);
LAB_05f12ba0:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_05f12bb0:
  return *plVar17;
}


