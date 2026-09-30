/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass$$InitRendererListParams
ENTRY_POINT: 058b9d74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_Rendering_Universal_Internal_DepthOnlyPass__InitRendererListParams(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x22;
  float fVar12;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
  FUN_02b3c81c(PTR_DAT_06317a98);
  FUN_02b3c81c(PTR_DAT_063151a0);
  FUN_02b3c81c(PTR_DAT_06312520);
  FUN_02b3c81c(Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var);
  FUN_02b3c81c(
              Method_Unity_Collections_NativeList_ParallelWriter<GPUDrivenPackedMaterialData>_AddRangeNoResize__
              );
  *(undefined1 *)(unaff_x22 + 0x264) = 1;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
  thunk_FUN_02bb0e9c();
  lVar3 = FUN_03197dbc();
  plVar10 = (long *)(unaff_x19 + 0x70);
  *plVar10 = lVar3;
  thunk_FUN_02bb0e9c(plVar10,lVar3);
  if ((*plVar10 != 0) && (plVar4 = *(long **)(unaff_x19 + 0x60), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x5e8))
              (plVar4,*(undefined8 *)(*plVar10 + 0x30),*(undefined8 *)(*plVar4 + 0x5f0));
    puVar1 = 
    Method_Unity_Collections_NativeList_ParallelWriter<GPUDrivenPackedMaterialData>_AddRangeNoResize__
    ;
    if (*plVar10 != 0) {
      uVar2 = FUN_058110e0(*plVar10,0);
      uVar5 = FUN_02b3c908(*(undefined8 *)puVar1,uVar2);
      puVar11 = (undefined8 *)(unaff_x19 + 0x78);
      *puVar11 = uVar5;
      thunk_FUN_02bb0e9c(puVar11,uVar5);
      plVar10 = (long *)*puVar11;
      if (plVar10 != (long *)0x0) {
        lVar3 = *(long *)(unaff_x19 + 0x68);
        if ((lVar3 != 0) &&
           (lVar6 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_058ba0c0:
          uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar5,0);
        }
        if ((int)plVar10[3] == 0) {
LAB_058ba0bc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar10[4] = lVar3;
        thunk_FUN_02bb0e9c(plVar10 + 4,lVar3);
        puVar1 = PTR_DAT_06317a98;
        if (1 < (int)uVar2) {
          lVar3 = 0;
          lVar6 = 0x28;
          do {
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_058ba0b8;
            uVar5 = FUN_05c89410(*(long *)(unaff_x19 + 0x68),0);
            uVar7 = FUN_05c89340();
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
            }
            lVar8 = FUN_032404a4(uVar5,uVar7,*(undefined8 *)PTR_DAT_063151a0);
            if ((lVar8 == 0) ||
               (plVar10 = (long *)FUN_031d8020(lVar8,*(undefined8 *)
                                                      Method_OVRPlugin_PinnedArray<Guid>_Dispose__),
               plVar10 == (long *)0x0)) goto LAB_058ba0b8;
            (**(code **)(*plVar10 + 0x2f8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x300));
            plVar10 = (long *)FUN_05c8c8e0(lVar8,0);
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_058ba0b8;
            plVar4 = (long *)FUN_05c89340(*(long *)(unaff_x19 + 0x60),0);
            if (plVar4 == (long *)0x0) {
              plVar4 = (long *)0x0;
            }
            else if (*plVar4 != *(long *)Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var) {
              plVar4 = (long *)0x0;
            }
            if ((plVar10 == (long *)0x0) ||
               (*plVar10 != *(long *)Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var))
            goto LAB_058ba0b8;
            FUN_05c9ace8(0,0x3f800000,plVar10,0);
            FUN_05c9ae7c(0,0x3f800000,plVar10,0);
            FUN_05c9b1a4(0x42c80000,0x41d00000,plVar10,0);
            if (plVar4 == (long *)0x0) goto LAB_058ba0b8;
            fVar12 = (float)FUN_05c9af44(plVar4,0);
            FUN_05c9b010((230.0 / (float)(int)uVar2) * (float)((int)lVar3 + 2) + 200.0 + fVar12,
                         plVar10,0);
            FUN_05c9b338(0,0x3f800000,plVar10,0);
            plVar10 = (long *)*puVar11;
            lVar8 = FUN_031d80b0(lVar8,*(undefined8 *)puVar1);
            if (plVar10 == (long *)0x0) goto LAB_058ba0b8;
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
            goto LAB_058ba0c0;
            if ((ulong)*(uint *)(plVar10 + 3) <= lVar3 + 1U) goto LAB_058ba0bc;
            *(long *)((long)plVar10 + lVar6) = lVar8;
            thunk_FUN_02bb0e9c((long)plVar10 + lVar6,lVar8);
            lVar3 = lVar3 + 1;
            lVar6 = lVar6 + 8;
          } while ((ulong)uVar2 - 1 != lVar3);
        }
        return;
      }
    }
  }
LAB_058ba0b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


