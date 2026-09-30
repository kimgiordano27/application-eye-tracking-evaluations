/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 090cc154
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


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  while( true ) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      param_1 = **(long **)(*unaff_x22 + 0xb8);
      if (param_1 == 0) break;
    }
    lVar2 = FUN_06b7fba4(param_1,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar2 == 0) break;
    iVar1 = *(int *)(lVar2 + 0x18) + -1;
    uVar3 = FUN_04947fd0(*unaff_x24,iVar1);
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_090cc220:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar2 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_049ee3d8(unaff_x19 + unaff_x25,uVar3);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) break;
    uVar3 = FUN_06b7fba4(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_090cc220;
    FUN_08da0170(uVar3,*(undefined8 *)(lVar2 + 0x20),iVar1,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
    param_2 = *unaff_x22;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      param_2 = *unaff_x22;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) break;
    if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


