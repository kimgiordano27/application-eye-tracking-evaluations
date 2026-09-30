/*
FUNCTION_NAME: FUN_061d52c4
ENTRY_POINT: 061d52c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_9
*/


void FUN_061d52c4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  double dVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if ((DAT_06a83faf & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_Reflection_ServiceDescriptorProto_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_SceneOp_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_ARDK_AR_Protobuf_ScanCaptureEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_ARDK_AR_Protobuf_ScanSaveEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Zeppelin_UI_Transitions_ScaleTransition_<RunTransition>c__Iterator0_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_ARDK_AR_Protobuf_ScanUploadEvent_<>c_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc5a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_ServerRecordMetadata_<>c_TypeInfo);
    DAT_06a83faf = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  if (3 < *(int *)(param_5 + 0x2c)) {
    plVar16 = *(long **)(param_5 + 0x38);
    if (plVar16 == (long *)0x0) goto LAB_061d565c;
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Google_Protobuf_Reflection_ServiceDescriptorProto_<>c_TypeInfo) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_061d53f4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02ce0a7c(plVar16,*(long *)
                                    Google_Protobuf_Reflection_ServiceDescriptorProto_<>c_TypeInfo,0
                          );
LAB_061d53f4:
    local_80 = (*(code *)*puVar10)(plVar16,puVar10[1]);
    puVar4 = Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo;
    lVar13 = *(long *)Niantic_Zeppelin_Scheduler_Scheduler_ActiveCoroutineList_TypeInfo;
    uStack_78 = param_2;
    local_70 = param_3;
    uStack_68 = param_4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar13 = *(long *)puVar4;
    }
    puVar4 = Niantic_ARDK_AR_Protobuf_ScanUploadEvent_<>c_TypeInfo;
    uStack_88 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x68);
    local_90 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x60);
    if (*(int *)(*(long *)Niantic_ARDK_AR_Protobuf_ScanUploadEvent_<>c_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    dVar17 = (double)FUN_061e20b8(&local_80,0);
    uVar7 = FUN_061de60c(dVar17 + dVar17,&local_90,0);
    uVar8 = *(undefined4 *)(param_5 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8d28);
    }
    uVar8 = FUN_04f321b8(uVar8,0x1d,0);
    iVar9 = FUN_04f321b8(uVar7,uVar8,0);
    iVar1 = *(int *)(param_5 + 0x28);
    if ((1 < iVar1) &&
       (iVar3 = iVar9 - *(int *)(param_5 + 0x34), iVar3 != 0 && *(int *)(param_5 + 0x34) <= iVar9))
    {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      iVar9 = iVar9 + (iVar2 * iVar1 - iVar3);
    }
    if (0 < iVar9) {
      lVar13 = thunk_FUN_02cea894(*(undefined8 *)
                                   Niantic_Zeppelin_UI_Transitions_ScaleTransition_<RunTransition>c__Iterator0_TypeInfo
                                 );
      FUN_039c5e24(lVar13,4,*(undefined8 *)
                             UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_SceneOp_TypeInfo
                  );
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = local_70;
      uVar12 = uStack_78;
      uVar11 = local_80;
      if (*(int *)(*(long *)PTR_DAT_065dc5a0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      local_58 = FUN_061e4d40(uVar11,uVar12,uVar6,0);
      FUN_061e6114(&local_58,iVar9,lVar13,0);
      puVar5 = Niantic_ARDK_AR_Protobuf_ScanSaveEvent_<>c_TypeInfo;
      puVar4 = Niantic_Peridot_Telemetry_ScanLock_<>c_TypeInfo;
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) < 1) {
          return;
        }
        iVar9 = 0;
        do {
          uVar11 = FUN_039c62c0(lVar13,iVar9,*(undefined8 *)puVar5);
          uVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
          FUN_061c5b34(uVar12,uVar11);
          uVar11 = FUN_061d4c94(param_5,uVar12);
          FUN_061d4f04(param_5,uVar11);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar13 + 0x18));
        return;
      }
      goto LAB_061d565c;
    }
  }
  puVar4 = Niantic_Platform_Analytics_Telemetry_ServerRecordMetadata_<>c_TypeInfo;
  uVar14 = 0;
  while( true ) {
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar11 = FUN_061d4c94(param_5,*(undefined8 *)(lVar13 + uVar14 * 8 + 0x20));
    FUN_061d4f04(param_5,uVar11);
    uVar14 = uVar14 + 1;
    if (uVar14 == 6) {
      return;
    }
  }
LAB_061d565c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


