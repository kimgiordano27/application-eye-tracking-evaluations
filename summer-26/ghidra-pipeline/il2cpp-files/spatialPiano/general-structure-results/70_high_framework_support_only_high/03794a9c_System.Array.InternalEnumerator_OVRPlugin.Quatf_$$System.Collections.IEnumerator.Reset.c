/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03794a9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool System_Array_InternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_Reset(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  int unaff_w23;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c(lVar1);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor:
  (*(code *)*puVar2)();
  return unaff_w23 < unaff_w20;
}


