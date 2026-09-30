/*
FUNCTION_NAME: PlayFab.CloudScriptModels.UnregisterFunctionRequest$$.ctor
ENTRY_POINT: 052796f0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_CloudScriptModels_UnregisterFunctionRequest___ctor(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 in_stack_00000030;
  
  if (*(int *)(**(long **)(param_1 + 0x2d0) + 0xe4) == 0) {
    thunk_FUN_02dabd98(**(long **)(param_1 + 0x2d0));
  }
  uVar2 = FUN_05ee2f7c(param_2,0,0);
  puVar1 = PTR_DAT_066462a0;
  if ((uVar2 & 1) == 0) {
    in_stack_00000030 = unaff_w22;
    uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000030);
    uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x0000006c);
    uVar10 = FUN_04e80fdc(*(undefined8 *)
                           UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo,
                          uVar10,uVar6,0);
    if (param_2 != 0) {
      FUN_052798dc(param_2,uVar10);
      FUN_05278a5c();
      return;
    }
  }
  else if (*(long *)(unaff_x21 + 0x48) != 0) {
    plVar8 = *(long **)(*(long *)(unaff_x21 + 0x48) + 0x18);
    plVar3 = (long *)FUN_02d4dd2c(*unaff_x29,1);
    if (plVar3 != (long *)0x0) {
      lVar9 = *unaff_x23;
      if ((lVar9 != 0) &&
         (lVar4 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar10,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar3[4] = lVar9;
      thunk_FUN_02dc1ef0(plVar3 + 4,lVar9);
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
        uVar10 = *(undefined8 *)UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_TypeInfo;
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0527988c;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d87540(plVar8,*unaff_x28,1);
LAB_0527988c:
                    /* WARNING: Could not recover jumptable at 0x052798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar8,4,uVar10,plVar3,puVar5[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


