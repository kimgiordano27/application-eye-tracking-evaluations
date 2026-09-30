/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 0511b4a0
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


/* WARNING: Removing unreachable block (ram,0x0511b5bc) */

void OVRManager__get_xrInstance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  FUN_050f136c();
  FUN_050f136c();
  puVar2 = PTR_DAT_0677eb48;
  puVar1 = PTR_DAT_0675f3d0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_0514183c();
  plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_050c472c(plVar4,uVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_050c47fc(plVar4);
  if (unaff_x20 != 0) {
    FUN_050c2e58(plVar4);
  }
  do {
    uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
  } while ((uVar5 & 1) != 0);
  lVar7 = *plVar4;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0511b590;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,0);
LAB_0511b590:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
  return;
}


