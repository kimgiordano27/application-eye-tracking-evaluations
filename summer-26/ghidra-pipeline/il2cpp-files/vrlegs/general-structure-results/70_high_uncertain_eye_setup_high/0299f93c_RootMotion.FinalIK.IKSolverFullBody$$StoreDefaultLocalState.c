/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$StoreDefaultLocalState
ENTRY_POINT: 0299f93c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

undefined8 RootMotion_FinalIK_IKSolverFullBody__StoreDefaultLocalState(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  plVar5 = *(long **)(unaff_x21 + 0x48);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar6 = *(undefined8 *)PTR_DAT_03d08038;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03cca060) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0299fc08;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cca060,0);
LAB_0299fc08:
  (*(code *)*puVar1)(plVar5,2,uVar6,puVar1[1]);
  if (cStack0000000000000028 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return 0;
}


