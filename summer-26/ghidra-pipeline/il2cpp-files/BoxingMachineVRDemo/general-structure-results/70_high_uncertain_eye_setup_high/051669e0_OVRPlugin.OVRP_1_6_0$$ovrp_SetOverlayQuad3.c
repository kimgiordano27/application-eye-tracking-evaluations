/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 051669e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05166adc;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xc) * 0x10 + 0x138);
LAB_05166adc:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_05166b48;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_067823f0,9);
LAB_05166b48:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782478))
      {
        FUN_055327c0(plVar3,0);
        return plVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


