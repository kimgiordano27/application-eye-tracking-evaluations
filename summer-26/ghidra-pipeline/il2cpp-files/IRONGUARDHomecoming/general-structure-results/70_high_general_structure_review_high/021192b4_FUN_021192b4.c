/*
FUNCTION_NAME: FUN_021192b4
ENTRY_POINT: 021192b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_021192b4(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int local_28;
  int local_24;
  
  if ((DAT_0482fc6c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_double>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_short>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_int>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_long>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_sbyte>__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_float>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_ushort>__);
    DAT_0482fc6c = 1;
  }
  puVar2 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  local_24 = 0;
  if (*(char *)(param_1 + 0x35) == '\0') {
    lVar3 = *(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    lVar8 = *(long *)(lVar3 + 0xb8);
    if (*(char *)(lVar8 + 0x14) != '\0') {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      uVar4 = FUN_035683d0(lVar8 + 0x6c,0);
      uVar5 = FUN_035683d0(*(long *)(*(long *)puVar2 + 0xb8) + 0x70,0);
      FUN_0340eee0(*(undefined8 *)
                    Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_long>__,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                   ,uVar5,0);
      FUN_02117d70();
      lVar3 = *(long *)puVar2;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    lVar8 = *(long *)(lVar3 + 0xb8);
    if (*(char *)(lVar8 + 8) != '\0') {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar2;
        lVar8 = *(long *)(lVar3 + 0xb8);
      }
      iVar9 = (int)*(undefined8 *)(lVar8 + 0x74) +
              (int)((ulong)*(undefined8 *)(lVar8 + 0x74) >> 0x20) +
              (int)*(undefined8 *)(lVar8 + 0x7c) +
              (int)((ulong)*(undefined8 *)(lVar8 + 0x7c) >> 0x20);
      if (0 < iVar9) {
        local_28 = iVar9;
        uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,&local_28);
        uVar4 = FUN_03406290(*(undefined8 *)
                              Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_ushort>__
                             ,uVar4,0);
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar3);
          lVar3 = *(long *)puVar2;
        }
        iVar9 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x74);
        if (0 < iVar9) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar3);
            iVar9 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x74);
          }
          local_24 = iVar9;
          uVar5 = FUN_035683d0(&local_24,0);
          uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)
                                      Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_int>__
                               ,uVar5,*(undefined8 *)
                                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_float>__
                               ,0);
          lVar3 = *(long *)puVar2;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar3);
          lVar3 = *(long *)puVar2;
        }
        iVar9 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x7c);
        if (0 < iVar9) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar3);
            iVar9 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x7c);
          }
          local_24 = iVar9;
          uVar5 = FUN_035683d0(&local_24,0);
          uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)
                                      Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_int>__
                               ,uVar5,*(undefined8 *)
                                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_double>__
                               ,0);
          lVar3 = *(long *)puVar2;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar3);
          lVar3 = *(long *)puVar2;
        }
        iVar9 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x78);
        if (0 < iVar9) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar3);
            iVar9 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
          }
          local_24 = iVar9;
          uVar5 = FUN_035683d0(&local_24,0);
          uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)
                                      Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_int>__
                               ,uVar5,*(undefined8 *)
                                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_short>__
                               ,0);
          lVar3 = *(long *)puVar2;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar3);
          lVar3 = *(long *)puVar2;
        }
        iVar9 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x80);
        if (0 < iVar9) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar3);
            iVar9 = *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
          }
          local_24 = iVar9;
          uVar5 = FUN_035683d0(&local_24,0);
          uVar4 = FUN_0340eee0(uVar4,*(undefined8 *)
                                      Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_int>__
                               ,uVar5,*(undefined8 *)
                                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_sbyte>__
                               ,0);
        }
        FUN_02117e98(uVar4);
        lVar3 = *(long *)puVar2;
      }
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar4,param_1,0);
    if ((uVar6 & 1) != 0) {
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar2;
      }
      puVar7 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
      *puVar7 = 0;
      thunk_FUN_01f51358(puVar7,0);
    }
    cVar1 = *(char *)(param_1 + 0x34);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_020efdc4(1,cVar1 != '\0',0);
  }
  return;
}


