/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 063adbac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063adc40) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar7;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR_DAT_07db6c00;
  if (param_2 != 1) {
    FUN_05e3d544(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6f28);
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar4;
  __cxa_end_catch();
  FUN_05e3d544(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6f28);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar7);
  }
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar7 = FUN_063ab8e0();
        if (lVar7 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar7 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x28) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_063ada74;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ada74:
          (*(code *)*puVar3)();
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                  goto LAB_063adadc;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0377596c();
LAB_063adadc:
            (*(code *)*puVar3)();
            return;
          }
        }
        goto LAB_063adb9c;
      }
      if (uVar2 == 0xb) {
        return;
      }
      if (uVar2 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_063adb9c;
        goto LAB_063adb2c;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_063aab78(in_stack_00000000);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_063adb2c:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_063adb9c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


