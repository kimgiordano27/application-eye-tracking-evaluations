/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_centerEyeRotation
ENTRY_POINT: 0678a1f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_centerEyeRotation(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xe38));
  FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x5e6) = 1;
  lVar3 = *(long *)(unaff_x20 + 0x108);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x238) = *(undefined8 *)(unaff_x20 + 0xf8);
    thunk_FUN_03048534(lVar3 + 0x238);
    lVar3 = *(long *)(unaff_x20 + 0x108);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x240) = *(undefined4 *)(unaff_x20 + 0xf0);
      *(undefined1 *)(lVar3 + 0x244) = *(undefined1 *)(unaff_x20 + 0x100);
      if (*(char *)(unaff_x20 + 0xf4) == '\0') {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        bVar1 = FUN_0674ac30(0x31,4,0);
        bVar1 = bVar1 ^ 1;
      }
      else {
        bVar1 = 1;
      }
      *(byte *)(lVar3 + 0x245) = bVar1 & 1;
      if (*(long *)(unaff_x20 + 0xe0) != 0) {
        if (*unaff_x19 != 0) {
          uVar2 = FUN_06916814(*unaff_x19,
                               *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
          FUN_0678a2f4(uVar2,*(undefined8 *)(unaff_x20 + 0x108));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


