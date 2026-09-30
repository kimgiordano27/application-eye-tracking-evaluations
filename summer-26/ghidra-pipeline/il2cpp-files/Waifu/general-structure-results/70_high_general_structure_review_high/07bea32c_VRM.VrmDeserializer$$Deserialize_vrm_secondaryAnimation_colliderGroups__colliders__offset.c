/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_secondaryAnimation_colliderGroups__colliders__offset
ENTRY_POINT: 07bea32c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void VRM_VrmDeserializer__Deserialize_vrm_secondaryAnimation_colliderGroups__colliders__offset
               (long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  long in_stack_00000018;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x19) * 0x10 + 0x138);
      goto LAB_07bea364;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0338f71c();
LAB_07bea364:
  (*(code *)*puVar5)();
  lVar6 = FUN_07be9b70();
  if ((lVar6 != 0) && (plVar7 = (long *)FUN_07c241a4(lVar6,0), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(unaff_x23 + 0x168)) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x2d) * 0x10 + 0x138);
          goto LAB_07bea3e4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x23 + 0x168),0x2d);
LAB_07bea3e4:
    (*(code *)*puVar5)(plVar7,0,0,puVar5[1]);
    lVar6 = FUN_07be9b70();
    if (lVar6 != 0) {
      plVar7 = (long *)FUN_07c241a4(lVar6,0);
      fVar11 = *(float *)(unaff_x19 + 0xa8) * *(float *)(unaff_x19 + 0xb0);
      fVar14 = fVar11;
      if (8388608.0 < fVar11) {
        fVar14 = 8388608.0;
      }
      if (fVar11 < -8388608.0) {
        fVar14 = -8388608.0;
      }
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(unaff_x23 + 0x168)) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x36) * 0x10 + 0x138);
              goto LAB_07bea490;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x23 + 0x168),0x36);
LAB_07bea490:
        (*(code *)*puVar5)(plVar7,fVar14,0,puVar5[1]);
        lVar6 = FUN_07be9b70();
        if (lVar6 != 0) {
          plVar7 = (long *)FUN_07c241a4(lVar6,0);
          fVar11 = *(float *)(unaff_x19 + 0xac) * *(float *)(unaff_x19 + 0xb0);
          fVar14 = fVar11;
          if (8388608.0 < fVar11) {
            fVar14 = 8388608.0;
          }
          if (fVar11 < -8388608.0) {
            fVar14 = -8388608.0;
          }
          if (plVar7 != (long *)0x0) {
            lVar6 = *plVar7;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)(unaff_x23 + 0x168)) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x18) * 0x10 + 0x138);
                  goto LAB_07bea538;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x23 + 0x168),0x18);
LAB_07bea538:
            (*(code *)*puVar5)(plVar7,fVar14,0,puVar5[1]);
            if ((*(long *)(unaff_x19 + 0x68) != 0) &&
               (lVar6 = FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0), lVar6 != 0)) {
              *(undefined8 *)(lVar6 + 400) = *(undefined8 *)(unaff_x19 + 0x20);
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + (lVar6 + 400U >> 0x12 & 0x7fff);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << (lVar6 + 400U >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                 (lVar6 = FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0), lVar6 != 0)) {
                *(undefined4 *)(lVar6 + 0x1d8) = *(undefined4 *)(unaff_x19 + 0x50);
                if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                   (lVar6 = FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0), lVar6 != 0)) {
                  FUN_07bf9244(lVar6,0,0);
                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    lVar6 = FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0);
                    uVar2 = *(undefined1 *)(unaff_x19 + 0x55);
                    uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
                    uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
                    if (lVar6 != 0) {
                      *(undefined1 *)(lVar6 + 0x38) = *(undefined1 *)(unaff_x19 + 0x54);
                      *(undefined1 *)(lVar6 + 0x39) = uVar2;
                      *(undefined2 *)(lVar6 + 0x3a) = 0;
                      *(undefined8 *)(lVar6 + 0x44) = uVar13;
                      *(undefined8 *)(lVar6 + 0x3c) = uVar12;
                      if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                         (lVar6 = FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0), lVar6 != 0)) {
                        *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(unaff_x19 + 0x2c);
                        if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                           (plVar7 = (long *)FUN_07beabc0(*(long *)(unaff_x19 + 0x68),0),
                           plVar7 != (long *)0x0)) {
                          plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                                     (plVar7,*(undefined8 *)(*plVar7 + 0x470));
                          if (plVar7 != (long *)0x0) {
                            lVar6 = *plVar7;
                            if ((*(byte *)(DAT_083caa28 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
                               (*(long *)(*(long *)(lVar6 + 200) +
                                          (ulong)*(byte *)(DAT_083caa28 + 0x130) * 8 + -8) ==
                                DAT_083caa28)) {
                              lVar8 = *(long *)(unaff_x19 + 0x78);
                              if (lVar8 == 0) goto LAB_07bea78c;
                              if ((int)plVar7[8] != *(int *)(lVar8 + 0x10)) {
                                *(int *)(plVar7 + 8) = *(int *)(lVar8 + 0x10);
                                (**(code **)(lVar6 + 0x198))(plVar7,*(undefined8 *)(lVar6 + 0x1a0));
                                lVar8 = *(long *)(unaff_x19 + 0x78);
                                if (lVar8 == 0) goto LAB_07bea78c;
                              }
                              if (*(int *)((long)plVar7 + 0x44) != *(int *)(lVar8 + 0x14)) {
                                *(int *)((long)plVar7 + 0x44) = *(int *)(lVar8 + 0x14);
                                (**(code **)(*plVar7 + 0x198))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                                lVar8 = *(long *)(unaff_x19 + 0x78);
                                if (lVar8 == 0) goto LAB_07bea78c;
                              }
                              if ((int)plVar7[9] != *(int *)(lVar8 + 0x18)) {
                                *(int *)(plVar7 + 9) = *(int *)(lVar8 + 0x18);
                                (**(code **)(*plVar7 + 0x198))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                                lVar8 = *(long *)(unaff_x19 + 0x78);
                                if (lVar8 == 0) goto LAB_07bea78c;
                              }
                              if (*(int *)((long)plVar7 + 0x4c) != *(int *)(lVar8 + 0x1c)) {
                                *(int *)((long)plVar7 + 0x4c) = *(int *)(lVar8 + 0x1c);
                                (**(code **)(*plVar7 + 0x198))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                                lVar8 = *(long *)(unaff_x19 + 0x78);
                                if (lVar8 == 0) goto LAB_07bea78c;
                              }
                              FUN_07af9284(plVar7,*(undefined8 *)(lVar8 + 0x20),0);
                            }
                          }
                          if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
                            return;
                          }
                    /* WARNING: Subroutine does not return */
                          __stack_chk_fail();
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
LAB_07bea78c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


