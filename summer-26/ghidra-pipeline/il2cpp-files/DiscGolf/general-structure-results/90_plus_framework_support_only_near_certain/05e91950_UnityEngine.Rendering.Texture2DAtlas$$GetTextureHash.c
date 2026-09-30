/*
FUNCTION_NAME: UnityEngine.Rendering.Texture2DAtlas$$GetTextureHash
ENTRY_POINT: 05e91950
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Rendering_Texture2DAtlas__GetTextureHash(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  int iVar5;
  long lVar6;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    FUN_02d4c538();
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar4;
  __cxa_end_catch();
  FUN_05258794(in_stack_00000008,
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<QosJob_InternalQosServer>_GetEnumerator__);
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar6);
  }
  FUN_05e91a00();
  puVar2 = Method_Unity_Collections_NativeHashMap<ConnectionId,_ConnectionPayload>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  iVar5 = 0;
  while( true ) {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar6 + 8) <= iVar5) break;
    uVar3 = FUN_042cd3f4(unaff_x19 + 0x18,iVar5,*(undefined8 *)puVar1);
    FUN_05ec1db0(uVar3,0);
    iVar5 = iVar5 + 1;
  }
  FUN_042cd70c(unaff_x19 + 0x18,
               *(undefined8 *)Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__
              );
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  return;
}


