/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass$$Render
ENTRY_POINT: 058b9f0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_DepthOnlyPass__Render(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  float unaff_w28;
  long unaff_x29;
  float fVar6;
  float unaff_s8;
  
  do {
    thunk_FUN_02b9ad44(param_1);
    do {
      lVar1 = FUN_032404a4(unaff_x21,unaff_x22,*(undefined8 *)PTR_DAT_063151a0);
      if ((lVar1 == 0) ||
         (plVar2 = (long *)FUN_031d8020(lVar1,*(undefined8 *)
                                               Method_OVRPlugin_PinnedArray<Guid>_Dispose__),
         plVar2 == (long *)0x0)) {
LAB_058ba0b8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      (**(code **)(*plVar2 + 0x2f8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x300));
      plVar2 = (long *)FUN_05c8c8e0(lVar1,0);
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_058ba0b8;
      plVar3 = (long *)FUN_05c89340(*(long *)(unaff_x19 + 0x60),0);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
      }
      else if (*plVar3 != *(long *)Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var) {
        plVar3 = (long *)0x0;
      }
      if ((plVar2 == (long *)0x0) ||
         (*plVar2 != *(long *)Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var))
      goto LAB_058ba0b8;
      FUN_05c9ace8(0,0x3f800000,plVar2,0);
      FUN_05c9ae7c(0,0x3f800000,plVar2,0);
      FUN_05c9b1a4(unaff_w27,0x41d00000,plVar2,0);
      if (plVar3 == (long *)0x0) goto LAB_058ba0b8;
      fVar6 = (float)FUN_05c9af44(plVar3,0);
      FUN_05c9b010(unaff_s8 * (float)((int)unaff_x24 + 2) + unaff_w28 + fVar6,plVar2,0);
      FUN_05c9b338(0,0x3f800000,plVar2,0);
      plVar2 = (long *)*unaff_x20;
      lVar1 = FUN_031d80b0(lVar1,*unaff_x25);
      if (plVar2 == (long *)0x0) goto LAB_058ba0b8;
      if ((lVar1 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,0);
      }
      if ((ulong)*(uint *)(plVar2 + 3) <= unaff_x24 + 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(long *)((long)plVar2 + unaff_x26) = lVar1;
      thunk_FUN_02bb0e9c((long)plVar2 + unaff_x26,lVar1);
      unaff_x24 = unaff_x24 + 1;
      unaff_x26 = unaff_x26 + 8;
      if (unaff_x29 == unaff_x24) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_058ba0b8;
      unaff_x21 = FUN_05c89410(*(long *)(unaff_x19 + 0x68),0);
      unaff_x22 = FUN_05c89340();
      param_1 = *(long *)PTR_DAT_06312520;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


