/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_SetUseFoveatedRenderingLegacyMode
ENTRY_POINT: 05a99e38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_4;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_SetUseFoveatedRenderingLegacyMode
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined4 unaff_w28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  FUN_05c9b4fc();
  if (*unaff_x24 != 0) {
    lVar3 = FUN_05c8c8e0(*unaff_x24,0);
    if (*(char *)(unaff_x25 + 0xd9a) == '\0') {
      FUN_02b3c81c(PTR_DAT_06312cd8);
      *(undefined1 *)(unaff_x25 + 0xd9a) = 1;
    }
    puVar2 = Method_System_Delegate_CreateDelegate__;
    puVar1 = Method_System_DateTime_TimeToTicks__;
    if (lVar3 != 0) {
      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
      FUN_05c9c3b0(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
      in_stack_00000010 = *(undefined8 *)puVar1;
      lVar3 = *unaff_x24;
      in_stack_00000018 = 0xffffffffffffffff;
      in_stack_00000020 = unaff_w28;
      uVar4 = FUN_04db1580(&stack0x00000010,0);
      uVar4 = FUN_04bffdac(uVar4,*(undefined8 *)puVar2,0);
      if (((lVar3 != 0) &&
          (thunk_FUN_05c9238c(lVar3,uVar4,0), puVar1 = Method_System_Delegate_CombineImpl__,
          unaff_x23 != 0)) && (lVar3 = *(long *)(unaff_x23 + 0x30), lVar3 != 0)) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= iVar6) {
            if (*unaff_x22 != 0) {
              FUN_05c8cb28(*unaff_x22,1,0);
              return;
            }
            break;
          }
          System_Collections_Generic_List<Vector2>__Remove(lVar3,iVar6,*(undefined8 *)puVar1);
          if (*unaff_x24 == 0) break;
          FUN_05c8c8e0(*unaff_x24,0);
          UnityEngine_XR_OpenXR_Features_OpenXRFeature__Internal_SetProcAddressPtrAndLoadStage1();
          lVar3 = *(long *)(unaff_x23 + 0x30);
          iVar6 = iVar6 + 1;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


