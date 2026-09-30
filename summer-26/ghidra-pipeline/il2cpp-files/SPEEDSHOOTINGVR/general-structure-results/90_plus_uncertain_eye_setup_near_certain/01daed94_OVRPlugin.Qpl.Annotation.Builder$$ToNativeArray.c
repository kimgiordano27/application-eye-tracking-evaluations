/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 01daed94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  do {
    *unaff_x20 = 0;
    while( true ) {
      thunk_FUN_0106e12c();
      do {
        uVar3 = FUN_01c968c8();
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar1 = FUN_01c96a4c();
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar3 = FUN_01c50924(lVar1,*unaff_x21,0);
      } while ((uVar3 & 1) == 0);
      plVar2 = (long *)FUN_01c96ad0();
      if (plVar2 == (long *)0x0) break;
      lVar1 = *unaff_x22;
      if ((*plVar2 != lVar1) || (*unaff_x20 = (long)plVar2, *plVar2 != lVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar2);
      }
    }
  } while( true );
}


