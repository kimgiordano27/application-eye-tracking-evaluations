/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 01db9a9c
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

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  uint uVar15;
  int iVar16;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  long *plStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = *(undefined8 *)(param_1 + 8);
  plStack0000000000000010 = (long *)0x0;
  FUN_00ff7744();
  plVar7 = plStack0000000000000010;
  puVar4 = PTR_DAT_0234bc90;
  if (plStack0000000000000010 == (long *)0x0) {
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
    lVar12 = *unaff_x27;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar12 = *unaff_x27;
    }
    uVar11 = FUN_00fdc2fc(lVar12);
    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar7,uVar15,uVar11);
  }
  else {
    plVar8 = (long *)thunk_FUN_0103ffe0(plVar7,*(undefined8 *)PTR_DAT_0235a770);
    if (plVar8 == (long *)0x0) {
      lVar12 = *plVar7;
      bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790))
      {
        if (lVar12 == *(long *)PTR_DAT_0235a6b0) {
          in_stack_00000008._4_1_ = '\0';
          FUN_01da75d8(plVar7,(long)&stack0x00000008 + 4);
          if (in_stack_00000008._4_1_ != '\0') {
            FUN_0102a860(plVar7);
          }
          puVar6 = PTR_DAT_0235a788;
          puVar4 = PTR_DAT_0235a780;
          iVar1 = (int)plVar7[3];
          if (0 < iVar1) {
            iVar16 = 0;
            do {
              plVar8 = (long *)FUN_018985f8(plVar7,iVar16,*(undefined8 *)puVar4);
              if (plVar8 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if (((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
                    (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)
                    ) && ((*(byte *)((long)plVar8 + 0x1a) >> 3 & 1) == 0)) {
                  FUN_01898668(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  (**(code **)(*plVar8 + 0x178))(plVar8);
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar1 != iVar16);
            if (0 < iVar1) {
              iVar16 = 0;
              do {
                plVar8 = (long *)FUN_018985f8(plVar7,iVar16,*(undefined8 *)puVar4);
                if (plVar8 != (long *)0x0) {
                  FUN_01898668(plVar7,iVar16,0,*(undefined8 *)PTR_DAT_0235a6c0);
                  lVar12 = *plVar8;
                  plVar10 = plVar8;
                  if (lVar12 != *(long *)puVar3) {
                    plVar10 = (long *)0x0;
                  }
                  if (plVar10 == (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
                    if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_0235a790)) {
                      uVar11 = *(undefined8 *)puVar5;
                      plVar10 = (long *)thunk_FUN_0103ffe0(plVar8,uVar11);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(plVar8,uVar11);
                      }
                      if (uVar15 == 0) {
                        lVar12 = *plVar10;
                        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                              goto LAB_01db9e30;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_0103c348(plVar10,*(long *)puVar5,1);
LAB_01db9e30:
                        uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                        if ((uVar13 & 1) != 0) {
                          uVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
                          FUN_01dbb700(uVar11,plVar10);
                          FUN_01dab44c(uVar11,0);
                          goto LAB_01db9ecc;
                        }
                      }
                      lVar12 = *plVar10;
                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_01db9ebc;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0103c348(plVar10,*(long *)puVar5,0);
LAB_01db9ebc:
                      (*(code *)*puVar9)(plVar10);
                    }
                    else {
                      (**(code **)(lVar12 + 0x178))(plVar8);
                    }
                  }
                  else {
                    lVar12 = *unaff_x27;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01022c14();
                      lVar12 = *unaff_x27;
                    }
                    uVar11 = FUN_00fdc2fc(lVar12);
                    OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar10,uVar15,uVar11);
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
          lVar12 = *(long *)PTR_DAT_0234bc90;
          goto LAB_01db9fd8;
        }
      }
      else {
        (**(code **)(lVar12 + 0x178))(plVar7);
      }
    }
    else {
      if (uVar15 == 0) {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01db9f18;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0103c348(plVar8,*(long *)puVar5,1);
LAB_01db9f18:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) != 0) {
          uVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
          FUN_01dbb700(uVar11,plVar8);
          FUN_01dab44c(uVar11,0);
          goto LAB_01db9fb4;
        }
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01db9fa4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0103c348(plVar8,*(long *)puVar5,0);
LAB_01db9fa4:
      (*(code *)*puVar9)(plVar8);
    }
  }
LAB_01db9fb4:
  if (DAT_0247da80 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    DAT_0247da80 = '\x01';
  }
  lVar12 = *(long *)puVar4;
LAB_01db9fd8:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  return;
}


