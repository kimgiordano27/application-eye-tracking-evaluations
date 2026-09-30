/*
FUNCTION_NAME: thunk_FUN_0149535c
ENTRY_POINT: 01495358
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void thunk_FUN_0149535c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_03776c48 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11440);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_FtpWebRequest_set_Method__);
    thunk_FUN_00d48444(StringLiteral_10169);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                      );
    DAT_03776c48 = 1;
  }
  uVar2 = FUN_01494e80(param_1);
  uVar3 = FUN_015ff8a0(uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_015ff8a0(uVar2,0);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_0265b274(uVar2,0), (uVar3 & 1) != 0)) {
      plVar7 = *(long **)(param_1 + 0x88);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *plVar7;
      uVar10 = *(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
      ;
      uVar8 = *(undefined8 *)StringLiteral_10169;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      uVar9 = *(undefined8 *)Method_System_Net_FtpWebRequest_set_Method__;
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_11440) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto LAB_01495480;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_11440,7);
LAB_01495480:
      (*(code *)*puVar4)(plVar7,uVar10,uVar2,0,0,0,uVar8,uVar9,0xd9,puVar4[1]);
      FUN_0265b1d0(uVar2,0);
    }
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c1d0(uVar2,0);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
  }
  return;
}


