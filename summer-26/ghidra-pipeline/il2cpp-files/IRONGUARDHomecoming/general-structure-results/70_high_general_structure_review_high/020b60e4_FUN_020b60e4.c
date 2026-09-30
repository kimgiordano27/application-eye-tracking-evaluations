/*
FUNCTION_NAME: FUN_020b60e4
ENTRY_POINT: 020b60e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_020b60e4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_AddListener__;
  if ((DAT_0482f916 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_Invoke__);
    DAT_0482f916 = 1;
  }
  lVar3 = FUN_022c5c50(param_1,*(undefined8 *)puVar2);
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = lVar3;
                    /* try { // try from 020b613c to 021b6e5f has its CatchHandler @ 020b613c
                       catch() { ... } // from try @ 020b613c with catch @ 020b613c
                       catch() { ... } // from try @ 020b6e68 with catch @ 020b613c */
  thunk_FUN_01f51358(plVar7,lVar3);
  if (*plVar7 != 0) {
    FUN_0404c858(*plVar7,0,0);
    if (DAT_0482f8ac == '\0') {
      thunk_FUN_01efb3a4(Method_System_Threading_Tasks_Task<bool>__ctor__);
      DAT_0482f8ac = '\x01';
    }
    if ((**(long **)(*(long *)Method_System_Threading_Tasks_Task<bool>__ctor__ + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)Method_System_Threading_Tasks_Task<bool>__ctor__ +
                                     0xb8) + 0x38), lVar3 != 0)) {
      lVar4 = *plVar7;
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_Invoke__;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar4;
          thunk_FUN_01f51358(plVar7);
          return;
        }
        FUN_030f2bb4(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


