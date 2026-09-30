/*
FUNCTION_NAME: FUN_033807d8
ENTRY_POINT: 033807d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_033807d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *local_48;
  
  puVar5 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_Dispose__;
  puVar4 = Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo;
  puVar2 = PTR_DAT_0422fb28;
  if ((DAT_04533602 & 1) == 0) {
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo);
    FUN_01c5d288(MQTTConnecter_<>c__DisplayClass21_0_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_Dispose__);
    DAT_04533602 = 1;
  }
  puVar3 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  local_48 = (long *)0x0;
  FUN_0336c7fc(param_1,*(undefined8 *)puVar5);
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032e04b8(uVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar3);
  }
  uVar6 = OVRPlugin__GetTrackerPose(param_1,uVar10,&local_48);
  plVar7 = local_48;
  if ((uVar6 & 1) == 0) {
    uVar10 = *(undefined8 *)MQTTConnecter_<>c__DisplayClass21_0_TypeInfo;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar7 = (long *)FUN_032e04b8(uVar10,0);
    if (plVar7 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x2a0));
      if ((uVar6 & 1) != 0) {
        uVar10 = 0;
        *param_2 = 0;
LAB_03380968:
        *param_3 = uVar10;
        return;
      }
LAB_0338098c:
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar10 = FUN_03295500(0);
      uVar8 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_MoveNext__
                                );
      uVar10 = FUN_0336f2b8(uVar8,uVar10,param_1);
      thunk_FUN_01c273e8(PTR_DAT_0422f998);
      uVar8 = thunk_FUN_01c496e0();
      FUN_03308b88(uVar8,uVar10,0);
      uVar10 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_get_Current__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,uVar10);
    }
  }
  else if (local_48 != (long *)0x0) {
    uVar6 = (**(code **)(*local_48 + 0x3c8))(local_48,*(undefined8 *)(*local_48 + 0x3d0));
    if ((uVar6 & 1) != 0) goto LAB_0338098c;
    lVar9 = *plVar7;
    lVar9 = (**(code **)(lVar9 + 0x458))(plVar7,*(undefined8 *)(lVar9 + 0x460));
    if (lVar9 != 0) {
      iVar1 = *(int *)(lVar9 + 0x18);
      if ((iVar1 == 0) || (*param_2 = *(undefined8 *)(lVar9 + 0x20), iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar10 = *(undefined8 *)(lVar9 + 0x28);
      goto LAB_03380968;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


