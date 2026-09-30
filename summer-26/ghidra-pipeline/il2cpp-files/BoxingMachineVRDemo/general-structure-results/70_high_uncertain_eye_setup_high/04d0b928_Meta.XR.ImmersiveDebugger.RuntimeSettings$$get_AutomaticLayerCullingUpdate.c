/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_AutomaticLayerCullingUpdate
ENTRY_POINT: 04d0b928
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_AutomaticLayerCullingUpdate(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x25;
  long *plVar14;
  undefined4 unaff_s8;
  float unaff_s9;
  undefined1 auVar15 [16];
  
  lVar10 = *unaff_x22;
  plVar14 = *(long **)(unaff_x25 + 0x888);
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *plVar14) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0x61) * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
      }
      uVar13 = uVar13 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar13 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
  (*(code *)*puVar5)();
  plVar6 = (long *)unaff_x20[2];
  if ((plVar6 != (long *)0x0) &&
     (lVar10 = (**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0)), lVar10 != 0)
     ) {
    plVar6 = (long *)FUN_061c5eb8(lVar10,0);
    iVar3 = FUN_045aa148();
    auVar15 = FUN_061e4ea0(unaff_s9 * (float)iVar3,0);
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      lVar10 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 0x3f) * 0x10 + 0x138);
            goto LAB_04d0ba48;
          }
          uVar13 = uVar13 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar10,0x3f);
LAB_04d0ba48:
      (*(code *)*puVar5)(plVar6,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar5[1]);
      lVar10 = FUN_045aa620();
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x14) = unaff_s8;
        iVar3 = (**(code **)(*unaff_x20 + 0x178))();
        if (unaff_w21 == iVar3) {
          return;
        }
        (**(code **)(*unaff_x20 + 0x188))();
        if (unaff_x20[5] != 0) {
          if (*(int *)(unaff_x20[5] + 0x18) < 1) {
            return;
          }
          iVar3 = (**(code **)(*unaff_x20 + 0x178))();
          if ((unaff_x20[5] != 0) &&
             (lVar10 = FUN_03aac1c4(unaff_x20[5],0,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
             lVar10 != 0)) {
            if (iVar3 < *(int *)(lVar10 + 0x20)) {
              if ((unaff_x20[5] == 0) ||
                 (lVar10 = FUN_03aac1c4(unaff_x20[5],0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar10 == 0)) goto LAB_04d0beac;
              iVar3 = *(int *)(lVar10 + 0x20);
              iVar4 = (**(code **)(*unaff_x20 + 0x178))();
              lVar10 = unaff_x20[5];
              iVar3 = iVar3 - iVar4;
              lVar11 = unaff_x20[0xd];
              bVar2 = lVar10 == 0;
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  if (bVar2) goto LAB_04d0beac;
                  if (*(int *)(lVar10 + 0x18) < 1) goto LAB_04d0bc44;
                  plVar14 = (long *)FUN_03aac1c4(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                  0x88));
                  if (lVar11 == 0) goto LAB_04d0beac;
                  lVar10 = *(long *)(lVar11 + 0x10);
                  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_04d0beac;
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar6 = (long)plVar14;
                    thunk_FUN_02dd37b4(plVar6,plVar14);
                  }
                  else {
                    FUN_03aac494(lVar11,plVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar10 = unaff_x20[5];
                  if (((lVar10 == 0) ||
                      (FUN_03aadb8c(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                      plVar14 == (long *)0x0)) ||
                     (lVar10 = (**(code **)(*plVar14 + 0x178))
                                         (plVar14,*(undefined8 *)(*plVar14 + 0x180)), lVar10 == 0))
                  goto LAB_04d0beac;
                  FUN_061d1254(lVar10,0);
                  lVar10 = unaff_x20[5];
                  iVar4 = iVar4 + 1;
                  bVar2 = lVar10 == 0;
                } while (iVar4 < iVar3);
              }
              if (bVar2) goto LAB_04d0beac;
LAB_04d0bc44:
              FUN_03aad39c(lVar10,0,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
              lVar10 = unaff_x20[0xd];
              if (lVar10 == 0) goto LAB_04d0beac;
              iVar3 = *(int *)(lVar10 + 0x18);
              *(undefined4 *)(lVar10 + 0x18) = 0;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (0 < iVar3) {
                uVar7 = *(undefined8 *)(lVar10 + 0x10);
LAB_04d0be2c:
                FUN_05029664(uVar7,0,iVar3,0);
              }
            }
            else {
              iVar3 = (**(code **)(*unaff_x20 + 0x178))();
              lVar10 = unaff_x20[5];
              if ((lVar10 == 0) ||
                 (lVar10 = FUN_03aac1c4(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar10 == 0)) goto LAB_04d0beac;
              if (iVar3 < *(int *)(lVar10 + 0x20)) {
                lVar11 = unaff_x20[0xd];
                iVar3 = (**(code **)(*unaff_x20 + 0x178))();
                lVar10 = unaff_x20[5];
                if (lVar10 != 0) {
                  iVar4 = 0;
                  while( true ) {
                    lVar10 = FUN_03aac1c4(lVar10,iVar4,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                    if ((lVar10 == 0) || (lVar12 = unaff_x20[5], lVar12 == 0)) goto LAB_04d0beac;
                    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                    if (iVar3 <= *(int *)(lVar10 + 0x20)) break;
                    plVar14 = (long *)FUN_03aac1c4(lVar12,iVar4,*(undefined8 *)(lVar9 + 0x88));
                    if (lVar11 == 0) goto LAB_04d0beac;
                    lVar10 = *(long *)(lVar11 + 0x10);
                    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_04d0beac;
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar6 = (long)plVar14;
                      thunk_FUN_02dd37b4(plVar6,plVar14);
                    }
                    else {
                      FUN_03aac494(lVar11,plVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((plVar14 == (long *)0x0) ||
                       (lVar10 = (**(code **)(*plVar14 + 0x178))
                                           (plVar14,*(undefined8 *)(*plVar14 + 0x180)), lVar10 == 0)
                       ) goto LAB_04d0beac;
                    iVar4 = iVar4 + 1;
                    FUN_061d11ec(lVar10,0);
                    iVar3 = (**(code **)(*unaff_x20 + 0x178))();
                    lVar10 = unaff_x20[5];
                    if (lVar10 == 0) goto LAB_04d0beac;
                  }
                  FUN_03aadc24(lVar12,0,iVar4,*(undefined8 *)(lVar9 + 0xb8));
                  if ((unaff_x20[5] != 0) &&
                     (FUN_03aac6a0(unaff_x20[5],lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                     lVar11 != 0)) {
                    iVar3 = *(int *)(lVar11 + 0x18);
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (iVar3 < 1) goto LAB_04d0be38;
                    uVar7 = *(undefined8 *)(lVar11 + 0x10);
                    goto LAB_04d0be2c;
                  }
                }
                goto LAB_04d0beac;
              }
            }
LAB_04d0be38:
            lVar10 = unaff_x20[5];
            if (lVar10 != 0) {
              iVar3 = 0;
              do {
                if (*(int *)(lVar10 + 0x18) <= iVar3) {
                  return;
                }
                (**(code **)(*unaff_x20 + 0x178))();
                if (unaff_x20[5] == 0) break;
                FUN_03aac1c4(unaff_x20[5],iVar3,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                FUN_045ab1a4();
                lVar10 = unaff_x20[5];
                iVar3 = iVar3 + 1;
              } while (lVar10 != 0);
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


