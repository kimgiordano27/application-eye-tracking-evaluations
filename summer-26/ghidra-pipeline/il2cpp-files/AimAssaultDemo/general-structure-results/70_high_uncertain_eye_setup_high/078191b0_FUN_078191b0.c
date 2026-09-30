/*
FUNCTION_NAME: FUN_078191b0
ENTRY_POINT: 078191b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_078191b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_07d9a460;
  if ((DAT_0827235e & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d9a460);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_0827235e = 1;
  }
  lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_07751d04(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
    ;
    thunk_FUN_037aeb94();
    *(long *)(param_1 + 0x98) = lVar2;
    thunk_FUN_037aeb94((long *)(param_1 + 0x98),lVar2);
    lVar2 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_07751d04(lVar2,0);
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
    ;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) =
           *(undefined8 *)
            Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
      ;
      thunk_FUN_037aeb94();
      *(long *)(param_1 + 0xa0) = lVar2;
      thunk_FUN_037aeb94((long *)(param_1 + 0xa0),lVar2);
      FUN_0562cf60(param_1,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


