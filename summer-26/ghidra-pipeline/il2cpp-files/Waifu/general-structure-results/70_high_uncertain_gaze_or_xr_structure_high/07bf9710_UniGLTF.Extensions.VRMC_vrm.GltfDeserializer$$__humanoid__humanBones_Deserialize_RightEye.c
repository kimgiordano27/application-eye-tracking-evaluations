/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm.GltfDeserializer$$__humanoid__humanBones_Deserialize_RightEye
ENTRY_POINT: 07bf9710
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_possible_biometrics_hits_2
*/


void UniGLTF_Extensions_VRMC_vrm_GltfDeserializer____humanoid__humanBones_Deserialize_RightEye
               (long *param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x24;
  long unaff_x25;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    FUN_079d5e40(0,0,(float)param_2,(float)iVar1,0);
    FUN_07bf873c();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x24 + 0x648);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE =
           (code *)FUN_033d1b68("UnityEngine.Camera::SetupCurrent(UnityEngine.Camera)");
      *(code **)(unaff_x24 + 0x648) = UNRECOVERED_JUMPTABLE;
    }
    (*UNRECOVERED_JUMPTABLE)();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x25 + 0xd00);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE =
           (code *)FUN_033d1b68("UnityEngine.RenderTexture::SetActive(UnityEngine.RenderTexture)");
      *(code **)(unaff_x25 + 0xd00) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x07bf97a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


