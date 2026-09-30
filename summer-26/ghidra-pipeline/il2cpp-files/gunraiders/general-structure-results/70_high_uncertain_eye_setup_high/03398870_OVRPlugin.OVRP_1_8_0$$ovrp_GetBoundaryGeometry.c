/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 03398870
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_032e04b8();
  uVar4 = FUN_032e935c();
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_0339896c;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_0339896c;
    if (*unaff_x19 == *(long *)PTR_DAT_0422fc38) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_033594d8();
      puVar3 = Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar4 = FUN_03375048();
      if ((uVar4 & 1) != 0) {
        uVar2 = *(undefined4 *)(unaff_x20 + 0x48);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03373a90(in_stack_00000008,uVar2,0);
        uVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422f960);
        return uVar5;
      }
    }
  }
  if (*unaff_x19 == *(long *)PTR_DAT_04230358) {
    puVar6 = (undefined8 *)thunk_FUN_01c49834();
    uVar5 = *puVar6;
    uVar1 = puVar6[1];
    uVar7 = *(undefined8 *)(unaff_x23 + 0x18);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                        );
    }
    uVar5 = FUN_0336f360(uVar5,uVar1,uVar7,0);
    return uVar5;
  }
LAB_0339896c:
  if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_0324f628();
  return uVar5;
}


