/*
FUNCTION_NAME: UniJSON.JsonFormatter$$Value
ENTRY_POINT: 02f4522c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f45278) */

long UniJSON_JsonFormatter__Value(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar1 = PTR_DAT_03d229e0;
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar8);
  }
  if ((unaff_x22 == unaff_x19) &&
     (plVar4 = (long *)thunk_FUN_01a89d6c(), unaff_x22 = unaff_x19, plVar4 != (long *)0x0)) {
    lVar8 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f44fac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_02f44fac:
    plVar3 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d229e8) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_02f45018;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03d229e8,1);
LAB_02f45018:
      uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03d21130;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_0277b678(uVar7,0);
        lVar8 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d239e8) {
              puVar2 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02f450a8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03d239e8,0);
LAB_02f450a8:
        uVar7 = (*(code *)*puVar2)(plVar3,uVar7,puVar2[1]);
        puVar1 = PTR_DAT_03d21138;
        plVar3 = (long *)thunk_FUN_01a89d6c(uVar7,*(undefined8 *)PTR_DAT_03d21138);
        if (plVar3 != (long *)0x0) {
          lVar8 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar2 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_02f45120;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,1);
LAB_02f45120:
          lVar8 = (*(code *)*puVar2)(plVar3,plVar4,puVar2[1]);
          if ((lVar8 != 0) &&
             (uVar5 = (**(code **)(*unaff_x20 + 0xb98))(), unaff_x22 = lVar8, (uVar5 & 1) == 0)) {
            unaff_x22 = unaff_x19;
          }
        }
      }
    }
  }
  return unaff_x22;
}


