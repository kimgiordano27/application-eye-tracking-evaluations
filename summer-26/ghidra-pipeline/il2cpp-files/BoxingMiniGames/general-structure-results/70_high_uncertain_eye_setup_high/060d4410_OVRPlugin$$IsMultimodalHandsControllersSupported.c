/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 060d4410
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long lVar7;
  
  plVar1 = unaff_x20;
  if (*(long *)(in_x10 + -8) != in_x9) {
    plVar1 = (long *)0x0;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_071c24dc(plVar1,0,0);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
LAB_060d44f0:
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    thunk_FUN_036b7ad0(unaff_x19 + 0x48);
    return;
  }
  if (plVar1 != (long *)0x0) {
    uVar2 = FUN_03c37834(plVar1,unaff_x19 + 0x48,*(undefined8 *)PTR_DAT_07a24600);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      lVar7 = *(long *)(unaff_x19 + 0x60);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a23e28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_060d44cc;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060d44cc:
      uVar4 = (*(code *)*puVar3)();
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0x10);
        *puVar3 = uVar4;
        thunk_FUN_036b7ad0(puVar3,uVar4);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
        goto LAB_060d44f0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


