/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 0366b078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystemDescriptor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined4 unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  
  *(undefined4 *)(param_1 + 0x20) = unaff_s10;
  *(undefined4 *)(param_1 + 0x24) = unaff_s8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar3 = *unaff_x21;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *unaff_x22;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      fVar7 = unaff_s9 * unaff_s11;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + 0x20) = unaff_s10;
        *(float *)(lVar4 + 0x24) = fVar7;
        *(undefined4 *)(lVar4 + 0x28) = 0;
      }
      else {
        FUN_031800a8(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *unaff_x21;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar5 = *unaff_x22;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          fVar8 = unaff_s12 * unaff_s11;
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(float *)(lVar4 + 0x20) = fVar8;
            *(float *)(lVar4 + 0x24) = fVar7;
            *(undefined4 *)(lVar4 + 0x28) = 0;
          }
          else {
            FUN_031800a8(fVar8,fVar7,0,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar3 = *unaff_x21;
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar5 = *unaff_x22;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(float *)(lVar4 + 0x20) = fVar8;
                *(undefined4 *)(lVar4 + 0x24) = unaff_s8;
                *(undefined4 *)(lVar4 + 0x28) = 0;
              }
              else {
                    /* catch() { ... } // from try @ 0366b1d4 with catch @ 0366b1c8
                       catch() { ... } // from try @ 0366b20c with catch @ 0366b1c8
                       catch() { ... } // from try @ 0366b284 with catch @ 0366b1c8 */
                    /* try { // try from 0366b1cc to 0376b1d3 has its CatchHandler @ 0366b1dc */
                    /* try { // try from 0366b1d4 to 0376b1f3 has its CatchHandler @ 0366b1c8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0366b1cc with catch @ 0366b1dc
                        */
                FUN_031800a8(fVar8,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
              lVar3 = *unaff_x20;
              if (lVar3 != 0) {
                    /* try { // try from 0366b1f4 to 0376b20b has its CatchHandler @ 0366b27c */
                lVar4 = *(long *)(lVar3 + 0x10);
                lVar5 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 0366b20c to 0376b26b has its CatchHandler @ 0366b1c8 */
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_030ba904(lVar3,0,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    lVar3 = *unaff_x20;
                    if (lVar3 == 0) goto LAB_0366b5dc;
                  }
                  lVar4 = *(long *)(lVar3 + 0x10);
                  lVar5 = *(long *)puVar2;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar4 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 1;
                    }
                    else {
                      FUN_030ba904(lVar3,1,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      lVar3 = *unaff_x20;
                      if (lVar3 == 0) goto LAB_0366b5dc;
                    }
                    lVar4 = *(long *)(lVar3 + 0x10);
                    lVar5 = *(long *)puVar2;
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                      }
                      else {
                        FUN_030ba904(lVar3,2,*(undefined8 *)
                                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        lVar3 = *unaff_x20;
                        if (lVar3 == 0) goto LAB_0366b5dc;
                      }
                      lVar4 = *(long *)(lVar3 + 0x10);
                      lVar5 = *(long *)puVar2;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_030ba904(lVar3,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          lVar3 = *unaff_x20;
                          if (lVar3 == 0) goto LAB_0366b5dc;
                        }
                        lVar4 = *(long *)(lVar3 + 0x10);
                        lVar5 = *(long *)puVar2;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                          }
                          else {
                            FUN_030ba904(lVar3,2,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar3 = *unaff_x20;
                            if (lVar3 == 0) goto LAB_0366b5dc;
                          }
                          lVar4 = *(long *)(lVar3 + 0x10);
                          lVar5 = *(long *)puVar2;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar4 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
                            }
                            else {
                              FUN_030ba904(lVar3,3,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                            }
                            puVar2 = Method_TMPro_TMP_ListPool<Canvas>_Get__;
                            lVar3 = *unaff_x19;
                            if (lVar3 != 0) {
                              lVar4 = *(long *)(lVar3 + 0x10);
                              lVar5 = *(long *)Method_TMPro_TMP_ListPool<Canvas>_Get__;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = 0;
                                }
                                else {
                                  FUN_0317d87c(0,0,lVar3,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar3 = *unaff_x19;
                                if (lVar3 != 0) {
                                  lVar4 = *(long *)(lVar3 + 0x10);
                                  lVar5 = *(long *)puVar2;
                                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                  uVar6 = DAT_00c8e790;
                                  if (lVar4 != 0) {
                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                    }
                                    else {
                                      FUN_0317d87c(0,0x3f800000,lVar3,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar3 = *unaff_x19;
                                    if (lVar3 != 0) {
                                      lVar4 = *(long *)(lVar3 + 0x10);
                                      lVar5 = *(long *)puVar2;
                                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          uVar6 = NEON_fmov(0x3f800000,4);
                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                        }
                                        else {
                                          FUN_0317d87c(0x3f800000,0x3f800000,lVar3,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar3 = *unaff_x19;
                                        if (lVar3 != 0) {
                                          lVar4 = *(long *)(lVar3 + 0x10);
                                          lVar5 = *(long *)puVar2;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          uVar6 = DAT_00c8d7f0;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              return;
                                            }
                                            FUN_0317d87c(0x3f800000,0,lVar3,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
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
LAB_0366b5dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


