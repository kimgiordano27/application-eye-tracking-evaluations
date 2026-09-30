/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 05c94730
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_07398369 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb6808);
    FUN_02fe925c(PTR_DAT_06fb4c48);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07398369 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) goto LAB_05c94a40;
  if (*(int *)(lVar2 + 0x84) == 3) {
LAB_05c947d4:
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_068cd970(*(long *)(param_1 + 0x28),0,0);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x7c) != '\0') {
      uVar8 = *(undefined8 *)(lVar2 + 200);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar1 = FUN_068f9b78(uVar8,0,0);
      if ((uVar1 & 1) != 0) goto LAB_05c947d4;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_068cd970(*(long *)(param_1 + 0x28),1,0);
      lVar2 = FUN_068f5d7c(param_1,0);
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 != 0) && (lVar2 != 0)) {
        fVar12 = *(float *)(lVar3 + 0x180);
        fVar10 = *(float *)(lVar3 + 0x17c);
        FUN_06904e58(*(undefined4 *)(lVar3 + 0x178),fVar10,fVar12,*(undefined4 *)(lVar3 + 0x184),
                     *(undefined4 *)(lVar3 + 0x188),*(undefined4 *)(lVar3 + 0x18c),
                     *(undefined4 *)(lVar3 + 400),lVar2,0);
        lVar2 = FUN_068f5d7c(param_1,0);
        lVar3 = FUN_068f5d7c(param_1,0);
        if (lVar3 != 0) {
          uVar8 = FUN_06904a04(lVar3,0);
          lVar3 = FUN_068f5d7c(param_1,0);
          if (lVar3 != 0) {
            FUN_06904a04(lVar3,0);
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != 0) {
              fVar14 = *(float *)(param_1 + 0x38);
              fVar15 = *(float *)(lVar3 + 0x1a0);
              fVar16 = *(float *)(lVar3 + 0x1a4);
              fVar13 = *(float *)(lVar3 + 0x1a8);
              fVar11 = fVar10;
              lVar3 = FUN_068f5d7c(param_1,0);
              if (lVar3 != 0) {
                fVar9 = (float)FUN_069042b4(lVar3,0);
                if (DAT_0738e6c8 == '\0') {
                  FUN_02fe925c(PTR_DAT_06f6d508);
                  DAT_0738e6c8 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                if (lVar2 != 0) {
                  fVar15 = fVar15 - fVar9;
                  fVar16 = fVar16 - fVar11;
                  fVar13 = fVar13 - fVar12;
                  fVar12 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16);
                  if (fVar12 <= fVar14) {
                    fVar14 = fVar12;
                  }
                  FUN_06904aa4(uVar8,fVar10,fVar14,lVar2,0);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    lVar2 = FUN_05ca9128(*(long *)(param_1 + 0x30),0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      if (*(int *)(*(long *)(param_1 + 0x20) + 0x84) == 2) {
                        puVar4 = (undefined4 *)(param_1 + 0x5c);
                        puVar5 = (undefined4 *)(param_1 + 0x60);
                        puVar6 = (undefined4 *)(param_1 + 100);
                        puVar7 = (undefined4 *)(param_1 + 0x68);
                      }
                      else {
                        puVar4 = (undefined4 *)(param_1 + 0x3c);
                        puVar5 = (undefined4 *)(param_1 + 0x40);
                        puVar6 = (undefined4 *)(param_1 + 0x44);
                        puVar7 = (undefined4 *)(param_1 + 0x48);
                      }
                      if (lVar2 != 0) {
                        thunk_FUN_068cc0fc(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,
                                           *(undefined4 *)(param_1 + 0x80),0);
                        if (*(long *)(param_1 + 0x30) != 0) {
                          lVar2 = FUN_05ca9128(*(long *)(param_1 + 0x30),0);
                          if (*(long *)(param_1 + 0x20) != 0) {
                            if (*(int *)(*(long *)(param_1 + 0x20) + 0x84) == 2) {
                              puVar4 = (undefined4 *)(param_1 + 0x6c);
                              puVar5 = (undefined4 *)(param_1 + 0x70);
                              puVar6 = (undefined4 *)(param_1 + 0x74);
                              puVar7 = (undefined4 *)(param_1 + 0x78);
                            }
                            else {
                              puVar4 = (undefined4 *)(param_1 + 0x4c);
                              puVar5 = (undefined4 *)(param_1 + 0x50);
                              puVar6 = (undefined4 *)(param_1 + 0x54);
                              puVar7 = (undefined4 *)(param_1 + 0x58);
                            }
                            if (lVar2 != 0) {
                              thunk_FUN_068cc0fc(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,
                                                 *(undefined4 *)(param_1 + 0x84),0);
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
LAB_05c94a40:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


