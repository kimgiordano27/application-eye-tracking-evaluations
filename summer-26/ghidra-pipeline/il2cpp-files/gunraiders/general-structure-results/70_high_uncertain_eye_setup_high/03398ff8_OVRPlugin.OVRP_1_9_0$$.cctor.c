/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 03398ff8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_9_0___cctor(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_033b8664(param_2,0);
  lVar4 = FUN_033b9c48(param_2,0);
  if (lVar4 == 0) {
LAB_03399394:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_0335cd70(lVar4,0);
  FUN_0339ad34();
  puVar2 = Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__;
  lVar4 = FUN_033b087c();
  puVar1 = PTR_DAT_0422fc38;
  if (lVar4 != 0) {
    do {
      FUN_0335cd70();
      iVar3 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar3 == 4) {
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
        uVar6 = thunk_FUN_03152714(plVar5,*(undefined8 *)puVar2,0);
        if ((uVar6 & 1) != 0) goto LAB_033991ac;
      }
      FUN_0335cd70();
      FUN_0335c934();
    } while( true );
  }
  lVar4 = FUN_033b087c();
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_033b8664(lVar4,0);
    *unaff_x21 = uVar7;
  }
  lVar4 = FUN_033b087c();
  if (lVar4 == 0) {
    FUN_0335cd70();
LAB_033991ac:
    uVar7 = 0;
  }
  else {
    lVar4 = FUN_033b9c48(lVar4,0);
    if (lVar4 == 0) goto LAB_03399394;
    FUN_0335cd70(lVar4,0);
    uVar7 = FUN_03397f9c();
    *unaff_x22 = uVar7;
    FUN_0335c934();
    uVar7 = 1;
  }
  return uVar7;
}


