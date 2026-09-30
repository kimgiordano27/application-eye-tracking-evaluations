/*
FUNCTION_NAME: FUN_018a5308
ENTRY_POINT: 018a5308
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_018a5308(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_68__;
  if ((DAT_03779868 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_68__);
    DAT_03779868 = 1;
  }
  FUN_01865608(param_2,*(undefined8 *)puVar1,0);
  if (param_2 != (long *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    if (iVar2 != 4) {
      return;
    }
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar3 = FUN_01731954(0);
    FUN_00ac2be8(param_2);
    uVar4 = thunk_FUN_00d93c64(param_2,0);
    uVar5 = thunk_FUN_00d93c64(param_1,0);
    uVar6 = thunk_FUN_00d48444(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<byte[]>>_Create__
                              );
    uVar3 = FUN_018652e8(uVar6,uVar3,uVar4,uVar5,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar4,uVar3,0);
    uVar3 = thunk_FUN_00d48444(UnityEngine_Rendering_Universal_CameraTypeUtility_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


