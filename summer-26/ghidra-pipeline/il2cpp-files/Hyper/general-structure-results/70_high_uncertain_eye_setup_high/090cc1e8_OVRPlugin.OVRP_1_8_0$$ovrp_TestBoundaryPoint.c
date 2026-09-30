/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 090cc1e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  do {
    FUN_08da0170(param_1,param_2,unaff_w21,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar1 = *unaff_x22;
    }
    lVar3 = **(long **)(lVar1 + 0xb8);
    if (lVar3 == 0) {
LAB_090cc21c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) goto LAB_090cc21c;
    }
    lVar1 = FUN_06b7fba4(lVar3,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar1 == 0) goto LAB_090cc21c;
    unaff_w21 = *(int *)(lVar1 + 0x18) + -1;
    uVar2 = FUN_04947fd0(*unaff_x24,unaff_w21);
    if (unaff_x19 == 0) goto LAB_090cc21c;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_090cc220:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar1 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_049ee3d8(unaff_x19 + unaff_x25,uVar2);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_090cc21c;
    param_1 = FUN_06b7fba4(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_090cc220;
    param_2 = *(undefined8 *)(lVar1 + 0x20);
  } while( true );
}


