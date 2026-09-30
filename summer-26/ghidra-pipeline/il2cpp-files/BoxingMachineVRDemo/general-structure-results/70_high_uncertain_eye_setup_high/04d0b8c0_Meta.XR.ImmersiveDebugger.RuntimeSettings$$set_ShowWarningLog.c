/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ShowWarningLog
ENTRY_POINT: 04d0b8c0
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog(float param_1)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  long *unaff_x20;
  long lVar16;
  float fVar17;
  float unaff_s8;
  undefined1 auVar18 [16];
  
  fVar2 = unaff_s8;
  if (unaff_s8 <= param_1) {
    fVar2 = param_1;
  }
  fVar17 = (float)FUN_04d0b0ac();
  plVar7 = (long *)unaff_x20[2];
  iVar6 = -0x80000000;
  if (fVar2 / fVar17 != INFINITY) {
    iVar6 = (int)(fVar2 / fVar17);
  }
  if ((plVar7 != (long *)0x0) &&
     (lVar8 = (**(code **)(*plVar7 + 0x9a8))(plVar7,*(undefined8 *)(*plVar7 + 0x9b0)), lVar8 != 0))
  {
    plVar7 = (long *)FUN_061c5eb8(lVar8,0);
    auVar18 = FUN_061e4ea0(fVar17 * (float)iVar6,0);
    puVar3 = PTR_DAT_06768888;
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06768888) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x61) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
          }
          uVar15 = uVar15 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06768888,0x61);
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
      (*(code *)*puVar9)(plVar7,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar9[1]);
      plVar7 = (long *)unaff_x20[2];
      if ((plVar7 != (long *)0x0) &&
         (lVar8 = (**(code **)(*plVar7 + 0x9a8))(plVar7,*(undefined8 *)(*plVar7 + 0x9b0)),
         lVar8 != 0)) {
        plVar7 = (long *)FUN_061c5eb8(lVar8,0);
        iVar5 = FUN_045aa148();
        auVar18 = FUN_061e4ea0(fVar17 * (float)iVar5,0);
        if (plVar7 != (long *)0x0) {
          lVar8 = *plVar7;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x3f) * 0x10 + 0x138);
                goto LAB_04d0ba48;
              }
              uVar15 = uVar15 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0x3f);
LAB_04d0ba48:
          (*(code *)*puVar9)(plVar7,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar9[1]);
          lVar8 = FUN_045aa620();
          if (lVar8 != 0) {
            *(float *)(lVar8 + 0x14) = unaff_s8;
            iVar5 = (**(code **)(*unaff_x20 + 0x178))();
            if (iVar6 == iVar5) {
              return;
            }
            (**(code **)(*unaff_x20 + 0x188))();
            if (unaff_x20[5] != 0) {
              if (*(int *)(unaff_x20[5] + 0x18) < 1) {
                return;
              }
              iVar6 = (**(code **)(*unaff_x20 + 0x178))();
              if ((unaff_x20[5] != 0) &&
                 (lVar8 = FUN_03aac1c4(unaff_x20[5],0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar8 != 0)) {
                if (iVar6 < *(int *)(lVar8 + 0x20)) {
                  if ((unaff_x20[5] == 0) ||
                     (lVar8 = FUN_03aac1c4(unaff_x20[5],0,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar8 == 0)) goto LAB_04d0beac;
                  iVar6 = *(int *)(lVar8 + 0x20);
                  iVar5 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar8 = unaff_x20[5];
                  iVar6 = iVar6 - iVar5;
                  lVar16 = unaff_x20[0xd];
                  bVar4 = lVar8 == 0;
                  if (0 < iVar6) {
                    iVar5 = 0;
                    do {
                      if (bVar4) goto LAB_04d0beac;
                      if (*(int *)(lVar8 + 0x18) < 1) goto LAB_04d0bc44;
                      plVar7 = (long *)FUN_03aac1c4(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                     + 0x88));
                      if (lVar16 == 0) goto LAB_04d0beac;
                      lVar8 = *(long *)(lVar16 + 0x10);
                      lVar14 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar8 == 0) goto LAB_04d0beac;
                      uVar1 = *(uint *)(lVar16 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = (long)plVar7;
                        thunk_FUN_02dd37b4(plVar10,plVar7);
                      }
                      else {
                        FUN_03aac494(lVar16,plVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar8 = unaff_x20[5];
                      if (((lVar8 == 0) ||
                          (FUN_03aadb8c(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                          plVar7 == (long *)0x0)) ||
                         (lVar8 = (**(code **)(*plVar7 + 0x178))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x180)), lVar8 == 0))
                      goto LAB_04d0beac;
                      FUN_061d1254(lVar8,0);
                      lVar8 = unaff_x20[5];
                      iVar5 = iVar5 + 1;
                      bVar4 = lVar8 == 0;
                    } while (iVar5 < iVar6);
                  }
                  if (bVar4) goto LAB_04d0beac;
LAB_04d0bc44:
                  FUN_03aad39c(lVar8,0,lVar16,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)
                              );
                  lVar8 = unaff_x20[0xd];
                  if (lVar8 == 0) goto LAB_04d0beac;
                  iVar6 = *(int *)(lVar8 + 0x18);
                  *(undefined4 *)(lVar8 + 0x18) = 0;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (0 < iVar6) {
                    uVar11 = *(undefined8 *)(lVar8 + 0x10);
LAB_04d0be2c:
                    FUN_05029664(uVar11,0,iVar6,0);
                  }
                }
                else {
                  iVar6 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar8 = unaff_x20[5];
                  if ((lVar8 == 0) ||
                     (lVar8 = FUN_03aac1c4(lVar8,*(int *)(lVar8 + 0x18) + -1,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar8 == 0)) goto LAB_04d0beac;
                  if (iVar6 < *(int *)(lVar8 + 0x20)) {
                    lVar16 = unaff_x20[0xd];
                    iVar6 = (**(code **)(*unaff_x20 + 0x178))();
                    lVar8 = unaff_x20[5];
                    if (lVar8 != 0) {
                      iVar5 = 0;
                      while( true ) {
                        lVar8 = FUN_03aac1c4(lVar8,iVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)
                                            );
                        if ((lVar8 == 0) || (lVar14 = unaff_x20[5], lVar14 == 0)) goto LAB_04d0beac;
                        lVar13 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                        if (iVar6 <= *(int *)(lVar8 + 0x20)) break;
                        plVar7 = (long *)FUN_03aac1c4(lVar14,iVar5,*(undefined8 *)(lVar13 + 0x88));
                        if (lVar16 == 0) goto LAB_04d0beac;
                        lVar8 = *(long *)(lVar16 + 0x10);
                        lVar14 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        if (lVar8 == 0) goto LAB_04d0beac;
                        uVar1 = *(uint *)(lVar16 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                          plVar10 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar10 = (long)plVar7;
                          thunk_FUN_02dd37b4(plVar10,plVar7);
                        }
                        else {
                          FUN_03aac494(lVar16,plVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        if ((plVar7 == (long *)0x0) ||
                           (lVar8 = (**(code **)(*plVar7 + 0x178))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x180)), lVar8 == 0)
                           ) goto LAB_04d0beac;
                        iVar5 = iVar5 + 1;
                        FUN_061d11ec(lVar8,0);
                        iVar6 = (**(code **)(*unaff_x20 + 0x178))();
                        lVar8 = unaff_x20[5];
                        if (lVar8 == 0) goto LAB_04d0beac;
                      }
                      FUN_03aadc24(lVar14,0,iVar5,*(undefined8 *)(lVar13 + 0xb8));
                      if ((unaff_x20[5] != 0) &&
                         (FUN_03aac6a0(unaff_x20[5],lVar16,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                         lVar16 != 0)) {
                        iVar6 = *(int *)(lVar16 + 0x18);
                        *(undefined4 *)(lVar16 + 0x18) = 0;
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        if (iVar6 < 1) goto LAB_04d0be38;
                        uVar11 = *(undefined8 *)(lVar16 + 0x10);
                        goto LAB_04d0be2c;
                      }
                    }
                    goto LAB_04d0beac;
                  }
                }
LAB_04d0be38:
                lVar8 = unaff_x20[5];
                if (lVar8 != 0) {
                  iVar6 = 0;
                  do {
                    if (*(int *)(lVar8 + 0x18) <= iVar6) {
                      return;
                    }
                    (**(code **)(*unaff_x20 + 0x178))();
                    if (unaff_x20[5] == 0) break;
                    FUN_03aac1c4(unaff_x20[5],iVar6,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                    FUN_045ab1a4();
                    lVar8 = unaff_x20[5];
                    iVar6 = iVar6 + 1;
                  } while (lVar8 != 0);
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


