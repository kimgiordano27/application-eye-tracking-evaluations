/*
FUNCTION_NAME: PlayFab.CloudScriptModels.ExecuteFunctionRequest$$.ctor
ENTRY_POINT: 052795f0
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


void PlayFab_CloudScriptModels_ExecuteFunctionRequest___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 in_stack_00000030;
  
  (**(code **)(param_1 + 0x138))();
  lVar3 = unaff_x21[0x10];
  if (lVar3 != 0) {
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar8 = *unaff_x23;
    lVar11 = *(long *)UnityEngine_UIElements_UIR_ImplicitPool<Entry>_TypeInfo;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar8;
        thunk_FUN_02dc1ef0(plVar10);
      }
      else {
        FUN_036a5e08(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar3 = unaff_x21[0x17];
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*unaff_x23,*(undefined8 *)(lVar3 + 0x28));
      }
      lVar3 = *(long *)(unaff_x24 + 0x18);
      uVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648128);
      FUN_04f6e538();
      if (lVar3 != 0) {
        FUN_05275334(lVar3,uVar4);
        lVar3 = (**(code **)(*unaff_x21 + 0x1e8))();
        if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
        }
        uVar5 = FUN_05ee2f7c(lVar3,0,0);
        puVar2 = PTR_DAT_066462a0;
        if ((uVar5 & 1) == 0) {
          in_stack_00000030 = unaff_w22;
          uVar4 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000030);
          uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x0000006c);
          uVar4 = FUN_04e80fdc(*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo
                               ,uVar4,uVar7,0);
          if (lVar3 != 0) {
            FUN_052798dc(lVar3,uVar4);
            FUN_05278a5c();
            return;
          }
        }
        else if (unaff_x21[9] != 0) {
          plVar13 = *(long **)(unaff_x21[9] + 0x18);
          plVar10 = (long *)FUN_02d4dd2c(*unaff_x29,1);
          if (plVar10 != (long *)0x0) {
            lVar3 = *unaff_x23;
            if ((lVar3 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
              uVar4 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar4,0);
            }
            if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            plVar10[4] = lVar3;
            thunk_FUN_02dc1ef0(plVar10 + 4,lVar3);
            if (plVar13 != (long *)0x0) {
              lVar3 = *plVar13;
              uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
              uVar4 = *(undefined8 *)
                       UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
              if (uVar5 != 0) {
                piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *unaff_x28) {
                    puVar6 = (undefined8 *)(lVar3 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_0527988c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)FUN_02d87540(plVar13,*unaff_x28,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar6)(plVar13,4,uVar4,plVar10,puVar6[1]);
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


