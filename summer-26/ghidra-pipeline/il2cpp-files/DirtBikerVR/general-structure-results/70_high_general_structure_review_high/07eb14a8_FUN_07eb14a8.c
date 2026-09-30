/*
FUNCTION_NAME: FUN_07eb14a8
ENTRY_POINT: 07eb14a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


undefined4 FUN_07eb14a8(float param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_0899ac35 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_08496110);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<CreateOrJoinAsync>d__16>__
                );
    FUN_03a8a718(PTR_DAT_08494970);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<JoinByCodeAsync>d__17>__
                );
    FUN_03a8a718(OVRPassthroughLayer_StylesHandler_TypeInfo);
    FUN_03a8a718(PTR_DAT_084934b0);
    FUN_03a8a718(PTR_DAT_0849cc50);
    FUN_03a8a718(PTR_DAT_084904c0);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<JoinByIdAsync>d__18>__
                );
    FUN_03a8a718(OVRPermissionsRequester_<>c_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<QuickJoinAsync>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<ReconnectAsync>d__20>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<SetupSessionAsync>d__22>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Create__
                );
    DAT_0899ac35 = 1;
  }
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  iVar6 = FUN_07e2ed04(&local_48,0);
  if (iVar6 < 7) {
    if (iVar6 != 5) {
      if (iVar6 == 6) {
        if (local_50 == 0) goto LAB_07eb1c78;
        plVar7 = (long *)FUN_07e2f510(local_50,local_48,0);
        puVar3 = PTR_DAT_084904c0;
        if (plVar7 == (long *)0x0) {
          *param_4 = 0;
          thunk_FUN_03afed3c(param_4,0);
          param_4[1] = 0;
          thunk_FUN_03afed3c(param_4 + 1,0);
          param_4[2] = 0;
          thunk_FUN_03afed3c(param_4 + 2,0);
          plVar7 = (long *)0x0;
          param_4[3] = 0;
        }
        else {
          plVar12 = plVar7;
          if (*plVar7 != *(long *)PTR_DAT_084904c0) {
            plVar12 = (long *)0x0;
          }
          *param_4 = (long)plVar12;
          plVar12 = plVar7;
          if (*plVar7 != *(long *)puVar3) {
            plVar12 = (long *)0x0;
          }
          thunk_FUN_03afed3c(param_4,plVar12);
          lVar10 = *(long *)OVRPassthroughLayer_StylesHandler_TypeInfo;
          plVar12 = plVar7;
          if (*plVar7 != lVar10) {
            plVar12 = (long *)0x0;
          }
          param_4[1] = (long)plVar12;
          plVar12 = plVar7;
          if (*plVar7 != lVar10) {
            plVar12 = (long *)0x0;
          }
          thunk_FUN_03afed3c(param_4 + 1,plVar12);
          lVar10 = *(long *)OVRPermissionsRequester_<>c_TypeInfo;
          plVar12 = plVar7;
          if (*plVar7 != lVar10) {
            plVar12 = (long *)0x0;
          }
          param_4[2] = (long)plVar12;
          plVar12 = plVar7;
          if (*plVar7 != lVar10) {
            plVar12 = (long *)0x0;
          }
          thunk_FUN_03afed3c(param_4 + 2,plVar12);
          lVar10 = *(long *)PTR_DAT_08494970;
          bVar1 = *(byte *)(lVar10 + 0x130);
          plVar12 = (long *)0x0;
          if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
             (plVar12 = plVar7,
             *(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
            plVar12 = (long *)0x0;
          }
          param_4[3] = (long)plVar12;
          if (*(byte *)(*plVar7 + 0x130) < bVar1) {
            plVar7 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
            plVar7 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(param_4 + 3,plVar7);
        uVar9 = FUN_07eae9a0(param_4);
        if ((uVar9 & 1) == 0) {
          return 1;
        }
        puVar11 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Create__
        ;
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar11 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Create__
          ;
        }
LAB_07eb19d4:
        uVar8 = *puVar11;
        goto LAB_07eb19d8;
      }
      goto LAB_07eb16e8;
    }
    if (local_50 == 0) goto LAB_07eb1c78;
    uVar8 = FUN_07e2f448(local_50,local_48,0);
    uVar9 = FUN_065cd268(uVar8,0);
    puVar3 = PTR_DAT_08486760;
    if ((uVar9 & 1) == 0) {
      uVar13 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<JoinByCodeAsync>d__17>__
      ;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_0675ff58(uVar13,0);
      puVar5 = PTR_DAT_08496110;
      if (*(int *)(*(long *)PTR_DAT_08496110 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08496110);
      }
      plVar7 = (long *)FUN_07f5d528(param_1,uVar8,uVar13,0);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        param_4[1] = 0;
      }
      else {
        lVar10 = *(long *)OVRPassthroughLayer_StylesHandler_TypeInfo;
        plVar12 = plVar7;
        if (*plVar7 != lVar10) {
          plVar12 = (long *)0x0;
        }
        param_4[1] = (long)plVar12;
        if (*plVar7 != lVar10) {
          plVar7 = (long *)0x0;
        }
      }
      thunk_FUN_03afed3c(param_4 + 1,plVar7);
      uVar9 = FUN_07eae9a0(param_4);
      if ((uVar9 & 1) != 0) {
        uVar13 = *(undefined8 *)PTR_DAT_0849cc50;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_0675ff58(uVar13,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar5);
        }
        plVar7 = (long *)FUN_07f5d528(param_1,uVar8,uVar13,0);
        puVar4 = PTR_DAT_084904c0;
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          *param_4 = 0;
        }
        else {
          plVar12 = plVar7;
          if (*plVar7 != *(long *)PTR_DAT_084904c0) {
            plVar12 = (long *)0x0;
          }
          *param_4 = (long)plVar12;
          if (*plVar7 != *(long *)puVar4) {
            plVar7 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(param_4,plVar7);
      }
      uVar9 = FUN_07eae9a0(param_4);
      if ((uVar9 & 1) != 0) {
        uVar13 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<JoinByIdAsync>d__18>__
        ;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_0675ff58(uVar13,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar5);
        }
        plVar7 = (long *)FUN_07f5d528(param_1,uVar8,uVar13,0);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          param_4[2] = 0;
        }
        else {
          lVar10 = *(long *)OVRPermissionsRequester_<>c_TypeInfo;
          plVar12 = plVar7;
          if (*plVar7 != lVar10) {
            plVar12 = (long *)0x0;
          }
          param_4[2] = (long)plVar12;
          if (*plVar7 != lVar10) {
            plVar7 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(param_4 + 2,plVar7);
      }
      uVar9 = FUN_07eae9a0(param_4);
      if ((uVar9 & 1) != 0) {
        uVar13 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<CreateOrJoinAsync>d__16>__
        ;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_0675ff58(uVar13,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar5);
        }
        plVar7 = (long *)FUN_07f5d528(param_1,uVar8,uVar13,0);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          param_4[3] = 0;
        }
        else {
          lVar10 = *(long *)PTR_DAT_08494970;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if (*(byte *)(*plVar7 + 0x130) < bVar1) {
            plVar12 = (long *)0x0;
          }
          else {
            plVar12 = plVar7;
            if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
              plVar12 = (long *)0x0;
            }
          }
          param_4[3] = (long)plVar12;
          if (*(byte *)(*plVar7 + 0x130) < bVar1) {
            plVar7 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar10) {
            plVar7 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(param_4 + 3,plVar7);
      }
    }
    uVar9 = FUN_07eae9a0(param_4);
    if ((uVar9 & 1) == 0) {
      return 1;
    }
    uVar8 = FUN_065c412c(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<ReconnectAsync>d__20>__
                         ,uVar8,0);
  }
  else {
    if (iVar6 == 0xc) {
      if (local_50 == 0) goto LAB_07eb1c78;
      auVar17 = FUN_07e2f994(local_50,local_48,0);
      puVar3 = PTR_DAT_08486738;
      lVar10 = auVar17._0_8_;
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_07c9e200(lVar10,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar9 = FUN_07c9e200(auVar17._8_8_,0,0);
        if ((uVar9 & 1) != 0) {
          puVar11 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<QuickJoinAsync>d__19>__
          ;
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar11 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<QuickJoinAsync>d__19>__
            ;
          }
          goto LAB_07eb19d4;
        }
      }
      *param_4 = lVar10;
      thunk_FUN_03afed3c(param_4,lVar10);
      fVar14 = fmodf(param_1,1.0);
      if (DAT_0897502d == '\0') {
        FUN_03a8a718(PTR_DAT_08487160);
        DAT_0897502d = '\x01';
      }
      fVar15 = ABS(fVar14);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar16 = **(float **)(*(long *)PTR_DAT_08487160 + 0xb8) * 8.0;
      fVar2 = fVar15 * DAT_015c5c08;
      if (fVar15 * DAT_015c5c08 <= fVar16) {
        fVar2 = fVar16;
      }
      if (ABS(0.0 - fVar14) < fVar2) {
        return 1;
      }
      if (*param_4 != 0) {
        FUN_07c76698(*param_4,1,0);
        return 1;
      }
LAB_07eb1c78:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (iVar6 == 0xd) {
      return 0;
    }
LAB_07eb16e8:
    local_58 = FUN_07e2ed04(&local_48,0);
    local_68 = *(undefined8 *)PTR_DAT_084934b0;
    uStack_60 = 0xffffffffffffffff;
    uVar8 = FUN_06786e68(&local_68,0);
    uVar8 = FUN_065c0764(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SessionHandler>_Start<SessionManager_<SetupSessionAsync>d__22>__
                         ,uVar8,0);
  }
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
  }
LAB_07eb19d8:
  FUN_07c4adbc(uVar8,0);
  return 0;
}


