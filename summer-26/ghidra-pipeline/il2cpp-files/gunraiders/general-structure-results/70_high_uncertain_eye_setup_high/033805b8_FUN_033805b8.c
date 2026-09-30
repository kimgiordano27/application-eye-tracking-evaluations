/*
FUNCTION_NAME: FUN_033805b8
ENTRY_POINT: 033805b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_033805b8(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  puVar1 = UnityEngine_Events_InvokableCall_TypeInfo;
  if ((DAT_04533601 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__)
    ;
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_Dispose__);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    DAT_04533601 = 1;
  }
  local_28 = (long *)0x0;
  FUN_0336c7fc(param_1,*(undefined8 *)puVar1);
  if (param_1 != (long *)0x0) {
    uVar2 = FUN_032eaf80(param_1,0);
    puVar1 = PTR_DAT_0422fb28;
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
      return uVar3;
    }
    uVar3 = *(undefined8 *)
             Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032e04b8(uVar3,0);
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    }
    uVar2 = OVRPlugin__GetTrackerPose(param_1,uVar3,&local_28);
    plVar4 = local_28;
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_Dispose__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar4 = (long *)FUN_032e04b8(uVar3,0);
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar2 & 1) != 0) {
          return 0;
        }
LAB_03380764:
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar3 = FUN_03295500(0);
        uVar5 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_MoveNext__
                                  );
        uVar3 = FUN_0336f2b8(uVar5,uVar3,param_1);
        thunk_FUN_01c273e8(PTR_DAT_0422f998);
        uVar5 = thunk_FUN_01c496e0();
        FUN_03308b88(uVar5,uVar3,0);
        uVar3 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_get_Current__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,uVar3);
      }
    }
    else if (local_28 != (long *)0x0) {
      uVar2 = (**(code **)(*local_28 + 0x3c8))(local_28,*(undefined8 *)(*local_28 + 0x3d0));
      if ((uVar2 & 1) != 0) goto LAB_03380764;
      lVar6 = *plVar4;
      lVar6 = (**(code **)(lVar6 + 0x458))(plVar4,*(undefined8 *)(lVar6 + 0x460));
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          return *(undefined8 *)(lVar6 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


