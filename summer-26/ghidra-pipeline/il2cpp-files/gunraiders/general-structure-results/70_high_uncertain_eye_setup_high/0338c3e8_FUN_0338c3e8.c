/*
FUNCTION_NAME: FUN_0338c3e8
ENTRY_POINT: 0338c3e8
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


undefined8 FUN_0338c3e8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_38;
  undefined *puVar7;
  
  if ((DAT_0453365c & 1) == 0) {
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<MouseCaptureEvent>_SetCreateFunction__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_0453365c = 1;
  }
  local_38 = (long *)0x0;
  iVar2 = FUN_0337f054(param_2,0);
  puVar7 = PTR_DAT_0422fb28;
  if ((iVar2 != 0x10) && (iVar2 != 4)) {
    return 0;
  }
  uVar8 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar8 = FUN_032e04b8(uVar8,0);
  if (param_2 == (long *)0x0) goto LAB_0338c66c;
  uVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar8,0,*(undefined8 *)(*param_2 + 0x200));
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_0337f070(param_2,1,0);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar8 = FUN_03295500(0);
    FUN_019b2708(param_2);
    uVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__)
    ;
    FUN_019b5f60();
    uVar10 = FUN_0338b00c(uVar10,0);
    FUN_019b2708(param_2);
    uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar7 = Method_UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeId__;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_0337f350(param_2,0);
    uVar10 = *(undefined8 *)Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    uVar3 = OVRPlugin__GetTrackerPose(uVar8,uVar10,&local_38,0);
    if ((uVar3 & 1) != 0) {
      if ((local_38 == (long *)0x0) ||
         (lVar4 = (**(code **)(*local_38 + 0x458))(local_38,*(undefined8 *)(*local_38 + 0x460)),
         lVar4 == 0)) goto LAB_0338c66c;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0338c6f0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (local_38 == (long *)0x0) {
LAB_0338c66c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar11 = *(long **)(lVar4 + 0x20);
      lVar4 = (**(code **)(*local_38 + 0x458))(local_38,*(undefined8 *)(*local_38 + 0x460));
      if (lVar4 == 0) goto LAB_0338c66c;
      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_0338c6f0;
      plVar9 = *(long **)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)PTR_DAT_0422fbe0;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar7);
      }
      uVar8 = FUN_032e04b8(uVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_0338c66c;
      uVar3 = (**(code **)(*plVar11 + 0x298))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x2a0));
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_UIElements_EventBase<MouseCaptureEvent>_SetCreateFunction__;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar8 = FUN_032e04b8(uVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_0338c66c;
        uVar3 = (**(code **)(*plVar9 + 0x298))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x2a0));
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar8 = FUN_03295500(0);
    FUN_019b2708(param_2);
    uVar10 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__)
    ;
    FUN_019b5f60();
    uVar10 = FUN_0338b00c(uVar10,0);
    FUN_019b2708(param_2);
    uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar7 = Method_UnityEngine_UIElements_EventBase<PointerMoveEvent>_SetCreateFunction__;
  }
  uVar6 = thunk_FUN_01c273e8(puVar7);
  uVar8 = FUN_033704d4(uVar6,uVar8,uVar10,uVar5,0);
  thunk_FUN_01c273e8(
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                    );
  uVar10 = thunk_FUN_01c496e0();
  FUN_033584bc(uVar10,uVar8,0);
  uVar8 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaElementDecl>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar10,uVar8);
}


