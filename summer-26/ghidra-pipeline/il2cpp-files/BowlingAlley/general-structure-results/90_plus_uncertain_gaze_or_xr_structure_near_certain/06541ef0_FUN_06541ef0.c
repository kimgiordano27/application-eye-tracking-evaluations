/*
FUNCTION_NAME: FUN_06541ef0
ENTRY_POINT: 06541ef0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06541ef0(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5,
                 uint param_6,uint param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined4 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_07280910;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_076dfacb & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__
                      );
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                      );
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ResponseFile>_get_Task__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07280910);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    DAT_076dfacb = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar2;
  }
  FUN_0659a8b8(*(long *)(lVar6 + 0xb8) + 0x50,0);
  auVar13._8_8_ = local_80._8_8_;
  auVar13._0_8_ = local_80._0_8_;
  if (((param_7 & 1) == 0) && (local_80 = auVar13, 0 < *param_4)) {
    if (*param_4 != 1) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      uVar8 = thunk_FUN_032e1da0(Unity_Collections_xxHash3_StreamingState_TypeInfo);
      uVar8 = thunk_FUN_032a52d0(uVar8,&local_90);
      uVar10 = thunk_FUN_032e1da0(
                                 Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                 );
      uVar8 = FUN_057a25c4(uVar10,uVar8,0);
      thunk_FUN_032e1da0(PTR_DAT_07279980);
      uVar10 = thunk_FUN_032a56a0();
      FUN_0591ef6c(uVar10,uVar8,0);
      uVar8 = thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar10,uVar8);
    }
    local_80 = FUN_03d497fc(param_4,0,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ResponseFile>_get_Task__
                           );
    uVar7 = FUN_064d86a8(local_80,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_065422d8;
      FUN_050b6b90(*(long *)(param_1 + 0x30),local_70,uStack_68,local_80._0_8_,local_80._8_8_,
                   *(undefined8 *)Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__)
      ;
    }
  }
  puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_050be688(*(long *)(param_1 + 0x48),local_70,uStack_68,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__
                );
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar5 = FUN_050bce0c(*(long *)(param_1 + 0x48),
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
      puVar3 = Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__;
      if (iVar5 < 1) {
LAB_065421f8:
        puVar4 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__;
        puVar3 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ResponseFile>_get_Task__;
        if ((param_7 & 1) == 0) {
          FUN_06542634(param_1,local_70,uStack_68,param_6 & 1);
        }
        else if (0 < *param_4) {
          iVar5 = 0;
          do {
            auVar13 = FUN_03d497fc(param_4,iVar5,*(undefined8 *)puVar2);
            FUN_06542634(param_1,auVar13._0_8_,auVar13._8_8_,param_6 & 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *param_4);
        }
        uVar11 = 2;
        if ((param_5 & 1) == 0) {
          uVar11 = 0;
        }
        uVar8 = FUN_064cf02c(2,&local_70,0);
        FUN_0396c300(param_1 + 0x220,uVar8,uVar11,*(undefined8 *)puVar4,0,*(undefined8 *)puVar3);
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar8 = FUN_050bce1c(*(long *)(param_1 + 0x48),
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                            );
        lVar6 = FUN_039a42d4(uVar8,*(undefined8 *)puVar3);
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ResponseFile>_get_Task__;
        if (lVar6 != 0) {
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar7 = 0;
            uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_065422d8;
              lVar1 = lVar6 + uVar7 * 0x10;
              uVar8 = *(undefined8 *)(lVar1 + 0x20);
              uVar10 = *(undefined8 *)(lVar1 + 0x28);
              FUN_050bd0bc(*(long *)(param_1 + 0x48),uVar8,uVar10,
                           *(undefined8 *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
                          );
              if ((param_7 & 1) == 0) {
                uVar9 = FUN_064d02f4(local_70,uStack_68,0);
                uVar12 = FUN_064e0ae8(extraout_x1,uVar9,0x3b,0);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_065422d8;
                  FUN_050be688(*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                }
              }
              else if (0 < *param_4) {
                iVar5 = 0;
                do {
                  auVar13 = FUN_03d497fc(param_4,iVar5,*(undefined8 *)puVar3);
                  uVar12 = FUN_064ceec8(uVar8,uVar10,auVar13._0_8_,auVar13._8_8_,0);
                  if ((uVar12 & 1) == 0) {
                    /* try { // try from 06542158 to 066423a3 has its CatchHandler @ 06542158
                       catch() { ... } // from try @ 06542158 with catch @ 06542158
                       catch() { ... } // from try @ 06542750 with catch @ 06542158
                       catch() { ... } // from try @ 06542c34 with catch @ 06542158
                       catch() { ... } // from try @ 06542c64 with catch @ 06542158 */
                    auVar13 = FUN_03d497fc(param_4,iVar5,*(undefined8 *)puVar3);
                    uVar9 = FUN_064d02f4(auVar13._0_8_,auVar13._8_8_,0);
                    uVar12 = FUN_064e0ae8(extraout_x1,uVar9,0x3b,0);
                    if ((uVar12 & 1) != 0) goto LAB_06542180;
                  }
                  else {
LAB_06542180:
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_065422d8;
                    FUN_050be688(*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *param_4);
              }
              uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          goto LAB_065421f8;
        }
      }
    }
  }
LAB_065422d8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


