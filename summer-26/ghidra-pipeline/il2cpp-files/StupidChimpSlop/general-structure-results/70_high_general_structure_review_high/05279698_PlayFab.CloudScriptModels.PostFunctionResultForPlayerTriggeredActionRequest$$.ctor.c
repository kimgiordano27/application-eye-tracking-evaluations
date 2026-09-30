/*
FUNCTION_NAME: PlayFab.CloudScriptModels.PostFunctionResultForPlayerTriggeredActionRequest$$.ctor
ENTRY_POINT: 05279698
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_CloudScriptModels_PostFunctionResultForPlayerTriggeredActionRequest___ctor
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long lVar10;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 in_stack_00000030;
  
  lVar10 = *(long *)(unaff_x24 + 0x18);
  uVar2 = thunk_FUN_02d8a638(*param_1);
  FUN_04f6e538();
  if (lVar10 != 0) {
    FUN_05275334(lVar10,uVar2);
    lVar10 = (**(code **)(*unaff_x21 + 0x1e8))();
    if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
    }
    uVar3 = FUN_05ee2f7c(lVar10,0,0);
    puVar1 = PTR_DAT_066462a0;
    if ((uVar3 & 1) == 0) {
      in_stack_00000030 = unaff_w22;
      uVar2 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000030);
      uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x0000006c);
      uVar2 = FUN_04e80fdc(*(undefined8 *)
                            UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo,
                           uVar2,uVar7,0);
      if (lVar10 != 0) {
        FUN_052798dc(lVar10,uVar2);
        FUN_05278a5c();
        return;
      }
    }
    else if (unaff_x21[9] != 0) {
      plVar9 = *(long **)(unaff_x21[9] + 0x18);
      plVar4 = (long *)FUN_02d4dd2c(*unaff_x29,1);
      if (plVar4 != (long *)0x0) {
        lVar10 = *unaff_x23;
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar2 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar2,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        plVar4[4] = lVar10;
        thunk_FUN_02dc1ef0(plVar4 + 4,lVar10);
        if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          uVar2 = *(undefined8 *)UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x28) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0527988c;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d87540(plVar9,*unaff_x28,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar9,4,uVar2,plVar4,puVar6[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


