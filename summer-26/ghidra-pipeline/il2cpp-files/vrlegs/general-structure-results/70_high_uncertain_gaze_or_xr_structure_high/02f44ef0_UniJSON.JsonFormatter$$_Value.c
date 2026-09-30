/*
FUNCTION_NAME: UniJSON.JsonFormatter$$_Value
ENTRY_POINT: 02f44ef0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f45200) */
/* WARNING: Removing unreachable block (ram,0x02f44f38) */

long UniJSON_JsonFormatter___Value(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar10;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  do {
    (*param_1)();
    lVar6 = unaff_x22;
LAB_02f44ef8:
    unaff_x22 = lVar6;
    unaff_w23 = unaff_w23 + -1;
    if (unaff_w23 < 0) {
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      puVar2 = PTR_DAT_03d229e0;
      if (unaff_x22 != unaff_x19) {
        return unaff_x22;
      }
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) {
        return unaff_x19;
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02f44f90;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f44e24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_02f44e24:
    plVar3 = (long *)(*(code *)*puVar4)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar3;
    bVar1 = *(byte *)(*unaff_x27 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    lVar6 = (**(code **)(lVar6 + 0x198))(plVar3,*(undefined8 *)(lVar6 + 0x1a0));
    if (lVar6 != 0) {
      uVar8 = (**(code **)(*unaff_x20 + 0xb98))();
      if ((uVar8 & 1) == 0) {
        lVar6 = unaff_x22;
      }
      goto LAB_02f44ef8;
    }
    lVar6 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_02f44ee8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_02f44ee8:
    param_1 = (code *)*puVar4;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f44fac;
    }
  }
LAB_02f44f90:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar2,0);
LAB_02f44fac:
  plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  lVar6 = unaff_x19;
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d229e8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02f45018;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03d229e8,1);
LAB_02f45018:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_03d21130;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0277b678(uVar10,0);
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d239e8) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02f450a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03d239e8,0);
LAB_02f450a8:
      uVar10 = (*(code *)*puVar4)(plVar5,uVar10,puVar4[1]);
      puVar2 = PTR_DAT_03d21138;
      plVar5 = (long *)thunk_FUN_01a89d6c(uVar10,*(undefined8 *)PTR_DAT_03d21138);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_02f45120;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar2,1);
LAB_02f45120:
        lVar7 = (*(code *)*puVar4)(plVar5,plVar3,puVar4[1]);
        if ((lVar7 != 0) &&
           (uVar8 = (**(code **)(*unaff_x20 + 0xb98))(), lVar6 = lVar7, (uVar8 & 1) == 0)) {
          lVar6 = unaff_x19;
        }
      }
    }
  }
  return lVar6;
}


