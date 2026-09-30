/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0295a57c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_Dictionary_KeyCollection_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *in_x10;
  int *piVar3;
  long unaff_x19;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto code_r0x0295a5c4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_01c72498();
code_r0x0295a5c4:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c01e80();
}


