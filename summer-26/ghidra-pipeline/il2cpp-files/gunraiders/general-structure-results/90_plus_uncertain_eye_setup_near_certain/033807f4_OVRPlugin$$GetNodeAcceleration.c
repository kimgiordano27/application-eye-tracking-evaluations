/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 033807f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__GetNodeAcceleration(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x24;
  undefined8 *puVar10;
  long unaff_x25;
  long *in_stack_00000008;
  
  puVar4 = Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo;
  puVar2 = PTR_DAT_0422fb28;
  puVar10 = *(undefined8 **)(unaff_x24 + 0x4b8);
  if ((*(byte *)(unaff_x25 + 0x602) & 1) == 0) {
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo);
    FUN_01c5d288(MQTTConnecter_<>c__DisplayClass21_0_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_Dispose__);
    *(undefined1 *)(unaff_x25 + 0x602) = 1;
  }
  puVar3 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  in_stack_00000008 = (long *)0x0;
  FUN_0336c7fc(param_1,*puVar10);
  uVar9 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar3);
  }
  uVar5 = OVRPlugin__GetTrackerPose(param_1,uVar9,&stack0x00000008);
  plVar6 = in_stack_00000008;
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)MQTTConnecter_<>c__DisplayClass21_0_TypeInfo;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar6 = (long *)FUN_032e04b8(uVar9,0);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x2a0));
      if ((uVar5 & 1) != 0) {
        uVar9 = 0;
        *param_2 = 0;
LAB_03380968:
        *param_3 = uVar9;
        return;
      }
LAB_0338098c:
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar9 = FUN_03295500(0);
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_MoveNext__
                                );
      uVar9 = FUN_0336f2b8(uVar7,uVar9,param_1);
      thunk_FUN_01c273e8(PTR_DAT_0422f998);
      uVar7 = thunk_FUN_01c496e0();
      FUN_03308b88(uVar7,uVar9,0);
      uVar9 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_Object>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar9);
    }
  }
  else if (in_stack_00000008 != (long *)0x0) {
    uVar5 = (**(code **)(*in_stack_00000008 + 0x3c8))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x3d0));
    if ((uVar5 & 1) != 0) goto LAB_0338098c;
    lVar8 = *plVar6;
    lVar8 = (**(code **)(lVar8 + 0x458))(plVar6,*(undefined8 *)(lVar8 + 0x460));
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if ((iVar1 == 0) || (*param_2 = *(undefined8 *)(lVar8 + 0x20), iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      goto LAB_03380968;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


