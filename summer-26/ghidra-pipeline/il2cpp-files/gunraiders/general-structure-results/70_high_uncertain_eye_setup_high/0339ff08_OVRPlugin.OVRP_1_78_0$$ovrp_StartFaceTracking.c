/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 0339ff08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x6d3) = in_w8;
  if ((unaff_x19 == 0) || (unaff_x20 == 0)) {
    return;
  }
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar3 = (**(code **)(*unaff_x21 + 0x188))();
  if (iVar3 == 9) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
    plVar4 = (long *)(**(code **)(*unaff_x21 + 0x198))();
    if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar4);
    }
    OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(uVar1,uVar2);
  }
  FUN_02906704();
  return;
}


