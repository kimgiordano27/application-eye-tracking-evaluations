/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_session_set_3d_position$$.ctor
ENTRY_POINT: 085200dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


bool Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_set_3d_position___ctor(void)

{
  bool in_ZR;
  long *plVar1;
  long unaff_x19;
  float fVar2;
  
  if (!in_ZR) {
    return true;
  }
  plVar1 = *(long **)(unaff_x19 + 0x48);
  if (plVar1 != (long *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
    if (fVar2 != 0.0) {
      return true;
    }
    plVar1 = *(long **)(unaff_x19 + 0x50);
    if (plVar1 != (long *)0x0) {
      fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
      if (fVar2 != 0.0) {
        return true;
      }
      plVar1 = *(long **)(unaff_x19 + 0x58);
      if (plVar1 != (long *)0x0) {
        fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
        if (fVar2 != 100.0) {
          return true;
        }
        plVar1 = *(long **)(unaff_x19 + 0x60);
        if (plVar1 != (long *)0x0) {
          fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
          if (fVar2 != 0.0) {
            return true;
          }
          plVar1 = *(long **)(unaff_x19 + 0x68);
          if (plVar1 != (long *)0x0) {
            fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
            if (fVar2 != 0.0) {
              return true;
            }
            plVar1 = *(long **)(unaff_x19 + 0x70);
            if (plVar1 != (long *)0x0) {
              fVar2 = (float)(**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220))
              ;
              if (fVar2 != 0.0) {
                return true;
              }
              plVar1 = *(long **)(unaff_x19 + 0x78);
              if (plVar1 != (long *)0x0) {
                fVar2 = (float)(**(code **)(*plVar1 + 0x218))
                                         (plVar1,*(undefined8 *)(*plVar1 + 0x220));
                return fVar2 != 100.0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


