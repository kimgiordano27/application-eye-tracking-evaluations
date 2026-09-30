/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalVectorArray
ENTRY_POINT: 0601f458
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_CommandBuffer__SetGlobalVectorArray(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long lVar6;
  long *unaff_x21;
  long *plVar7;
  
  if (param_1 == 0) {
    uVar1 = FUN_04f65e2c(*(undefined8 *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        );
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x21);
    }
    FUN_05f052b4(uVar1);
    FUN_060ed000();
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x38);
    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28);
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_149__);
    FUN_0475db6c();
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_067cc298) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0601f54c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067cc298,0);
LAB_0601f54c:
      uVar1 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
      if (lVar6 != 0) {
        FUN_05f07bcc(lVar6,uVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


