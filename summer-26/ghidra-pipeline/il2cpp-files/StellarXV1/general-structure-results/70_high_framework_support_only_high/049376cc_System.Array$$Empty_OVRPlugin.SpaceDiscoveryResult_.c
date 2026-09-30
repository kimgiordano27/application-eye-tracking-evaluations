/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 049376cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
LAB_04937710:
      uVar2 = (*(code *)*puVar1)();
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
        thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x68),uVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_040b1e00();
      goto LAB_04937710;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


