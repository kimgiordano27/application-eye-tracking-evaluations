/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$.cctor
ENTRY_POINT: 056a6ba0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_95_0___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined4 unaff_w26;
  int unaff_w27;
  long unaff_x28;
  long lVar8;
  long unaff_x29;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar8 = *(long *)(unaff_x28 + 0x50);
  iVar1 = in_w8 + 0x1e;
  if (-1 < in_w8 + -1) {
    iVar1 = in_w8 + -1;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054f73b4(lVar8 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar2 = thunk_FUN_02da28e8(uVar3,0);
  uVar3 = FUN_0540c158(iVar2 * ((iVar1 >> 5) + 1),0);
  lVar8 = FUN_055339fc(uVar3,0);
  if (-0x20 < unaff_w27) {
    uVar5 = unaff_x29 - 1;
    uVar6 = unaff_x29 + 3U & 0x1fffffffc;
    puVar7 = unaff_x22;
    uVar9 = _DAT_010ff5e0;
    uVar10 = _UNK_010ff5e8;
    uVar11 = _DAT_010fe1d0;
    uVar12 = _UNK_010fe1d8;
    do {
      if (uVar11 <= uVar5) {
        *puVar7 = 0;
      }
      if (uVar12 <= uVar5) {
        puVar7[1] = 0;
      }
      if (uVar9 <= uVar5) {
        puVar7[2] = 0;
      }
      if (uVar10 <= uVar5) {
        puVar7[3] = 0;
      }
      uVar9 = uVar9 + 4;
      uVar10 = uVar10 + 4;
      uVar11 = uVar11 + 4;
      uVar12 = uVar12 + 4;
      uVar6 = uVar6 - 4;
      puVar7 = puVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar4 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                      );
  if (0 < (int)unaff_x25) {
    uVar6 = 0;
    do {
      if (*(char *)(lVar4 + uVar6) != '\0') {
        uVar9 = uVar6 >> 3 & 0xffffffc;
        *(uint *)(uVar9 + lVar8) = *(uint *)(uVar9 + lVar8) | 1 << (ulong)((uint)uVar6 & 0x1f);
      }
      uVar6 = uVar6 + 1;
    } while (unaff_x25 != uVar6);
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  *(undefined4 **)(unaff_x19 + 4) = unaff_x22;
  unaff_x19[6] = (int)unaff_x25;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = unaff_w26;
  *(undefined8 *)(unaff_x19 + 8) = unaff_x23;
  *(long *)(unaff_x19 + 10) = lVar8;
  return;
}


