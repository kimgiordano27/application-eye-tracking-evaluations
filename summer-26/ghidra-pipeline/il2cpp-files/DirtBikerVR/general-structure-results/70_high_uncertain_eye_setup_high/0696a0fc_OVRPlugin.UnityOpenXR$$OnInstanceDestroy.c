/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 0696a0fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    unaff_w20 = unaff_w20 + 1;
    if (((*(long *)(unaff_x19 + 0x10) == 0) ||
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      FUN_0693839c();
      return;
    }
    uVar2 = FUN_04de82e0(lVar4,unaff_w20,*unaff_x23);
    lVar4 = thunk_FUN_03ac74bc(*unaff_x24);
    *(undefined8 *)(lVar4 + 0x18) = in_stack_00000008;
    *(undefined8 *)(lVar4 + 0x10) = in_stack_00000000;
    FUN_0679343c(lVar4,0);
    FUN_0696a158(lVar4,*(undefined8 *)(unaff_x19 + 0x10),uVar2);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 == 0) break;
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar7 = *unaff_x25;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lVar4;
      thunk_FUN_03afed3c(plVar6,lVar4);
    }
    else {
      FUN_04de85b0(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


