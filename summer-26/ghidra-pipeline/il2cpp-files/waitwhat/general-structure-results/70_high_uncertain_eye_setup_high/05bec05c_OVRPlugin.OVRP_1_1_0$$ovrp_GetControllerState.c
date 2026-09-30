/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetControllerState
ENTRY_POINT: 05bec05c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetControllerState(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x22;
  
  puVar3 = PTR_DAT_07116c70;
  puVar2 = PTR_DAT_07114670;
  if (*param_1 == 0) {
LAB_05bec170:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07115550,*(undefined4 *)(*param_1 + 0x18));
  uVar8 = 0;
  while( true ) {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x22;
    }
    lVar7 = **(long **)(lVar5 + 0xb8);
    if (lVar7 == 0) goto LAB_05bec170;
    if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
      return lVar4;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar7 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar7 == 0) goto LAB_05bec170;
    }
    lVar5 = FUN_042e47a4(lVar7,uVar8 & 0xffffffff,*(undefined8 *)puVar3);
    if (lVar5 == 0) goto LAB_05bec170;
    iVar1 = *(int *)(lVar5 + 0x18) + -1;
    uVar6 = FUN_03188b1c(*(undefined8 *)puVar2,iVar1);
    if (lVar4 == 0) goto LAB_05bec170;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    lVar5 = lVar4 + uVar8 * 8;
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_05bec170;
    uVar6 = FUN_042e47a4(**(long **)(*unaff_x22 + 0xb8),uVar8 & 0xffffffff,*(undefined8 *)puVar3);
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    FUN_05953590(uVar6,*(undefined8 *)(lVar5 + 0x20),iVar1,0);
    uVar8 = uVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


