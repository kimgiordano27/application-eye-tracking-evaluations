/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04e224e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_NumberOfDisplayStrings
               (ushort *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  uVar2 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x2c0));
  if ((8 < *(uint *)(unaff_x19 + 0x18)) &&
     (*(undefined8 *)(unaff_x19 + 0x60) = uVar2, *(uint *)(unaff_x19 + 0x18) != 9)) {
    *(undefined8 *)(unaff_x19 + 0x68) = *unaff_x24;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    uVar2 = FUN_0592cd7c(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c8));
    if ((10 < *(uint *)(unaff_x19 + 0x18)) &&
       (*(undefined8 *)(unaff_x19 + 0x70) = uVar2, puVar1 = PTR_DAT_070c1958,
       *(uint *)(unaff_x19 + 0x18) != 0xb)) {
      *(undefined8 *)(unaff_x19 + 0x78) = *unaff_x24;
      if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      uVar2 = FUN_058a4c0c(unaff_x21 + 0x2c,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2d0));
      if ((0xc < *(uint *)(unaff_x19 + 0x18)) &&
         (*(undefined8 *)(unaff_x19 + 0x80) = uVar2, *(uint *)(unaff_x19 + 0x18) != 0xd)) {
        *(undefined8 *)(unaff_x19 + 0x88) = *unaff_x24;
        lVar3 = *unaff_x22;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070f5978) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_04e22870;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08();
LAB_04e22870:
        uVar2 = (*(code *)*puVar4)();
        if (0xe < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
          FUN_057bfff0();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


