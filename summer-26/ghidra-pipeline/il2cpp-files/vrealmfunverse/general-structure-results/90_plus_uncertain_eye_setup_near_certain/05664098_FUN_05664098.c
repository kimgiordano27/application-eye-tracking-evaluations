/*
FUNCTION_NAME: FUN_05664098
ENTRY_POINT: 05664098
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


void FUN_05664098(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  
  if ((DAT_066d1d36 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_IDictionary<string,_float>_var);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
                );
    DAT_066d1d36 = 1;
  }
                    /* try { // try from 056640d0 to 057640f7 has its CatchHandler @ 056643b4 */
  if ((*param_1 == 0) || (plVar1 = *(long **)(*param_1 + 0x28), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *plVar1;
  if (lVar5 == *(long *)
                Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
     ) {
    FUN_05657728(plVar1,param_1[1]);
    return;
  }
  plVar1 = (long *)(**(code **)(lVar5 + 0x1c8))
                             (plVar1,param_1[1],param_1[2],*(undefined8 *)(lVar5 + 0x1d0));
  if (plVar1 == (long *)0x0) {
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
    lVar5 = *param_1;
    FUN_0275e13c(lVar5);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar3);
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
    FUN_0275e13c();
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  }
  else {
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_IDictionary<string,_float>_var) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_05664174;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02b7654c(plVar1,*(long *)System_Collections_Generic_IDictionary<string,_float>_var,
                          2);
LAB_05664174:
    lVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (lVar5 != 0) {
      return;
    }
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar3,2);
    lVar5 = *param_1;
    FUN_0275e13c(lVar5);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    FUN_0275e13c(uVar3);
    plVar1 = (long *)thunk_FUN_02b4c898(uVar3,0);
    FUN_0275e13c();
    uVar3 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar3);
    FUN_0275a434(uVar4,0,uVar3);
    puVar8 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
  }
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a400(uVar4,uVar3);
  uVar3 = thunk_FUN_02ba3594(puVar8);
  FUN_0275a434(uVar4,1,uVar3);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar3 = FUN_04bec334(uVar3,uVar4,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar4 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar4,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar3);
}


