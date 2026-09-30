/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboardSpace
ENTRY_POINT: 069776fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboardSpace
               (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  long unaff_x19;
  float fVar7;
  
  fVar7 = *(float *)(in_x9 + 0xce0);
  *(float *)(param_1 + 0x5c) = param_4 / param_3;
  if (param_6 < fVar7) {
    *(undefined4 *)(param_1 + 0x4c) = 0x3727c5ac;
  }
  param_3 = param_3 * param_3 * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x4c) = param_3;
  *(float *)(param_1 + 0x50) = param_4 / param_3;
  if (*(float *)(param_1 + 0x54) < param_2) {
    *(undefined4 *)(param_1 + 0x54) = 0x3c23d70a;
  }
  iVar1 = *(int *)(unaff_x19 + 200);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(unaff_x19 + 200) = iVar1;
  FUN_06977d90();
  if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
     (lVar4 = FUN_07c98f88(*(long *)(unaff_x19 + 0xa0),0), puVar3 = PTR_DAT_08497bf0,
     puVar2 = PTR_DAT_08497be8, lVar4 != 0)) {
    uVar5 = FUN_0447b5f4(lVar4,1,*(undefined8 *)PTR_DAT_084b7508);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_049d90a0(uVar6,uVar5,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar6;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd0),uVar6);
    *(undefined1 *)(unaff_x19 + 0x3e4) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


