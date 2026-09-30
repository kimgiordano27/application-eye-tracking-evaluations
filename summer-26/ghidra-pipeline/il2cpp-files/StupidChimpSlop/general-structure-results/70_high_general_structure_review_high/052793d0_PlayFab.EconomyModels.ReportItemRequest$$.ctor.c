/*
FUNCTION_NAME: PlayFab.EconomyModels.ReportItemRequest$$.ctor
ENTRY_POINT: 052793d0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_EconomyModels_ReportItemRequest___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x29;
  undefined4 in_stack_00000030;
  
  thunk_FUN_02dc1ef0();
  puVar3 = PTR_DAT_0664b728;
  if (unaff_x25 != (long *)0x0) {
    lVar8 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto FUN_052795f4;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d87540();
FUN_052795f4:
    (*(code *)*puVar4)();
    lVar8 = unaff_x21[0x10];
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar7 = *unaff_x23;
      lVar12 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar7;
          thunk_FUN_02dc1ef0(plVar10);
        }
        else {
          FUN_036a5e08(lVar8,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = unaff_x21[0x17];
        if (lVar8 != 0) {
          (**(code **)(lVar8 + 0x18))
                    (*(undefined8 *)(lVar8 + 0x40),*unaff_x23,*(undefined8 *)(lVar8 + 0x28));
        }
        lVar8 = *(long *)(unaff_x24 + 0x18);
        uVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
        FUN_04f6e538();
        if (lVar8 != 0) {
          FUN_05275334(lVar8,uVar5);
          lVar8 = (**(code **)(*unaff_x21 + 0x1e8))();
          if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
          }
          uVar11 = FUN_05ee2f7c(lVar8,0,0);
          puVar2 = PTR_DAT_066462a0;
          if ((uVar11 & 1) == 0) {
            in_stack_00000030 = unaff_w22;
            uVar5 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000030);
            uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x0000006c);
            uVar5 = FUN_04e80fdc(*(undefined8 *)
                                  UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                                 ,uVar5,uVar6,0);
            if (lVar8 != 0) {
              FUN_052798dc(lVar8,uVar5);
              FUN_05278a5c();
              return;
            }
          }
          else if (unaff_x21[9] != 0) {
            plVar14 = *(long **)(unaff_x21[9] + 0x18);
            plVar10 = (long *)FUN_02d4dd2c(*unaff_x29,1);
            if (plVar10 != (long *)0x0) {
              lVar8 = *unaff_x23;
              if ((lVar8 != 0) &&
                 (lVar7 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
                uVar5 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
                FUN_02d4ddac(uVar5,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              plVar10[4] = lVar8;
              thunk_FUN_02dc1ef0(plVar10 + 4,lVar8);
              if (plVar14 != (long *)0x0) {
                lVar8 = *plVar14;
                uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
                uVar5 = *(undefined8 *)
                         UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_0527988c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar4 = (undefined8 *)FUN_02d87540(plVar14,*(long *)puVar3,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar4)(plVar14,4,uVar5,plVar10,puVar4[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


