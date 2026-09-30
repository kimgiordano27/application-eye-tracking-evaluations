/*
FUNCTION_NAME: FUN_055b2678
ENTRY_POINT: 055b2678
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_055b2678(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((DAT_06dbb64a & 1) == 0) {
    FUN_02d965b8(OVRAnchor_Tracker_AsyncLock_var);
    FUN_02d965b8(UnityEngine_Awaitable_AwaitableAndFrameIndex_var);
    FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
    DAT_06dbb64a = 1;
  }
  if (param_3 == 0) goto LAB_055b2bec;
  if (*(char *)(param_3 + 0x2a) == '\0') {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar12 = FUN_0547e2f8(0);
    FUN_02979e58(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = System_Action<string,_string,_LogType>_TypeInfo;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x80);
    if (lVar11 != 0) {
      if (*(char *)(param_3 + 0x88) != '\0') {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_055b2bec;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) goto LAB_055b2bf0;
      }
      lVar11 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      if (lVar11 == 0) {
        lVar4 = 0;
      }
      else {
        uVar12 = *(undefined8 *)UnityEngine_Awaitable_AwaitableAndFrameIndex_var;
        lVar4 = thunk_FUN_02dd3048(lVar11,uVar12);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(lVar11,uVar12);
        }
      }
      if (param_5 != 0) {
        FUN_055b4f70(param_1,param_2,param_5,lVar4);
      }
      FUN_055b5334(param_1,param_2,param_3,lVar4);
      puVar9 = OVRAnchor_Tracker_AsyncLock_var;
      if (param_2 == (long *)0x0) {
LAB_055b2bec:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      puVar1 = PTR_DAT_069fb9c0;
      while (iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400)),
            iVar2 == 4) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        if (plVar5 == (long *)0x0) goto LAB_055b2bec;
        uVar12 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        uVar6 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if ((uVar6 & 1) == 0) {
          lVar11 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_0547e2f8(0);
          uVar8 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
          uVar12 = FUN_055873e0(uVar8,uVar7,uVar12,0);
          uVar12 = FUN_05574a94(param_2,uVar12,0);
          uVar7 = thunk_FUN_02dfd288(
                                    System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar12,uVar7);
        }
        if (*(long *)(param_3 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = FUN_055abe7c(*(long *)(param_3 + 0xc0),uVar12);
        if (((lVar11 == 0) || (*(char *)(lVar11 + 0x82) == '\0')) ||
           (*(char *)(lVar11 + 0x80) != '\0')) {
          uVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          uVar6 = FUN_05595c44(uVar7,0);
          if ((uVar6 & 1) == 0) {
            uVar7 = *(undefined8 *)puVar9;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar7 = FUN_054f73b4(uVar7,0);
          }
          else {
            uVar7 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
          }
          uVar8 = FUN_055ae608(param_1,uVar7);
          plVar5 = (long *)FUN_055aea4c(param_1,uVar8,0,0,param_4);
          if ((plVar5 == (long *)0x0) ||
             (uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
             (uVar6 & 1) == 0)) {
            uVar7 = FUN_055aeed0(param_1,param_2,uVar7,uVar8,0,0,param_4,0);
          }
          else {
            uVar7 = FUN_055aeab8(param_1,plVar5,param_2,uVar7,0);
          }
          FUN_055aa664(param_3,lVar4,uVar12,uVar7);
        }
        else {
          plVar5 = (long *)(lVar11 + 0x48);
          lVar10 = *plVar5;
          if (lVar10 == 0) {
            lVar10 = FUN_055ae608(param_1,*(undefined8 *)(lVar11 + 0x40));
            *plVar5 = lVar10;
            LeanTween__value(plVar5);
            lVar10 = *plVar5;
          }
          uVar12 = FUN_055aea4c(param_1,lVar10,*(undefined8 *)(lVar11 + 0x78),0,0);
          uVar6 = FUN_055b4470(param_1,lVar11,uVar12,0,param_4,param_2,lVar4);
          if ((uVar6 & 1) == 0) {
            FUN_055745fc(param_2,0);
          }
        }
        uVar6 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if ((uVar6 & 1) == 0) {
          FUN_055b578c(param_1,param_2,param_3,lVar4,
                       *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
LAB_055b2ba8:
          FUN_055b5560(param_1,param_2,param_3,lVar4);
          return lVar4;
        }
      }
      if (iVar2 == 0xd) goto LAB_055b2ba8;
      FUN_02979e58(param_2);
      uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      local_78 = thunk_FUN_02dfd288(System_Drawing_Point_var);
      uStack_70 = 0xffffffffffffffff;
      local_68 = uVar3;
      uVar12 = FUN_0551e574(&local_78,0);
      uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
      uVar12 = FUN_05362cb4(uVar7,uVar12,0);
      goto LAB_055b2b5c;
    }
LAB_055b2bf0:
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar12 = FUN_0547e2f8(0);
    FUN_02979e58(param_3);
    uVar7 = *(undefined8 *)(param_3 + 0x60);
    puVar9 = System_Action<TwoFingerDragGesture,_Touch,_Touch>_TypeInfo;
  }
  uVar8 = thunk_FUN_02dfd288(puVar9);
  uVar12 = FUN_055873e0(uVar8,uVar12,uVar7,0);
LAB_055b2b5c:
  uVar12 = FUN_05574a94(param_2,uVar12,0);
  uVar7 = thunk_FUN_02dfd288(
                            System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar12,uVar7);
}


