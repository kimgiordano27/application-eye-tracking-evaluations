/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04b1aedc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  long lVar3;
  
  FUN_06a38668();
  lVar3 = *(long *)(unaff_x19 + 0x50);
  if (lVar3 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar2);
    }
    lVar2 = thunk_FUN_0367fd24();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),lVar2,param_2,*(undefined8 *)(lVar3 + 0x28));
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = FUN_0731f6a4(*(long *)(unaff_x19 + 0x20),0);
    if (lVar3 == *(long *)(unaff_x19 + 0x28)) {
      if (lVar3 == 0) goto LAB_04b1afa0;
      FUN_0732b184(lVar3,*(undefined8 *)(unaff_x19 + 0x20),0);
    }
    if ((param_2 != 4) && (plVar1 = *(long **)(unaff_x19 + 0x40), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x04b1af8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
      return;
    }
    return;
  }
LAB_04b1afa0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


