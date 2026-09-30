/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 05bd4480
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__ShareSpaces(long *param_1)

{
  bool in_CY;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  
  if (in_CY) {
    plVar7 = unaff_x20;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x11 * 8 + -8) != in_x9) {
      plVar7 = (long *)0x0;
    }
  }
  else {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar1 = FUN_069d8404(plVar7,0,0);
  uVar4 = 0;
  if ((uVar1 & 1) != 0) {
OVRPlugin__DiscoverSpaces:
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    return;
  }
  if (plVar7 != (long *)0x0) {
    uVar1 = FUN_03a2e25c(plVar7,unaff_x19 + 0x48,*(undefined8 *)PTR_DAT_07116828);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      lVar8 = *(long *)(unaff_x19 + 0x60);
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07116390) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05bd4544;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05bd4544:
      uVar3 = (*(code *)*puVar2)();
      if (lVar8 != 0) {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
        *(undefined8 *)(lVar8 + 0x10) = uVar3;
        goto OVRPlugin__DiscoverSpaces;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


