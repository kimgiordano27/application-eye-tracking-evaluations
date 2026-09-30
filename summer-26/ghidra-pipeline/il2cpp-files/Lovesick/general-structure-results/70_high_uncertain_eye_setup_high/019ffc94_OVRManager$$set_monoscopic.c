/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 019ffc94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_monoscopic(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x23 + 0xfd8);
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_019ffce0;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_019ffce0:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x20);
  lVar2 = thunk_FUN_00d62348(*puVar7);
  if ((lVar2 == 0) || (FUN_016f27fc(), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar7 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
        goto LAB_019ffd70;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x22,0xd);
LAB_019ffd70:
  (*(code *)*puVar7)(plVar6,lVar2,puVar7[1]);
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  return;
}


