/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 05c947c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = FUN_068f9b78(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_068cd970(*(long *)(unaff_x19 + 0x28),1,0);
      lVar2 = FUN_068f5d7c();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((lVar3 != 0) && (lVar2 != 0)) {
        fVar12 = *(float *)(lVar3 + 0x180);
        fVar10 = *(float *)(lVar3 + 0x17c);
        FUN_06904e58(*(undefined4 *)(lVar3 + 0x178),fVar10,fVar12,*(undefined4 *)(lVar3 + 0x184),
                     *(undefined4 *)(lVar3 + 0x188),*(undefined4 *)(lVar3 + 0x18c),
                     *(undefined4 *)(lVar3 + 400),lVar2,0);
        lVar2 = FUN_068f5d7c();
        lVar3 = FUN_068f5d7c();
        if (lVar3 != 0) {
          uVar9 = FUN_06904a04(lVar3,0);
          lVar3 = FUN_068f5d7c();
          if (lVar3 != 0) {
            FUN_06904a04(lVar3,0);
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if (lVar3 != 0) {
              fVar14 = *(float *)(unaff_x19 + 0x38);
              fVar15 = *(float *)(lVar3 + 0x1a0);
              fVar16 = *(float *)(lVar3 + 0x1a4);
              fVar13 = *(float *)(lVar3 + 0x1a8);
              fVar11 = fVar10;
              lVar3 = FUN_068f5d7c();
              if (lVar3 != 0) {
                fVar8 = (float)FUN_069042b4(lVar3,0);
                if (DAT_0738e6c8 == '\0') {
                  FUN_02fe925c(PTR_DAT_06f6d508);
                  DAT_0738e6c8 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                if (lVar2 != 0) {
                  fVar15 = fVar15 - fVar8;
                  fVar16 = fVar16 - fVar11;
                  fVar13 = fVar13 - fVar12;
                  fVar12 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16);
                  if (fVar12 <= fVar14) {
                    fVar14 = fVar12;
                  }
                  FUN_06904aa4(uVar9,fVar10,fVar14,lVar2,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    lVar2 = FUN_05ca9128(*(long *)(unaff_x19 + 0x30),0);
                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                      if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2) {
                        puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
                        puVar5 = (undefined4 *)(unaff_x19 + 0x60);
                        puVar6 = (undefined4 *)(unaff_x19 + 100);
                        puVar7 = (undefined4 *)(unaff_x19 + 0x68);
                      }
                      else {
                        puVar4 = (undefined4 *)(unaff_x19 + 0x3c);
                        puVar5 = (undefined4 *)(unaff_x19 + 0x40);
                        puVar6 = (undefined4 *)(unaff_x19 + 0x44);
                        puVar7 = (undefined4 *)(unaff_x19 + 0x48);
                      }
                      if (lVar2 != 0) {
                        thunk_FUN_068cc0fc(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,
                                           *(undefined4 *)(unaff_x19 + 0x80),0);
                        if (*(long *)(unaff_x19 + 0x30) != 0) {
                          lVar2 = FUN_05ca9128(*(long *)(unaff_x19 + 0x30),0);
                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                            if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2) {
                              puVar4 = (undefined4 *)(unaff_x19 + 0x6c);
                              puVar5 = (undefined4 *)(unaff_x19 + 0x70);
                              puVar6 = (undefined4 *)(unaff_x19 + 0x74);
                              puVar7 = (undefined4 *)(unaff_x19 + 0x78);
                            }
                            else {
                              puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
                              puVar5 = (undefined4 *)(unaff_x19 + 0x50);
                              puVar6 = (undefined4 *)(unaff_x19 + 0x54);
                              puVar7 = (undefined4 *)(unaff_x19 + 0x58);
                            }
                            if (lVar2 != 0) {
                              thunk_FUN_068cc0fc(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,
                                                 *(undefined4 *)(unaff_x19 + 0x84),0);
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
  else if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_068cd970(*(long *)(unaff_x19 + 0x28),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


