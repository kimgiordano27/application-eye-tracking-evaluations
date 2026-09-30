/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 052bd388
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(float param_1,undefined1 param_2 [16],float param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  undefined4 unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  
  if (param_1 <= unaff_s12) {
    if (*(char *)(unaff_x24 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x24 + 0x2c1) = 1;
    }
    pfVar4 = *(float **)(*unaff_x26 + 0xb8);
    fVar12 = *pfVar4;
    fStack0000000000000028 = pfVar4[1];
    fStack000000000000002c = pfVar4[2];
    fStack0000000000000030 = fVar12;
  }
  else {
    fStack0000000000000028 = -unaff_s10 / param_1;
    fVar12 = -unaff_s9;
    fStack000000000000002c = fVar12 / param_1;
    fStack0000000000000030 = -unaff_s8 / param_1;
  }
  lVar2 = FUN_060ed7ac();
  if (lVar2 != 0) {
    uStack0000000000000024 = unaff_s15;
    fVar5 = (float)FUN_0610020c(lVar2,0);
    fVar14 = param_3;
    lVar2 = FUN_060ed7ac();
    if (lVar2 != 0) {
      fVar5 = unaff_s11 - fVar5;
      param_3 = fStack000000000000003c - param_3;
      fVar12 = fStack0000000000000038 - fVar12;
      fVar16 = fStack000000000000003c;
      fVar6 = (float)FUN_0610020c(lVar2,0);
      fStack00000000000000b8 = fVar5;
      fStack00000000000000bc = fVar12;
      fStack00000000000000c0 = param_3;
      if (*(char *)(unaff_x27 + 0x2bf) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x27 + 0x2bf) = 1;
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fStack00000000000000cc = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar16 * fVar16);
      if (fStack00000000000000cc <= unaff_s12) {
        if (*(char *)(unaff_x24 + 0x2c1) == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          *(undefined1 *)(unaff_x24 + 0x2c1) = 1;
        }
        pfVar4 = *(float **)(*unaff_x26 + 0xb8);
        fStack00000000000000c4 = *pfVar4;
        fStack00000000000000c8 = pfVar4[1];
        fStack00000000000000cc = pfVar4[2];
      }
      else {
        fStack00000000000000c4 = fVar6 / fStack00000000000000cc;
        fStack00000000000000c8 = fVar16 / fStack00000000000000cc;
        fStack00000000000000cc = fVar14 / fStack00000000000000cc;
      }
      fVar14 = fStack000000000000002c;
      fVar16 = fStack000000000000002c * fStack00000000000000cc +
               fStack0000000000000030 * fStack00000000000000c4 +
               fStack0000000000000028 * fStack00000000000000c8;
      if (DAT_06bb42c0 == '\0') {
        FUN_02f08768(PTR_DAT_067c8fa8);
        DAT_06bb42c0 = '\x01';
      }
      fVar6 = ABS(fVar16);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar13 = ABS(0.0 - fVar16);
      fVar15 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) * 8.0;
      fVar9 = fVar6 * DAT_011b0568;
      if (fVar6 * DAT_011b0568 <= fVar15) {
        fVar9 = fVar15;
      }
      uVar7 = uStack0000000000000024;
      if (fVar9 <= fVar13) {
        fVar15 = fStack0000000000000030 * fVar5 + fStack0000000000000028 * fVar12;
        fVar13 = fVar14 * param_3 + fVar15;
        if (0.0 < ((in_stack_00000008._4_4_ * fVar14 +
                   fStack0000000000000014 * fStack0000000000000030 +
                   fStack0000000000000010 * fStack0000000000000028) - fVar13) / fVar16) {
          fStack0000000000000034 = fVar13;
          unaff_s14 = fVar15;
          uVar7 = FUN_060ae8a4(&stack0x000000b8,0);
          fVar15 = unaff_s14;
          fVar13 = fStack0000000000000034;
        }
      }
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
        lVar3 = FUN_060ed7ac();
        if ((lVar3 != 0) && (fVar12 = (float)FUN_0610020c(lVar3,0), lVar2 != 0)) {
          fVar15 = fStack000000000000003c - fVar15;
          fVar13 = fStack0000000000000038 - fVar13;
          FUN_060ffcc0(unaff_s11 - fVar12,fVar13,fVar15,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
            lVar3 = FUN_060ed7ac();
            if ((lVar3 != 0) && (uVar8 = FUN_0610010c(lVar3,0), lVar2 != 0)) {
              thunk_FUN_06101268(unaff_s11,fStack0000000000000038,fStack000000000000003c,uVar8,
                                 fVar13,fVar15,lVar2,0);
              if (*(long *)(unaff_x21 + 0x70) != 0) {
                fVar12 = unaff_s14;
                fVar14 = fStack0000000000000034;
                uVar8 = FUN_060a5d80(uVar7,fStack0000000000000034,unaff_s14,
                                     *(long *)(unaff_x21 + 0x70),0);
                *(undefined4 *)(unaff_x19 + 0x144) = uVar8;
                *(float *)(unaff_x19 + 0x148) = fVar14;
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
                        Newtonsoft_Json_Linq_JObject__LoadAsync
                                  (*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                      }
                      if (*(long *)(unaff_x21 + 0x70) != 0) {
                        lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
                        lVar3 = FUN_060ed7ac();
                        if (lVar3 != 0) {
                          fVar6 = (float)FUN_060ffbe4(lVar3,0);
                          fVar5 = fVar12;
                          fVar16 = fVar14;
                          lVar3 = FUN_060ed7ac();
                          if ((lVar3 != 0) && (fVar9 = (float)FUN_0610020c(lVar3,0), lVar2 != 0)) {
                            fVar12 = fVar12 - fVar5;
                            fVar14 = fVar14 - fVar16;
                            FUN_060ffcc0(fVar6 - fVar9,fVar14,fVar12,lVar2,0);
                            if (*(long *)(unaff_x21 + 0x70) != 0) {
                              lVar2 = FUN_060ed7ac(*(long *)(unaff_x21 + 0x70),0);
                              lVar3 = FUN_060ed7ac();
                              if (lVar3 != 0) {
                                uVar8 = FUN_060ffbe4(lVar3,0);
                                fVar5 = fVar14;
                                fVar16 = fVar12;
                                lVar3 = FUN_060ed7ac();
                                if ((lVar3 != 0) && (uVar10 = FUN_0610010c(lVar3,0), lVar2 != 0)) {
                                  thunk_FUN_06101268(uVar8,fVar14,fVar12,uVar10,fVar5,fVar16,lVar2,0
                                                    );
                                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                                    fVar12 = (float)FUN_060a5d80(uVar7,fStack0000000000000034,
                                                                 unaff_s14,
                                                                 *(long *)(unaff_x21 + 0x70),0);
                                    *(float *)(unaff_x19 + 0x144) = fVar12;
                                    *(float *)(unaff_x19 + 0x148) = fStack0000000000000034;
                                    if (*unaff_x20 == '\0') {
                                      uVar11 = CONCAT44(fStack0000000000000034 -
                                                        (float)((ulong)in_stack_00000018 >> 0x20),
                                                        fVar12 - (float)in_stack_00000018);
                                    }
                                    else {
                                      if (DAT_06bb435f == '\0') {
                                        FUN_02f08768(PTR_DAT_067c9848);
                                        DAT_06bb435f = '\x01';
                                      }
                                      uVar11 = **(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
                                    }
                                    *(undefined8 *)(unaff_x25 + 8) = uVar11;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


