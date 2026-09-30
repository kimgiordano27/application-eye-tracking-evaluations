/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsDesc
ENTRY_POINT: 04f8c0f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsDesc
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint in_w9;
  uint in_w10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar3;
  
  while( true ) {
    if ((bool)in_ZR) {
      do {
        if (unaff_x21 == 0) goto LAB_04f8c148;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22) goto LAB_04f8c144;
        *(long *)(unaff_x21 + unaff_x22 * 8 + 0x20) = param_3;
        thunk_FUN_02bb0e9c(unaff_x24 + unaff_x22 * 8);
        unaff_x22 = unaff_x22 + 1;
        if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_x22) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_04f8c144;
        plVar3 = (long *)(unaff_x19 + unaff_x22 * 8 + 0x20);
        lVar2 = *plVar3;
        if (lVar2 == 0) goto LAB_04f8c148;
        param_3 = FUN_02b3c908(*unaff_x23,*(undefined4 *)(lVar2 + 0x18));
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) goto LAB_04f8c144;
        param_1 = *plVar3;
        if (param_1 == 0) goto LAB_04f8c148;
        in_w9 = *(uint *)(param_1 + 0x18);
      } while ((int)in_w9 < 1);
      in_w10 = in_w9 & ((int)in_w9 >> 0x1f ^ 0xffffffffU);
      in_w11 = 0;
    }
    if (in_w9 == in_w11) break;
    if (unaff_x20 == 0) {
LAB_04f8c148:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = (long)(int)in_w11;
    uVar1 = *(uint *)(param_1 + lVar2 * 4 + 0x20);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) break;
    if (param_3 == 0) goto LAB_04f8c148;
    if (*(uint *)(param_3 + 0x18) <= in_w11) break;
    in_w11 = in_w11 + 1;
    in_ZR = in_w10 == in_w11;
    *(undefined4 *)(param_3 + lVar2 * 4 + 0x20) =
         *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20);
  }
LAB_04f8c144:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


