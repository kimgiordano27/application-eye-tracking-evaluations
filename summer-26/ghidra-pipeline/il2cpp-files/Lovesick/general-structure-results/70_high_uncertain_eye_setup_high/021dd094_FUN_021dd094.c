/*
FUNCTION_NAME: FUN_021dd094
ENTRY_POINT: 021dd094
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_021dd094(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = Method_System_Collections_Generic_List<BreakableSecurityCamera>_GetEnumerator__;
  if ((DAT_0378173d & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_SpaceQueryResult_var);
    thunk_FUN_00d48444(PTR_DAT_033ebd20);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlFactory<GroupBox,_GroupBox_UxmlTraits>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<BreakableSecurityCamera>_GetEnumerator__
                      );
    DAT_0378173d = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033ebd20;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(lVar2 + 0x10) = param_2;
    if (param_2 == 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = 0;
    }
    else {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (lVar3 == 0) goto LAB_021dd1a0;
      FUN_012d239c(lVar3,lVar2,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<GroupBox,_GroupBox_UxmlTraits>__ctor__
                   ,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar1;
      }
      *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x10);
    return;
  }
LAB_021dd1a0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


