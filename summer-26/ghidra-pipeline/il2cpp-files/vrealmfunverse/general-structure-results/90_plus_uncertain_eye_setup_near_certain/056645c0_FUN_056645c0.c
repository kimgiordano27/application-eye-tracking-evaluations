/*
FUNCTION_NAME: FUN_056645c0
ENTRY_POINT: 056645c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_056645c0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_066d1d38 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_IDictionary<string,_float>_var);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
                );
    DAT_066d1d38 = 1;
  }
  if ((*param_1 == 0) || (plVar2 = *(long **)(*param_1 + 0x28), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*plVar2 ==
      *(long *)
       Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
     ) {
    lVar5 = FUN_056576bc(plVar2,param_1[1],param_1[2]);
    return lVar5;
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))();
  if (plVar2 == (long *)0x0) {
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar4,2);
    lVar5 = *param_1;
    FUN_0275e13c(lVar5);
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar8);
    plVar2 = (long *)thunk_FUN_02b4c898(uVar8,0);
    FUN_0275e13c();
    uVar8 = (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar8);
    FUN_0275a434(uVar4,0,uVar8);
    puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    uVar8 = thunk_FUN_02ba3594(
                              Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                              );
    FUN_0275a400(uVar4,uVar8);
    uVar8 = thunk_FUN_02ba3594(puVar1);
    FUN_0275a434(uVar4,1,uVar8);
    uVar8 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                              );
    uVar4 = FUN_04bec334(uVar8,uVar4,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    FUN_04d7b3f4(uVar8,uVar4,0);
    uVar4 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,uVar4);
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)System_Collections_Generic_IDictionary<string,_float>_var) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_0566469c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02b7654c(plVar2,*(long *)System_Collections_Generic_IDictionary<string,_float>_var,4)
  ;
LAB_0566469c:
  lVar5 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
  if (lVar5 == 0) {
    lVar5 = param_1[2];
  }
  return lVar5;
}


