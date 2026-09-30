/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_RotateOverride
ENTRY_POINT: 04d0b898
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_RotateOverride
               (ulong param_1,undefined1 param_2 [16],float param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x21;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06768888);
    *(undefined1 *)(unaff_x21 + 0xda0) = 1;
  }
  fVar17 = param_3;
  if (param_3 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar16 = (float)FUN_04d0b0ac(param_4);
  plVar6 = (long *)param_4[2];
  iVar5 = -0x80000000;
  if (fVar17 / fVar16 != INFINITY) {
    iVar5 = (int)(fVar17 / fVar16);
  }
  if ((plVar6 != (long *)0x0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0)), lVar7 != 0))
  {
    plVar6 = (long *)FUN_061c5eb8(lVar7,0);
    auVar18 = FUN_061e4ea0(fVar16 * (float)iVar5,0);
    puVar2 = PTR_DAT_06768888;
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar14 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06768888) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x61) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
          }
          uVar14 = uVar14 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06768888,0x61);
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
      (*(code *)*puVar8)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar8[1]);
      plVar6 = (long *)param_4[2];
      if ((plVar6 != (long *)0x0) &&
         (lVar7 = (**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0)),
         lVar7 != 0)) {
        plVar6 = (long *)FUN_061c5eb8(lVar7,0);
        iVar4 = FUN_045aa148(param_4,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
        auVar18 = FUN_061e4ea0(fVar16 * (float)iVar4,0);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar14 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
                goto LAB_04d0ba48;
              }
              uVar14 = uVar14 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0x3f);
LAB_04d0ba48:
          (*(code *)*puVar8)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar8[1]);
          lVar7 = FUN_045aa620(param_4,*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
          if (lVar7 != 0) {
            *(float *)(lVar7 + 0x14) = param_3;
            iVar4 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
            if (iVar5 == iVar4) {
              return;
            }
            (**(code **)(*param_4 + 0x188))(param_4,iVar5,*(undefined8 *)(*param_4 + 400));
            if (param_4[5] != 0) {
              if (*(int *)(param_4[5] + 0x18) < 1) {
                return;
              }
              iVar5 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
              if ((param_4[5] != 0) &&
                 (lVar7 = FUN_03aac1c4(param_4[5],0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar7 != 0)) {
                if (iVar5 < *(int *)(lVar7 + 0x20)) {
                  if ((param_4[5] == 0) ||
                     (lVar7 = FUN_03aac1c4(param_4[5],0,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar7 == 0)) goto LAB_04d0beac;
                  iVar5 = *(int *)(lVar7 + 0x20);
                  iVar4 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180))
                  ;
                  lVar7 = param_4[5];
                  iVar5 = iVar5 - iVar4;
                  lVar15 = param_4[0xd];
                  bVar3 = lVar7 == 0;
                  if (0 < iVar5) {
                    iVar4 = 0;
                    do {
                      if (bVar3) goto LAB_04d0beac;
                      if (*(int *)(lVar7 + 0x18) < 1) goto LAB_04d0bc44;
                      plVar6 = (long *)FUN_03aac1c4(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                     + 0x88));
                      if (lVar15 == 0) goto LAB_04d0beac;
                      lVar7 = *(long *)(lVar15 + 0x10);
                      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar7 == 0) goto LAB_04d0beac;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                        plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar9 = (long)plVar6;
                        thunk_FUN_02dd37b4(plVar9,plVar6);
                      }
                      else {
                        FUN_03aac494(lVar15,plVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar7 = param_4[5];
                      if (((lVar7 == 0) ||
                          (FUN_03aadb8c(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                          plVar6 == (long *)0x0)) ||
                         (lVar7 = (**(code **)(*plVar6 + 0x178))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar7 == 0))
                      goto LAB_04d0beac;
                      FUN_061d1254(lVar7,0);
                      lVar7 = param_4[5];
                      iVar4 = iVar4 + 1;
                      bVar3 = lVar7 == 0;
                    } while (iVar4 < iVar5);
                  }
                  if (bVar3) goto LAB_04d0beac;
LAB_04d0bc44:
                  FUN_03aad39c(lVar7,0,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)
                              );
                  lVar7 = param_4[0xd];
                  if (lVar7 == 0) goto LAB_04d0beac;
                  iVar5 = *(int *)(lVar7 + 0x18);
                  *(undefined4 *)(lVar7 + 0x18) = 0;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (0 < iVar5) {
                    uVar10 = *(undefined8 *)(lVar7 + 0x10);
LAB_04d0be2c:
                    FUN_05029664(uVar10,0,iVar5,0);
                  }
                }
                else {
                  iVar5 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180))
                  ;
                  lVar7 = param_4[5];
                  if ((lVar7 == 0) ||
                     (lVar7 = FUN_03aac1c4(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar7 == 0)) goto LAB_04d0beac;
                  if (iVar5 < *(int *)(lVar7 + 0x20)) {
                    lVar15 = param_4[0xd];
                    iVar5 = (**(code **)(*param_4 + 0x178))
                                      (param_4,*(undefined8 *)(*param_4 + 0x180));
                    lVar7 = param_4[5];
                    if (lVar7 != 0) {
                      iVar4 = 0;
                      while( true ) {
                        lVar7 = FUN_03aac1c4(lVar7,iVar4,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)
                                            );
                        if ((lVar7 == 0) || (lVar13 = param_4[5], lVar13 == 0)) goto LAB_04d0beac;
                        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                        if (iVar5 <= *(int *)(lVar7 + 0x20)) break;
                        plVar6 = (long *)FUN_03aac1c4(lVar13,iVar4,*(undefined8 *)(lVar12 + 0x88));
                        if (lVar15 == 0) goto LAB_04d0beac;
                        lVar7 = *(long *)(lVar15 + 0x10);
                        lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar7 == 0) goto LAB_04d0beac;
                        uVar1 = *(uint *)(lVar15 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = (long)plVar6;
                          thunk_FUN_02dd37b4(plVar9,plVar6);
                        }
                        else {
                          FUN_03aac494(lVar15,plVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        if ((plVar6 == (long *)0x0) ||
                           (lVar7 = (**(code **)(*plVar6 + 0x178))
                                              (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar7 == 0)
                           ) goto LAB_04d0beac;
                        iVar4 = iVar4 + 1;
                        FUN_061d11ec(lVar7,0);
                        iVar5 = (**(code **)(*param_4 + 0x178))
                                          (param_4,*(undefined8 *)(*param_4 + 0x180));
                        lVar7 = param_4[5];
                        if (lVar7 == 0) goto LAB_04d0beac;
                      }
                      FUN_03aadc24(lVar13,0,iVar4,*(undefined8 *)(lVar12 + 0xb8));
                      if ((param_4[5] != 0) &&
                         (FUN_03aac6a0(param_4[5],lVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                         lVar15 != 0)) {
                        iVar5 = *(int *)(lVar15 + 0x18);
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (iVar5 < 1) goto LAB_04d0be38;
                        uVar10 = *(undefined8 *)(lVar15 + 0x10);
                        goto LAB_04d0be2c;
                      }
                    }
                    goto LAB_04d0beac;
                  }
                }
LAB_04d0be38:
                lVar7 = param_4[5];
                if (lVar7 != 0) {
                  iVar5 = 0;
                  do {
                    if (*(int *)(lVar7 + 0x18) <= iVar5) {
                      return;
                    }
                    iVar4 = (**(code **)(*param_4 + 0x178))
                                      (param_4,*(undefined8 *)(*param_4 + 0x180));
                    if (param_4[5] == 0) break;
                    uVar10 = FUN_03aac1c4(param_4[5],iVar5,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                    FUN_045ab1a4(param_4,uVar10,iVar4 + iVar5,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
                    lVar7 = param_4[5];
                    iVar5 = iVar5 + 1;
                  } while (lVar7 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04d0beac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


