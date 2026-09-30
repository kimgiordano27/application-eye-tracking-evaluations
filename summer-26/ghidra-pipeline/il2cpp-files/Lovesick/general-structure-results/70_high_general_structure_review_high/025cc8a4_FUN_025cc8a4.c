/*
FUNCTION_NAME: FUN_025cc8a4
ENTRY_POINT: 025cc8a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void FUN_025cc8a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_UIElements_BaseField<bool>_set_value__;
  if ((DAT_03783161 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass8_0_<UnregisterManagedCallback>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<EasingFunction>_MoveNext__)
    ;
    thunk_FUN_00d48444(MedleyArcadeCabinet_<TimerCountdown>d__35_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlScheme>_get_Item__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<bool>_set_value__);
    DAT_03783161 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_025cb230();
    *(long *)(param_1 + 0x18) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlScheme>_get_Item__;
    if (lVar2 != 0) {
      FUN_025cb230();
      *(long *)(param_1 + 0x20) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = MedleyArcadeCabinet_<TimerCountdown>d__35_TypeInfo;
      if (lVar2 != 0) {
        FUN_01320e50(lVar2,*(undefined8 *)
                            Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass8_0_<UnregisterManagedCallback>b__0__
                    );
        *(long *)(param_1 + 0x28) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01320e50(lVar2,*(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<EasingFunction>_MoveNext__
                      );
          *(long *)(param_1 + 0x30) = lVar2;
          thunk_FUN_0268a01c(param_1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


