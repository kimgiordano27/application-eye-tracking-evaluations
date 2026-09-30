/*
FUNCTION_NAME: UniJSON.JsonFormatter$$Key
ENTRY_POINT: 02f44e20
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

long UniJSON_JsonFormatter__Key(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
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
  
code_r0x02f44e20:
  puVar5 = (undefined8 *)(param_1 + 0x138);
  lVar8 = unaff_x22;
  do {
    plVar3 = (long *)(*(code *)*puVar5)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar3;
    bVar1 = *(byte *)(*unaff_x27 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    unaff_x22 = (**(code **)(lVar7 + 0x198))(plVar3,*(undefined8 *)(lVar7 + 0x1a0));
    if (unaff_x22 == 0) {
      lVar7 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
            goto LAB_02f44ee8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec();
LAB_02f44ee8:
      (*(code *)*puVar5)();
      unaff_x22 = lVar8;
    }
    else {
      uVar4 = (**(code **)(*unaff_x20 + 0xb98))();
      if ((uVar4 & 1) == 0) {
        unaff_x22 = lVar8;
      }
    }
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
      lVar8 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_02f44f90;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          param_1 = param_1 + (long)*piVar9 * 0x10;
          goto code_r0x02f44e20;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec();
    lVar8 = unaff_x22;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f44fac;
    }
  }
LAB_02f44f90:
  puVar5 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar2,0);
LAB_02f44fac:
  plVar6 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
  lVar8 = unaff_x19;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d229e8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02f45018;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03d229e8,1);
LAB_02f45018:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_03d21130;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0277b678(uVar10,0);
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d239e8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02f450a8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03d239e8,0);
LAB_02f450a8:
      uVar10 = (*(code *)*puVar5)(plVar6,uVar10,puVar5[1]);
      puVar2 = PTR_DAT_03d21138;
      plVar6 = (long *)thunk_FUN_01a89d6c(uVar10,*(undefined8 *)PTR_DAT_03d21138);
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_02f45120;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar2,1);
LAB_02f45120:
        lVar7 = (*(code *)*puVar5)(plVar6,plVar3,puVar5[1]);
        if ((lVar7 != 0) &&
           (uVar4 = (**(code **)(*unaff_x20 + 0xb98))(), lVar8 = lVar7, (uVar4 & 1) == 0)) {
          lVar8 = unaff_x19;
        }
      }
    }
  }
  return lVar8;
}


