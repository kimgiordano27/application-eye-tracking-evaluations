/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 03c6f08c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(void)

{
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if (in_ZR || in_NG != in_OV) {
                    /* try { // try from 03c6f098 to 03d6f0e3 has its CatchHandler @ 03c6f098
                       catch() { ... } // from try @ 03c6f098 with catch @ 03c6f098
                       catch() { ... } // from try @ 03c6f164 with catch @ 03c6f098
                       catch() { ... } // from try @ 03c6f194 with catch @ 03c6f098
                       catch() { ... } // from try @ 03c6f214 with catch @ 03c6f098 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if ((**(char **)(lVar3 + 0xb8) != '\0') && (*(int *)(unaff_x19 + 0x18) == 0)) {
      uVar2 = thunk_FUN_02d93fb0(0);
      *(undefined4 *)(unaff_x19 + 0x1c) = uVar2;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    thunk_FUN_02dd37b4();
  }
  thunk_FUN_02d6ec70();
  return unaff_w22 < 8;
}


