/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetNodePoseState
ENTRY_POINT: 05bee358
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar6;
  
LAB_05bee368:
  do {
    (*(code *)*param_1)(unaff_x22,unaff_x21 & 0xffffffff,param_1[1]);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_05bee410:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_05bee414:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar2 = lVar2 + unaff_x21 * unaff_x25;
    uVar1 = *(undefined4 *)(unaff_x24 + 0xc);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x24 + 4);
    *(undefined4 *)(lVar2 + 0x28) = uVar1;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (((lVar2 == 0) || (unaff_x19 == 0)) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0))
    goto LAB_05bee410;
    if ((*(uint *)(lVar4 + 0x18) <= unaff_x21) || (*(uint *)(lVar2 + 0x18) <= unaff_x21))
    goto LAB_05bee414;
    lVar2 = lVar2 + unaff_x21 * unaff_x25;
    lVar4 = lVar4 + unaff_x21 * 0x10;
    unaff_x21 = unaff_x21 + 1;
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar2 + 0x2c) = uVar6;
    if (unaff_x21 == 0x18) {
      return;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x38);
    if (unaff_x22 == (long *)0x0) goto LAB_05bee410;
    lVar2 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05bee368;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_031c0d08(unaff_x22,*unaff_x23,0);
  } while( true );
}


