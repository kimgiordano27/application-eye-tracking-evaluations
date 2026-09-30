/*
FUNCTION_NAME: FUN_01ff7458
ENTRY_POINT: 01ff7458
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_01ff7458(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 long param_6)

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
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar1 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
  fVar14 = param_2;
  fVar15 = param_3;
  fVar16 = param_4;
  if ((DAT_0482eefa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>_GetValueOrDefault__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_System_Nullable<GeneralNameType>_get_Value__);
    thunk_FUN_01efb3a4(Method_System_Nullable<EntryType>_ToString__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    DAT_0482eefa = 1;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar8,0);
  if (lVar8 != 0) {
    plVar12 = (long *)(lVar8 + 0x20);
    *plVar12 = param_6;
    thunk_FUN_01f51358(plVar12,param_6);
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
      uVar10 = FUN_020f0888(param_1 - fVar13,param_2 - fVar14,param_3 - fVar15,param_4 - fVar16,
                            param_5,uVar10,uVar11,0);
      uVar10 = FUN_02316a58(uVar10,*(undefined8 *)puVar5);
      FUN_0242d544(uVar10,*plVar12,*(undefined8 *)puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


