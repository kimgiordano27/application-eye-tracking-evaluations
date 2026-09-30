/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 020b0c98
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x020b1020) */
/* WARNING: Removing unreachable block (ram,0x020b12ac) */

undefined8 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined1 auVar16 [16];
  long in_stack_00000018;
  
  if ((bRam000000000722e036 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e636c0);
    thunk_FUN_0159f088(PTR_DAT_06e258e8);
    thunk_FUN_0159f088(PTR_DAT_06db8058);
    thunk_FUN_0159f088(PTR_DAT_06e4d0e8);
    thunk_FUN_0159f088(PTR_DAT_06ddc938);
    thunk_FUN_0159f088(PTR_DAT_06d96368);
    thunk_FUN_0159f088(PTR_DAT_06dbb0d0);
    thunk_FUN_0159f088(PTR_DAT_06e49148);
    thunk_FUN_0159f088(PTR_DAT_06dc20e0);
    bRam000000000722e036 = 1;
  }
  in_stack_00000018 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    *param_2 = (long)(*(int *)(*(long *)(param_1 + 0x38) + 0x10) * 2 + 0xc);
    puVar6 = PTR_DAT_06e636c0;
    puVar5 = PTR_DAT_06e4d0e8;
    puVar4 = PTR_DAT_06e258e8;
    puVar3 = PTR_DAT_06ddc938;
    puVar2 = PTR_DAT_06db8058;
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        return 1;
      }
      iVar15 = 0;
      while ((plVar8 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                         (lVar7,iVar15,*(undefined8 *)PTR_DAT_06dc20e0),
             plVar8 != (long *)0x0 && (lVar7 = FUN_020a982c(), lVar7 != 0))) {
        plVar9 = (long *)FUN_020a93e8();
LAB_020b0db8:
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar12 = *plVar9;
        lVar7 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_020b0e08;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar7,0);
LAB_020b0e08:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) != 0) {
          lVar7 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_020b0e64;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)puVar5,0);
LAB_020b0e64:
          auVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          plVar11 = auVar16._8_8_;
          if (auVar16._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          *param_2 = *param_2 + (long)*(int *)(auVar16._0_8_ + 0x10) + 4;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar7 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_020b0edc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)puVar4,0);
LAB_020b0edc:
          plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          do {
            lVar12 = *plVar11;
            lVar7 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar7) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_020b0f3c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_015c2a80(plVar11,lVar7,0);
LAB_020b0f3c:
            uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if ((uVar13 & 1) == 0) goto LAB_020b0fbc;
            lVar7 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_020b0f98;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)puVar2,0);
LAB_020b0f98:
            lVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            *param_2 = *param_2 + (long)*(int *)(lVar7 + 0x10);
          } while( true );
        }
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          lVar7 = *(long *)puVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 == 0) {
LAB_020b1090:
            puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar7,0);
          }
          else {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            while (*(long *)(piVar14 + -2) != lVar7) {
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
              if (uVar13 == 0) goto LAB_020b1090;
            }
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          }
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
        uVar13 = (**(code **)(*plVar8 + 0x1b8))
                           (plVar8,&stack0x00000018,*(undefined8 *)(*plVar8 + 0x1c0));
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        lVar12 = *param_2;
        *param_2 = lVar12 + in_stack_00000018 + 2;
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 == 0) break;
        iVar1 = *(int *)(lVar7 + 0x18);
        if (iVar15 != iVar1 + -1) {
          lVar12 = lVar12 + in_stack_00000018 + 8;
          *param_2 = lVar12;
          if (*(long *)(param_1 + 0x38) == 0) break;
          *param_2 = lVar12 + *(int *)(*(long *)(param_1 + 0x38) + 0x10);
        }
        iVar15 = iVar15 + 1;
        if (iVar1 <= iVar15) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
LAB_020b0fbc:
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    lVar7 = *(long *)puVar6;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_020b1010;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(plVar11,lVar7,0);
LAB_020b1010:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  goto LAB_020b0db8;
}


