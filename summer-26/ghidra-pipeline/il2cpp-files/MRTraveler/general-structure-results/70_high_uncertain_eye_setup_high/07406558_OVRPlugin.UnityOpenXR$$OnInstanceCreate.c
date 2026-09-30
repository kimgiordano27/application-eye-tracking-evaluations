/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 07406558
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceCreate
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  float fVar3;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  uStack0000000000000010 = param_3;
  fVar3 = (float)FUN_085d2318(0);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  uVar1 = FUN_085e9668(uStack000000000000001c,uStack0000000000000018,uStack0000000000000010,
                       (unaff_s15 * unaff_s9 + unaff_s14 * unaff_s11 + unaff_s12 * fVar3) -
                       unaff_s13 * unaff_s10,
                       (unaff_s14 * unaff_s10 + unaff_s13 * unaff_s11 + unaff_s12 * unaff_s9) -
                       unaff_s15 * fVar3,
                       (unaff_s13 * fVar3 + unaff_s15 * unaff_s11 + unaff_s12 * unaff_s10) -
                       unaff_s14 * unaff_s9,
                       ((unaff_s12 * unaff_s11 - unaff_s14 * fVar3) - unaff_s13 * unaff_s9) -
                       unaff_s15 * unaff_s10,&stack0x00000080,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uStack0000000000000074 = CONCAT44(in_stack_00000098,uStack0000000000000094);
  uStack000000000000006c = uStack000000000000008c;
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + unaff_x21 * 0x1c;
    *(undefined8 *)(lVar2 + 0x34) = uStack0000000000000074;
    *(ulong *)(lVar2 + 0x2c) = CONCAT44(in_stack_00000090,uStack000000000000008c);
    *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000008c,in_stack_00000088);
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000080;
    FUN_074069a8(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


