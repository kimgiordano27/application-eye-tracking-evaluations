/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03b0ced4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_0377596c();
LAB_03b0cef8:
      uVar2 = (*(code *)*puVar1)();
      lVar3 = *unaff_x20;
      if (lVar3 != 0) {
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x38) + 0x20) + 0x135) & 1)
            == 0) {
          FUN_03775678();
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          FUN_075a643c(lVar3,uVar2,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_03b0cef8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


