/*
FUNCTION_NAME: FUN_06ac6220
ENTRY_POINT: 06ac6220
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_06ac6220(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e3193 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequest>_Invoke__);
    DAT_076e3193 = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06bece64(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
LAB_06ac63c8:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar2 = FUN_06bece64(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_06ac63c8;
      uVar2 = FUN_050fa644(*(long *)(param_1 + 0x90),uVar3,&local_28,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<WitResponseNode>_Invoke__);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_06ac63c8;
        FUN_050f8b10(*(long *)(param_1 + 0x90),uVar3,param_2,
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<WitResponseNode>_AddListener__);
      }
      else {
        uVar3 = FUN_057ab660(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<WitRequest>__ctor__
                             ,uVar3,local_28,param_2,0);
        uVar3 = FUN_057aaeec(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__
                             ,uVar3,*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<WitRequest>_Invoke__,0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb3070(uVar3,param_2,0);
      }
    }
  }
  return;
}


