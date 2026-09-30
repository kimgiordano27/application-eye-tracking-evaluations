/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 034955c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRLocatable_TrackingSpacePose>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  fVar2 = (float)FUN_06bf4868();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x38);
    fVar4 = param_2;
    fVar5 = param_3;
    fVar3 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x30),0);
    if (lVar1 != 0) {
      fVar2 = unaff_s8 - fVar2;
      param_2 = unaff_s9 - param_2;
      param_3 = unaff_s10 - param_3;
      FUN_06bf4908(fVar2 + fVar3,param_2 + fVar4,param_3 + fVar5,lVar1,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        lVar1 = *(long *)(unaff_x19 + 0x28);
        FUN_06bf4868(*(long *)(unaff_x19 + 0x30),0);
        if (lVar1 != 0) {
          FUN_0349592c(lVar1);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_03495954(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                         *(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                         *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),
                         *(undefined4 *)(unaff_x19 + 0x58));
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              lVar1 = *(long *)(unaff_x19 + 0x20);
              FUN_06bf4868(*(long *)(unaff_x19 + 0x38),0);
              if (lVar1 != 0) {
                FUN_06b9edf8(lVar1,0);
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  fVar4 = *(float *)(unaff_x19 + 0x44);
                  fVar5 = *(float *)(unaff_x19 + 0x48);
                  FUN_06b9efac(*(undefined4 *)(unaff_x19 + 0x40),fVar4,fVar5,
                               *(undefined4 *)(unaff_x19 + 0x4c),*(undefined4 *)(unaff_x19 + 0x50),
                               *(long *)(unaff_x19 + 0x20),0);
                  if (*(long *)(unaff_x19 + 0x60) != 0) {
                    lVar1 = *(long *)(unaff_x19 + 0x68);
                    fVar3 = (float)FUN_06bf4868(*(long *)(unaff_x19 + 0x60),0);
                    if (lVar1 != 0) {
                      fVar5 = param_3 + fVar5;
                      fVar4 = param_2 + fVar4;
                      FUN_06bf4908(fVar2 + fVar3,fVar4,fVar5,lVar1,0);
                      if (*(long *)(unaff_x19 + 0x60) != 0) {
                        lVar1 = *(long *)(unaff_x19 + 0x68);
                        FUN_06bf2fbc(*(long *)(unaff_x19 + 0x60),0);
                        if (lVar1 != 0) {
                          FUN_06bf4a88(lVar1,0);
                          if (*(long *)(unaff_x19 + 0x60) != 0) {
                            lVar1 = *(long *)(unaff_x19 + 0x28);
                            FUN_06bf4868(*(long *)(unaff_x19 + 0x60),0);
                            if (lVar1 != 0) {
                              FUN_03495978(lVar1,0);
                              if (*(long *)(unaff_x19 + 0x60) != 0) {
                                lVar1 = *(long *)(unaff_x19 + 0x28);
                                FUN_06bf2fbc(*(long *)(unaff_x19 + 0x60),0);
                                if (lVar1 != 0) {
                                  System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>
                                            (lVar1,0);
                                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                                    FUN_034959f4(*(undefined4 *)(unaff_x19 + 0x70),
                                                 *(long *)(unaff_x19 + 0x28),0);
                                    if (*(long *)(unaff_x19 + 0x28) != 0) {
                                      FUN_03495a20(*(undefined4 *)(unaff_x19 + 0x74),
                                                   *(long *)(unaff_x19 + 0x28),0);
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
                                                FUN_06b9eca0(*(undefined4 *)(unaff_x19 + 0x70),
                                                             *(long *)(unaff_x19 + 0x20),0,0);
                                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                  UnityEngine_Yoga_Native__YGNodeStyleSetMaxWidthPercent
                                                            (*(undefined4 *)(unaff_x19 + 0x74),
                                                             *(long *)(unaff_x19 + 0x20),0,0);
                                                  if (*(long *)(unaff_x19 + 0x78) != 0) {
                                                    lVar1 = *(long *)(unaff_x19 + 0x80);
                                                    fVar3 = (float)FUN_06bf4868(*(long *)(unaff_x19
                                                                                         + 0x78),0);
                                                    if (lVar1 != 0) {
                                                      FUN_06bf4908(fVar2 + fVar3,param_2 + fVar4,
                                                                   param_3 + fVar5,lVar1,0);
                                                      if (*(long *)(unaff_x19 + 0x78) != 0) {
                                                        lVar1 = *(long *)(unaff_x19 + 0x80);
                                                        FUN_06bf2fbc(*(long *)(unaff_x19 + 0x78),0);
                                                        if (lVar1 != 0) {
                                                          FUN_06bf4a88(lVar1,0);
                                                          if (*(long *)(unaff_x19 + 0x78) != 0) {
                                                            lVar1 = *(long *)(unaff_x19 + 0x28);
                                                            FUN_06bf4868(*(long *)(unaff_x19 + 0x78)
                                                                         ,0);
                                                            if (lVar1 != 0) {
                                                              FUN_03495978(lVar1,2);
                                                              if (*(long *)(unaff_x19 + 0x78) != 0)
                                                              {
                                                                lVar1 = *(long *)(unaff_x19 + 0x28);
                                                                FUN_06bf2fbc(*(long *)(unaff_x19 +
                                                                                      0x78),0);
                                                                if (lVar1 != 0) {
                                                                                                                                    
                                                  System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>
                                                            (lVar1,2);
                                                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                                                    FUN_034959f4(*(undefined4 *)(unaff_x19 + 0x88),
                                                                 *(long *)(unaff_x19 + 0x28),2);
                                                    if (*(long *)(unaff_x19 + 0x28) != 0) {
                                                      FUN_03495a20(*(undefined4 *)(unaff_x19 + 0x8c)
                                                                   ,*(long *)(unaff_x19 + 0x28),2);
                                                      if (*(long *)(unaff_x19 + 0x80) != 0) {
                                                        lVar1 = *(long *)(unaff_x19 + 0x20);
                                                        FUN_06bf4868(*(long *)(unaff_x19 + 0x80),0);
                                                        if (lVar1 != 0) {
                                                          FUN_06b9ea98(lVar1,2,0);
                                                          if (*(long *)(unaff_x19 + 0x80) != 0) {
                                                            lVar1 = *(long *)(unaff_x19 + 0x20);
                                                            FUN_06bf2fbc(*(long *)(unaff_x19 + 0x80)
                                                                         ,0);
                                                            if (lVar1 != 0) {
                                                              FUN_06b9eb98(lVar1,2,0);
                                                              if (*(long *)(unaff_x19 + 0x20) != 0)
                                                              {
                                                                FUN_06b9eca0(*(undefined4 *)
                                                                              (unaff_x19 + 0x88),
                                                                             *(long *)(unaff_x19 +
                                                                                      0x20),2,0);
                                                                if (*(long *)(unaff_x19 + 0x20) != 0
                                                                   ) {
                                                                                                                                    
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


