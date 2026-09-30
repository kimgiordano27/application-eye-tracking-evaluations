/*
FUNCTION_NAME: Photon.Voice.IOS.AudioSessionParameters$$CategoryOptionsToInt
ENTRY_POINT: 04f2a1a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined4 Photon_Voice_IOS_AudioSessionParameters__CategoryOptionsToInt(code *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  uint unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  byte bVar4;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x29;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  uint in_stack_00000080;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_0160ed64("UnityEngine.GUI::get_enabled()");
    *(code **)(unaff_x23 + 0xa50) = param_1;
  }
  bVar1 = (*param_1)();
  if (in_stack_00000030 == 0) {
    bVar4 = 1;
  }
  else {
    if (*(uint *)(in_stack_00000030 + 0x18) <= in_stack_00000080) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    bVar4 = *(byte *)(in_stack_00000030 + unaff_x26 + 0x20);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  pcVar3 = *(code **)(unaff_x29 + 0xa58);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)FUN_0160ed64("UnityEngine.GUI::set_enabled(System.Boolean)");
    *(code **)(unaff_x29 + 0xa58) = pcVar3;
  }
  (*pcVar3)(bVar1 & bVar4 & 1);
  if (pcRam0000000007244a50 == (code *)0x0) {
    pcRam0000000007244a50 = (code *)FUN_0160ed64("UnityEngine.GUI::get_enabled()");
  }
  uVar2 = (*pcRam0000000007244a50)();
  if ((unaff_w25 != unaff_w21) && ((unaff_w22 & uVar2 & 1) != 0)) {
    if (pcRam0000000007244d18 == (code *)0x0) {
      pcRam0000000007244d18 =
           (code *)FUN_0160ed64("UnityEngine.GUIUtility::Internal_GetHotControl()");
    }
    (*pcRam0000000007244d18)();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (pcRam0000000007244a50 == (code *)0x0) {
    pcRam0000000007244a50 = (code *)FUN_0160ed64("UnityEngine.GUI::get_enabled()");
  }
  (*pcRam0000000007244a50)();
  FUN_033cbcf4(uStack0000000000000090,uStack0000000000000094,uStack0000000000000098,
               uStack000000000000009c,in_stack_00000038);
  pcVar3 = *(code **)(unaff_x29 + 0xa58);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)FUN_0160ed64("UnityEngine.GUI::set_enabled(System.Boolean)");
    *(code **)(unaff_x29 + 0xa58) = pcVar3;
  }
  (*pcVar3)(unaff_w20 & 1);
  return unaff_w27;
}


