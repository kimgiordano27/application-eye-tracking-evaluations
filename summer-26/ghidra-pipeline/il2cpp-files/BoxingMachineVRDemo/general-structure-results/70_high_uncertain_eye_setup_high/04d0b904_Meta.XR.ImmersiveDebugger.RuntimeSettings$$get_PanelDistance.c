/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_PanelDistance
ENTRY_POINT: 04d0b904
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_PanelDistance(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
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
  
  plVar6 = (long *)FUN_061c5eb8(param_1,0);
  auVar16 = FUN_061e4ea0(unaff_s9 * (float)unaff_w21,0);
  puVar2 = PTR_DAT_06768888;
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06768888) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0x61) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06768888,0x61);
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
    (*(code *)*puVar7)(plVar6,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar7[1]);
    plVar6 = (long *)unaff_x20[2];
    if ((plVar6 != (long *)0x0) &&
       (lVar12 = (**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0)),
       lVar12 != 0)) {
      plVar6 = (long *)FUN_061c5eb8(lVar12,0);
      iVar4 = FUN_045aa148();
      auVar16 = FUN_061e4ea0(unaff_s9 * (float)iVar4,0);
      if (plVar6 != (long *)0x0) {
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0x3f) * 0x10 + 0x138);
              goto LAB_04d0ba48;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0x3f);
LAB_04d0ba48:
        (*(code *)*puVar7)(plVar6,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar7[1]);
        lVar12 = FUN_045aa620();
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x14) = unaff_s8;
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
               (lVar12 = FUN_03aac1c4(unaff_x20[5],0,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
               lVar12 != 0)) {
              if (iVar4 < *(int *)(lVar12 + 0x20)) {
                if ((unaff_x20[5] == 0) ||
                   (lVar12 = FUN_03aac1c4(unaff_x20[5],0,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                   lVar12 == 0)) goto LAB_04d0beac;
                iVar4 = *(int *)(lVar12 + 0x20);
                iVar5 = (**(code **)(*unaff_x20 + 0x178))();
                lVar12 = unaff_x20[5];
                iVar4 = iVar4 - iVar5;
                lVar15 = unaff_x20[0xd];
                bVar3 = lVar12 == 0;
                if (0 < iVar4) {
                  iVar5 = 0;
                  do {
                    if (bVar3) goto LAB_04d0beac;
                    if (*(int *)(lVar12 + 0x18) < 1) goto LAB_04d0bc44;
                    plVar6 = (long *)FUN_03aac1c4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                   0x88));
                    if (lVar15 == 0) goto LAB_04d0beac;
                    lVar12 = *(long *)(lVar15 + 0x10);
                    lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_04d0beac;
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar8 = (long)plVar6;
                      thunk_FUN_02dd37b4(plVar8,plVar6);
                    }
                    else {
                      FUN_03aac494(lVar15,plVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar12 = unaff_x20[5];
                    if (((lVar12 == 0) ||
                        (FUN_03aadb8c(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                        plVar6 == (long *)0x0)) ||
                       (lVar12 = (**(code **)(*plVar6 + 0x178))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar12 == 0))
                    goto LAB_04d0beac;
                    FUN_061d1254(lVar12,0);
                    lVar12 = unaff_x20[5];
                    iVar5 = iVar5 + 1;
                    bVar3 = lVar12 == 0;
                  } while (iVar5 < iVar4);
                }
                if (bVar3) goto LAB_04d0beac;
LAB_04d0bc44:
                FUN_03aad39c(lVar12,0,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
                lVar12 = unaff_x20[0xd];
                if (lVar12 == 0) goto LAB_04d0beac;
                iVar4 = *(int *)(lVar12 + 0x18);
                *(undefined4 *)(lVar12 + 0x18) = 0;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (0 < iVar4) {
                  uVar9 = *(undefined8 *)(lVar12 + 0x10);
LAB_04d0be2c:
                  FUN_05029664(uVar9,0,iVar4,0);
                }
              }
              else {
                iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                lVar12 = unaff_x20[5];
                if ((lVar12 == 0) ||
                   (lVar12 = FUN_03aac1c4(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                   lVar12 == 0)) goto LAB_04d0beac;
                if (iVar4 < *(int *)(lVar12 + 0x20)) {
                  lVar15 = unaff_x20[0xd];
                  iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                  lVar12 = unaff_x20[5];
                  if (lVar12 != 0) {
                    iVar5 = 0;
                    while( true ) {
                      lVar12 = FUN_03aac1c4(lVar12,iVar5,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))
                      ;
                      if ((lVar12 == 0) || (lVar13 = unaff_x20[5], lVar13 == 0)) goto LAB_04d0beac;
                      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                      if (iVar4 <= *(int *)(lVar12 + 0x20)) break;
                      plVar6 = (long *)FUN_03aac1c4(lVar13,iVar5,*(undefined8 *)(lVar11 + 0x88));
                      if (lVar15 == 0) goto LAB_04d0beac;
                      lVar12 = *(long *)(lVar15 + 0x10);
                      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_04d0beac;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                        plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar8 = (long)plVar6;
                        thunk_FUN_02dd37b4(plVar8,plVar6);
                      }
                      else {
                        FUN_03aac494(lVar15,plVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      if ((plVar6 == (long *)0x0) ||
                         (lVar12 = (**(code **)(*plVar6 + 0x178))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar12 == 0)
                         ) goto LAB_04d0beac;
                      iVar5 = iVar5 + 1;
                      FUN_061d11ec(lVar12,0);
                      iVar4 = (**(code **)(*unaff_x20 + 0x178))();
                      lVar12 = unaff_x20[5];
                      if (lVar12 == 0) goto LAB_04d0beac;
                    }
                    FUN_03aadc24(lVar13,0,iVar5,*(undefined8 *)(lVar11 + 0xb8));
                    if ((unaff_x20[5] != 0) &&
                       (FUN_03aac6a0(unaff_x20[5],lVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                       lVar15 != 0)) {
                      iVar4 = *(int *)(lVar15 + 0x18);
                      *(undefined4 *)(lVar15 + 0x18) = 0;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (iVar4 < 1) goto LAB_04d0be38;
                      uVar9 = *(undefined8 *)(lVar15 + 0x10);
                      goto LAB_04d0be2c;
                    }
                  }
                  goto LAB_04d0beac;
                }
              }
LAB_04d0be38:
              lVar12 = unaff_x20[5];
              if (lVar12 != 0) {
                iVar4 = 0;
                do {
                  if (*(int *)(lVar12 + 0x18) <= iVar4) {
                    return;
                  }
                  (**(code **)(*unaff_x20 + 0x178))();
                  if (unaff_x20[5] == 0) break;
                  FUN_03aac1c4(unaff_x20[5],iVar4,
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)
                              );
                  FUN_045ab1a4();
                  lVar12 = unaff_x20[5];
                  iVar4 = iVar4 + 1;
                } while (lVar12 != 0);
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


