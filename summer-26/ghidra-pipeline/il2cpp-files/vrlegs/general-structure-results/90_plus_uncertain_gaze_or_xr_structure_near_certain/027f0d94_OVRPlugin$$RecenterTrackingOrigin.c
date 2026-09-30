/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 027f0d94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027f0fa8) */
/* WARNING: Removing unreachable block (ram,0x027f13c4) */

void OVRPlugin__RecenterTrackingOrigin(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  uint uVar15;
  int iVar16;
  long *unaff_x27;
  char cStack000000000000000c;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x350));
  FUN_01ab69ac(PTR_DAT_03cfd5b0);
  FUN_01ab69ac(PTR_DAT_03cfd4d8);
  FUN_01ab69ac(PTR_DAT_03cfd5b8);
  FUN_01ab69ac(PTR_DAT_03cfd5c0);
  FUN_01ab69ac(PTR_DAT_03cfd4e8);
  FUN_01ab69ac(PTR_DAT_03cfd5c8);
  FUN_01ab69ac(PTR_DAT_03cfd5d0);
  FUN_01ab69ac(PTR_DAT_03cc0330);
  *(undefined1 *)(unaff_x20 + 0x15a) = 1;
  cStack000000000000000c = '\0';
  thunk_FUN_01a4b338();
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x27;
  }
  in_stack_00000018 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
  in_stack_00000010 = (long *)0x0;
  FUN_01aa533c(unaff_x19 + 0x40,&stack0x00000018,&stack0x00000010);
  plVar7 = in_stack_00000010;
  puVar4 = PTR_DAT_03cd7350;
  if (in_stack_00000010 == (long *)0x0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = PTR_DAT_03cc0870;
  uVar15 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_01a4b338();
  if ((uVar15 >> 0x1b & 1) == 0) {
    uVar15 = *(uint *)(unaff_x19 + 0x38);
    thunk_FUN_01a4b338();
    uVar15 = (uVar15 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar15 = 0;
  }
  puVar5 = PTR_DAT_03cfd5b0;
  if (*plVar7 == *(long *)puVar3) {
    lVar8 = *unaff_x27;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *unaff_x27;
    }
    uVar12 = FUN_01ab69c8(lVar8);
    FUN_025c8448(plVar7,uVar15,uVar12,0);
  }
  else {
    plVar9 = (long *)thunk_FUN_01a89d6c(plVar7,*(undefined8 *)PTR_DAT_03cfd5b0);
    if (plVar9 == (long *)0x0) {
      lVar8 = *plVar7;
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cfd5d0)) {
        if (lVar8 == *(long *)PTR_DAT_03cfd4d8) {
          cStack000000000000000c = '\0';
          FUN_027e0bd8(plVar7,&stack0x0000000c);
          if (cStack000000000000000c != '\0') {
            FUN_01a4adbc(plVar7);
          }
          puVar6 = PTR_DAT_03cfd5c8;
          puVar4 = PTR_DAT_03cfd5c0;
          iVar1 = (int)plVar7[3];
          if (0 < iVar1) {
            iVar16 = 0;
            do {
              FUN_0221f8ec(plVar7,iVar16,&stack0x00000018,*(undefined8 *)puVar4);
              plVar9 = in_stack_00000018;
              if (in_stack_00000018 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if (((bVar2 <= *(byte *)(*in_stack_00000018 + 0x130)) &&
                    (*(long *)(*(long *)(*in_stack_00000018 + 200) + (ulong)bVar2 * 8 + -8) ==
                     *(long *)puVar6)) &&
                   ((*(byte *)((long)in_stack_00000018 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_0221f9e0(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_03cfd4e8);
                  (**(code **)(*plVar9 + 0x178))(plVar9);
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar1 != iVar16);
            if (0 < iVar1) {
              iVar16 = 0;
              do {
                FUN_0221f8ec(plVar7,iVar16,&stack0x00000018,*(undefined8 *)puVar4);
                plVar9 = in_stack_00000018;
                if (in_stack_00000018 != (long *)0x0) {
                  FUN_0221f9e0(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_03cfd4e8);
                  lVar8 = *plVar9;
                  plVar11 = plVar9;
                  if (lVar8 != *(long *)puVar3) {
                    plVar11 = (long *)0x0;
                  }
                  if (plVar11 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_03cfd5d0 + 0x130);
                    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_03cfd5d0)) {
                      uVar12 = *(undefined8 *)puVar5;
                      plVar11 = (long *)thunk_FUN_01a89d6c(plVar9,uVar12);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6ee0(plVar9,uVar12);
                      }
                      if (uVar15 == 0) {
                        lVar8 = *plVar11;
                        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_027f11cc;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)puVar5,1);
LAB_027f11cc:
                        uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
                        if ((uVar13 & 1) != 0) {
                          uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
                          FUN_027f28f8(uVar12,plVar11);
                          FUN_027e5eb0(uVar12,0);
                          goto LAB_027f1268;
                        }
                      }
                      lVar8 = *plVar11;
                      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_027f1258;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)puVar5,0);
LAB_027f1258:
                      (*(code *)*puVar10)(plVar11);
                    }
                    else {
                      (**(code **)(lVar8 + 0x178))(plVar9);
                    }
                  }
                  else {
                    lVar8 = *unaff_x27;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar8 = *unaff_x27;
                    }
                    uVar12 = FUN_01ab69c8(lVar8);
                    FUN_025c8448(plVar11,uVar15,uVar12,0);
                  }
                }
LAB_027f1268:
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar1);
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
        (**(code **)(lVar8 + 0x178))(plVar7);
      }
    }
    else {
      if (uVar15 == 0) {
        lVar8 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_027f12b4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar5,1);
LAB_027f12b4:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) != 0) {
          uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd5a8);
          FUN_027f28f8(uVar12,plVar9);
          FUN_027e5eb0(uVar12,0);
          goto LAB_027f1350;
        }
      }
      lVar8 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_027f1340;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar5,0);
LAB_027f1340:
      (*(code *)*puVar10)(plVar9);
    }
  }
LAB_027f1350:
  if (DAT_0412519c == '\0') {
    FUN_01ab69ac(PTR_DAT_03cd7350);
    DAT_0412519c = '\x01';
  }
  lVar8 = *(long *)puVar4;
LAB_027f1374:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  return;
}


