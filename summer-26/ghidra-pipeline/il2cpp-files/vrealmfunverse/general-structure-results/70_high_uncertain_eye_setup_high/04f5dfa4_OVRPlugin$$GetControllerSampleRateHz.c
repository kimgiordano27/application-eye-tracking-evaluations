/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 04f5dfa4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetControllerSampleRateHz(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02b3c81c(System_Runtime_Serialization_IObjectReference_var);
  FUN_02b3c81c(UnityEngine_Playables_INotification_var);
  *(undefined1 *)(unaff_x21 + 0xac1) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    if (unaff_x20 == (long *)0x0) {
LAB_04f5e1ac:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)UnityEngine_Playables_INotification_var) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04f5e034;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f5e034:
    lVar3 = (*(code *)*puVar2)();
    uVar5 = FUN_04f5de20();
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var)
          {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_04f5e0b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f5e0b4:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (lVar3 == 0) goto LAB_04f5e1ac;
      uVar1 = FUN_04f7e8fc(lVar3,&stack0x00000020,0);
      uVar1 = uVar1 & 1;
    }
    uVar5 = FUN_04f5ded0();
    uVar7 = uVar1;
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var)
          {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_04f5e154;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f5e154:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (lVar3 == 0) goto LAB_04f5e1ac;
      uVar5 = FUN_04f7ec04(lVar3,&stack0x00000020,0);
      uVar7 = uVar1 | 2;
      if ((uVar5 & 1) == 0) {
        uVar7 = uVar1;
      }
    }
  }
  return uVar7;
}


