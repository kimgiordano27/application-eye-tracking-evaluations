/*
FUNCTION_NAME: FUN_0206e87c
ENTRY_POINT: 0206e87c
PROGRAM: vrfs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0206e87c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 long param_5,char *param_6,undefined1 *param_7)

{
  void *__dest;
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_170 [80];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000722ddf1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e66d30);
    bRam000000000722ddf1 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if ((param_5 != 0) && (plVar6 = *(long **)(param_5 + 0x10), plVar6 != (long *)0x0)) {
    lVar21 = plVar6[0x20];
    (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    *param_6 = *(char *)(param_5 + 0x41);
    *param_7 = *(undefined1 *)(param_5 + 0x42);
    *(undefined2 *)(param_5 + 0x41) = 0;
    if (*(char *)(param_5 + 0x18) != '\0') {
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      plVar6[0x13] = 0;
      plVar6[0x12] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      thunk_FUN_01656ef8(plVar6 + 10,0);
      return;
    }
    lVar7 = *(long *)(param_5 + 0x20);
    if (lVar7 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (lVar7,*(undefined8 *)(param_4 + 0x68),0);
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      puVar5 = *(uint **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      uVar13 = (ulong)*puVar5;
      uVar22 = puVar5[1];
      uVar20 = puVar5[2];
      lVar2 = FUN_051e5130(lVar7,0);
      if (lVar2 != 0) {
        fVar8 = (float)FUN_04f1b1c0(lVar2,0);
        uVar12 = param_2;
        uVar14 = param_3;
        lVar2 = FUN_051e5130(lVar7,0);
        if (lVar2 != 0) {
          uVar15 = (ulong)(uint)-(float)param_2;
          uVar17 = (ulong)(uint)-(float)param_3;
          uVar11 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar2,0);
          FUN_051db00c(-fVar8,uVar15,uVar17,uVar11,uVar12,uVar14,&uStack_90,0);
          fVar28 = *(float *)(param_5 + 0x28);
          fVar27 = *(float *)(param_5 + 0x2c);
          fVar8 = *(float *)(param_5 + 0x30);
          lVar2 = FUN_051e5130(lVar7,0);
          if (lVar2 != 0) {
            fVar9 = (float)FUN_04f1b1c0(lVar2,0);
            uVar3 = uVar15;
            uVar19 = uVar17;
            lVar2 = FUN_051e5130(lVar7,0);
            if (lVar2 != 0) {
              uVar16 = (ulong)(uint)(fVar27 - (float)uVar15);
              uVar18 = (ulong)(uint)(fVar8 - (float)uVar17);
              uVar12 = FUN_04f1b1c0(lVar2,0);
              FUN_051dcbb0(fVar28 - fVar9,uVar16,uVar18,uVar12,uVar3,uVar19,&uStack_a8,0);
              uStack_118 = uStack_a0;
              uStack_120 = uStack_a8;
              uStack_110 = uStack_98;
              uVar3 = FUN_051db478(&uStack_90,&uStack_120,&uStack_ac,0);
              uVar15 = (ulong)uVar22;
              uVar17 = (ulong)uVar20;
              if ((uVar3 & 1) != 0) {
                uVar13 = FUN_051dcd8c(uStack_ac,&uStack_a8,0);
                uVar15 = uVar16;
                uVar17 = uVar18;
              }
              fVar27 = (float)uVar18;
              fVar8 = (float)uVar16;
              if (*(long *)(param_4 + 0x68) != 0) {
                lVar2 = FUN_051e5130(*(long *)(param_4 + 0x68),0);
                fVar28 = *(float *)(param_5 + 0x28);
                fVar9 = *(float *)(param_5 + 0x2c);
                fVar24 = *(float *)(param_5 + 0x30);
                lVar4 = FUN_051e5130(lVar7,0);
                if ((lVar4 != 0) && (fVar10 = (float)FUN_04f1b1c0(lVar4,0), lVar2 != 0)) {
                  uVar3 = (ulong)(uint)(fVar9 - fVar8);
                  uVar19 = (ulong)(uint)(fVar24 - fVar27);
                  FUN_04f1aa00(fVar28 - fVar10,uVar3,uVar19,lVar2,0);
                  if (*(long *)(param_4 + 0x68) != 0) {
                    lVar2 = FUN_051e5130(*(long *)(param_4 + 0x68),0);
                    uVar23 = *(undefined4 *)(param_5 + 0x28);
                    uVar25 = *(undefined4 *)(param_5 + 0x2c);
                    uVar26 = *(undefined4 *)(param_5 + 0x30);
                    lVar4 = FUN_051e5130(lVar7,0);
                    if ((lVar4 != 0) && (uVar12 = FUN_04f1b0c8(lVar4,0), lVar2 != 0)) {
                      thunk_FUN_04f1c3b0(uVar23,uVar25,uVar26,uVar12,uVar3,uVar19,lVar2,0);
                      if (*(long *)(param_4 + 0x68) != 0) {
                        uVar3 = uVar15;
                        uVar19 = uVar17;
                        uVar23 = FUN_051d7cf8(uVar13,uVar15,uVar17,*(long *)(param_4 + 0x68),0);
                        fVar27 = (float)uVar19;
                        *(undefined4 *)(plVar6 + 0x20) = uVar23;
                        fVar8 = (float)uVar3;
                        *(float *)((long)plVar6 + 0x104) = fVar8;
                        if (*(long *)(param_4 + 0x30) != 0) {
                          FUN_0336e8d0(*(long *)(param_4 + 0x30),plVar6,
                                       *(undefined8 *)(param_4 + 0x78),0);
                          FUN_0206e6cc(&uStack_100,*(undefined8 *)(param_4 + 0x78),lVar7);
                          lVar2 = *(long *)(param_5 + 0x10);
                          memcpy(auStack_170,&uStack_100,0x50);
                          if (lVar2 != 0) {
                            __dest = (void *)(lVar2 + 0x50);
                            memcpy(__dest,auStack_170,0x50);
                            thunk_FUN_01656ef8(__dest,0);
                            lVar2 = *(long *)(param_4 + 0x78);
                            if (lVar2 != 0) {
                              iVar1 = *(int *)(lVar2 + 0x18);
                              *(undefined4 *)(lVar2 + 0x18) = 0;
                              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                              if (0 < iVar1) {
                                FUN_031dd574(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                              }
                              if (*(long *)(param_4 + 0x68) != 0) {
                                lVar2 = FUN_051e5130(*(long *)(param_4 + 0x68),0);
                                lVar4 = FUN_051e5130(lVar7,0);
                                if (lVar4 != 0) {
                                  fVar24 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                            (lVar4,0);
                                  fVar28 = fVar8;
                                  fVar9 = fVar27;
                                  lVar4 = FUN_051e5130(lVar7,0);
                                  if ((lVar4 != 0) &&
                                     (fVar10 = (float)FUN_04f1b1c0(lVar4,0), lVar2 != 0)) {
                                    uVar3 = (ulong)(uint)(fVar8 - fVar28);
                                    uVar19 = (ulong)(uint)(fVar27 - fVar9);
                                    FUN_04f1aa00(fVar24 - fVar10,uVar3,uVar19,lVar2,0);
                                    if (*(long *)(param_4 + 0x68) != 0) {
                                      lVar2 = FUN_051e5130(*(long *)(param_4 + 0x68),0);
                                      lVar4 = FUN_051e5130(lVar7,0);
                                      if (lVar4 != 0) {
                                        uVar12 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                                                           (lVar4,0);
                                        uVar16 = uVar3;
                                        uVar18 = uVar19;
                                        lVar7 = FUN_051e5130(lVar7,0);
                                        if ((lVar7 != 0) &&
                                           (uVar14 = FUN_04f1b0c8(lVar7,0), lVar2 != 0)) {
                                          thunk_FUN_04f1c3b0(uVar12,uVar3,uVar19,uVar14,uVar16,
                                                             uVar18,lVar2,0);
                                          if (*(long *)(param_4 + 0x68) != 0) {
                                            fVar8 = (float)FUN_051d7cf8(uVar13,uVar15,uVar17,
                                                                        *(long *)(param_4 + 0x68),0)
                                            ;
                                            *(float *)(plVar6 + 0x20) = fVar8;
                                            *(float *)((long)plVar6 + 0x104) = (float)uVar15;
                                            if (*param_6 == '\0') {
                                              plVar6[0x21] = CONCAT44((float)uVar15 -
                                                                      (float)((ulong)lVar21 >> 0x20)
                                                                      ,fVar8 - (float)lVar21);
                                            }
                                            else {
                                              if (DAT_0722a89c == '\0') {
                                                thunk_FUN_0159f088(PTR_DAT_06e4d340);
                                                DAT_0722a89c = '\x01';
                                              }
                                              plVar6[0x21] = **(long **)(*(long *)PTR_DAT_06e4d340 +
                                                                        0xb8);
                                            }
                                            *(undefined4 *)((long)plVar6 + 0x144) = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


