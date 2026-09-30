/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetBodyState4
ENTRY_POINT: 056a652c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetBodyState4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = *(uint *)(unaff_x19 + 4);
  uVar5 = (ulong)uVar1;
  FUN_0428b88c(param_1,uVar5);
  uVar3 = *unaff_x29;
  *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000010;
  auVar6 = FUN_036ec6c0(*(undefined8 *)(unaff_x19 + 8),uVar5,1,uVar3);
  FUN_0428bdac(unaff_x20 + 0x18,auVar6._0_8_,auVar6._8_8_,*unaff_x28);
  FUN_042293d4();
  uVar3 = *unaff_x26;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  lVar2 = FUN_036ec988(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),uVar3);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      *(byte *)(lVar2 + uVar4) =
           (byte)(*(uint *)((uVar4 >> 3 & 0xffffffc) + *(long *)(unaff_x19 + 0x10)) >>
                 (ulong)((uint)uVar4 & 0x1f)) & 1;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  uVar5 = (ulong)uVar1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_0426a118(&stack0x00000010,uVar5,4,0,*unaff_x27);
  uVar3 = *unaff_x25;
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000010;
  auVar6 = FUN_036ec54c(*(undefined8 *)(unaff_x19 + 0x20),uVar5,1,uVar3);
  FUN_0426a5f8(unaff_x20 + 0x38,auVar6._0_8_,auVar6._8_8_,*unaff_x24);
  FUN_042293d4();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  lVar2 = FUN_036ec8f0(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleLength,_Length>_TypeInfo);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      *(byte *)(lVar2 + uVar4) =
           (byte)(*(uint *)((uVar4 >> 3 & 0xffffffc) + *(long *)(unaff_x19 + 0x28)) >>
                 (ulong)((uint)uVar4 & 0x1f)) & 1;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}


