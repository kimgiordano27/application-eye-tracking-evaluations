/*
FUNCTION_NAME: FUN_03b03978
ENTRY_POINT: 03b03978
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_03b03978(float param_1,float param_2,float param_3,long param_4,long param_5)

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
  
  if ((DAT_03ffda19 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7b40);
    thunk_FUN_01ad9084(PTR_DAT_03db6778);
    thunk_FUN_01ad9084(PTR_DAT_03db6760);
    thunk_FUN_01ad9084(PTR_DAT_03db6758);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    DAT_03ffda19 = 1;
  }
  if (*(char *)(param_4 + 0x1d4) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x1a8) == 0) {
    FUN_03b047f8(param_4);
  }
  iVar22 = *(int *)(param_4 + 0x18c);
  iVar4 = FUN_03afd264(param_4);
  if (*(long *)(param_4 + 0x108) != 0) {
    iVar1 = *(int *)(param_4 + 0x1e4);
    lVar8 = FUN_03b1b7f0(*(long *)(param_4 + 0x108),0);
    if (lVar8 == 0) {
      return;
    }
    iVar5 = FUN_039a0e68(lVar8,0);
    if (iVar5 == 0) {
      return;
    }
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    puVar2 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__;
    fVar21 = **(float **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    plVar9 = (long *)FUN_039a0d6c(lVar8,0);
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar7 = iVar4 - iVar1;
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03db6778) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03b03afc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03db6778,0);
LAB_03b03afc:
      iVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((int)uVar7 < iVar4) {
        plVar9 = (long *)FUN_039a0d6c(lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_03b03d78;
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03db6760) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03b03b78;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03db6760,0);
LAB_03b03b78:
        fVar21 = (float)(*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
      }
      if (*(long *)(param_4 + 0x108) != 0) {
        fVar17 = (float)FUN_03b1c2a8(*(long *)(param_4 + 0x108),0);
        if ((*(long *)(param_4 + 0x108) != 0) &&
           (lVar13 = FUN_039ad440(*(long *)(param_4 + 0x108),0), lVar13 != 0)) {
          fVar21 = fVar21 / fVar17;
          uVar11 = UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                             (lVar13,0);
          if (param_3 + extraout_s0 < fVar21) {
            if ((*(long *)(param_4 + 0x108) == 0) ||
               (lVar13 = FUN_039ad440(*(long *)(param_4 + 0x108),0), lVar13 == 0))
            goto LAB_03b03d78;
            uVar11 = UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                               (lVar13,0);
            fVar21 = param_3 + extraout_s0_00;
          }
          uVar6 = FUN_03b01708(uVar11,uVar7,lVar8);
          plVar9 = (long *)FUN_039a0dc8(lVar8,0);
          puVar3 = PTR_DAT_03db6758;
          if (plVar9 != (long *)0x0) {
            lVar13 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03db6758) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_03b03c64;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03db6758,0);
LAB_03b03c64:
            (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
            if (*(long *)(param_4 + 0x108) != 0) {
              fVar17 = (float)FUN_03b1c2a8(*(long *)(param_4 + 0x108),0);
              plVar9 = (long *)FUN_039a0dc8(lVar8,0);
              if (plVar9 != (long *)0x0) {
                lVar8 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_03b03cec;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar3,0);
LAB_03b03cec:
                (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
                if (*(long *)(param_4 + 0x108) != 0) {
                  fVar18 = (float)FUN_03b1c2a8(*(long *)(param_4 + 0x108),0);
                  lVar8 = *(long *)(param_4 + 0x1a8);
                  if (lVar8 != 0) {
                    fVar17 = extraout_w1 / fVar17;
                    uVar15 = 0;
                    lVar13 = 0x48;
                    do {
                      iVar4 = (int)*(undefined8 *)(lVar8 + 0x18);
                      if ((long)iVar4 <= (long)uVar15) {
                        if (iVar4 == 0) goto LAB_03b0408c;
                        fVar18 = fVar17 - (float)extraout_var / fVar18;
                        *(float *)(lVar8 + 0x20) = fVar21;
                        *(float *)(lVar8 + 0x24) = fVar18;
                        *(undefined4 *)(lVar8 + 0x28) = 0;
                        lVar8 = *(long *)(param_4 + 0x1a8);
                        if (lVar8 != 0) {
                          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_03b0408c;
                          fVar20 = fVar21 + (float)iVar22;
                          *(float *)(lVar8 + 0x8c) = fVar20;
                          *(float *)(lVar8 + 0x90) = fVar18;
                          *(undefined4 *)(lVar8 + 0x94) = 0;
                          lVar8 = *(long *)(param_4 + 0x1a8);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_03b0408c;
                            *(float *)(lVar8 + 0xf8) = fVar20;
                            *(float *)(lVar8 + 0xfc) = fVar17;
                            *(undefined4 *)(lVar8 + 0x100) = 0;
                            lVar8 = *(long *)(param_4 + 0x1a8);
                            if (lVar8 != 0) {
                              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_03b0408c;
                              *(float *)(lVar8 + 0x164) = fVar21;
                              *(float *)(lVar8 + 0x168) = fVar17;
                              *(undefined4 *)(lVar8 + 0x16c) = 0;
                              if (DAT_03fed2da == '\0') {
                                thunk_FUN_01ad9084(
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  );
                                DAT_03fed2da = '\x01';
                              }
                              param_1 = param_1 - **(float **)(*(long *)puVar2 + 0xb8);
                              param_2 = param_2 - (*(float **)(*(long *)puVar2 + 0xb8))[1];
                              if (param_1 * param_1 + param_2 * param_2 < DAT_00b55084)
                              goto LAB_03b03e60;
                              if (*(long *)(param_4 + 0x1a8) != 0) {
                                uVar7 = *(uint *)(*(long *)(param_4 + 0x1a8) + 0x18);
                                if ((int)uVar7 < 1) goto LAB_03b03e60;
                                uVar14 = 0;
                                goto LAB_03b03e4c;
                              }
                            }
                          }
                        }
                        break;
                      }
                      FUN_03afca30(param_4);
                      uVar6 = FUN_01bd7168(0);
                      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_03b0408c;
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
  goto LAB_03b03d78;
  while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar7) {
LAB_03b03e4c:
    if (uVar7 <= uVar14) goto LAB_03b0408c;
  }
LAB_03b03e60:
  if (param_5 == 0) goto LAB_03b03d78;
  FUN_03b1ce60(param_5,*(undefined8 *)(param_4 + 0x1a8),0);
  iVar4 = FUN_038fa788(0);
  if ((*(long *)(param_4 + 0x108) == 0) ||
     (lVar8 = FUN_039acd84(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_03b03d78;
  uVar7 = FUN_03afabb8(lVar8,0);
  puVar2 = PTR_DAT_03da7b40;
  if (0 < (int)uVar7) {
    lVar8 = *(long *)PTR_DAT_03da7b40;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar2;
    }
    lVar13 = **(long **)(lVar8 + 0xb8);
    if (lVar13 == 0) goto LAB_03b03d78;
    if ((int)uVar7 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar13 == 0) goto LAB_03b03d78;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_03b0408c;
      lVar8 = *(long *)(lVar13 + (ulong)uVar7 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_03b03d78;
      iVar4 = FUN_038f9e90(lVar8,0);
    }
  }
  if ((*(long *)(param_4 + 0x108) != 0) &&
     (lVar8 = FUN_039acd84(*(long *)(param_4 + 0x108),0), lVar8 != 0)) {
    iVar22 = FUN_03afa68c(lVar8,0);
    if (iVar22 == 0) {
      uVar11 = 0;
    }
    else {
      if ((*(long *)(param_4 + 0x108) == 0) ||
         (lVar8 = FUN_039acd84(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_03b03d78;
      uVar11 = FUN_03afb088(lVar8,0);
    }
    if ((*(long *)(param_4 + 0x1b8) != 0) &&
       (lVar8 = FUN_0391c2b8(*(long *)(param_4 + 0x1b8),0), lVar8 != 0)) {
      lVar8 = FUN_0391fab4(lVar8,0);
      lVar13 = *(long *)(param_4 + 0x1a8);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 0) {
LAB_03b0408c:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (lVar8 != 0) {
          uVar15 = (ulong)*(uint *)(lVar13 + 0x24);
          uVar12 = (ulong)*(uint *)(lVar13 + 0x28);
          uVar19 = FUN_03927438(*(undefined4 *)(lVar13 + 0x20),uVar15,uVar12,lVar8,0);
          if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_03af9d58(uVar19,uVar15,uVar12,uVar11,0);
          uVar11 = FUN_03afb578();
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar12 = FUN_0391f968(uVar11,0,0);
          if ((uVar12 & 1) == 0) {
            return;
          }
          plVar9 = (long *)FUN_03afb578();
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03b04064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x288))
                      (uVar19,(float)iVar4 - (float)uVar15,plVar9,*(undefined8 *)(*plVar9 + 0x290));
            return;
          }
        }
      }
    }
  }
LAB_03b03d78:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


