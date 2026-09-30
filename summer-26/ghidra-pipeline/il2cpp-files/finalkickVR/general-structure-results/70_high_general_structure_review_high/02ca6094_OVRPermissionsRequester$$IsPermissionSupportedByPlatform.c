/*
FUNCTION_NAME: OVRPermissionsRequester$$IsPermissionSupportedByPlatform
ENTRY_POINT: 02ca6094
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void OVRPermissionsRequester__IsPermissionSupportedByPlatform(void)

{
  void *pvVar1;
  long unaff_x29;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  ulong in_stack_00000030;
  
  if ((in_stack_00000030 & 0x100000000000000) != 0) {
    pvVar1 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x30);
    uVar3 = *(undefined8 *)(unaff_x29 + -8);
    uVar2 = *(ulong *)(unaff_x29 + -0x10);
    NullCheck(pvVar1);
    uStack0000000000000004 = (undefined4)(uVar2 >> 0x20);
    uStack0000000000000008 = (undefined4)uVar3;
    uStack000000000000000c = (undefined4)((ulong)uVar3 >> 0x20);
    VirtualActionInvoker1<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>::Invoke
              (uVar2 & 0xffffffff,uStack0000000000000004,uStack0000000000000008,
               uStack000000000000000c,0x17,pvVar1);
  }
  OVRLipSyncDebugConsole_Display_mDB12A529E56335F593483297CC39A2DDF218E52D
            (*(undefined8 *)(unaff_x29 + -0x18),0);
  return;
}


