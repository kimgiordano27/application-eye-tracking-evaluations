/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm.GltfSerializer$$__humanoid__humanBones_Serialize_LeftEye
ENTRY_POINT: 07c4e574
PROGRAM: Waifu-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_possible_biometrics_hits_2
*/


void UniGLTF_Extensions_VRMC_vrm_GltfSerializer____humanoid__humanBones_Serialize_LeftEye
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int in_w9;
  long unaff_x19;
  long lVar3;
  
  iVar1 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (iVar1 != 1) {
LAB_07c4e65c:
    *(undefined1 *)(unaff_x19 + 0x59) = 1;
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x48);
  uVar2 = FUN_03398a84(DAT_083c0670);
  FUN_0422a214();
  if (lVar3 != 0) {
    FUN_03c821d4(lVar3,uVar2,1,DAT_08404c60);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    uVar2 = FUN_03398a84(DAT_083c0680);
    FUN_0422a214();
    if (lVar3 != 0) {
      FUN_03c821d4(lVar3,uVar2,1,DAT_08404c70);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      uVar2 = FUN_03398a84(DAT_083c0678);
      FUN_0422a214();
      if (lVar3 != 0) {
        FUN_03c821d4(lVar3,uVar2,1,DAT_08404c68);
        goto LAB_07c4e65c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


