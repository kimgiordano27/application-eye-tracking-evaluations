/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03794aa8
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


bool System_Array_InternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
               (ushort *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w23;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  lVar2 = **(long **)(param_2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c(lVar2);
  }
                    /* try { // try from 03794ad4 to 03894d3b has its CatchHandler @ 03794ad4
                       catch() { ... } // from try @ 03794ad4 with catch @ 03794ad4
                       catch() { ... } // from try @ 03794d60 with catch @ 03794ad4
                       catch() { ... } // from try @ 03794e88 with catch @ 03794ad4
                       catch() { ... } // from try @ 03794fb0 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795104 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795248 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795300 with catch @ 03794ad4
                       catch() { ... } // from try @ 0379533c with catch @ 03794ad4
                       catch() { ... } // from try @ 0379537c with catch @ 03794ad4
                       catch() { ... } // from try @ 0379539c with catch @ 03794ad4
                       catch() { ... } // from try @ 037953c0 with catch @ 03794ad4
                       catch() { ... } // from try @ 037953e0 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795404 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795428 with catch @ 03794ad4
                       catch() { ... } // from try @ 03795464 with catch @ 03794ad4 */
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor:
  (*(code *)*puVar1)();
  return unaff_w23 < unaff_w20;
}


