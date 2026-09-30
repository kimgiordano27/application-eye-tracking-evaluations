/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeFrustum
ENTRY_POINT: 05bebfe0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetNodeFrustum(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_07112148;
  if ((DAT_0754ed6f & 1) == 0) {
    FUN_03188a78(PTR_DAT_07115550);
    FUN_03188a78(PTR_DAT_07114670);
    FUN_03188a78(PTR_DAT_07112148);
    FUN_03188a78(PTR_DAT_07116c68);
    FUN_03188a78(PTR_DAT_07116c70);
    DAT_0754ed6f = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_07116c70;
  puVar3 = PTR_DAT_07114670;
  if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_05bec170:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar5 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07115550,
                       *(undefined4 *)(**(long **)(lVar5 + 0xb8) + 0x18));
  uVar9 = 0;
  while( true ) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar2;
    }
    lVar8 = **(long **)(lVar6 + 0xb8);
    if (lVar8 == 0) goto LAB_05bec170;
    if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) {
      return lVar5;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar8 == 0) goto LAB_05bec170;
    }
    lVar6 = FUN_042e47a4(lVar8,uVar9 & 0xffffffff,*(undefined8 *)puVar4);
    if (lVar6 == 0) goto LAB_05bec170;
    iVar1 = *(int *)(lVar6 + 0x18) + -1;
    uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,iVar1);
    if (lVar5 == 0) goto LAB_05bec170;
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    lVar6 = lVar5 + uVar9 * 8;
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_05bec170;
    uVar7 = FUN_042e47a4(**(long **)(*(long *)puVar2 + 0xb8),uVar9 & 0xffffffff,
                         *(undefined8 *)puVar4);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    FUN_05953590(uVar7,*(undefined8 *)(lVar6 + 0x20),iVar1,0);
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


