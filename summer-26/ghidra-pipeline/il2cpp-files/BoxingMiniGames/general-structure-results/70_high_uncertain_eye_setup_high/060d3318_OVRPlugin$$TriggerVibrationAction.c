/*
FUNCTION_NAME: OVRPlugin$$TriggerVibrationAction
ENTRY_POINT: 060d3318
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TriggerVibrationAction(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0367cd30();
      goto LAB_060d3348;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xb) * 0x10 + 0x138);
LAB_060d3348:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x18);
  uVar2 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_0554a400();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_060d33d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x23,0xd);
LAB_060d33d4:
    (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
    plVar6 = *(long **)(unaff_x19 + 0x18);
    uVar2 = thunk_FUN_0367fe20(*unaff_x22);
    FUN_0554a400();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xf) * 0x10 + 0x138);
            goto LAB_060d3458;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*unaff_x23,0xf);
LAB_060d3458:
                    /* WARNING: Could not recover jumptable at 0x060d3474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


