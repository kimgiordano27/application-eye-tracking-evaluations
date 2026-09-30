/*
FUNCTION_NAME: FUN_07e67cdc
ENTRY_POINT: 07e67cdc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x07e681d8) */
/* WARNING: Removing unreachable block (ram,0x07e68290) */

void FUN_07e67cdc(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_158 [80];
  undefined8 local_108;
  long **pplStack_100;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_0899a8b0 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetException__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__
                );
    FUN_03a8a718(Liv_Lck_LckService_StopReason_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<SignedUrlResponse>>,_PlayerFilesApiClient_<GetUploadUrlAsync>d__9>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_Start<PlayerDataService_<>c__DisplayClass6_0_<<LoadWithErrorHandlingAsync>b__0>d>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_SetResult__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetStateMachine__
                );
    DAT_0899a8b0 = 1;
  }
  local_b8 = (long *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar6 = FUN_07e682e0(param_1,param_2);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_07e67e84;
  uVar6 = FUN_049d96b4(*(long *)(param_1 + 0x18),param_2,
                       *(undefined8 *)Liv_Lck_LckService_StopReason_TypeInfo);
  if ((uVar6 & 1) != 0) {
    if (param_2 == 0) goto LAB_07e67e84;
    *(undefined8 *)(param_2 + 0x150) = 0;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (iVar3 = FUN_07e677e4(),
     puVar1 = 
     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_SetResult__
     , param_2 == 0)) goto LAB_07e67e84;
  lVar7 = *(long *)(param_2 + 0x2c0);
  if (lVar7 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar4) goto LAB_07e67e88;
      lVar7 = FUN_04de82e0(lVar7,iVar4,*(undefined8 *)puVar1);
      if (lVar7 == 0) break;
      lVar8 = *(long *)(lVar7 + 0x60);
      if (lVar8 != 0) {
        iVar13 = 0;
        while (iVar13 < *(int *)(lVar8 + 0x18)) {
          lVar14 = *(long *)(param_1 + 0x38);
          uVar9 = FUN_04de82e0(lVar8,iVar13,*(undefined8 *)puVar1);
          if (lVar14 == 0) goto LAB_07e67e84;
          FUN_07e67954(lVar14,uVar9);
          lVar8 = *(long *)(lVar7 + 0x60);
          iVar13 = iVar13 + 1;
          if (lVar8 == 0) goto LAB_07e67e84;
        }
      }
      if (*(long *)(param_1 + 0x38) == 0) break;
      FUN_07e67954(*(long *)(param_1 + 0x38),lVar7);
      lVar7 = *(long *)(param_2 + 0x2c0);
      iVar4 = iVar4 + 1;
    } while (lVar7 != 0);
    goto LAB_07e67e84;
  }
LAB_07e67e88:
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_07e67e84;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  uVar9 = FUN_07dfdfd8(param_2,0);
  iVar4 = FUN_07f69f30(uVar9,0);
  lVar7 = *(long *)(param_1 + 0x38);
  if ((uVar6 & 1) == 0) {
    if (lVar7 == 0) goto LAB_07e67e84;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x1e8);
    thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x18));
  }
  else {
    if (lVar7 == 0) goto LAB_07e67e84;
    *(long *)(lVar7 + 0x20) = param_2;
    thunk_FUN_03afed3c((long *)(lVar7 + 0x20),param_2);
    FUN_07eb4284(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),iVar3 + -1,0);
    FUN_07e68364(&local_108,param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    memcpy(&local_b0,&local_108,0x50);
    FUN_07f6f02c(auStack_158,&local_b0,0);
    uVar6 = FUN_07e08824(param_2,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_2 + 0x2b0) == 0) goto LAB_07e67e84;
      FUN_07dec61c(*(long *)(param_2 + 0x2b0),&local_b0,0);
    }
    puVar1 = OVRPlugin_Media_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07de46f4(&local_b0,0);
    uVar6 = FUN_07e027b8(param_2,0);
    if ((uVar6 & 1) != 0) {
      uVar9 = FUN_07dfdfd8(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar1);
      }
      uVar6 = FUN_07de5260(uVar9,&local_b0,0);
      if ((uVar6 & 1) == 0) {
        FUN_07e670c8(param_1,param_2,&local_b0);
      }
    }
    uVar6 = FUN_07f69f88(&local_b0,0);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_07e08834(param_2,0), (uVar6 & 1) == 0)) {
      FUN_07e0ba58(param_2,&local_b0,0);
    }
    else {
      uVar9 = FUN_07dfdfd8(param_2,0);
      FUN_07e68ad0(uVar9,param_2,uVar9,&local_b0);
      FUN_07e0ba58(param_2,&local_b0,0);
      FUN_07e68bb4(param_1,param_2);
    }
    FUN_07f6f140(&local_b0,0);
    FUN_07e08840(param_2,1,0);
    uVar9 = FUN_07dfdfd8(param_2,0);
    uVar5 = FUN_0586d640(uVar9,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetStateMachine__
                        );
    *(undefined4 *)(param_2 + 0x1f0) = uVar5;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_07e67e84;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    *puVar10 = 0;
    thunk_FUN_03afed3c(puVar10,0);
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) goto LAB_07e67e84;
    iVar13 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar13) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar7 + 0x10),0,iVar13,0)
      ;
    }
    if (iVar4 < 1) {
      uVar9 = FUN_07dfdfd8(param_2,0);
      iVar4 = FUN_07f69f30(uVar9,0);
      if (iVar4 < 1) goto LAB_07e681dc;
    }
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__;
    lVar7 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__
    ;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar7 = *(long *)puVar1;
    }
    uVar6 = FUN_07e0a3a4(param_2,*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      local_b8 = (long *)FUN_0645ffa0(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetException__
                                     );
      pplStack_100 = &local_b8;
      local_108 = 0;
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      local_b8[7] = param_2;
      thunk_FUN_03afed3c(local_b8 + 7,param_2);
      FUN_07f31938(local_b8,*(undefined8 *)(param_1 + 0x48),param_2,0);
      plVar2 = local_b8;
      if (local_b8 != (long *)0x0) {
        lVar7 = *local_b8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08488550) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_07e681c0;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_03ac43c4(local_b8,*(long *)PTR_DAT_08488550,0);
LAB_07e681c0:
        (*(code *)*puVar10)(plVar2,puVar10[1]);
      }
    }
  }
LAB_07e681dc:
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar7 != 0)) {
    FUN_07f1f72c(lVar7,param_2,0);
    FUN_07ea2024(param_1,param_2,param_3,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar7 != 0)) {
      FUN_07f1f8a4(lVar7,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
        *puVar10 = uVar12;
        thunk_FUN_03afed3c(puVar10,uVar12);
        if (*(long *)(param_1 + 0x38) != 0) {
          iVar4 = FUN_07e677e4();
          if (iVar3 < iVar4) {
            lVar7 = *(long *)(param_1 + 0x38);
            if (lVar7 == 0) goto LAB_07e67e84;
            iVar4 = FUN_07e677e4(lVar7);
            FUN_07e67a54(lVar7,iVar3,iVar4 - iVar3);
          }
          return;
        }
      }
    }
  }
LAB_07e67e84:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


