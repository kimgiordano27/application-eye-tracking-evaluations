/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 052bd5bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions_FaceExpressionsEnumerator__Dispose
               (float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  
  param_4 = param_4 + param_3;
  if (0.0 < ((param_2 + param_1) - param_4) / unaff_s8) {
    unaff_s13 = param_3;
    unaff_s11 = FUN_060ae8a4(&stack0x000000b8,0);
    in_stack_00000030._4_4_ = param_4;
    param_3 = unaff_s13;
  }
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
    lVar3 = FUN_060ed7ac();
    if ((lVar3 != 0) && (fVar4 = (float)FUN_0610020c(lVar3,0), lVar2 != 0)) {
      FUN_060ffcc0(unaff_s9 - fVar4,unaff_s10 - param_4,unaff_s15 - param_3,lVar2,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
        lVar3 = FUN_060ed7ac();
        if ((lVar3 != 0) && (FUN_0610010c(lVar3,0), lVar2 != 0)) {
          thunk_FUN_06101268(unaff_s9,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            fVar4 = in_stack_00000030._4_4_;
            fVar12 = unaff_s13;
            uVar5 = FUN_060a5d80(unaff_s11,in_stack_00000030._4_4_,unaff_s13,
                                 *(long *)(unaff_x21 + 0x70),0);
            *(undefined4 *)(unaff_x19 + 0x144) = uVar5;
            *(float *)(unaff_x19 + 0x148) = fVar4;
            if (*(long *)(unaff_x21 + 0x38) != 0) {
              FUN_063e2474();
              FUN_052bcff4(&stack0x00000040,*(undefined8 *)(unaff_x21 + 0x80));
              if (*(long *)(unaff_x23 + 0x18) != 0) {
                memcpy((void *)(*(long *)(unaff_x23 + 0x18) + 0x50),&stack0x00000040,0x70);
                lVar2 = *(long *)(unaff_x21 + 0x80);
                if (lVar2 != 0) {
                  iVar1 = *(int *)(lVar2 + 0x18);
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (0 < iVar1) {
                    Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0)
                    ;
                  }
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
                    lVar3 = FUN_060ed7ac();
                    if (lVar3 != 0) {
                      fVar6 = (float)FUN_060ffbe4(lVar3,0);
                      fVar10 = fVar4;
                      fVar11 = fVar12;
                      lVar3 = FUN_060ed7ac();
                      if ((lVar3 != 0) && (fVar7 = (float)FUN_0610020c(lVar3,0), lVar2 != 0)) {
                        fVar12 = fVar12 - fVar11;
                        fVar4 = fVar4 - fVar10;
                        FUN_060ffcc0(fVar6 - fVar7,fVar4,fVar12,lVar2,0);
                        if (*(long *)(unaff_x21 + 0x70) != 0) {
                          lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
                          lVar3 = FUN_060ed7ac();
                          if (lVar3 != 0) {
                            uVar5 = FUN_060ffbe4(lVar3,0);
                            fVar10 = fVar4;
                            fVar11 = fVar12;
                            lVar3 = FUN_060ed7ac();
                            if ((lVar3 != 0) && (uVar8 = FUN_0610010c(lVar3,0), lVar2 != 0)) {
                              thunk_FUN_06101268(uVar5,fVar4,fVar12,uVar8,fVar10,fVar11,lVar2,0);
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                fVar4 = (float)FUN_060a5d80(unaff_s11,in_stack_00000030._4_4_,
                                                            unaff_s13,*(long *)(unaff_x21 + 0x70),0)
                                ;
                                *(float *)(unaff_x19 + 0x144) = fVar4;
                                *(float *)(unaff_x19 + 0x148) = in_stack_00000030._4_4_;
                                if (*unaff_x20 == '\0') {
                                  uVar9 = CONCAT44(in_stack_00000030._4_4_ -
                                                   (float)((ulong)in_stack_00000018 >> 0x20),
                                                   fVar4 - (float)in_stack_00000018);
                                }
                                else {
                                  if (DAT_06bb435f == '\0') {
                                    FUN_02f08768(PTR_DAT_067c9848);
                                    DAT_06bb435f = '\x01';
                                  }
                                  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
                                }
                                *(undefined8 *)(unaff_x25 + 8) = uVar9;
                                *(undefined4 *)(unaff_x19 + 0x188) = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


