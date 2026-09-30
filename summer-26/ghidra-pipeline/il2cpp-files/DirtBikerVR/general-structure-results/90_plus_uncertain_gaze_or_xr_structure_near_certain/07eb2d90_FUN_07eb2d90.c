/*
FUNCTION_NAME: FUN_07eb2d90
ENTRY_POINT: 07eb2d90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_07eb2d90(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined4 local_54;
  undefined8 local_48;
  
  if ((DAT_0899ac2d & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
                );
    FUN_03a8a718(UnityEngine_UIElements_TextElement_GlyphsEnumerable_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionManager_<CreateOrJoinAsync>d__16>__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899ac2d = 1;
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionManager_<CreateOrJoinAsync>d__16>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__;
  puVar2 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  local_48 = 0;
  local_54 = 0;
  local_68 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    while (auVar11 = local_68, *(long *)(param_1 + 0x10) != 0) {
      auVar10 = FUN_04e919b0(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_3,
                             *(undefined8 *)puVar4);
      local_48 = auVar10._8_8_;
      iVar5 = FUN_07e2ed04(&local_48,0);
      if (iVar5 == 7) {
        auVar11 = local_68;
        if (auVar10._0_8_ == 0) break;
        uVar7 = FUN_07e2f0d8(auVar10._0_8_,local_48,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar2);
        }
        FUN_07ea7830(5,uVar7,&local_54,0);
        local_6c = 0;
        FUN_07de63bc(&local_6c,local_54,0);
        lVar8 = *(long *)(param_2 + 0x10);
        lVar9 = *(long *)puVar3;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        auVar11 = local_68;
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = local_6c;
        }
        else {
          FUN_04d5b8f0(param_2,local_6c,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        param_3 = param_3 + 1;
      }
      iVar5 = *(int *)(param_1 + 0x54);
      if (param_3 < iVar5) {
        auVar11 = local_68;
        if (*(long *)(param_1 + 0x10) == 0) break;
        auVar11 = FUN_04e919b0(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_3,
                               *(undefined8 *)puVar4);
        local_68 = auVar11;
        iVar6 = FUN_07e2ed04(local_68 + 8,0);
        iVar5 = *(int *)(param_1 + 0x54);
        if (iVar6 == 0xb) {
          param_3 = param_3 + 1;
        }
      }
      if (iVar5 <= param_3) {
        return;
      }
    }
  }
  local_68 = auVar11;
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


