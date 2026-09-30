/*
FUNCTION_NAME: Meta.WitAi.WitRequestSettings$$GetByteString
ENTRY_POINT: 013e1c3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 153
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_WitAi_WitRequestSettings__GetByteString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  uint uStack000000000000001c;
  
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
  *(undefined1 *)(unaff_x23 + 0x83b) = 1;
  if (unaff_x19 != 0) {
    uStack000000000000001c = FUN_017e99dc();
    puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    uStack000000000000001c = uStack000000000000001c & 4;
    (*(code *)puVar7[2])(*puVar7);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    puVar1 = ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo;
    FUN_00da4f60(*(long *)(lVar3 + 0x80) + 0x20,1);
    pbVar4 = (byte *)thunk_FUN_00d32ed4();
    *pbVar4 = unaff_w22 & 1;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    FUN_00da4f60(*(undefined8 *)(lVar3 + 0x80),1);
    puVar5 = (undefined1 *)thunk_FUN_00d32ed4();
    *puVar5 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_017e8fb0(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017e8fb8(0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03776305 == '\0') {
      thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
      thunk_FUN_00d48444(
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                        );
      DAT_03776305 = '\x01';
    }
    puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    lVar3 = *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017e9060();
    }
    uVar6 = FUN_017e7b04();
    if ((uVar6 & 1) == 0) {
      FUN_017ef90c();
    }
    else {
      puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      (*(code *)puVar7[2])(*puVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


