/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 04654de0
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  
  do {
    FUN_06677200();
    do {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      plVar1 = (long *)FUN_04653658();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        FUN_066772ac();
      }
      unaff_w22 = unaff_w22 + 1;
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      if (*unaff_x20 <= unaff_w22) {
        uVar2 = FUN_06677200();
                    /* WARNING: Could not recover jumptable at 0x04654e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x21 + 0x168))(uVar2,*(undefined8 *)(*unaff_x21 + 0x170));
        return;
      }
    } while (unaff_w22 == 0);
  } while( true );
}


