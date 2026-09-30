/*
FUNCTION_NAME: DG.Tweening.Sequence$$.ctor
ENTRY_POINT: 01ff74b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void DG_Tweening_Sequence___ctor(undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long *plVar12;
  undefined8 *unaff_x20;
  long unaff_x21;
  float fVar13;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack000000000000000c;
  
  thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>_GetValueOrDefault__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
  thunk_FUN_01efb3a4(Method_System_Nullable<GeneralNameType>_get_Value__);
  thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>_ToString__);
                    /* try { // try from 01ff74ec to 020f7583 has its CatchHandler @ 01ff7728 */
  thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
  thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
  thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
  *(undefined1 *)(unaff_x19 + 0xefa) = 1;
  lVar8 = thunk_FUN_01f117cc(*unaff_x20);
  FUN_035ac8e8(lVar8,0);
  if (lVar8 != 0) {
    plVar12 = (long *)(lVar8 + 0x20);
    *plVar12 = unaff_x21;
    fStack000000000000000c = unaff_s8;
    thunk_FUN_01f51358(plVar12);
    puVar7 = Method_System_Nullable<OVRPlugin_Posef>_get_Value__;
    puVar6 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
    puVar5 = Method_System_Nullable<GeneralNameType>_get_Value__;
    puVar4 = Method_System_Nullable<EntryType>_ToString__;
    puVar3 = Method_System_Nullable<EntryType>_GetValueOrDefault__;
    puVar2 = Method_System_Nullable<EntryType>__ctor__;
    puVar1 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
    plVar9 = (long *)*plVar12;
    if (plVar9 != (long *)0x0) {
      fVar13 = (float)(**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02a71a98(uVar10,lVar8,*(undefined8 *)puVar6,0);
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_02a729b4(uVar11,lVar8,*(undefined8 *)puVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_020f0888(fStack000000000000000c - fVar13,unaff_s10 - param_2,unaff_s11 - param_3,
                            unaff_s12 - param_4,uVar10,uVar11,0);
      uVar10 = FUN_02316a58(uVar10,*(undefined8 *)puVar5);
      FUN_0242d544(uVar10,*plVar12,*(undefined8 *)puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


