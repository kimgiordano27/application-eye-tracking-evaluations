/*
FUNCTION_NAME: FUN_05d39e84
ENTRY_POINT: 05d39e84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d39e84(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar9 = Method_UnityEngine_Mesh_GetAllocArrayFromChannel<Color32>__;
  if ((DAT_06bc37d7 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Mesh_GetAllocArrayFromChannel<Color32>__);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(Method_UnityEngine_Mesh_GetListForChannel<Vector3>__);
    FUN_02f08768(Method_UnityEngine_Mesh_GetUVsImpl<Vector4>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetArrayForChannel<Color>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetArrayForChannel<Vector2>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetArrayForChannel<Vector4>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetColors<Color>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetIndexBufferData<int>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetIndexBufferData<uint>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetIndices<int>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetListForChannel<Color>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetListForChannel<Vector3>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetListForChannel<Vector4>__);
    FUN_02f08768(Method_UnityEngine_Mesh_SetListForChannel<Color32>__);
    DAT_06bc37d7 = 1;
  }
  lVar10 = FUN_02f0880c(*(undefined8 *)puVar9,0xf);
  uVar8 = _UNK_011b55e8;
  uVar7 = _DAT_011b55e0;
  uVar11 = DAT_011b1278;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 != 0) {
      uVar13 = *(undefined8 *)Method_UnityEngine_Mesh_GetListForChannel<Vector3>__;
      *(undefined8 *)(lVar10 + 0x30) = _UNK_011b55e8;
      *(undefined8 *)(lVar10 + 0x28) = uVar7;
      *(undefined8 *)(lVar10 + 0x38) = uVar11;
      *(undefined8 *)(lVar10 + 0x20) = uVar13;
      uVar12 = _DAT_011b2940;
      uVar13 = DAT_011b1008;
      if (uVar1 != 1) {
        uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_GetUVsImpl<Vector4>__;
        *(undefined8 *)(lVar10 + 0x50) = _UNK_011b2948;
        *(undefined8 *)(lVar10 + 0x48) = uVar12;
        *(undefined8 *)(lVar10 + 0x58) = uVar13;
        *(undefined8 *)(lVar10 + 0x40) = uVar14;
        uVar12 = _DAT_011b5430;
        uVar13 = DAT_011b0960;
        if (2 < uVar1) {
          uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetIndexBufferData<uint>__;
          *(undefined8 *)(lVar10 + 0x70) = _UNK_011b5438;
          *(undefined8 *)(lVar10 + 0x68) = uVar12;
          *(undefined8 *)(lVar10 + 0x78) = uVar13;
          *(undefined8 *)(lVar10 + 0x60) = uVar14;
          uVar12 = _DAT_011b4240;
          uVar13 = DAT_011b1898;
          if (uVar1 != 3) {
            uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetArrayForChannel<Vector4>__;
            *(undefined8 *)(lVar10 + 0x90) = _UNK_011b4248;
            *(undefined8 *)(lVar10 + 0x88) = uVar12;
            *(undefined8 *)(lVar10 + 0x98) = uVar13;
            *(undefined8 *)(lVar10 + 0x80) = uVar14;
            uVar12 = _DAT_011b5230;
            uVar13 = DAT_011b1c78;
            if (4 < uVar1) {
              uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetListForChannel<Color>__;
              *(undefined8 *)(lVar10 + 0xb0) = _UNK_011b5238;
              *(undefined8 *)(lVar10 + 0xa8) = uVar12;
              *(undefined8 *)(lVar10 + 0xb8) = uVar13;
              *(undefined8 *)(lVar10 + 0xa0) = uVar14;
              uVar12 = _DAT_011b2770;
              uVar13 = DAT_011b1408;
              if (uVar1 != 5) {
                uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__;
                *(undefined8 *)(lVar10 + 0xd0) = _UNK_011b2778;
                *(undefined8 *)(lVar10 + 200) = uVar12;
                *(undefined8 *)(lVar10 + 0xd8) = uVar13;
                *(undefined8 *)(lVar10 + 0xc0) = uVar14;
                uVar12 = _DAT_011b5d80;
                uVar13 = DAT_011b10c8;
                if (6 < uVar1) {
                  uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetListForChannel<Vector3>__;
                  *(undefined8 *)(lVar10 + 0xf0) = _UNK_011b5d88;
                  *(undefined8 *)(lVar10 + 0xe8) = uVar12;
                  *(undefined8 *)(lVar10 + 0xf8) = uVar13;
                  *(undefined8 *)(lVar10 + 0xe0) = uVar14;
                  uVar12 = _DAT_011b3d80;
                  uVar13 = DAT_011b15a0;
                  if (uVar1 != 7) {
                    uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetListForChannel<Color32>__;
                    *(undefined8 *)(lVar10 + 0x110) = _UNK_011b3d88;
                    *(undefined8 *)(lVar10 + 0x108) = uVar12;
                    *(undefined8 *)(lVar10 + 0x118) = uVar13;
                    *(undefined8 *)(lVar10 + 0x100) = uVar14;
                    uVar12 = _DAT_011b5d90;
                    uVar13 = DAT_011b1ba0;
                    if (8 < uVar1) {
                      uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__;
                      *(undefined8 *)(lVar10 + 0x130) = _UNK_011b5d98;
                      *(undefined8 *)(lVar10 + 0x128) = uVar12;
                      *(undefined8 *)(lVar10 + 0x138) = uVar13;
                      *(undefined8 *)(lVar10 + 0x120) = uVar14;
                      uVar12 = _DAT_011b2e90;
                      uVar13 = DAT_011b17b0;
                      if (uVar1 != 9) {
                        uVar14 = *(undefined8 *)Method_UnityEngine_Mesh_SetIndices<int>__;
                        *(undefined8 *)(lVar10 + 0x150) = _UNK_011b2e98;
                        *(undefined8 *)(lVar10 + 0x148) = uVar12;
                        *(undefined8 *)(lVar10 + 0x158) = uVar13;
                        *(undefined8 *)(lVar10 + 0x140) = uVar14;
                        uVar12 = _DAT_011b24f0;
                        uVar13 = DAT_011b0d28;
                        if (10 < uVar1) {
                          uVar14 = *(undefined8 *)
                                    Method_UnityEngine_Mesh_SetListForChannel<Vector4>__;
                          *(undefined8 *)(lVar10 + 0x170) = _UNK_011b24f8;
                          *(undefined8 *)(lVar10 + 0x168) = uVar12;
                          *(undefined8 *)(lVar10 + 0x178) = uVar13;
                          *(undefined8 *)(lVar10 + 0x160) = uVar14;
                          uVar12 = _DAT_011b2b00;
                          uVar13 = DAT_011b1410;
                          if (uVar1 != 0xb) {
                            uVar14 = *(undefined8 *)
                                      Method_UnityEngine_Mesh_SetArrayForChannel<Color>__;
                            *(undefined8 *)(lVar10 + 400) = _UNK_011b2b08;
                            *(undefined8 *)(lVar10 + 0x188) = uVar12;
                            puVar9 = Method_UnityEngine_Mesh_SetColors<Color>__;
                            *(undefined8 *)(lVar10 + 0x198) = uVar13;
                            *(undefined8 *)(lVar10 + 0x180) = uVar14;
                            uVar3 = DAT_011b02bc;
                            uVar14 = *(undefined8 *)puVar9;
                            fVar15 = (float)FUN_060d9e9c(DAT_011b02bc,0);
                            uVar2 = DAT_011aff98;
                            fVar16 = (float)FUN_060d9e9c(DAT_011aff98,0);
                            uVar6 = DAT_011b0740;
                            fVar17 = (float)FUN_060d9e9c(DAT_011b0740,0);
                            fVar18 = (float)FUN_060d9e9c(uVar3,0);
                            fVar19 = (float)FUN_060d9e9c(uVar2,0);
                            fVar20 = (float)FUN_060d9e9c(uVar6,0);
                            uVar12 = _UNK_011b2b18;
                            uVar13 = _DAT_011b2b10;
                            fVar5 = DAT_011b03ec;
                            fVar4 = DAT_011b018c;
                            if (0xc < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x1a0) = uVar14;
                              if (fVar18 <= fVar19) {
                                fVar18 = fVar19;
                              }
                              *(undefined8 *)(lVar10 + 0x1b0) = uVar12;
                              *(undefined8 *)(lVar10 + 0x1a8) = uVar13;
                              puVar9 = Method_UnityEngine_Mesh_SetIndexBufferData<int>__;
                              if (fVar18 <= fVar20) {
                                fVar18 = fVar20;
                              }
                              if (fVar15 <= fVar16) {
                                fVar15 = fVar16;
                              }
                              *(float *)(lVar10 + 0x1bc) = fVar18 + fVar4;
                              if (fVar15 <= fVar17) {
                                fVar15 = fVar17;
                              }
                              *(float *)(lVar10 + 0x1b8) = fVar15 + fVar5;
                              uVar3 = DAT_011aff04;
                              uVar13 = *(undefined8 *)puVar9;
                              fVar15 = (float)FUN_060d9e9c(DAT_011aff04,0);
                              uVar2 = DAT_011afb50;
                              fVar16 = (float)FUN_060d9e9c(DAT_011afb50,0);
                              uVar6 = DAT_011b0454;
                              fVar17 = (float)FUN_060d9e9c(DAT_011b0454,0);
                              fVar18 = (float)FUN_060d9e9c(uVar3,0);
                              fVar19 = (float)FUN_060d9e9c(uVar2,0);
                              fVar20 = (float)FUN_060d9e9c(uVar6,0);
                              if (0xd < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x1c0) = uVar13;
                                uVar13 = _DAT_011b2500;
                                if (fVar18 <= fVar19) {
                                  fVar18 = fVar19;
                                }
                                *(undefined8 *)(lVar10 + 0x1d0) = _UNK_011b2508;
                                *(undefined8 *)(lVar10 + 0x1c8) = uVar13;
                                if (fVar18 <= fVar20) {
                                  fVar18 = fVar20;
                                }
                                if (fVar15 <= fVar16) {
                                  fVar15 = fVar16;
                                }
                                *(float *)(lVar10 + 0x1dc) = fVar18 + fVar4;
                                if (fVar15 <= fVar17) {
                                  fVar15 = fVar17;
                                }
                                *(float *)(lVar10 + 0x1d8) = fVar15 + fVar5;
                                if (*(uint *)(lVar10 + 0x18) != 0xe) {
                                  uVar12 = *(undefined8 *)
                                            Method_UnityEngine_Mesh_SetArrayForChannel<Vector2>__;
                                  *(undefined8 *)(lVar10 + 0x1f0) = uVar8;
                                  *(undefined8 *)(lVar10 + 0x1e8) = uVar7;
                                  *(undefined8 *)(lVar10 + 0x1f8) = uVar11;
                                  uVar13 = _UNK_011b57d8;
                                  uVar11 = _DAT_011b57d0;
                                  *(undefined8 *)(lVar10 + 0x1e0) = uVar12;
                                  puVar9 = PTR_DAT_067d13f0;
                                  *(long *)(param_1 + 0x10) = lVar10;
                                  *(undefined8 *)(param_1 + 0x24) = uVar13;
                                  *(undefined8 *)(param_1 + 0x1c) = uVar11;
                                  uVar11 = *(undefined8 *)puVar9;
                                  *(undefined8 *)(param_1 + 0x34) = uVar8;
                                  *(undefined8 *)(param_1 + 0x2c) = uVar7;
                                  *(undefined4 *)(param_1 + 0x40) = 0x3f666666;
                                  lVar10 = FUN_02f0880c(uVar11,0x20);
                                  uVar11 = _DAT_011b4990;
                                  if (lVar10 == 0) goto LAB_05d3a638;
                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                  if (uVar1 != 0) {
                                    *(undefined8 *)(lVar10 + 0x28) = _UNK_011b4998;
                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                    uVar11 = _DAT_011b4250;
                                    if (uVar1 != 1) {
                                      *(undefined8 *)(lVar10 + 0x38) = _UNK_011b4258;
                                      *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                      uVar11 = _DAT_011b5240;
                                      if (2 < uVar1) {
                                        *(undefined8 *)(lVar10 + 0x48) = _UNK_011b5248;
                                        *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                        uVar11 = _DAT_011b3a10;
                                        if (uVar1 != 3) {
                                          *(undefined8 *)(lVar10 + 0x58) = _UNK_011b3a18;
                                          *(undefined8 *)(lVar10 + 0x50) = uVar11;
                                          uVar11 = _DAT_011b57e0;
                                          if (4 < uVar1) {
                                            *(undefined8 *)(lVar10 + 0x68) = _UNK_011b57e8;
                                            *(undefined8 *)(lVar10 + 0x60) = uVar11;
                                            uVar11 = _DAT_011b5da0;
                                            if (uVar1 != 5) {
                                              *(undefined8 *)(lVar10 + 0x78) = _UNK_011b5da8;
                                              *(undefined8 *)(lVar10 + 0x70) = uVar11;
                                              uVar11 = _DAT_011b36b0;
                                              if (6 < uVar1) {
                                                *(undefined8 *)(lVar10 + 0x88) = _UNK_011b36b8;
                                                *(undefined8 *)(lVar10 + 0x80) = uVar11;
                                                uVar11 = _DAT_011b4c60;
                                                if (uVar1 != 7) {
                                                  *(undefined8 *)(lVar10 + 0x98) = _UNK_011b4c68;
                                                  *(undefined8 *)(lVar10 + 0x90) = uVar11;
                                                  uVar11 = _DAT_011b4640;
                                                  if (8 < uVar1) {
                                                    *(undefined8 *)(lVar10 + 0xa8) = _UNK_011b4648;
                                                    *(undefined8 *)(lVar10 + 0xa0) = uVar11;
                                                    uVar11 = _DAT_011b4650;
                                                    if (uVar1 != 9) {
                                                      *(undefined8 *)(lVar10 + 0xb8) = _UNK_011b4658
                                                      ;
                                                      *(undefined8 *)(lVar10 + 0xb0) = uVar11;
                                                      uVar11 = _DAT_011b2b20;
                                                      if (10 < uVar1) {
                                                        *(undefined8 *)(lVar10 + 200) =
                                                             _UNK_011b2b28;
                                                        *(undefined8 *)(lVar10 + 0xc0) = uVar11;
                                                        uVar11 = _DAT_011b2780;
                                                        if (uVar1 != 0xb) {
                                                          *(undefined8 *)(lVar10 + 0xd8) =
                                                               _UNK_011b2788;
                                                          *(undefined8 *)(lVar10 + 0xd0) = uVar11;
                                                          uVar11 = _DAT_011b4260;
                                                          if (0xc < uVar1) {
                                                            *(undefined8 *)(lVar10 + 0xe8) =
                                                                 _UNK_011b4268;
                                                            *(undefined8 *)(lVar10 + 0xe0) = uVar11;
                                                            uVar11 = _DAT_011b5250;
                                                            if (uVar1 != 0xd) {
                                                              *(undefined8 *)(lVar10 + 0xf8) =
                                                                   _UNK_011b5258;
                                                              *(undefined8 *)(lVar10 + 0xf0) =
                                                                   uVar11;
                                                              uVar11 = _DAT_011b5db0;
                                                              if (0xe < uVar1) {
                                                                *(undefined8 *)(lVar10 + 0x108) =
                                                                     _UNK_011b5db8;
                                                                *(undefined8 *)(lVar10 + 0x100) =
                                                                     uVar11;
                                                                uVar11 = _DAT_011b3d90;
                                                                if (uVar1 != 0xf) {
                                                                  *(undefined8 *)(lVar10 + 0x118) =
                                                                       _UNK_011b3d98;
                                                                  *(undefined8 *)(lVar10 + 0x110) =
                                                                       uVar11;
                                                                  if (0x10 < uVar1) {
                                                                    *(undefined8 *)(lVar10 + 0x120)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar10 + 0x128)
                                                                         = 0;
                                                                    if (uVar1 != 0x11) {
                                                                      *(undefined8 *)
                                                                       (lVar10 + 0x130) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar10 + 0x138) = 0;
                                                                      if (0x12 < uVar1) {
                                                                        *(undefined8 *)
                                                                         (lVar10 + 0x140) = 0;
                                                                        *(undefined8 *)
                                                                         (lVar10 + 0x148) = 0;
                                                                        if (uVar1 != 0x13) {
                                                                          *(undefined8 *)
                                                                           (lVar10 + 0x150) = 0;
                                                                          *(undefined8 *)
                                                                           (lVar10 + 0x158) = 0;
                                                                          if (0x14 < uVar1) {
                                                                            *(undefined8 *)
                                                                             (lVar10 + 0x160) = 0;
                                                                            *(undefined8 *)
                                                                             (lVar10 + 0x168) = 0;
                                                                            if (uVar1 != 0x15) {
                                                                              *(undefined8 *)
                                                                               (lVar10 + 0x170) = 0;
                                                                              *(undefined8 *)
                                                                               (lVar10 + 0x178) = 0;
                                                                              if (0x16 < uVar1) {
                                                                                *(undefined8 *)
                                                                                 (lVar10 + 0x180) =
                                                                                     0;
                                                                                *(undefined8 *)
                                                                                 (lVar10 + 0x188) =
                                                                                     0;
                                                                                if (uVar1 != 0x17) {
                                                                                  *(undefined8 *)
                                                                                   (lVar10 + 400) =
                                                                                       0;
                                                                                  *(undefined8 *)
                                                                                   (lVar10 + 0x198)
                                                                                       = 0;
                                                                                  if (0x18 < uVar1)
                                                                                  {
                                                                                    *(undefined8 *)
                                                                                     (lVar10 + 0x1a0
                                                                                     ) = 0;
                                                                                    *(undefined8 *)
                                                                                     (lVar10 + 0x1a8
                                                                                     ) = 0;
                                                                                    if (uVar1 != 
                                                  0x19) {
                                                    *(undefined8 *)(lVar10 + 0x1b0) = 0;
                                                    *(undefined8 *)(lVar10 + 0x1b8) = 0;
                                                    if (uVar1 != 0x1a) {
                                                      *(undefined8 *)(lVar10 + 0x1c0) = 0;
                                                      *(undefined8 *)(lVar10 + 0x1c8) = 0;
                                                      if (0x1b < uVar1) {
                                                        *(undefined8 *)(lVar10 + 0x1d0) = 0;
                                                        *(undefined8 *)(lVar10 + 0x1d8) = 0;
                                                        if (uVar1 != 0x1c) {
                                                          *(undefined8 *)(lVar10 + 0x1e0) = 0;
                                                          *(undefined8 *)(lVar10 + 0x1e8) = 0;
                                                          if (0x1d < uVar1) {
                                                            *(undefined8 *)(lVar10 + 0x1f0) = 0;
                                                            *(undefined8 *)(lVar10 + 0x1f8) = 0;
                                                            if (uVar1 != 0x1e) {
                                                              *(undefined8 *)(lVar10 + 0x208) = 0;
                                                              *(undefined8 *)(lVar10 + 0x200) = 0;
                                                              if (0x1f < uVar1) {
                                                                *(undefined8 *)(lVar10 + 0x218) = 0;
                                                                *(undefined8 *)(lVar10 + 0x210) = 0;
                                                                *(long *)(param_1 + 0x50) = lVar10;
                                                                FUN_05116b38(param_1,0);
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
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_05d3a638:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


