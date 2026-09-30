/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalVectorArray
ENTRY_POINT: 0601f37c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_Rendering_CommandBuffer__SetGlobalVectorArray(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_067c8f20;
  if ((DAT_06bc53aa & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_149__);
    FUN_02f08768(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    FUN_02f08768(Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__);
    FUN_02f08768(PTR_DAT_067cc298);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067cc1e0);
    FUN_02f08768(PTR_DAT_067cc1e8);
    FUN_02f08768(
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                );
    DAT_06bc53aa = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar1 = PTR_DAT_067cc1e0;
  uVar2 = FUN_060f245c(uVar7,0,0);
  puVar4 = (undefined8 *)PTR_DAT_067cc1e8;
  if ((((uVar2 & 1) != 0) ||
      (puVar4 = (undefined8 *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
      , *(long *)(param_1 + 0x28) == 0)) ||
     (lVar3 = FUN_04735f04(*(long *)(param_1 + 0x28),
                           *(undefined8 *)Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__),
     puVar4 = (undefined8 *)
              Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
     , lVar3 == 0)) {
    uVar7 = FUN_04f65e2c(*puVar4,param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar1);
    }
    FUN_05f052b4(uVar7,param_1,0);
    FUN_060ed000(param_1,0,0);
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_149__);
    FUN_0475db6c(uVar7,param_1,*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,
                 0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067cc298) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0601f54c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067cc298,0);
LAB_0601f54c:
      uVar7 = (*(code *)*puVar4)(plVar8,uVar7,puVar4[1]);
      if (lVar3 != 0) {
        FUN_05f07bcc(lVar3,uVar7,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


