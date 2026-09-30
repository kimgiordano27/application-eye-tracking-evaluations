/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 01db9a20
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db9c18) */
/* WARNING: Removing unreachable block (ram,0x01dba028) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(long param_1)

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
  undefined8 in_stack_00000018;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x6b0));
  FUN_00fdc2e4(PTR_DAT_0235a778);
  FUN_00fdc2e4(PTR_DAT_0235a780);
  FUN_00fdc2e4(PTR_DAT_0235a6c0);
  FUN_00fdc2e4(PTR_DAT_0235a788);
  FUN_00fdc2e4(PTR_DAT_0235a790);
  FUN_00fdc2e4(PTR_DAT_0234bca8);
  *(undefined1 *)(unaff_x20 + 0xa4e) = 1;
  cStack000000000000000c = '\0';
  thunk_FUN_00ffe618();
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar8 = *unaff_x27;
  }
  in_stack_00000018 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  in_stack_00000010 = (long *)0x0;
  FUN_00ff7744(unaff_x19 + 0x40,&stack0x00000018,&stack0x00000010);
  plVar7 = in_stack_00000010;
  puVar4 = PTR_DAT_0234bc90;
  if (in_stack_00000010 == (long *)0x0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar3 = PTR_DAT_0234bbf8;
  uVar15 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_00ffe618();
  if ((uVar15 >> 0x1b & 1) == 0) {
    uVar15 = *(uint *)(unaff_x19 + 0x38);
    thunk_FUN_00ffe618();
    uVar15 = (uVar15 >> 6 ^ 0xffffffff) & 1;
  }
  else {
    uVar15 = 0;
  }
  puVar5 = PTR_DAT_0235a770;
  if (*plVar7 == *(long *)puVar3) {
    lVar8 = *unaff_x27;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar8 = *unaff_x27;
    }
    uVar12 = FUN_00fdc2fc(lVar8);
    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar7,uVar15,uVar12);
  }
  else {
    plVar9 = (long *)thunk_FUN_0103ffe0(plVar7,*(undefined8 *)PTR_DAT_0235a770);
    if (plVar9 == (long *)0x0) {
      lVar8 = *plVar7;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790)) {
        if (lVar8 == *(long *)PTR_DAT_0235a6b0) {
          cStack000000000000000c = '\0';
          FUN_01da75d8(plVar7,&stack0x0000000c);
          if (cStack000000000000000c != '\0') {
            FUN_0102a860(plVar7);
          }
          puVar6 = PTR_DAT_0235a788;
          puVar4 = PTR_DAT_0235a780;
          iVar1 = (int)plVar7[3];
          if (0 < iVar1) {
            iVar16 = 0;
            do {
              plVar9 = (long *)FUN_018985f8(plVar7,iVar16,*(undefined8 *)puVar4);
              if (plVar9 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)
                    ) && ((*(byte *)((long)plVar9 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_01898668(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  (**(code **)(*plVar9 + 0x178))(plVar9);
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar1 != iVar16);
            if (0 < iVar1) {
              iVar16 = 0;
              do {
                plVar9 = (long *)FUN_018985f8(plVar7,iVar16,*(undefined8 *)puVar4);
                if (plVar9 != (long *)0x0) {
                  FUN_01898668(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  lVar8 = *plVar9;
                  plVar11 = plVar9;
                  if (lVar8 != *(long *)puVar3) {
                    plVar11 = (long *)0x0;
                  }
                  if (plVar11 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
                    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0235a790)) {
                      uVar12 = *(undefined8 *)puVar5;
                      plVar11 = (long *)thunk_FUN_0103ffe0(plVar9,uVar12);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(plVar9,uVar12);
                      }
                      if (uVar15 == 0) {
                        lVar8 = *plVar11;
                        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_01db9e30;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_0103c348(plVar11,*(long *)puVar5,1);
LAB_01db9e30:
                        uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
                        if ((uVar13 & 1) != 0) {
                          uVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
                          FUN_01dbb700(uVar12,plVar11);
                          FUN_01dab44c(uVar12,0);
                          goto LAB_01db9ecc;
                        }
                      }
                      lVar8 = *plVar11;
                      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_01db9ebc;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_0103c348(plVar11,*(long *)puVar5,0);
LAB_01db9ebc:
                      (*(code *)*puVar10)(plVar11);
                    }
                    else {
                      (**(code **)(lVar8 + 0x178))(plVar9);
                    }
                  }
                  else {
                    lVar8 = *unaff_x27;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01022c14();
                      lVar8 = *unaff_x27;
                    }
                    uVar12 = FUN_00fdc2fc(lVar8);
                    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar11,uVar15,uVar12);
                  }
                }
LAB_01db9ecc:
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar1);
            }
          }
          if (DAT_0247da80 == '\0') {
            FUN_00fdc2e4(PTR_DAT_0234bc90);
            DAT_0247da80 = '\x01';
          }
          lVar8 = *(long *)PTR_DAT_0234bc90;
          goto LAB_01db9fd8;
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
              goto LAB_01db9f18;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar5,1);
LAB_01db9f18:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) != 0) {
          uVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
          FUN_01dbb700(uVar12,plVar9);
          FUN_01dab44c(uVar12,0);
          goto LAB_01db9fb4;
        }
      }
      lVar8 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01db9fa4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar5,0);
LAB_01db9fa4:
      (*(code *)*puVar10)(plVar9);
    }
  }
LAB_01db9fb4:
  if (DAT_0247da80 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    DAT_0247da80 = '\x01';
  }
  lVar8 = *(long *)puVar4;
LAB_01db9fd8:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  return;
}


