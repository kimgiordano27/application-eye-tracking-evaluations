/*
FUNCTION_NAME: FUN_07503088
ENTRY_POINT: 07503088
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_07503088(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUKRoom_<ShareRoomAsync>d__58>__
  ;
  if ((DAT_07ef4a8d & 1) == 0) {
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUK_<ShareRoomsAsync>d__70>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUKRoom_<ShareRoomAsync>d__58>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUKRoom_<ShareRoomAsync>d__58>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
    DAT_07ef4a8d = 1;
  }
  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_05e5ae34(lVar8,0);
  if (lVar8 != 0) {
    plVar13 = (long *)(lVar8 + 0x10);
    *plVar13 = param_2;
    thunk_FUN_036b7ad0(plVar13,param_2);
    puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__;
    puVar3 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
    if (*plVar13 != 0) {
      uVar14 = *(undefined8 *)(*plVar13 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar7 = FUN_03f55ad8(uVar14,*(undefined8 *)puVar3);
      FUN_074ef380(uVar7 & 1,*(undefined8 *)puVar4);
      if (*plVar13 != 0) {
        FUN_074eeee0(*(undefined8 *)(*plVar13 + 0x30));
        if (*plVar13 != 0) {
          plVar11 = *(long **)(*plVar13 + 0x30);
          if (plVar11 == (long *)0x0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
          }
          else {
            lVar12 = *(long *)PTR_DAT_07a21b38;
            bVar1 = *(byte *)(lVar12 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar12)) {
LAB_07503260:
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar11,lVar12);
            }
            *(long **)(lVar8 + 0x18) = plVar11;
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar12))
            goto LAB_07503260;
          }
          thunk_FUN_036b7ad0((long *)(lVar8 + 0x18));
          puVar2 = 
          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUKRoom_<ShareRoomAsync>d__58>__
          ;
          puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__;
          puVar3 = PTR_DAT_079ffd68;
          if ((*(long *)(param_1 + 0x18) != 0) && (lVar12 = *(long *)(lVar8 + 0x18), lVar12 != 0)) {
            uVar14 = FUN_071bd74c(lVar12,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x10),0);
            uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
            FUN_04159004(uVar9,lVar8,*(undefined8 *)puVar2,0);
            uVar14 = FUN_03cc7aa0(uVar14,uVar9,*(undefined8 *)puVar4);
            puVar6 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__;
            puVar5 = 
            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUK_<ShareRoomsAsync>d__70>__
            ;
            puVar2 = PTR_DAT_079f4e28;
            if (*(long *)(param_1 + 0x18) != 0) {
              if (*(char *)(*(long *)(param_1 + 0x18) + 0x11) != '\0') {
                uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                FUN_04159004(uVar9,lVar8,*(undefined8 *)puVar6,0);
                uVar14 = FUN_03cc7aa0(uVar14,uVar9,*(undefined8 *)puVar4);
              }
              lVar8 = FUN_03cb08a0(uVar14,*(undefined8 *)puVar5);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_036a1978(*(long *)puVar2);
              }
              uVar10 = FUN_071c24dc(lVar8,0,0);
              if ((uVar10 & 1) == 0) {
                plVar13 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
                if (plVar13 == (long *)0x0) goto LAB_07503468;
                if ((lVar8 != 0) &&
                   (lVar12 = thunk_FUN_0367fd24(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0
                   )) {
                  uVar14 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                  FUN_03642acc(uVar14,0);
                }
                if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                plVar13[4] = lVar8;
                thunk_FUN_036b7ad0(plVar13 + 4,lVar8);
              }
              else {
                if (*plVar13 == 0) goto LAB_07503468;
                FUN_074ef3c8(*(undefined1 *)(*plVar13 + 0x40),
                             *(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__,
                             *(undefined8 *)(param_1 + 0x10));
                lVar12 = *(long *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
                lVar8 = *(long *)(lVar12 + 0x38);
                if (lVar8 == 0) {
                  FUN_0367ca58(lVar12);
                  lVar8 = *(long *)(lVar12 + 0x38);
                }
                lVar8 = *(long *)(lVar8 + 0x10);
                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0367c9fc();
                }
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0367c9fc();
                }
                plVar13 = (long *)**(long **)(lVar8 + 0xb8);
              }
              return plVar13;
            }
          }
        }
      }
    }
  }
LAB_07503468:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


