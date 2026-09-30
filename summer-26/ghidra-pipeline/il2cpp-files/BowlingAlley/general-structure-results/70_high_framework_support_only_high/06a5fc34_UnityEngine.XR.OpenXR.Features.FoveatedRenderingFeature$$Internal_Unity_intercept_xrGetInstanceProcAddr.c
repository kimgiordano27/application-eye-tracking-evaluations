/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_intercept_xrGetInstanceProcAddr
ENTRY_POINT: 06a5fc34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_2;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_intercept_xrGetInstanceProcAddr
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e2d7b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07284580);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_StyleEnum<OverflowInternal>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__);
    DAT_076e2d7b = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06be9890(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x50);
    uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
    FUN_0501b95c(uVar6,param_1,
                 *(undefined8 *)Method_UnityEngine_UIElements_StyleEnum<Position>_op_Implicit__,0);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_UnityEngine_UIElements_StyleEnum<OverflowInternal>__ctor__) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto FUN_06a5fd50;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_032937ac(plVar7,*(long *)
                                    Method_UnityEngine_UIElements_StyleEnum<OverflowInternal>__ctor__
                            ,2);
FUN_06a5fd50:
                    /* WARNING: Could not recover jumptable at 0x06a5fd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar6,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


