/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 02cb0890
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsDesc(void)

{
  int iVar1;
  undefined4 uVar2;
  byte in_w8;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar3;
  byte in_w9;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  int iStack000000000000000c;
  int iStack000000000000001c;
  byte bStack0000000000000022;
  
  bStack0000000000000022 = in_w8 & in_w9;
  if ((bStack0000000000000022 & 1) == 0) {
    iStack000000000000001c = *(int *)(*(long *)(unaff_x29 + -8) + 0x60);
    uVar2 = il2cpp_codegen_add<int,int>(iStack000000000000001c,1);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x60) = uVar2;
    iVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x60);
    pLVar3 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
              (*(long *)(unaff_x29 + -8) + 0x50);
                    /* try { // try from 02cb08dc to 02db0af7 has its CatchHandler @ 02cb083c */
    NullCheck(pLVar3);
    iStack000000000000000c =
         List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline
                   (pLVar3,(MethodInfo *)*in_stack_00000000);
    if (iStack000000000000000c <= iVar1) {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x60) = 0;
    }
    *(undefined1 *)(*(long *)(unaff_x29 + -8) + 100) = 1;
    GroupPresenceSample_UpdateDestinationsConsole_m131711E4FA4B5815AC8E907B2CC9EEC7AEE5389C
              (*(undefined8 *)(unaff_x29 + -8),0);
  }
  return;
}


