/*
FUNCTION_NAME: Unity.Physics.Ray$$set_Displacement
ENTRY_POINT: 03247e38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 152
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Physics_Ray__set_Displacement(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((DAT_0412c76f & 1) == 0) {
    FUN_01ab69ac(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_01ab69ac(OVROverlay_LayerTexture___TypeInfo);
    FUN_01ab69ac(OVRPlugin_AppPerfFrameStats___TypeInfo);
    DAT_0412c76f = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 != 0) &&
     (in_stack_00000008 = param_2,
     uVar3 = FUN_01f284bc(lVar2,&stack0x00000008,*(undefined8 *)OVROverlay_LayerTexture___TypeInfo),
     (uVar3 & 1) != 0)) {
    return;
  }
  puVar1 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  uStack000000000000000c = param_2;
  FUN_01f279e4((long *)(param_1 + 0x28),&stack0x0000000c,
               *(undefined8 *)OVRInput_OpenVRControllerDetails___TypeInfo);
  lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_036ebe80(lVar2,0);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    FUN_032480cc(param_1,0,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


