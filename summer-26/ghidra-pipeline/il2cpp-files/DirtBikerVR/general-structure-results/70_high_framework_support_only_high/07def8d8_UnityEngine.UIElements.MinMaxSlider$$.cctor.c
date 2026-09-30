/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider$$.cctor
ENTRY_POINT: 07def8d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UIElements_MinMaxSlider___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  FUN_03a8a718(OVRPlugin_Media_TypeInfo);
  FUN_03a8a718(PTR_DAT_084961e0);
  FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x1e9) = 1;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07defb30;
  in_stack_00000078 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x268);
  lVar2 = FUN_07e13e44(&stack0x00000078,0);
  if (lVar2 == 0) {
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07ea20f8(0);
  }
  else {
    FUN_07dfdfd8(lVar2,0);
    FUN_07dfdfd8(lVar2,0);
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07defb30;
  uVar3 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar2);
  }
  FUN_07de46f4(uVar3);
  if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07defb30;
  uVar3 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
  uVar4 = FUN_07f69f88(uVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_07defa58:
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (plVar5 = (long *)FUN_07e02864(*(long *)(unaff_x20 + 0x20),0), plVar5 == (long *)0x0))
    goto LAB_07defb30;
    lVar2 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084961e0) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
          goto LAB_07defac8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_084961e0,0x12);
LAB_07defac8:
    (*(code *)*puVar6)(plVar5,0x50000,puVar6[1]);
  }
  else {
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07defb30;
    uVar4 = FUN_07e08834(*(long *)(unaff_x20 + 0x20),0);
    if ((uVar4 & 1) == 0) goto LAB_07defa58;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_07defb30;
    uVar3 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar2);
    }
    uVar4 = FUN_07de49dc(uVar3,0x50000,&stack0x00000058);
    if ((uVar4 & 1) == 0) goto LAB_07defa58;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (lVar2 == 0) goto LAB_07defb30;
    uVar3 = FUN_07dfdfd8(lVar2,0);
    in_stack_00000030 = *unaff_x19;
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x19 + 0x14);
    uStack0000000000000038 = (undefined4)unaff_x19[1];
    uStack000000000000003c = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
    uVar4 = FUN_07f6c7f8(lVar2,uVar3,&stack0x00000030,in_stack_00000058._4_4_,
                         in_stack_00000060 & 0xffffffff,in_stack_00000068,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar3 = FUN_07dfdfd8(*(long *)(unaff_x20 + 0x20),0);
    FUN_07e251f4(&stack0x00000018);
    FUN_07f80e34(uVar3);
    return;
  }
LAB_07defb30:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


