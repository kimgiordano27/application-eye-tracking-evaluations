/*
FUNCTION_NAME: UniJSON.JsonFormatter$$EndMap
ENTRY_POINT: 02f44cd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f44f38) */
/* WARNING: Removing unreachable block (ram,0x02f45200) */

long UniJSON_JsonFormatter__EndMap(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  uVar6 = (**(code **)(param_1 + 0xb98))();
  puVar3 = PTR_DAT_03cfe690;
  lVar13 = unaff_x19;
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)PTR_DAT_03cfe690;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar3;
    }
    plVar12 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x18);
    thunk_FUN_01a4b338();
    if ((plVar12 != (long *)0x0) &&
       (lVar7 = (**(code **)(*plVar12 + 0x308))(plVar12), puVar3 = PTR_DAT_03cd85f0, lVar7 != 0)) {
      uVar14 = *(undefined8 *)PTR_DAT_03cd85f0;
      plVar12 = (long *)thunk_FUN_01a89d6c(lVar7,uVar14);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar7,uVar14);
      }
      in_stack_00000008._4_1_ = '\0';
      FUN_027e0bd8(plVar12,(long)&stack0x00000008 + 4,0);
      lVar7 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03ccbd08) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02f44db8;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03ccbd08,1);
LAB_02f44db8:
      iVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      puVar4 = PTR_DAT_03cf21b8;
      lVar7 = unaff_x19;
      while (lVar2 = lVar7, iVar5 = iVar5 + -1, -1 < iVar5) {
        lVar10 = *plVar12;
        lVar7 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02f44e24;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar12,lVar7,0);
LAB_02f44e24:
        plVar9 = (long *)(*(code *)*puVar8)(plVar12,iVar5,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *plVar9;
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        lVar7 = (**(code **)(lVar7 + 0x198))(plVar9,*(undefined8 *)(lVar7 + 0x1a0));
        if (lVar7 == 0) {
          lVar10 = *plVar12;
          lVar7 = *(long *)puVar3;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 10) * 0x10 + 0x138);
                goto LAB_02f44ee8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar12,lVar7,10);
LAB_02f44ee8:
          (*(code *)*puVar8)(plVar12,iVar5,puVar8[1]);
          lVar7 = lVar2;
        }
        else {
          uVar6 = (**(code **)(*unaff_x20 + 0xb98))();
          if ((uVar6 & 1) == 0) {
            lVar7 = lVar2;
          }
        }
      }
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar12,0);
      }
      if (lVar2 != unaff_x19) {
        return lVar2;
      }
    }
    puVar3 = PTR_DAT_03d229e0;
    plVar12 = (long *)thunk_FUN_01a89d6c();
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f44fac;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar3,0);
LAB_02f44fac:
      plVar9 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d229e8) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_02f45018;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03d229e8,1);
LAB_02f45018:
        uVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar6 & 1) != 0) {
          uVar14 = *(undefined8 *)PTR_DAT_03d21130;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_0277b678(uVar14,0);
          lVar7 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d239e8) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02f450a8;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03d239e8,0);
LAB_02f450a8:
          uVar14 = (*(code *)*puVar8)(plVar9,uVar14,puVar8[1]);
          puVar3 = PTR_DAT_03d21138;
          plVar9 = (long *)thunk_FUN_01a89d6c(uVar14,*(undefined8 *)PTR_DAT_03d21138);
          if (plVar9 != (long *)0x0) {
            lVar7 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_02f45120;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar3,1);
LAB_02f45120:
            lVar7 = (*(code *)*puVar8)(plVar9,plVar12,puVar8[1]);
            if ((lVar7 != 0) &&
               (uVar6 = (**(code **)(*unaff_x20 + 0xb98))(), lVar13 = lVar7, (uVar6 & 1) == 0)) {
              lVar13 = unaff_x19;
            }
          }
        }
      }
    }
  }
  return lVar13;
}


