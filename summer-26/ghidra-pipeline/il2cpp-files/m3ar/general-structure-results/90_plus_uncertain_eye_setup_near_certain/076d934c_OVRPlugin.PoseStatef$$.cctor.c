/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 076d934c
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void OVRPlugin_PoseStatef___cctor(int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      plVar2 = *(long **)(unaff_x19 + 0x38);
      if (plVar2 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar6 = *(undefined4 *)(unaff_x19 + 0x68);
      uVar7 = *(undefined4 *)(unaff_x19 + 0x6c);
      lVar3 = *plVar2;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x60);
      uVar5 = *(undefined4 *)(unaff_x19 + 100);
      goto LAB_076d93cc;
    }
    if (param_1 == 1) {
      plVar2 = *(long **)(unaff_x19 + 0x38);
      if (plVar2 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar6 = *(undefined4 *)(unaff_x19 + 0x58);
      uVar7 = *(undefined4 *)(unaff_x19 + 0x5c);
      lVar3 = *plVar2;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar5 = *(undefined4 *)(unaff_x19 + 0x54);
      goto LAB_076d93cc;
    }
  }
  else {
    if (param_1 == 3) {
      plVar2 = *(long **)(unaff_x19 + 0x38);
      if (plVar2 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar6 = *(undefined4 *)(unaff_x19 + 0x78);
      uVar7 = *(undefined4 *)(unaff_x19 + 0x7c);
      lVar3 = *plVar2;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x70);
      uVar5 = *(undefined4 *)(unaff_x19 + 0x74);
    }
    else {
                    /* try { // try from 076d9384 to 077d93ab has its CatchHandler @ 076d95b8 */
      if (param_1 != 2) goto LAB_076d93d8;
      plVar2 = *(long **)(unaff_x19 + 0x38);
      if (plVar2 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar6 = *(undefined4 *)(unaff_x19 + 0x48);
      uVar7 = *(undefined4 *)(unaff_x19 + 0x4c);
      lVar3 = *plVar2;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x40);
      uVar5 = *(undefined4 *)(unaff_x19 + 0x44);
    }
LAB_076d93cc:
    (**(code **)(lVar3 + 0x2a8))(uVar4,uVar5,uVar6,uVar7,plVar2,*(undefined8 *)(lVar3 + 0x2b0));
  }
LAB_076d93d8:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = FUN_08584ab0(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 076d93e8 to 077d9413 has its CatchHandler @ 076d95b4 */
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (iVar1 = FUN_0859a678(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
      FUN_08588638(lVar3,0 < iVar1,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar3 = FUN_08584ab0(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
        FUN_08588638(lVar3,*(char *)(unaff_x19 + 0x88) == '\0',0);
        return;
      }
    }
  }
OVRPlugin_ControllerState6___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


