/*
FUNCTION_NAME: FUN_05caba74
ENTRY_POINT: 05caba74
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_8
*/


void FUN_05caba74(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long local_80;
  long lStack_78;
  long local_70;
  
  puVar5 = Google_Protobuf_Reflection_OneofDescriptorProto_var;
  puVar4 = System_Runtime_Remoting_Messaging_OneWayAttribute_var;
  puVar2 = Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var;
  puVar3 = Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var;
  if ((DAT_06a7a127 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Nullable<char>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_Reflection_OneofOptions_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Xr_OpenXrManager_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_WellKnownTypes_Option_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_Reflection_OneofDescriptorProto_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Runtime_InteropServices_OptionalAttribute_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Runtime_Remoting_Messaging_OneWayAttribute_var)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a7a127 = 1;
  }
  lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04678954(lVar10,*(undefined8 *)puVar2);
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_03de98bc(lVar11,*(undefined8 *)puVar5);
  puVar3 = Google_Protobuf_WellKnownTypes_Option_var;
  if (lVar11 != 0) {
    local_80 = *param_1;
    lStack_78 = param_1[1];
    local_70 = param_1[2];
    FUN_03de9dc4(lVar11,&local_80,*(undefined8 *)Google_Protobuf_WellKnownTypes_Option_var);
    puVar6 = Niantic_Peridot_Xr_OpenXrManager_var;
    puVar5 = UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var;
    puVar4 = System_Nullable<char>_var;
    puVar2 = PTR_DAT_065c89e8;
    iVar1 = *(int *)(lVar11 + 0x20);
    while( true ) {
      if (iVar1 < 1) {
        return;
      }
      FUN_03de9f90(&local_80,lVar11,*(undefined8 *)puVar6);
      lVar9 = local_70;
      lVar8 = lStack_78;
      lVar7 = local_80;
      if (lVar10 == 0) break;
      uVar12 = FUN_04679480(lVar10,lStack_78,*(undefined8 *)puVar4);
      if ((uVar12 & 1) != 0) {
        uVar13 = FUN_0467920c(lVar10,lVar8,
                              *(undefined8 *)Google_Protobuf_Reflection_OneofOptions_var);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar2);
        }
        uVar12 = FUN_04f497f4(uVar13,lVar9,0);
        if ((uVar12 & 1) != 0) {
          FUN_028be474(lVar10);
          uVar13 = thunk_FUN_02c7737c(Google_Protobuf_Reflection_OneofOptions_var);
          uVar13 = thunk_FUN_0467920c(lVar10,lVar8,uVar13);
          thunk_FUN_02c7737c(System_Runtime_Serialization_OptionalFieldAttribute_var);
          uVar14 = thunk_FUN_02cea894();
          FUN_05c9c818(uVar14,uVar13,lVar9,lVar8,0);
          uVar13 = thunk_FUN_02c7737c(System_OrdinalComparer_var);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar14,uVar13);
        }
      }
      FUN_04679278(lVar10,lVar8,lVar9,*(undefined8 *)puVar5);
      if (lVar7 == 0) break;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar12 = 0;
        uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        plVar16 = (long *)(lVar7 + 0x20);
        do {
          if (uVar15 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          local_70 = plVar16[2];
          lStack_78 = plVar16[1];
          local_80 = *plVar16;
          FUN_03de9dc4(lVar11,&local_80,*(undefined8 *)puVar3);
          uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar12 = uVar12 + 1;
          plVar16 = plVar16 + 3;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      iVar1 = *(int *)(lVar11 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


