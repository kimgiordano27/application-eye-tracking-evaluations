/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateDelegate$$EndInvoke
ENTRY_POINT: 077147f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xef8));
  FUN_04447ba8(PTR_DAT_09f1e540);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f30a50);
  *(undefined1 *)(unaff_x20 + 0x11c) = 1;
  lVar3 = FUN_04c6bfdc();
  plVar6 = (long *)(unaff_x19 + 0x20);
  *plVar6 = lVar3;
  thunk_FUN_044bb4b4(plVar6,lVar3);
  lVar3 = *plVar6;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar4 = FUN_0952c404(lVar3,0,0);
  puVar1 = PTR_DAT_09f30a50;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)puVar1,0);
    return;
  }
  if (*plVar6 != 0) {
    uVar5 = FUN_094edcf8(*plVar6,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar5);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar2 = FUN_094ed840(*(long *)(unaff_x19 + 0x20),0);
      if (*plVar6 != 0) {
        FUN_094ed8f4(*plVar6,1,0);
        if (*plVar6 != 0) {
          FUN_094ed8f4(*plVar6,uVar2 & 1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


