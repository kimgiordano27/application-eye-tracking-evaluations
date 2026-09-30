/*
FUNCTION_NAME: FUN_01fffbf0
ENTRY_POINT: 01fffbf0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_01fffbf0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_0378085f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiRigidbodyHandle>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Selectable>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_0378085f = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = Method_System_Collections_Generic_List<Selectable>__ctor__;
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x310))
    ;
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == *(long *)puVar1) {
        return plVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar4);
    }
    if ((param_1 != 0) && (lVar3 = thunk_FUN_00d93c64(param_1,0), lVar3 != 0)) {
      uVar5 = FUN_0178bef8(lVar3,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar3 = FUN_01ff8d44();
      }
      if ((param_2 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar4 = (long *)FUN_01ffa538(lVar3);
        return plVar4;
      }
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<ObiRigidbodyHandle>__ctor__
                                );
      if (lVar6 != 0) {
        FUN_01fd8194(lVar6,lVar3,0);
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (plVar4 != (long *)0x0) {
          FUN_01fd81bc(plVar4,0);
          plVar4[5] = lVar6;
          return plVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


