/*
FUNCTION_NAME: OVRPlugin$$IsPassthroughShape
ENTRY_POINT: 090984b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPassthroughShape(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack0000000000000048;
  
  lStack0000000000000048 = 0;
  uVar2 = FUN_05b00be4();
  if ((uVar2 & 1) != 0) {
    if (lStack0000000000000048 != 0) {
      uVar6 = *(undefined8 *)(lStack0000000000000048 + 0xf0);
      uVar5 = *(undefined8 *)(lStack0000000000000048 + 0xe8);
      uVar3 = *(undefined8 *)(lStack0000000000000048 + 0xf8);
      uVar8 = *(undefined8 *)(lStack0000000000000048 + 0x108);
      uVar7 = *(undefined8 *)(lStack0000000000000048 + 0x100);
      uVar4 = *(undefined8 *)(lStack0000000000000048 + 0x110);
      uVar1 = *(undefined4 *)(lStack0000000000000048 + 0xe4);
      *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(lStack0000000000000048 + 200);
      *(undefined4 *)(unaff_x19 + 0xe0) = uVar1;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 200));
      *(undefined8 *)(unaff_x19 + 0xf4) = uVar3;
      *(undefined8 *)(unaff_x19 + 0xec) = uVar6;
      *(undefined8 *)(unaff_x19 + 0xe4) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x104) = uVar8;
      *(undefined8 *)(unaff_x19 + 0xfc) = uVar7;
      *(undefined8 *)(unaff_x19 + 0x10c) = uVar4;
      if (lStack0000000000000048 != 0) {
        uVar4 = *(undefined8 *)(lStack0000000000000048 + 0x130);
        uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac78bc0);
        FUN_06b7f748(uVar3,uVar4,*(undefined8 *)PTR_DAT_0ac78bb8);
        *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
        thunk_FUN_049ee3d8(unaff_x19 + 0x130,uVar3);
        if (lStack0000000000000048 != 0) goto LAB_090985c8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = FUN_05b00274();
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  thunk_FUN_049ee3d8();
  FUN_05b00274();
LAB_090985c8:
  FUN_0717c458();
  return;
}


