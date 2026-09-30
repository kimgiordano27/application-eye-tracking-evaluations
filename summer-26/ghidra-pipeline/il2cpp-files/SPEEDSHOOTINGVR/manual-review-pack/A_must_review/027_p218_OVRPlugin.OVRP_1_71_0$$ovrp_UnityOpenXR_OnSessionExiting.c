/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 01db9b18
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db9c18) */
/* WARNING: Removing unreachable block (ram,0x01dba028) */
/* WARNING: Removing unreachable block (ram,0x01db9c04) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  int unaff_w21;
  int iVar11;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  
  plVar4 = (long *)thunk_FUN_0103ffe0();
  if (plVar4 == (long *)0x0) {
    lVar8 = *unaff_x20;
    bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790)) {
      if (lVar8 == *(long *)PTR_DAT_0235a6b0) {
        FUN_01da75d8();
        puVar3 = PTR_DAT_0235a788;
        iVar1 = (int)unaff_x20[3];
        if (0 < iVar1) {
          iVar11 = 0;
          do {
            plVar4 = (long *)FUN_018985f8();
            if (plVar4 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
              if (((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
                  (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3))
                 && ((*(byte *)((long)plVar4 + 0x1a) >> 3 & 1) == 0)) {
                FUN_01898668();
                (**(code **)(*plVar4 + 0x178))(plVar4);
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar1 != iVar11);
          if (0 < iVar1) {
            iVar11 = 0;
            do {
              plVar4 = (long *)FUN_018985f8();
              if (plVar4 != (long *)0x0) {
                FUN_01898668();
                lVar8 = *plVar4;
                plVar6 = plVar4;
                if (lVar8 != *unaff_x29) {
                  plVar6 = (long *)0x0;
                }
                if (plVar6 == (long *)0x0) {
                  bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
                  if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)PTR_DAT_0235a790)) {
                    lVar8 = *unaff_x26;
                    plVar6 = (long *)thunk_FUN_0103ffe0(plVar4,lVar8);
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fdc8d0(plVar4,lVar8);
                    }
                    if (unaff_w21 == 0) {
                      lVar8 = *plVar6;
                      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *unaff_x26) {
                            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                            goto LAB_01db9e30;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_0103c348(plVar6,*unaff_x26,1);
LAB_01db9e30:
                      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                      if ((uVar9 & 1) != 0) {
                        uVar7 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
                        FUN_01dbb700(uVar7,plVar6);
                        FUN_01dab44c(uVar7,0);
                        goto LAB_01db9ecc;
                      }
                    }
                    lVar8 = *plVar6;
                    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar9 != 0) {
                      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *unaff_x26) {
                          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                          goto LAB_01db9ebc;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_0103c348(plVar6,*unaff_x26,0);
LAB_01db9ebc:
                    (*(code *)*puVar5)(plVar6);
                  }
                  else {
                    (**(code **)(lVar8 + 0x178))(plVar4);
                  }
                }
                else {
                  lVar8 = *unaff_x27;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_01022c14();
                    lVar8 = *unaff_x27;
                  }
                  uVar7 = FUN_00fdc2fc(lVar8);
                  OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar6,unaff_w21,uVar7);
                }
              }
LAB_01db9ecc:
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar1);
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
      (**(code **)(lVar8 + 0x178))();
    }
  }
  else {
    if (unaff_w21 == 0) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01db9f18;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348(plVar4,*unaff_x26,1);
LAB_01db9f18:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) != 0) {
        uVar7 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
        FUN_01dbb700(uVar7,plVar4);
        FUN_01dab44c(uVar7,0);
        goto LAB_01db9fb4;
      }
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01db9fa4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348(plVar4,*unaff_x26,0);
LAB_01db9fa4:
    (*(code *)*puVar5)(plVar4);
  }
LAB_01db9fb4:
  if (DAT_0247da80 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    DAT_0247da80 = '\x01';
  }
  lVar8 = *unaff_x23;
LAB_01db9fd8:
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  return;
}


