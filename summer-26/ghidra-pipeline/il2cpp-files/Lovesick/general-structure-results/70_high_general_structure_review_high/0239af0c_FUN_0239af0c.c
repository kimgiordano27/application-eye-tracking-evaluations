/*
FUNCTION_NAME: FUN_0239af0c
ENTRY_POINT: 0239af0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long FUN_0239af0c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__;
  if ((DAT_03781e98 & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_Schema_LocatedActiveAxis_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__
                      );
    DAT_03781e98 = 1;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0239b0f0(&local_50);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  plVar5 = (long *)FUN_0239b144(param_1,param_2);
  if (plVar5 != (long *)0x0) {
    if (plVar5[0x15] != 0) {
      return plVar5[0x15];
    }
    uVar9 = param_2[1];
    if (*(int *)(*(long *)System_Xml_Schema_LocatedActiveAxis_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar2 = FUN_0239b240(uVar9);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    if (DAT_03781f51 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__
                        );
      DAT_03781f51 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    iVar3 = FUN_0239b240(**(undefined8 **)(lVar6 + 0xb8));
    if (iVar2 == iVar3) {
      if ((char)plVar5[2] != '\0') {
        return 0;
      }
      FUN_00ac2be8(plVar5);
      uVar9 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      uVar7 = thunk_FUN_00d48444(PTR_DAT_033f3718);
      uVar8 = thunk_FUN_00d48444(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<RequestText>d__115>__
                                );
      uVar9 = FUN_01600424(uVar7,uVar9,uVar8,0);
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017713a8(uVar7,uVar9,0);
      uVar9 = thunk_FUN_00d48444(RhythmGameStarter_NoteRecorder_<BeginCountDown>d__39_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,uVar9);
    }
    lVar6 = FUN_0239b144(param_1,param_2 + 1);
    if (lVar6 != 0) {
      return *(long *)(lVar6 + 0xa8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


