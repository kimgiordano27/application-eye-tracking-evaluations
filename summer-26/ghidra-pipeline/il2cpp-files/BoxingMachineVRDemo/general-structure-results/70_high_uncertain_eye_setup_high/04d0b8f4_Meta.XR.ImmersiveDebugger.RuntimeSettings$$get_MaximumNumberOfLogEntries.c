/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_MaximumNumberOfLogEntries
ENTRY_POINT: 04d0b8f4
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_MaximumNumberOfLogEntries
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar15;
  undefined4 unaff_s8;
  float unaff_s9;
  undefined1 auVar16 [16];
  
  lVar6 = (**(code **)(param_1 + 0x9a8))(param_2,*(undefined8 *)(param_1 + 0x9b0));
  if (lVar6 != 0) {
    plVar7 = (long *)FUN_061c5eb8(lVar6,0);
    auVar16 = FUN_061e4ea0(unaff_s9 * (float)unaff_w21,0);
    puVar2 = PTR_DAT_06768888;
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06768888) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x61) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
          }
          uVar14 = uVar14 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06768888,0x61);
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
      (*(code *)*puVar8)(plVar7,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar8[1]);
      plVar7 = (long *)unaff_x20[2];
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = (**(code **)(*plVar7 + 0x9a8))(plVar7,*(undefined8 *)(*plVar7 + 0x9b0)),
         lVar6 != 0)) {
        plVar7 = (long *)FUN_061c5eb8(lVar6,0);
        iVar4 = FUN_045aa148();
        auVar16 = FUN_061e4ea0(unaff_s9 * (float)iVar4,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar14 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
                goto LAB_04d0ba48;
              }
              uVar14 = uVar14 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0x3f);
LAB_04d0ba48:
          (*(code *)*puVar8)(plVar7,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar8[1]);
          lVar6 = FUN_045aa620();
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x14) = unaff_s8;
            iVar4 = (**(code **)(*unaff_x20 + 0x178))();
            if (unaff_w21 == iVar4) {
              return;
            }
            (**(code **)(*unaff_x20 + 0x188))();
            if (unaff_x20[5] != 0) {
              if (*(int *)(unaff_x20[5] + 0x18) < 1) {
                return;
              }
              iVar4 = (**(code **)(*unaff_x20 + 0x178))();
              if ((unaff_x20[5] != 0) &&
                 (lVar6 = FUN_03aac1c4(unaff_x20[5],0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar6 != 0)) {
                if (iVar4 < *(int *)(lVar6 + 0x20)) {
                  if ((unaff_x20[5] == 0) ||
                     (lVar6 = FUN_03aac1c4(unaff_x20[5],0,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar6 == 0)) goto LAB_04d0beac;
                  iVar4 = *(int *)(lVar6 + 0x20);
                  iVar5 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar6 = unaff_x20[5];
                  iVar4 = iVar4 - iVar5;
                  lVar15 = unaff_x20[0xd];
                  bVar3 = lVar6 == 0;
                  if (0 < iVar4) {
                    iVar5 = 0;
                    do {
                      if (bVar3) goto LAB_04d0beac;
                      if (*(int *)(lVar6 + 0x18) < 1) goto LAB_04d0bc44;
                      plVar7 = (long *)FUN_03aac1c4(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                                    *(undefined8 *)
                                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                     + 0x88));
                      if (lVar15 == 0) goto LAB_04d0beac;
                      lVar6 = *(long *)(lVar15 + 0x10);
                      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar6 == 0) goto LAB_04d0beac;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                        plVar9 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar9 = (long)plVar7;
                        thunk_FUN_02dd37b4(plVar9,plVar7);
                      }
                      else {
                        FUN_03aac494(lVar15,plVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = unaff_x20[5];
                      if (((lVar6 == 0) ||
                          (FUN_03aadb8c(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                          plVar7 == (long *)0x0)) ||
                         (lVar6 = (**(code **)(*plVar7 + 0x178))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x180)), lVar6 == 0))
                      goto LAB_04d0beac;
                      FUN_061d1254(lVar6,0);
                      lVar6 = unaff_x20[5];
                      iVar5 = iVar5 + 1;
                      bVar3 = lVar6 == 0;
                    } while (iVar5 < iVar4);
                  }
                  if (bVar3) goto LAB_04d0beac;
LAB_04d0bc44:
                  FUN_03aad39c(lVar6,0,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)
                              );
                  lVar6 = unaff_x20[0xd];
                  if (lVar6 == 0) goto LAB_04d0beac;
                  iVar4 = *(int *)(lVar6 + 0x18);
                  *(undefined4 *)(lVar6 + 0x18) = 0;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (0 < iVar4) {
                    uVar10 = *(undefined8 *)(lVar6 + 0x10);
LAB_04d0be2c:
                    FUN_05029664(uVar10,0,iVar4,0);
                  }
                }
                else {
                  iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar6 = unaff_x20[5];
                  if ((lVar6 == 0) ||
                     (lVar6 = FUN_03aac1c4(lVar6,*(int *)(lVar6 + 0x18) + -1,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                     lVar6 == 0)) goto LAB_04d0beac;
                  if (iVar4 < *(int *)(lVar6 + 0x20)) {
                    lVar15 = unaff_x20[0xd];
                    iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                    lVar6 = unaff_x20[5];
                    if (lVar6 != 0) {
                      iVar5 = 0;
                      while( true ) {
                        lVar6 = FUN_03aac1c4(lVar6,iVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)
                                            );
                        if ((lVar6 == 0) || (lVar13 = unaff_x20[5], lVar13 == 0)) goto LAB_04d0beac;
                        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                        if (iVar4 <= *(int *)(lVar6 + 0x20)) break;
                        plVar7 = (long *)FUN_03aac1c4(lVar13,iVar5,*(undefined8 *)(lVar12 + 0x88));
                        if (lVar15 == 0) goto LAB_04d0beac;
                        lVar6 = *(long *)(lVar15 + 0x10);
                        lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar6 == 0) goto LAB_04d0beac;
                        uVar1 = *(uint *)(lVar15 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = (long)plVar7;
                          thunk_FUN_02dd37b4(plVar9,plVar7);
                        }
                        else {
                          FUN_03aac494(lVar15,plVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        if ((plVar7 == (long *)0x0) ||
                           (lVar6 = (**(code **)(*plVar7 + 0x178))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x180)), lVar6 == 0)
                           ) goto LAB_04d0beac;
                        iVar5 = iVar5 + 1;
                        FUN_061d11ec(lVar6,0);
                        iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                        lVar6 = unaff_x20[5];
                        if (lVar6 == 0) goto LAB_04d0beac;
                      }
                      FUN_03aadc24(lVar13,0,iVar5,*(undefined8 *)(lVar12 + 0xb8));
                      if ((unaff_x20[5] != 0) &&
                         (FUN_03aac6a0(unaff_x20[5],lVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                         lVar15 != 0)) {
                        iVar4 = *(int *)(lVar15 + 0x18);
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (iVar4 < 1) goto LAB_04d0be38;
                        uVar10 = *(undefined8 *)(lVar15 + 0x10);
                        goto LAB_04d0be2c;
                      }
                    }
                    goto LAB_04d0beac;
                  }
                }
LAB_04d0be38:
                lVar6 = unaff_x20[5];
                if (lVar6 != 0) {
                  iVar4 = 0;
                  do {
                    if (*(int *)(lVar6 + 0x18) <= iVar4) {
                      return;
                    }
                    (**(code **)(*unaff_x20 + 0x178))();
                    if (unaff_x20[5] == 0) break;
                    FUN_03aac1c4(unaff_x20[5],iVar4,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                    FUN_045ab1a4();
                    lVar6 = unaff_x20[5];
                    iVar4 = iVar4 + 1;
                  } while (lVar6 != 0);
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


