/*
FUNCTION_NAME: FUN_01f3dd6c
ENTRY_POINT: 01f3dd6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_01f3dd6c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_037802cb & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_TextShadow_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10438);
    thunk_FUN_00d48444(Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Locomotion_PlayerLocomotor_<>c_<_ctor>b__18_0__);
    thunk_FUN_00d48444(UnityEngine_UI_Graphic_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5054);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_TypeIsInstruction_TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c_<LineCast>b__53_1__
                      );
    thunk_FUN_00d48444(StringLiteral_1032);
    thunk_FUN_00d48444(StringLiteral_12257);
    thunk_FUN_00d48444(Method_RCG_Events_PlayPlayableOnGrab_Activate__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                      );
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<int>>_get_Item__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_set_automaticPlacementRequested__
                      );
    thunk_FUN_00d48444(StringLiteral_9520);
    DAT_037802cb = 1;
  }
  puVar3 = StringLiteral_9520;
  puVar2 = StringLiteral_1032;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_RemoveInteractor__
                               );
    FUN_016ec5b8(uVar5,uVar10,0);
    uVar10 = thunk_FUN_00d48444(StringLiteral_2089);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar10);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
  uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
  uVar6 = thunk_FUN_015fe514(uVar5,*(undefined8 *)puVar3,0);
  if ((uVar6 & 1) == 0) {
    switch(*(undefined4 *)(param_1 + 0x50)) {
    case 0:
      if (*(int *)(param_1 + 0x30) == 1) {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12257);
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e4925c(plVar4,param_2,param_1,0);
      }
      else {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_RCG_Events_PlayPlayableOnGrab_Activate__);
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e422c4(plVar4,param_2,param_1,0);
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x30) == 1) {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             UnityEngine_UIElements_TextShadow_TypeInfo);
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e3e570(plVar4,param_2,param_1,0);
      }
      else {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10438);
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e32d34(plVar4,param_2,param_1,0);
      }
      break;
    case 2:
      plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5054);
      if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
      thunk_FUN_01e422c4(plVar4,param_2,param_1,0);
      break;
    case 3:
      goto switchD_01f3deb0_caseD_3;
    default:
      goto LAB_01f3e1b0;
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x50)) {
    case 0:
      if (*(int *)(param_1 + 0x30) == 1) {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__
                                           );
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01f330b0(plVar4,param_2,param_1,0);
      }
      else {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_System_Collections_Generic_List<List<int>>_get_Item__
                                           );
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01f302e4(plVar4,param_2,param_1,0);
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x30) == 1) {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_GetAwaiter__
                                           );
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e40218(plVar4,param_2,param_1,0);
      }
      else {
        plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Oculus_Interaction_Locomotion_PlayerLocomotor_<>c_<_ctor>b__18_0__
                                           );
        if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
        FUN_01e3ee3c(plVar4,param_2,param_1,0);
      }
      break;
    case 2:
      plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           System_Linq_Expressions_Interpreter_TypeIsInstruction_TypeInfo
                                         );
      if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
      FUN_01e426cc(plVar4,param_2,param_1,0);
      break;
    case 3:
switchD_01f3deb0_caseD_3:
      plVar4 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (plVar4 == (long *)0x0) goto LAB_01f3e1c4;
      FUN_01e44f84(plVar4,param_2,param_1,0);
      break;
    default:
LAB_01f3e1b0:
      return 0;
    }
  }
  plVar7 = plVar4;
  if ((*(int *)(param_1 + 0x50) != 3) && (uVar6 = FUN_01f3eb7c(param_1), (uVar6 & 1) != 0)) {
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)UnityEngine_UI_Graphic_TypeInfo);
    if (plVar7 == (long *)0x0) goto LAB_01f3e1c4;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                     + 300);
    if ((*(byte *)(*plVar4 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar4);
    }
    FUN_01e407cc(plVar7,plVar4,param_1,0);
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_set_automaticPlacementRequested__
                            );
  if (lVar8 != 0) {
    FUN_01f351cc(lVar8,plVar7,param_1);
    lVar9 = lVar8;
    if (*(char *)(param_1 + 0x10) != '\0') {
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c_<LineCast>b__53_1__
                                );
      if (lVar9 == 0) goto LAB_01f3e1c4;
      FUN_01e4464c(lVar9,lVar8,0);
    }
    return lVar9;
  }
LAB_01f3e1c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


