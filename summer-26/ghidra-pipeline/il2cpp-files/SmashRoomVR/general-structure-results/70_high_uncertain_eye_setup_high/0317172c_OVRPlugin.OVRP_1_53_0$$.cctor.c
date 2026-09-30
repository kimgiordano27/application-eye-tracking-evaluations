/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 0317172c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_53_0___cctor(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  int in_w9;
  long lVar2;
  uint unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0xe0), lVar2 != 0)) {
    if ((unaff_w19 < *(uint *)(lVar1 + 0x18)) && (unaff_w19 < *(uint *)(lVar2 + 0x18))) {
      FUN_03171990(lVar1 + unaff_x22 * 8 + 0x20,lVar2 + unaff_x22 * 8 + 0x20,in_w9 - 1U < 2,
                   param_4 & 1);
      lVar1 = *(long *)(param_1 + 0x150);
      if (lVar1 == 0) goto LAB_031717e8;
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
        lVar2 = *(long *)(param_1 + 0x148);
        if (lVar2 == 0) goto LAB_031717e8;
        if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
          lVar1 = lVar1 + unaff_x22 * 0x10;
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
          lVar2 = lVar2 + unaff_x22 * 0x10;
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
          *(undefined8 *)(lVar2 + 0x20) = uVar3;
          lVar1 = *(long *)(param_1 + 0x158);
          if (lVar1 == 0) goto LAB_031717e8;
          if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
            *(undefined4 *)(lVar1 + unaff_x22 * 4 + 0x20) = *unaff_x20;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_031717e8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


