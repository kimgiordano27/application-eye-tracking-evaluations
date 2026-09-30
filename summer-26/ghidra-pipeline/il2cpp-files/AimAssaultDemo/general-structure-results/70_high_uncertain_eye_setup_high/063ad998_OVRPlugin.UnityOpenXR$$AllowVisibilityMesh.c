/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$AllowVisibilityMesh
ENTRY_POINT: 063ad998
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__AllowVisibilityMesh(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  FUN_05e3d544(param_2,*param_1);
  puVar1 = PTR_DAT_07db6c00;
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar3 = FUN_063ab8e0();
        if (lVar3 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar3 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x28) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_063ada74;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ada74:
          (*(code *)*puVar4)();
          if (unaff_x20 != (long *)0x0) {
            lVar3 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                  goto LAB_063adadc;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_0377596c();
LAB_063adadc:
            (*(code *)*puVar4)();
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


