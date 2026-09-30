/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 090d0140
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x24;
  undefined8 *puVar6;
  long unaff_x25;
  long *plVar7;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0x6c8);
  plVar7 = *(long **)(unaff_x25 + 0xb50);
  do {
    iVar1 = unaff_w20 + 1;
    iVar2 = iVar1;
    while (iVar2 < *(int *)(param_1 + 0x18)) {
      lVar3 = FUN_06b7fba4(param_1,unaff_w20,*puVar6);
      if ((lVar3 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_090d01e8;
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = FUN_06b7fba4(*(long *)(unaff_x19 + 0x68),iVar2,*puVar6);
      if (lVar3 == 0) goto LAB_090d01e8;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a1f19f4(uVar4,uVar5,0);
      param_1 = *(long *)(unaff_x19 + 0x68);
      iVar2 = iVar2 + 1;
      if (param_1 == 0) {
LAB_090d01e8:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    unaff_w20 = iVar1;
    if (*(int *)(param_1 + 0x18) <= iVar1) {
      return;
    }
  } while( true );
}


