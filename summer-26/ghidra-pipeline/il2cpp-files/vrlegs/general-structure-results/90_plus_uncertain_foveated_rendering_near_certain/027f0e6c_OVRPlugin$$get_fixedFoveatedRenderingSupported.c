/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 027f0e6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f0fa8) */
/* WARNING: Removing unreachable block (ram,0x027f13c4) */
/* WARNING: Removing unreachable block (ram,0x027f0f94) */

void OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  uint uVar11;
  int iVar12;
  long *unaff_x23;
  long *unaff_x27;
  long *unaff_x29;
  long *in_stack_00000018;
  
  thunk_FUN_01a4b338();
  if ((unaff_w21 >> 0x1b & 1) == 0) {
    uVar11 = *(uint *)(unaff_x19 + 0x38);
    thunk_FUN_01a4b338();
    uVar11 = (uVar11 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar11 = 0;
  }
  puVar3 = PTR_DAT_03cfd5b0;
  if (*unaff_x20 == *unaff_x29) {
    lVar8 = *unaff_x27;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *unaff_x27;
    }
    FUN_01ab69c8(lVar8);
    FUN_025c8448();
  }
  else {
    plVar5 = (long *)thunk_FUN_01a89d6c();
    if (plVar5 == (long *)0x0) {
      lVar8 = *unaff_x20;
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cfd5d0)) {
        if (lVar8 == *(long *)PTR_DAT_03cfd4d8) {
          FUN_027e0bd8();
          puVar4 = PTR_DAT_03cfd5c8;
          iVar1 = (int)unaff_x20[3];
          if (0 < iVar1) {
            iVar12 = 0;
            do {
              FUN_0221f8ec();
              if (in_stack_00000018 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                if (((bVar2 <= *(byte *)(*in_stack_00000018 + 0x130)) &&
                    (*(long *)(*(long *)(*in_stack_00000018 + 200) + (ulong)bVar2 * 8 + -8) ==
                     *(long *)puVar4)) &&
                   ((*(byte *)((long)in_stack_00000018 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_0221f9e0();
                  (**(code **)(*in_stack_00000018 + 0x178))(in_stack_00000018);
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar1 != iVar12);
            if (0 < iVar1) {
              iVar12 = 0;
              do {
                FUN_0221f8ec();
                if (in_stack_00000018 != (long *)0x0) {
                  FUN_0221f9e0();
                  lVar8 = *in_stack_00000018;
                  plVar5 = in_stack_00000018;
                  if (lVar8 != *unaff_x29) {
                    plVar5 = (long *)0x0;
                  }
                  if (plVar5 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
                    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_03cfd5d0)) {
                      uVar7 = *(undefined8 *)puVar3;
                      plVar5 = (long *)thunk_FUN_01a89d6c(in_stack_00000018,uVar7);
                      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6ee0(in_stack_00000018,uVar7);
                      }
                      if (uVar11 == 0) {
                        lVar8 = *plVar5;
                        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        if (uVar9 != 0) {
                          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                              goto LAB_027f11cc;
                            }
                            uVar9 = uVar9 - 1;
                            piVar10 = piVar10 + 4;
                          } while (uVar9 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,1);
LAB_027f11cc:
                        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                        if ((uVar9 & 1) != 0) {
                          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
                          FUN_027f28f8(uVar7,plVar5);
                          FUN_027e5eb0(uVar7,0);
                          goto LAB_027f1268;
                        }
                      }
                      lVar8 = *plVar5;
                      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                            goto LAB_027f1258;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,0);
LAB_027f1258:
                      (*(code *)*puVar6)(plVar5);
                    }
                    else {
                      (**(code **)(lVar8 + 0x178))(in_stack_00000018);
                    }
                  }
                  else {
                    lVar8 = *unaff_x27;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar8 = *unaff_x27;
                    }
                    uVar7 = FUN_01ab69c8(lVar8);
                    FUN_025c8448(plVar5,uVar11,uVar7,0);
                  }
                }
LAB_027f1268:
                iVar12 = iVar12 + 1;
              } while (iVar12 != iVar1);
            }
          }
          if (DAT_0412519c == '\0') {
            FUN_01ab69ac(PTR_DAT_03cd7350);
            DAT_0412519c = '\x01';
          }
          lVar8 = *(long *)PTR_DAT_03cd7350;
          goto LAB_027f1374;
        }
      }
      else {
        (**(code **)(lVar8 + 0x178))();
      }
    }
    else {
      if (uVar11 == 0) {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_027f12b4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,1);
LAB_027f12b4:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) != 0) {
          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
          FUN_027f28f8(uVar7,plVar5);
          FUN_027e5eb0(uVar7,0);
          goto LAB_027f1350;
        }
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_027f1340;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,0);
LAB_027f1340:
      (*(code *)*puVar6)(plVar5);
    }
  }
LAB_027f1350:
  if (DAT_0412519c == '\0') {
    FUN_01ab69ac(PTR_DAT_03cd7350);
    DAT_0412519c = '\x01';
  }
  lVar8 = *unaff_x23;
LAB_027f1374:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  return;
}


