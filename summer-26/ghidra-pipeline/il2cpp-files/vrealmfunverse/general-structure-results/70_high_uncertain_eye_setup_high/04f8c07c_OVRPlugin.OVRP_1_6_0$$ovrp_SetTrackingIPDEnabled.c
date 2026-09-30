/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 04f8c07c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  while( true ) {
    lVar3 = FUN_02b3c908(param_1,param_2);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) break;
    lVar4 = *unaff_x25;
    if (lVar4 == 0) {
LAB_04f8c148:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 == uVar5) goto LAB_04f8c144;
        if (unaff_x20 == 0) goto LAB_04f8c148;
        lVar6 = (long)(int)uVar5;
        uVar2 = *(uint *)(lVar4 + lVar6 * 4 + 0x20);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_04f8c144;
        if (lVar3 == 0) goto LAB_04f8c148;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04f8c144;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar3 + lVar6 * 4 + 0x20) =
             *(undefined4 *)(unaff_x20 + (long)(int)uVar2 * 4 + 0x20);
      } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar5);
    }
    if (unaff_x21 == 0) goto LAB_04f8c148;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22) break;
    *(long *)(unaff_x21 + unaff_x22 * 8 + 0x20) = lVar3;
    thunk_FUN_02bb0e9c(unaff_x24 + unaff_x22 * 8);
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_x22) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) break;
    unaff_x25 = (long *)(unaff_x19 + unaff_x22 * 8 + 0x20);
    if (*unaff_x25 == 0) goto LAB_04f8c148;
    param_1 = *unaff_x23;
    param_2 = (ulong)*(uint *)(*unaff_x25 + 0x18);
  }
LAB_04f8c144:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


