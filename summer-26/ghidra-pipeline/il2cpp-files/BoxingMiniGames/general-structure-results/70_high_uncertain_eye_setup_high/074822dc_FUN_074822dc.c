/*
FUNCTION_NAME: FUN_074822dc
ENTRY_POINT: 074822dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_074822dc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined *puVar4;
  
  if ((DAT_07ef3eae & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
    ;
    DAT_07ef3eae = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_2 == 0) {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar2 = thunk_FUN_0367fe20();
      puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
    }
    else if (*(long *)(param_2 + 0x70) == 0) {
      if (param_3 != 0) {
        *(long *)(param_1 + 0x58) = param_2;
        thunk_FUN_036b7ad0((long *)(param_1 + 0x58),param_2);
        *(long *)(param_1 + 0x10) = param_3;
        thunk_FUN_036b7ad0((long *)(param_1 + 0x10),param_3);
        *(undefined8 *)(param_1 + 0x18) = param_4;
        thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),param_4);
        plVar8 = *(long **)(param_1 + 0x48);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__)
            {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_074823c0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_0367cd30(plVar8,*(long *)
                                      Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Value__
                              ,0);
LAB_074823c0:
                    /* WARNING: Could not recover jumptable at 0x074823d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar1)(plVar8,param_3,puVar1[1]);
        return;
      }
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar2 = thunk_FUN_0367fe20();
      puVar4 = Method_System_Collections_Generic_HashSet<Binding>_Clear__;
    }
    else {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar2 = thunk_FUN_0367fe20();
      puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
    }
    uVar3 = thunk_FUN_036aa1c8(puVar4);
    FUN_05d84c94(uVar2,uVar3,0);
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_079f7680);
    uVar2 = thunk_FUN_0367fe20();
    uVar3 = thunk_FUN_036aa1c8(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_05e177c8(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_036aa1c8(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


