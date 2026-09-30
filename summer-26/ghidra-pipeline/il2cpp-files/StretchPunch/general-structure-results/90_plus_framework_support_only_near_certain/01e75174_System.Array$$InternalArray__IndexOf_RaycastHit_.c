/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<RaycastHit>
ENTRY_POINT: 01e75174
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined8 * System_Array__InternalArray__IndexOf<RaycastHit>(size_t param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  void *pvVar5;
  undefined8 unaff_x22;
  
  puVar2 = malloc(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = unaff_x22;
    puVar2[1] = 0;
    *(undefined8 **)(unaff_x19 + 0x1330) = puVar2;
    puVar2[1] = 0x20;
    puVar2[2] = &
                Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
    ;
    puVar2[4] = unaff_x21;
    puVar2[5] = unaff_x20;
    *(undefined4 *)(puVar2 + 3) = 0x1010125;
    pvVar5 = *(void **)(unaff_x19 + 0x1330);
    lVar3 = *(long *)((long)pvVar5 + 8);
    puVar1 = pvVar5;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (void *)0x0) goto LAB_01e751d8;
      lVar3 = 0;
      *puVar1 = pvVar5;
      puVar1[1] = 0;
      *(undefined8 **)(unaff_x19 + 0x1330) = puVar1;
    }
    *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
    puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
    *puVar4 = &Method_OVRPlugin_<>c_<_cctor>b__786_94__;
    *(undefined4 *)((long)puVar1 + lVar3 + 0x18) = 0x101012b;
    *(undefined8 **)((long)puVar1 + lVar3 + 0x20) = puVar2 + 2;
    return puVar4;
  }
LAB_01e751d8:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


