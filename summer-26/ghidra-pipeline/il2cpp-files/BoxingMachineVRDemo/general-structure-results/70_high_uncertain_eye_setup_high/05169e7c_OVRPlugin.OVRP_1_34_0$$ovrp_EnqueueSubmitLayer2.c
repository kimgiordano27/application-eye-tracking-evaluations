/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 05169e7c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(void)

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
  
  puVar1 = PTR_DAT_067823f0;
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar3 = FUN_05167dbc();
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
                goto LAB_05169f50;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05169f50:
          (*(code *)*puVar4)();
          if (unaff_x20 != (long *)0x0) {
            lVar3 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                  goto LAB_05169fb8;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05169fb8:
            (*(code *)*puVar4)();
            return;
          }
        }
        goto LAB_0516a078;
      }
      if (uVar2 == 0xb) {
        return;
      }
      if (uVar2 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_0516a078;
        goto LAB_0516a008;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_05167054(in_stack_00000000);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_0516a008:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_0516a078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


