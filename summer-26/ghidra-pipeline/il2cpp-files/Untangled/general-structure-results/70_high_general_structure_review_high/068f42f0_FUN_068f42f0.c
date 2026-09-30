/*
FUNCTION_NAME: FUN_068f42f0
ENTRY_POINT: 068f42f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_068f42f0(float param_1,float param_2,float param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int extraout_var;
  ulong uVar12;
  float extraout_w1;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  float fVar17;
  float extraout_s0;
  float extraout_s0_00;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  
  if ((DAT_071d73b3 & 1) == 0) {
    FUN_02f07e70(Fusion_NetworkSpawnOp_Awaiter_var);
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
                );
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d0b830);
    DAT_071d73b3 = 1;
  }
  if (*(char *)(param_4 + 0x1d4) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x1a8) == 0) {
    FUN_068f5170(param_4);
  }
  iVar22 = *(int *)(param_4 + 0x18c);
  iVar4 = FUN_068edb44(param_4);
  if (*(long *)(param_4 + 0x108) != 0) {
    iVar1 = *(int *)(param_4 + 0x1e4);
    lVar8 = FUN_0690c118(*(long *)(param_4 + 0x108),0);
    if (lVar8 == 0) {
      return;
    }
    iVar5 = FUN_06789e70(lVar8,0);
    if (iVar5 == 0) {
      return;
    }
    if (DAT_071bac5e == '\0') {
      FUN_02f07e70(PTR_DAT_06d03888);
      DAT_071bac5e = '\x01';
    }
    puVar2 = PTR_DAT_06d03888;
    fVar21 = **(float **)(*(long *)PTR_DAT_06d03888 + 0xb8);
    plVar9 = (long *)FUN_06789d74(lVar8,0);
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar7 = iVar4 - iVar1;
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
             ) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_068f4474;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar9,*(long *)
                                     Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
                             ,0);
LAB_068f4474:
      iVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((int)uVar7 < iVar4) {
        plVar9 = (long *)FUN_06789d74(lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_068f46f0;
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)
                 Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
               ) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_068f44f0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02eea86c(plVar9,*(long *)
                                       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                               ,0);
LAB_068f44f0:
        fVar21 = (float)(*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
      }
      if (*(long *)(param_4 + 0x108) != 0) {
        fVar17 = (float)FUN_0690cbd0(*(long *)(param_4 + 0x108),0);
        if ((*(long *)(param_4 + 0x108) != 0) &&
           (lVar13 = FUN_06796658(*(long *)(param_4 + 0x108),0), lVar13 != 0)) {
          fVar21 = fVar21 / fVar17;
          uVar11 = FUN_066d3874(lVar13,0);
          if (param_3 + extraout_s0 < fVar21) {
            if ((*(long *)(param_4 + 0x108) == 0) ||
               (lVar13 = FUN_06796658(*(long *)(param_4 + 0x108),0), lVar13 == 0))
            goto LAB_068f46f0;
            uVar11 = FUN_066d3874(lVar13,0);
            fVar21 = param_3 + extraout_s0_00;
          }
          uVar6 = FUN_068f2080(uVar11,uVar7,lVar8);
          plVar9 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters(lVar8,0);
          puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__;
          if (plVar9 != (long *)0x0) {
            lVar13 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_068f45dc;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_02eea86c(plVar9,*(long *)
                                           Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__
                                   ,0);
LAB_068f45dc:
            (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
            if (*(long *)(param_4 + 0x108) != 0) {
              fVar17 = (float)FUN_0690cbd0(*(long *)(param_4 + 0x108),0);
              plVar9 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters
                                         (lVar8,0);
              if (plVar9 != (long *)0x0) {
                lVar8 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_068f4664;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)puVar3,0);
LAB_068f4664:
                (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
                if (*(long *)(param_4 + 0x108) != 0) {
                  fVar18 = (float)FUN_0690cbd0(*(long *)(param_4 + 0x108),0);
                  lVar8 = *(long *)(param_4 + 0x1a8);
                  if (lVar8 != 0) {
                    fVar17 = extraout_w1 / fVar17;
                    uVar15 = 0;
                    lVar13 = 0x48;
                    do {
                      iVar4 = (int)*(undefined8 *)(lVar8 + 0x18);
                      if ((long)iVar4 <= (long)uVar15) {
                        if (iVar4 == 0) goto LAB_068f4a04;
                        fVar18 = fVar17 - (float)extraout_var / fVar18;
                        *(float *)(lVar8 + 0x20) = fVar21;
                        *(float *)(lVar8 + 0x24) = fVar18;
                        *(undefined4 *)(lVar8 + 0x28) = 0;
                        lVar8 = *(long *)(param_4 + 0x1a8);
                        if (lVar8 != 0) {
                          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_068f4a04;
                          fVar20 = fVar21 + (float)iVar22;
                          *(float *)(lVar8 + 0x8c) = fVar20;
                          *(float *)(lVar8 + 0x90) = fVar18;
                          *(undefined4 *)(lVar8 + 0x94) = 0;
                          lVar8 = *(long *)(param_4 + 0x1a8);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_068f4a04;
                            *(float *)(lVar8 + 0xf8) = fVar20;
                            *(float *)(lVar8 + 0xfc) = fVar17;
                            *(undefined4 *)(lVar8 + 0x100) = 0;
                            lVar8 = *(long *)(param_4 + 0x1a8);
                            if (lVar8 != 0) {
                              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_068f4a04;
                              *(float *)(lVar8 + 0x164) = fVar21;
                              *(float *)(lVar8 + 0x168) = fVar17;
                              *(undefined4 *)(lVar8 + 0x16c) = 0;
                              if (DAT_071bac5e == '\0') {
                                FUN_02f07e70(PTR_DAT_06d03888);
                                DAT_071bac5e = '\x01';
                              }
                              param_1 = param_1 - **(float **)(*(long *)puVar2 + 0xb8);
                              param_2 = param_2 - (*(float **)(*(long *)puVar2 + 0xb8))[1];
                              if (param_1 * param_1 + param_2 * param_2 < DAT_013f69d8)
                              goto LAB_068f47d8;
                              if (*(long *)(param_4 + 0x1a8) != 0) {
                                uVar7 = *(uint *)(*(long *)(param_4 + 0x1a8) + 0x18);
                                if ((int)uVar7 < 1) goto LAB_068f47d8;
                                uVar14 = 0;
                                goto LAB_068f47c4;
                              }
                            }
                          }
                        }
                        break;
                      }
                      FUN_068ed310(param_4);
                      uVar6 = FUN_03188d88(0);
                      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_068f4a04;
                      *(undefined4 *)(lVar8 + lVar13) = uVar6;
                      lVar8 = *(long *)(param_4 + 0x1a8);
                      lVar13 = lVar13 + 0x6c;
                      uVar15 = uVar15 + 1;
                    } while (lVar8 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_068f46f0;
  while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar7) {
LAB_068f47c4:
    if (uVar7 <= uVar14) goto LAB_068f4a04;
  }
LAB_068f47d8:
  if (param_5 == 0) goto LAB_068f46f0;
  FUN_0690d788(param_5,*(undefined8 *)(param_4 + 0x1a8),0);
  iVar4 = FUN_0669bbec(0);
  if ((*(long *)(param_4 + 0x108) == 0) ||
     (lVar8 = FUN_06795f9c(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_068f46f0;
  uVar7 = FUN_068eb5ec(lVar8,0);
  puVar2 = Fusion_NetworkSpawnOp_Awaiter_var;
  if (0 < (int)uVar7) {
    lVar8 = *(long *)Fusion_NetworkSpawnOp_Awaiter_var;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar8 = *(long *)puVar2;
    }
    lVar13 = **(long **)(lVar8 + 0xb8);
    if (lVar13 == 0) goto LAB_068f46f0;
    if ((int)uVar7 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar13 == 0) goto LAB_068f46f0;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_068f4a04;
      lVar8 = *(long *)(lVar13 + (ulong)uVar7 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_068f46f0;
      iVar4 = FUN_0669b240(lVar8,0);
    }
  }
  if ((*(long *)(param_4 + 0x108) != 0) &&
     (lVar8 = FUN_06795f9c(*(long *)(param_4 + 0x108),0), lVar8 != 0)) {
    iVar22 = FUN_068eb1c8(lVar8,0);
    if (iVar22 == 0) {
      uVar11 = 0;
    }
    else {
      if ((*(long *)(param_4 + 0x108) == 0) ||
         (lVar8 = FUN_06795f9c(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_068f46f0;
      uVar11 = FUN_068eb9f8(lVar8,0);
    }
    if ((*(long *)(param_4 + 0x1b8) != 0) &&
       (lVar8 = FUN_066c67ec(*(long *)(param_4 + 0x1b8),0), lVar8 != 0)) {
      lVar8 = FUN_066c9a48(lVar8,0);
      lVar13 = *(long *)(param_4 + 0x1a8);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 0) {
LAB_068f4a04:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        if (lVar8 != 0) {
          uVar15 = (ulong)*(uint *)(lVar13 + 0x24);
          uVar12 = (ulong)*(uint *)(lVar13 + 0x28);
          uVar19 = FUN_066d31a4(*(undefined4 *)(lVar13 + 0x20),uVar15,uVar12,lVar8,0);
          if (*(int *)(*(long *)PTR_DAT_06d0b830 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar19 = FUN_068ea894(uVar19,uVar15,uVar12,uVar11,0);
          uVar11 = FUN_068ebe60();
          if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
          }
          uVar12 = FUN_066c971c(uVar11,0,0);
          if ((uVar12 & 1) == 0) {
            return;
          }
          plVar9 = (long *)FUN_068ebe60();
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x068f49dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x288))
                      (uVar19,(float)iVar4 - (float)uVar15,plVar9,*(undefined8 *)(*plVar9 + 0x290));
            return;
          }
        }
      }
    }
  }
LAB_068f46f0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


