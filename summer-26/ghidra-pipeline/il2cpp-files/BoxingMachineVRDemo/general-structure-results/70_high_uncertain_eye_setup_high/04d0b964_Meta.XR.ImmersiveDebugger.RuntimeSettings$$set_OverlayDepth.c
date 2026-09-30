/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_OverlayDepth
ENTRY_POINT: 04d0b964
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


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_OverlayDepth
               (int *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long in_x9;
  long lVar12;
  long in_x10;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar14;
  long *unaff_x25;
  undefined4 unaff_s8;
  float unaff_s9;
  undefined1 auVar15 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(param_1 + -2) == param_3) {
      puVar5 = (undefined8 *)(in_x9 + (long)(*param_1 + 0x61) * 0x10 + 0x138);
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled;
    }
    in_x10 = in_x10 + -1;
    param_1 = param_1 + 4;
    in_ZR = in_x10 == 0;
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled:
  (*(code *)*puVar5)();
  plVar6 = (long *)unaff_x20[2];
  if ((plVar6 != (long *)0x0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0)), lVar7 != 0))
  {
    plVar6 = (long *)FUN_061c5eb8(lVar7,0);
    iVar3 = FUN_045aa148();
    auVar15 = FUN_061e4ea0(unaff_s9 * (float)iVar3,0);
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x3f) * 0x10 + 0x138);
            goto LAB_04d0ba48;
          }
          uVar13 = uVar13 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x25,0x3f);
LAB_04d0ba48:
      (*(code *)*puVar5)(plVar6,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar5[1]);
      lVar7 = FUN_045aa620();
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x14) = unaff_s8;
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
             (lVar7 = FUN_03aac1c4(unaff_x20[5],0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
             lVar7 != 0)) {
            if (iVar3 < *(int *)(lVar7 + 0x20)) {
              if ((unaff_x20[5] == 0) ||
                 (lVar7 = FUN_03aac1c4(unaff_x20[5],0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar7 == 0)) goto LAB_04d0beac;
              iVar3 = *(int *)(lVar7 + 0x20);
              iVar4 = (**(code **)(*unaff_x20 + 0x178))();
              lVar7 = unaff_x20[5];
              iVar3 = iVar3 - iVar4;
              lVar14 = unaff_x20[0xd];
              bVar2 = lVar7 == 0;
              if (0 < iVar3) {
                iVar4 = 0;
                do {
                  if (bVar2) goto LAB_04d0beac;
                  if (*(int *)(lVar7 + 0x18) < 1) goto LAB_04d0bc44;
                  plVar6 = (long *)FUN_03aac1c4(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                                *(undefined8 *)
                                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                 0x88));
                  if (lVar14 == 0) goto LAB_04d0beac;
                  lVar7 = *(long *)(lVar14 + 0x10);
                  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar7 == 0) goto LAB_04d0beac;
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = (long)plVar6;
                    thunk_FUN_02dd37b4(plVar8,plVar6);
                  }
                  else {
                    FUN_03aac494(lVar14,plVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar7 = unaff_x20[5];
                  if (((lVar7 == 0) ||
                      (FUN_03aadb8c(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
                      plVar6 == (long *)0x0)) ||
                     (lVar7 = (**(code **)(*plVar6 + 0x178))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar7 == 0))
                  goto LAB_04d0beac;
                  FUN_061d1254(lVar7,0);
                  lVar7 = unaff_x20[5];
                  iVar4 = iVar4 + 1;
                  bVar2 = lVar7 == 0;
                } while (iVar4 < iVar3);
              }
              if (bVar2) goto LAB_04d0beac;
LAB_04d0bc44:
              FUN_03aad39c(lVar7,0,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
              lVar7 = unaff_x20[0xd];
              if (lVar7 == 0) goto LAB_04d0beac;
              iVar3 = *(int *)(lVar7 + 0x18);
              *(undefined4 *)(lVar7 + 0x18) = 0;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (0 < iVar3) {
                uVar9 = *(undefined8 *)(lVar7 + 0x10);
LAB_04d0be2c:
                FUN_05029664(uVar9,0,iVar3,0);
              }
            }
            else {
              iVar3 = (**(code **)(*unaff_x20 + 0x178))();
              lVar7 = unaff_x20[5];
              if ((lVar7 == 0) ||
                 (lVar7 = FUN_03aac1c4(lVar7,*(int *)(lVar7 + 0x18) + -1,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88)),
                 lVar7 == 0)) goto LAB_04d0beac;
              if (iVar3 < *(int *)(lVar7 + 0x20)) {
                lVar14 = unaff_x20[0xd];
                iVar3 = (**(code **)(*unaff_x20 + 0x178))();
                lVar7 = unaff_x20[5];
                if (lVar7 != 0) {
                  iVar4 = 0;
                  while( true ) {
                    lVar7 = FUN_03aac1c4(lVar7,iVar4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                    if ((lVar7 == 0) || (lVar12 = unaff_x20[5], lVar12 == 0)) goto LAB_04d0beac;
                    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
                    if (iVar3 <= *(int *)(lVar7 + 0x20)) break;
                    plVar6 = (long *)FUN_03aac1c4(lVar12,iVar4,*(undefined8 *)(lVar11 + 0x88));
                    if (lVar14 == 0) goto LAB_04d0beac;
                    lVar7 = *(long *)(lVar14 + 0x10);
                    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (lVar7 == 0) goto LAB_04d0beac;
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar8 = (long)plVar6;
                      thunk_FUN_02dd37b4(plVar8,plVar6);
                    }
                    else {
                      FUN_03aac494(lVar14,plVar6,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((plVar6 == (long *)0x0) ||
                       (lVar7 = (**(code **)(*plVar6 + 0x178))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar7 == 0))
                    goto LAB_04d0beac;
                    iVar4 = iVar4 + 1;
                    FUN_061d11ec(lVar7,0);
                    iVar3 = (**(code **)(*unaff_x20 + 0x178))();
                    lVar7 = unaff_x20[5];
                    if (lVar7 == 0) goto LAB_04d0beac;
                  }
                  FUN_03aadc24(lVar12,0,iVar4,*(undefined8 *)(lVar11 + 0xb8));
                  if ((unaff_x20[5] != 0) &&
                     (FUN_03aac6a0(unaff_x20[5],lVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
                     lVar14 != 0)) {
                    iVar3 = *(int *)(lVar14 + 0x18);
                    *(undefined4 *)(lVar14 + 0x18) = 0;
                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                    if (iVar3 < 1) goto LAB_04d0be38;
                    uVar9 = *(undefined8 *)(lVar14 + 0x10);
                    goto LAB_04d0be2c;
                  }
                }
                goto LAB_04d0beac;
              }
            }
LAB_04d0be38:
            lVar7 = unaff_x20[5];
            if (lVar7 != 0) {
              iVar3 = 0;
              do {
                if (*(int *)(lVar7 + 0x18) <= iVar3) {
                  return;
                }
                (**(code **)(*unaff_x20 + 0x178))();
                if (unaff_x20[5] == 0) break;
                FUN_03aac1c4(unaff_x20[5],iVar3,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
                FUN_045ab1a4();
                lVar7 = unaff_x20[5];
                iVar3 = iVar3 + 1;
              } while (lVar7 != 0);
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


