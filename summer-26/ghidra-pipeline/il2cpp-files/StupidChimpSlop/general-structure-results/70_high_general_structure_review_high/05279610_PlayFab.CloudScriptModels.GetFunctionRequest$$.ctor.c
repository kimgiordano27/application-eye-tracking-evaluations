/*
FUNCTION_NAME: PlayFab.CloudScriptModels.GetFunctionRequest$$.ctor
ENTRY_POINT: 05279610
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_CloudScriptModels_GetFunctionRequest___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 in_stack_00000030;
  
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = *unaff_x23;
    lVar10 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar7;
        thunk_FUN_02dc1ef0(plVar9);
      }
      else {
        FUN_036a5e08(param_1,lVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = unaff_x21[0x17];
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),*unaff_x23,*(undefined8 *)(lVar7 + 0x28));
      }
      lVar7 = *(long *)(unaff_x24 + 0x18);
      uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
      FUN_04f6e538();
      if (lVar7 != 0) {
        FUN_05275334(lVar7,uVar3);
        lVar7 = (**(code **)(*unaff_x21 + 0x1e8))();
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
        }
        uVar4 = FUN_05ee2f7c(lVar7,0,0);
        puVar2 = PTR_DAT_066462a0;
        if ((uVar4 & 1) == 0) {
          in_stack_00000030 = unaff_w22;
          uVar3 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000030);
          uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x0000006c);
          uVar3 = FUN_04e80fdc(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                               ,uVar3,uVar6,0);
          if (lVar7 != 0) {
            FUN_052798dc(lVar7,uVar3);
            FUN_05278a5c();
            return;
          }
        }
        else if (unaff_x21[9] != 0) {
          plVar12 = *(long **)(unaff_x21[9] + 0x18);
          plVar9 = (long *)FUN_02d4dd2c(*unaff_x29,1);
          if (plVar9 != (long *)0x0) {
            lVar7 = *unaff_x23;
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0)) {
              uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar3,0);
            }
            if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            plVar9[4] = lVar7;
            thunk_FUN_02dc1ef0(plVar9 + 4,lVar7);
            if (plVar12 != (long *)0x0) {
              lVar7 = *plVar12;
              uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
              uVar3 = *(undefined8 *)
                       UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
              if (uVar4 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_0527988c;
                  }
                  uVar4 = uVar4 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d87540(plVar12,*unaff_x28,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar5)(plVar12,4,uVar3,plVar9,puVar5[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


