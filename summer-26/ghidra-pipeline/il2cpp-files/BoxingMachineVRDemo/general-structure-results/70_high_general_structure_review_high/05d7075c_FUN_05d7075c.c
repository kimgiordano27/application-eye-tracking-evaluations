/*
FUNCTION_NAME: FUN_05d7075c
ENTRY_POINT: 05d7075c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


undefined1  [16] FUN_05d7075c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar2 = PTR_DAT_067693b8;
  if ((DAT_06b82c54 & 1) == 0) {
    FUN_02d6084c(Method_System_Nullable<OVRPose>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<OVRPose>_get_Value__);
    FUN_02d6084c(PTR_DAT_06772f18);
    FUN_02d6084c(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
    FUN_02d6084c(PTR_DAT_067693b8);
    DAT_06b82c54 = 1;
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar8 = *(long *)puVar2;
  }
  puVar6 = Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__;
  puVar5 = Method_System_Nullable<OVRTelemetryMarker>__ctor__;
  puVar4 = Method_System_Nullable<OVRPose>_get_Value__;
  puVar3 = Method_System_Nullable<OVRPose>_get_HasValue__;
  if (param_2 != 0) {
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    uVar1 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    uVar9 = FUN_06054438(param_2,0);
    auVar11 = FUN_03607900(param_1,param_3,0,*(undefined8 *)puVar3,uVar9,*(undefined8 *)puVar5);
    auVar11 = FUN_05d68034(uVar10,uVar1,auVar11._0_8_,auVar11._8_8_);
    uVar10 = FUN_060541a4(param_2,0);
    auVar12 = FUN_03607900(param_1,param_3,0,*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar6);
    auVar11 = FUN_05d68034(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
    uVar7 = FUN_060546cc(param_2,0);
    auVar12 = FUN_036077c8(param_1,param_3,0,*(undefined8 *)PTR_DAT_06772f18,uVar7,
                           *(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__)
    ;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    auVar11 = FUN_05d68034(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


