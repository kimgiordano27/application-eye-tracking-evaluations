/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<object,-ProbeVolumePerSceneData.PerScenarioData>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02bf2bf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Dictionary_Enumerator<object,_ProbeVolumePerSceneData_PerScenarioData>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto code_r0x02bf2c4c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x02bf2c4c:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


