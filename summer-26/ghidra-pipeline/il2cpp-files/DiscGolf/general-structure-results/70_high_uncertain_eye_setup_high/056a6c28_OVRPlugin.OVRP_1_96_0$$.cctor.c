/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$.cctor
ENTRY_POINT: 056a6c28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_96_0___cctor(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long in_x9;
  undefined4 *puVar3;
  long in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined4 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined4 unaff_w26;
  long unaff_x29;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 in_stack_00000008;
  
  uVar5 = *(ulong *)(in_x9 + 0x5e8);
  uVar4 = *(ulong *)(in_x9 + 0x5e0);
  uVar2 = unaff_x29 + 3U & 0x1fffffffc;
  puVar3 = unaff_x22;
  uVar6 = _DAT_010fe1d0;
  uVar7 = _UNK_010fe1d8;
  do {
    if (uVar6 <= param_1) {
      *puVar3 = 0;
    }
    if (uVar7 <= param_1) {
      puVar3[1] = 0;
    }
    if (uVar4 <= param_1) {
      puVar3[2] = 0;
    }
    if (uVar5 <= param_1) {
      puVar3[3] = 0;
    }
    uVar4 = uVar4 + in_x10;
    uVar5 = uVar5 + in_x10;
    uVar6 = uVar6 + in_x10;
    uVar7 = uVar7 + in_x10;
    uVar2 = uVar2 - 4;
    puVar3 = puVar3 + 4;
  } while (uVar2 != 0);
  lVar1 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                      );
  if (0 < (int)unaff_x25) {
    uVar2 = 0;
    do {
      if (*(char *)(lVar1 + uVar2) != '\0') {
        uVar6 = uVar2 >> 3 & 0xffffffc;
        *(uint *)(uVar6 + unaff_x24) =
             *(uint *)(uVar6 + unaff_x24) | 1 << (ulong)((uint)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while (unaff_x25 != uVar2);
  }
  *(undefined8 *)(unaff_x19 + 2) = unaff_x21;
  *(undefined4 **)(unaff_x19 + 4) = unaff_x22;
  unaff_x19[6] = (int)unaff_x25;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = unaff_w26;
  *(undefined8 *)(unaff_x19 + 8) = unaff_x23;
  *(long *)(unaff_x19 + 10) = unaff_x24;
  return;
}


