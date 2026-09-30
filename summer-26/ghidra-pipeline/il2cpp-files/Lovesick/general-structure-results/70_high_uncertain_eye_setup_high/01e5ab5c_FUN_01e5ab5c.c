/*
FUNCTION_NAME: FUN_01e5ab5c
ENTRY_POINT: 01e5ab5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01e5ab5c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
                    /* try { // try from 01e5ab70 to 01f5ab77 has its CatchHandler @ 01e5af78 */
  if ((DAT_0377fd62 & 1) == 0) {
                    /* try { // try from 01e5ab88 to 01f5ab8b has its CatchHandler @ 01e5af70 */
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<OVRAnchor,_Transform>_set_Item__
                      );
                    /* try { // try from 01e5ab9c to 01f5aba7 has its CatchHandler @ 01e5af74 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
                    /* try { // try from 01e5abac to 01f5abb3 has its CatchHandler @ 01e5af6c */
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
    thunk_FUN_00d48444(StringLiteral_12935);
    DAT_0377fd62 = 1;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
LAB_01e5ad24:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* try { // try from 01e5abdc to 01f5abe3 has its CatchHandler @ 01e5af8c */
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
      if (lVar3 == 0) goto LAB_01e5ad24;
      FUN_01743c34(lVar3,0);
      *(long *)(lVar7 + 0x20) = lVar3;
    }
    puVar1 = StringLiteral_12935;
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0160c430(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_12935,0);
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar2 = FUN_016047a8(lVar7,0x7c,0);
    if (iVar2 != -1) {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160cfc4(*(long *)(param_1 + 0x38),0,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                   ,0);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0160c430(*(long *)(param_1 + 0x38),*(undefined8 *)puVar1,0);
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x20);
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor,_Transform>_set_Item__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01e5bb94(uVar5);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_02021868(lVar7,uVar5,0,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar6 + 0x308))(plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x310));
  }
  return;
}


