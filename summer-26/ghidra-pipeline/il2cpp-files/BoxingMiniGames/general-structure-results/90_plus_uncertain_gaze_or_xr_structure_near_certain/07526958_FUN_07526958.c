/*
FUNCTION_NAME: FUN_07526958
ENTRY_POINT: 07526958
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_07526958(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  puVar8 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((DAT_07ef4c16 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a1db08);
    FUN_03642964(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
                );
    FUN_03642964(PTR_DAT_07a1db10);
    FUN_03642964(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
                );
    FUN_03642964(PTR_DAT_07a1db18);
    FUN_03642964(PTR_DAT_07a31228);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardTopCache_RowDto>_Dispose__
                );
    FUN_03642964(PTR_DAT_079fff00);
    FUN_03642964(PTR_DAT_07a1db30);
    FUN_03642964(PTR_DAT_079fff08);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_deltaPosition__)
    ;
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_deltaTime__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_isPrimary__);
    DAT_07ef4c16 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = FUN_03fc4dc8(*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07526e08;
  FUN_03db0700(lVar10,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),
               *(undefined8 *)
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
  FUN_03db0700(lVar10,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_079f4610;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07526e08;
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar11 = FUN_05e30794(uVar13,0,0);
  if ((uVar11 & 1) != 0) {
    uVar9 = FUN_03d9b58c(lVar10,*(undefined8 *)PTR_DAT_079fff00);
    FUN_074ef380(uVar9 & 1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_isPrimary__,0);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07526e08;
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar11 = FUN_05e30794(uVar13,0,0);
  if (((uVar11 & 1) == 0) &&
     (uVar11 = FUN_03d9b58c(lVar10,*(undefined8 *)PTR_DAT_079fff00), (uVar11 & 1) == 0)) {
    lVar12 = *(long *)(param_1 + 0x10);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) ||
       (FUN_0751f49c(*(long *)(lVar12 + 0x18),*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(lVar12 + 0x30),lVar10,*(undefined8 *)(param_1 + 0x28),0),
       lVar10 == 0)) goto LAB_07526e08;
    FUN_074ee0ac(*(int *)(lVar10 + 0x18) == 0,0);
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar12 == 0)) goto LAB_07526e08;
    FUN_0751e95c(lVar12,*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_03fc4850(lVar10,*(undefined8 *)puVar1);
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x30) == '\0') {
LAB_07526c3c:
    if (lVar10 == 0) goto LAB_07526e08;
  }
  else {
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_07526e08;
    if (*(char *)(*(long *)(lVar10 + 0x18) + 0x9a) == '\0') {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07526e08;
      FUN_071c0d50(*(long *)(param_1 + 0x20),1,0);
      lVar10 = *(long *)(param_1 + 0x10);
      goto LAB_07526c3c;
    }
  }
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_deltaTime__;
  if (*(long *)(lVar10 + 0x40) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = FUN_03fc4bc0(*(undefined8 *)puVar1);
  puVar7 = Method_System_Collections_Generic_List_Enumerator<LeaderboardTopCache_RowDto>_Dispose__;
  puVar6 = 
  Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__;
  puVar5 = 
  Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__;
  puVar4 = PTR_DAT_07a31228;
  puVar3 = PTR_DAT_07a1db10;
  puVar2 = PTR_DAT_07a1db08;
  puVar1 = PTR_DAT_079f4e28;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar12 != 0)) {
    FUN_0459fb44(&local_b0,lVar12,*(undefined8 *)PTR_DAT_07a1db30);
    local_70 = local_a0;
    puStack_78 = puStack_a8;
    local_80 = local_b0;
    local_b0 = 0;
    puStack_a8 = &local_80;
    while (uVar11 = FUN_05897b28(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar13 = FUN_071c0440(*(long *)(param_1 + 0x20),local_70,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_071c0684(uVar13,0,0);
      if ((uVar11 & 1) != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_0422b414(lVar10,uVar13,*(undefined8 *)puVar4);
      }
    }
    FUN_05897b24(&local_80,*(undefined8 *)puVar2);
    if (lVar10 != 0) {
      FUN_0422ad98(&local_98,lVar10,*(undefined8 *)puVar7);
      local_b0 = 0;
      puStack_a8 = &local_98;
      while( true ) {
        uVar11 = FUN_05897378(&local_98,*(undefined8 *)puVar6);
        if ((uVar11 & 1) == 0) {
          FUN_05897374(&local_98,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_03fc4628(lVar10,*(undefined8 *)
                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_deltaPosition__
                      );
          return;
        }
        if (*(long *)(param_1 + 0x10) == 0) break;
        lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(param_1 + 0x28),local_88,
                   *(undefined8 *)(lVar12 + 0x28));
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
LAB_07526e08:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


