/*
FUNCTION_NAME: FUN_07bd8914
ENTRY_POINT: 07bd8914
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07bd8b38) */

uint FUN_07bd8914(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
                    /* try { // try from 07bd8914 to 07cd8e1f has its CatchHandler @ 07bd8914
                       catch() { ... } // from try @ 07bd8914 with catch @ 07bd8914
                       catch() { ... } // from try @ 07bd8eec with catch @ 07bd8914
                       catch() { ... } // from try @ 07bd8f8c with catch @ 07bd8914
                       catch() { ... } // from try @ 07bd8f98 with catch @ 07bd8914
                       catch() { ... } // from try @ 07bd8fec with catch @ 07bd8914 */
  if ((DAT_08992bb0 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486798);
    FUN_03a8a718(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    FUN_03a8a718(OVRPlugin_TypeInfo);
    FUN_03a8a718(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
    FUN_03a8a718(System_NullReferenceException_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492e10);
    FUN_03a8a718(PTR_DAT_084883a0);
    FUN_03a8a718(OVRPose_TypeInfo);
    DAT_08992bb0 = 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = FUN_04d8ed54(*(long *)(param_1 + 0x48),*(int *)(param_1 + 0x28),
                         *(undefined8 *)
                          System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo
                        );
    puVar1 = PTR_DAT_08492e10;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07bd8bc0();
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar4,param_1,*(undefined8 *)System_NullReferenceException_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_08486798 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c449b0(uVar4,0);
      uVar4 = FUN_07bd788c(param_1);
      FUN_07bd74f0(uVar4,1);
      FUN_0468321c(param_1,*(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
      FUN_0468321c(param_1,*(undefined8 *)OVRPlugin_TypeInfo);
      FUN_07bd5120(*(undefined8 *)OVRPose_TypeInfo);
      FUN_07bd8c24();
      FUN_07bd788c(param_1);
      FUN_07bd8c88();
      plVar7 = (long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 0;
      if (*plVar7 != 0) {
        lVar5 = thunk_FUN_03a98ef4(0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_06796db4(lVar5,*plVar7,0);
        *plVar7 = 0;
        thunk_FUN_03afed3c(plVar7,0);
      }
      uVar2 = FUN_07bd0188(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (DAT_08992ec8 == '\0') {
        FUN_03a8a718(PTR_DAT_08492e10);
        DAT_08992ec8 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar1;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      *puVar6 = 0;
      thunk_FUN_03afed3c(puVar6,0);
    }
  }
  return uVar2 & 1;
}


