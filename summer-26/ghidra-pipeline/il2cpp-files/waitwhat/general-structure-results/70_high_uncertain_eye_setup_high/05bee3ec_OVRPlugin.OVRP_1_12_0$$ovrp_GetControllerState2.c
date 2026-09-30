/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 05bee3ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar6;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar7;
  
  while( true ) {
    uVar7 = *(undefined8 *)(in_x9 + 0x20);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(in_x9 + 0x28);
    *(undefined8 *)(param_1 + 0x2c) = uVar7;
    if ((bool)in_ZR) {
      return;
    }
    plVar6 = *(long **)(unaff_x20 + 0x38);
    if (plVar6 == (long *)0x0) break;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05bee368;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x23,0);
LAB_05bee368:
    (*(code *)*puVar2)(plVar6,unaff_x21 & 0xffffffff,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_05bee414:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar3 = lVar3 + unaff_x21 * unaff_x25;
    uVar1 = *(undefined4 *)(unaff_x24 + 0xc);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(unaff_x24 + 4);
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (((param_1 == 0) || (unaff_x19 == 0)) || (lVar3 = *(long *)(unaff_x19 + 0x38), lVar3 == 0))
    break;
    if ((*(uint *)(lVar3 + 0x18) <= unaff_x21) || (*(uint *)(param_1 + 0x18) <= unaff_x21))
    goto LAB_05bee414;
    param_1 = param_1 + unaff_x21 * unaff_x25;
    in_x9 = lVar3 + unaff_x21 * 0x10;
    unaff_x21 = unaff_x21 + 1;
    in_ZR = unaff_x21 == 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


