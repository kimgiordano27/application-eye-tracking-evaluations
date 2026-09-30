/*
FUNCTION_NAME: FUN_0748249c
ENTRY_POINT: 0748249c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0748249c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_07ef3eaf & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
    ;
    DAT_07ef3eaf = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079f7680);
    uVar2 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    FUN_05e177c8(uVar2,uVar3,0);
    uVar3 = thunk_FUN_036aa1c8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar2,uVar3);
  }
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_07482530;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_0367cd30(plVar7,*(long *)
                                Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__
                        ,0);
LAB_07482530:
  (*(code *)*puVar1)(plVar7,0,puVar1[1]);
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_036b7ad0((long *)(param_1 + 0x10),0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_074825cc();
    return;
  }
  return;
}


