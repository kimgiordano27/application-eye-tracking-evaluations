/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 07a655ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  puVar1 = PTR_DAT_092f0d20;
  lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_092f0d20;
    lVar2 = thunk_FUN_040b4e00(lVar3,uVar5);
    if (lVar2 == 0) goto LAB_07a656a4;
  }
  lVar3 = FUN_076c0530(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)puVar1;
    lVar2 = thunk_FUN_040b4e00(lVar3,uVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar3,uVar5);
    }
    uVar5 = *(undefined8 *)puVar1;
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar2;
    lVar2 = thunk_FUN_040b4e00(lVar3,uVar5);
    if (lVar2 == 0) {
LAB_07a656a4:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar3,uVar5);
    }
  }
  thunk_FUN_040ec700(plVar4,lVar2);
  return;
}


