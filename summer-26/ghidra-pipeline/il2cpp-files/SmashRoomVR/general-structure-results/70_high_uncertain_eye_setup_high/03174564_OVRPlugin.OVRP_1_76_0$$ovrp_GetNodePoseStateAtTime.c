/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$ovrp_GetNodePoseStateAtTime
ENTRY_POINT: 03174564
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_76_0__ovrp_GetNodePoseStateAtTime(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 in_x10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar6;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 uVar7;
  undefined8 uStack0000000000000000;
  undefined4 in_stack_00000008;
  
  while (uStack0000000000000000 = in_x10, unaff_x21 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + unaff_x21 * unaff_x25;
    *(undefined4 *)(param_1 + 0x28) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = in_x10;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (((lVar2 == 0) || (unaff_x19 == 0)) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0)) {
LAB_031745f0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(uint *)(lVar4 + 0x18) <= unaff_x21) || (*(uint *)(lVar2 + 0x18) <= unaff_x21)) break;
    lVar4 = lVar4 + unaff_x21 * 0x10;
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    lVar2 = lVar2 + unaff_x21 * unaff_x25;
    unaff_x21 = unaff_x21 + 1;
    *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar2 + 0x2c) = uVar7;
    if (unaff_x21 == 0x18) {
      return;
    }
    plVar6 = *(long **)(unaff_x20 + 0x38);
    if (plVar6 == (long *)0x0) goto LAB_031745f0;
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03174520;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x23,0);
LAB_03174520:
    (*(code *)*puVar1)(plVar6,unaff_x21 & 0xffffffff,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_031745f0;
    in_stack_00000008 = *(undefined4 *)(unaff_x24 + 1);
    in_x10 = *unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


