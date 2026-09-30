/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0349572c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  if (param_4 != 0) {
    FUN_034959f4(*(undefined4 *)(unaff_x19 + 0x70),param_4,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_03495a20(*(undefined4 *)(unaff_x19 + 0x74),*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        FUN_06bf4868(*(long *)(unaff_x19 + 0x68),0);
        if (lVar1 != 0) {
          FUN_06b9ea98(lVar1,0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            lVar1 = *(long *)(unaff_x19 + 0x20);
            FUN_06bf2fbc(*(long *)(unaff_x19 + 0x68),0);
            if (lVar1 != 0) {
              FUN_06b9eb98(lVar1,0,0);
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                FUN_06b9eca0(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x20),0,0);
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  UnityEngine_Yoga_Native__YGNodeStyleSetMaxWidthPercent
                            (*(undefined4 *)(unaff_x19 + 0x74),*(long *)(unaff_x19 + 0x20),0,0);
                  if (*(long *)(unaff_x19 + 0x78) != 0) {
                    lVar1 = *(long *)(unaff_x19 + 0x80);
                    fVar2 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x78),0);
                    if (lVar1 != 0) {
                      FUN_06bf4908(unaff_s8 + fVar2,unaff_s9 + param_2,unaff_s10 + param_3,lVar1,0);
                      if (*(long *)(unaff_x19 + 0x78) != 0) {
                        lVar1 = *(long *)(unaff_x19 + 0x80);
                        FUN_06bf2fbc(*(long *)(unaff_x19 + 0x78),0);
                        if (lVar1 != 0) {
                          FUN_06bf4a88(lVar1,0);
                          if (*(long *)(unaff_x19 + 0x78) != 0) {
                            lVar1 = *(long *)(unaff_x19 + 0x28);
                            FUN_06bf4868(*(long *)(unaff_x19 + 0x78),0);
                            if (lVar1 != 0) {
                              FUN_03495978(lVar1,2);
                              if (*(long *)(unaff_x19 + 0x78) != 0) {
                                lVar1 = *(long *)(unaff_x19 + 0x28);
                                FUN_06bf2fbc(*(long *)(unaff_x19 + 0x78),0);
                                if (lVar1 != 0) {
                                  System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>
                                            (lVar1,2);
                                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                                    FUN_034959f4(*(undefined4 *)(unaff_x19 + 0x88),
                                                 *(long *)(unaff_x19 + 0x28),2);
                                    if (*(long *)(unaff_x19 + 0x28) != 0) {
                                      FUN_03495a20(*(undefined4 *)(unaff_x19 + 0x8c),
                                                   *(long *)(unaff_x19 + 0x28),2);
                                      if (*(long *)(unaff_x19 + 0x80) != 0) {
                                        lVar1 = *(long *)(unaff_x19 + 0x20);
                                        FUN_06bf4868(*(long *)(unaff_x19 + 0x80),0);
                                        if (lVar1 != 0) {
                                          FUN_06b9ea98(lVar1,2,0);
                                          if (*(long *)(unaff_x19 + 0x80) != 0) {
                                            lVar1 = *(long *)(unaff_x19 + 0x20);
                                            FUN_06bf2fbc(*(long *)(unaff_x19 + 0x80),0);
                                            if (lVar1 != 0) {
                                              FUN_06b9eb98(lVar1,2,0);
                                              if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                FUN_06b9eca0(*(undefined4 *)(unaff_x19 + 0x88),
                                                             *(long *)(unaff_x19 + 0x20),2,0);
                                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                  UnityEngine_Yoga_Native__YGNodeStyleSetMaxWidthPercent
                                                            (*(undefined4 *)(unaff_x19 + 0x8c),
                                                             *(long *)(unaff_x19 + 0x20),2,0);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


