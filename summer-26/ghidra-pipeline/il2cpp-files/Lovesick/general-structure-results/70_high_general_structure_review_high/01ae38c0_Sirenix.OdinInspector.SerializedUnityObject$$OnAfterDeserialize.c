/*
FUNCTION_NAME: Sirenix.OdinInspector.SerializedUnityObject$$OnAfterDeserialize
ENTRY_POINT: 01ae38c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


long Sirenix_OdinInspector_SerializedUnityObject__OnAfterDeserialize(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iStack000000000000000c;
  
  if ((DAT_0377d097 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13207);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationSubmit__
                      );
    DAT_0377d097 = 1;
  }
  iStack000000000000000c = 0;
  FUN_01ae4718(param_1);
  puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    iStack000000000000000c = 0;
    uVar2 = FUN_01ae2b00(*(undefined8 *)
                          Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationSubmit__
                         ,&stack0x0000000c);
    uVar3 = FUN_017bc96c(uVar2,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if (((uVar3 & 1) == 0) || (iStack000000000000000c != 0)) {
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13207);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01adcef8(lVar4,uVar2);
      *(long *)(param_1 + 0x10) = lVar4;
    }
  }
  return lVar4;
}


