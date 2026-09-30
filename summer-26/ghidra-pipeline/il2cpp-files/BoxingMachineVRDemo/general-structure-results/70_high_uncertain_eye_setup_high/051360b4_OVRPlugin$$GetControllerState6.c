/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 051360b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetControllerState6(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long *plVar7;
  long in_stack_00000028;
  
  uVar2 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if ((uVar2 & 1) == 0) {
    FUN_05136290();
    *(undefined8 *)(in_stack_00000028 + 0x30) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000028 + 0x30),0);
    uVar4 = 0;
  }
  else {
    plVar7 = *(long **)(in_stack_00000028 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676aab8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0513614c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0676aab8,0);
LAB_0513614c:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_06780c40 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06780c40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    if (plVar7[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0390bf6c();
    *(undefined8 *)(in_stack_00000028 + 0x20) = 0;
    *(undefined8 *)(in_stack_00000028 + 0x18) = 0;
    thunk_FUN_02dd37b4(in_stack_00000028 + 0x18,0);
    uVar4 = 1;
    *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
  }
  return uVar4;
}


