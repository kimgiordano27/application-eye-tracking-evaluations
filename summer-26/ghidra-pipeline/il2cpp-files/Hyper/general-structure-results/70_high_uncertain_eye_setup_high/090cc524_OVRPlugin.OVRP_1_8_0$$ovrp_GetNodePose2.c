/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 090cc524
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  long *unaff_x21;
  uint uVar6;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  lVar2 = FUN_090cc3b8();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
LAB_090cc618:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac20648,
                       *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
  lVar4 = *unaff_x21;
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_090cc618;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar6) {
      return lVar3;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *unaff_x21;
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_090cc618;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
    if (lVar2 == 0) goto LAB_090cc618;
    uVar1 = *(uint *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    if (lVar3 == 0) goto LAB_090cc618;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) break;
    lVar5 = (long)(int)uVar6;
    uVar6 = uVar6 + 1;
    *(bool *)(lVar3 + lVar5 + 0x20) =
         *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) < 2 && uVar1 != 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


