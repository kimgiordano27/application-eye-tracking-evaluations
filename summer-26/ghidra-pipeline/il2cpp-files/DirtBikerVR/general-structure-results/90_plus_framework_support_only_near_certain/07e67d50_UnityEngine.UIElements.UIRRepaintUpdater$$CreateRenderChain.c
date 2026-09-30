/*
FUNCTION_NAME: UnityEngine.UIElements.UIRRepaintUpdater$$CreateRenderChain
ENTRY_POINT: 07e67d50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07e681d8) */
/* WARNING: Removing unreachable block (ram,0x07e68290) */

void UnityEngine_UIElements_UIRRepaintUpdater__CreateRenderChain(void)

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
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_000000a8;
  
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
  *(undefined1 *)(unaff_x23 + 0x8b0) = 1;
  in_stack_000000a8 = (long *)0x0;
  unaff_x22[3] = 0;
  unaff_x22[2] = 0;
  unaff_x22[5] = 0;
  unaff_x22[4] = 0;
  unaff_x22[7] = 0;
  unaff_x22[6] = 0;
  unaff_x22[9] = 0;
  unaff_x22[8] = 0;
  unaff_x22[1] = 0;
  *unaff_x22 = 0;
  uVar6 = FUN_07e682e0();
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_07e67e84;
  uVar6 = FUN_049d96b4();
  if ((uVar6 & 1) != 0) {
    if (unaff_x21 == 0) goto LAB_07e67e84;
    *(undefined8 *)(unaff_x21 + 0x150) = 0;
  }
  if ((*(long *)(unaff_x19 + 0x38) == 0) ||
     (iVar3 = FUN_07e677e4(),
     puVar1 = 
     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_Item>>_SetResult__
     , unaff_x21 == 0)) goto LAB_07e67e84;
  lVar7 = *(long *)(unaff_x21 + 0x2c0);
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
          lVar14 = *(long *)(unaff_x19 + 0x38);
          uVar9 = FUN_04de82e0(lVar8,iVar13,*(undefined8 *)puVar1);
          if (lVar14 == 0) goto LAB_07e67e84;
          FUN_07e67954(lVar14,uVar9);
          lVar8 = *(long *)(lVar7 + 0x60);
          iVar13 = iVar13 + 1;
          if (lVar8 == 0) goto LAB_07e67e84;
        }
      }
      if (*(long *)(unaff_x19 + 0x38) == 0) break;
      FUN_07e67954(*(long *)(unaff_x19 + 0x38),lVar7);
      lVar7 = *(long *)(unaff_x21 + 0x2c0);
      iVar4 = iVar4 + 1;
    } while (lVar7 != 0);
    goto LAB_07e67e84;
  }
LAB_07e67e88:
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07e67e84;
  uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  uVar9 = FUN_07dfdfd8();
  iVar4 = FUN_07f69f30(uVar9,0);
  lVar7 = *(long *)(unaff_x19 + 0x38);
  if ((uVar6 & 1) == 0) {
    if (lVar7 == 0) goto LAB_07e67e84;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(unaff_x21 + 0x1e8);
    thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x18));
  }
  else {
    if (lVar7 == 0) goto LAB_07e67e84;
    *(long *)(lVar7 + 0x20) = unaff_x21;
    thunk_FUN_03afed3c((long *)(lVar7 + 0x20));
    FUN_07eb4284(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x28),iVar3 + -1,0);
    FUN_07e68364(&stack0x00000058);
    memcpy(&stack0x000000b0,&stack0x00000058,0x50);
    FUN_07f6f02c(&stack0x00000008,&stack0x000000b0,0);
    uVar6 = FUN_07e08824();
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x2b0) == 0) goto LAB_07e67e84;
      FUN_07dec61c(*(long *)(unaff_x21 + 0x2b0),&stack0x000000b0,0);
    }
    puVar1 = OVRPlugin_Media_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07de46f4(&stack0x000000b0,0);
    uVar6 = FUN_07e027b8();
    if ((uVar6 & 1) != 0) {
      uVar9 = FUN_07dfdfd8();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar1);
      }
      uVar6 = FUN_07de5260(uVar9,&stack0x000000b0,0);
      if ((uVar6 & 1) == 0) {
        FUN_07e670c8();
      }
    }
    uVar6 = FUN_07f69f88(&stack0x000000b0,0);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_07e08834(), (uVar6 & 1) == 0)) {
      FUN_07e0ba58();
    }
    else {
      FUN_07dfdfd8();
      FUN_07e68ad0();
      FUN_07e0ba58();
      FUN_07e68bb4();
    }
    FUN_07f6f140(&stack0x000000b0,0);
    FUN_07e08840();
    uVar9 = FUN_07dfdfd8();
    uVar5 = FUN_0586d640(uVar9,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetStateMachine__
                        );
    *(undefined4 *)(unaff_x21 + 0x1f0) = uVar5;
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07e67e84;
    puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    *puVar10 = 0;
    thunk_FUN_03afed3c(puVar10,0);
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) goto LAB_07e67e84;
    iVar13 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar13) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar7 + 0x10),0,iVar13,0)
      ;
    }
    if (iVar4 < 1) {
      uVar9 = FUN_07dfdfd8();
      iVar4 = FUN_07f69f30(uVar9,0);
      if (iVar4 < 1) goto LAB_07e681dc;
    }
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_07e0a3a4();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_000000a8 =
           (long *)FUN_0645ffa0(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetException__
                               );
      in_stack_00000060 = &stack0x000000a8;
      in_stack_00000058 = 0;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_000000a8[7] = unaff_x21;
      thunk_FUN_03afed3c();
      FUN_07f31938(in_stack_000000a8,*(undefined8 *)(unaff_x19 + 0x48));
      plVar2 = in_stack_000000a8;
      if (in_stack_000000a8 != (long *)0x0) {
        lVar7 = *in_stack_000000a8;
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
        puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_000000a8,*(long *)PTR_DAT_08488550,0);
LAB_07e681c0:
        (*(code *)*puVar10)(plVar2,puVar10[1]);
      }
    }
  }
LAB_07e681dc:
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_07f1f72c();
    FUN_07ea2024();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar7 != 0)) {
      FUN_07f1f8a4(lVar7,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        puVar10 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        *puVar10 = uVar12;
        thunk_FUN_03afed3c(puVar10,uVar12);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar4 = FUN_07e677e4();
          if (iVar3 < iVar4) {
            lVar7 = *(long *)(unaff_x19 + 0x38);
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


