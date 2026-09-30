/*
FUNCTION_NAME: OVRPlugin.OVRP_1_10_0$$.cctor
ENTRY_POINT: 03399074
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_10_0___cctor(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  
  puVar1 = PTR_DAT_0422fc38;
  if (param_1 == 0) {
    lVar5 = FUN_033b087c();
    if (lVar5 != 0) {
      if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_033b8664(lVar5,0);
      *unaff_x21 = uVar6;
    }
    lVar5 = FUN_033b087c();
    if (lVar5 == 0) {
      FUN_0335cd70();
LAB_033991ac:
      uVar6 = 0;
    }
    else {
      lVar5 = FUN_033b9c48(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0335cd70(lVar5,0);
      uVar6 = FUN_03397f9c();
      *unaff_x22 = uVar6;
      FUN_0335c934();
      uVar6 = 1;
    }
    return uVar6;
  }
  do {
    FUN_0335cd70();
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 == 4) {
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      uVar4 = thunk_FUN_03152714(plVar3,*unaff_x25,0);
      if ((uVar4 & 1) != 0) goto LAB_033991ac;
    }
    FUN_0335cd70();
    FUN_0335c934();
  } while( true );
}


