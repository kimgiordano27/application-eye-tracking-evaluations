/*
FUNCTION_NAME: FUN_05fef698
ENTRY_POINT: 05fef698
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_20;frame_or_lifecycle_behavior
*/


void FUN_05fef698(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  if ((DAT_06dc4946 & 1) == 0) {
    FUN_02d965b8(Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePropertiesAsync>d__130>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<CleanupSessionAsync>d__25>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<InitializeModulesAsync>d__24>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<OnRemovedFromSession>d__32>__
                );
    DAT_06dc4946 = 1;
  }
  plVar10 = *(long **)(param_1 + 200);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *plVar10;
  lVar12 = *(long *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePropertiesAsync>d__130>__
  ;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_05fef794;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_02dd004c(plVar10);
LAB_05fef794:
  lVar5 = thunk_FUN_02db5310(*(undefined8 *)(lVar5 + 8),lVar12);
  lVar5 = (**(code **)(lVar5 + 8))(plVar10,param_2,lVar5);
  if (lVar5 == 0) {
    uVar14 = thunk_FUN_02dfd288(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SharedSpatialAnchorCore_<InitSpatialAnchor>d__16>__
                               );
    uVar14 = FUN_05ff3734(0x33,uVar14,0,0);
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar14,uVar9);
  }
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  Unity_Services_Vivox_VivoxServiceInternal__MuteInputDevice(*(long *)(param_1 + 0x68),param_2);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<OnRemovedFromSession>d__32>__
  ;
  lVar12 = *(long *)(lVar5 + 0x10);
  if (lVar12 != 0) {
    lVar11 = *(long *)(param_1 + 0x70);
    lVar4 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<OnRemovedFromSession>d__32>__
    ;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar13 = puVar6[1];
    if (lVar13 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar14 = *puVar6;
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo
                                 );
      FUN_03b7820c(lVar13,uVar14,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<InitializeModulesAsync>d__24>__
                   ,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar10 = lVar13;
      LeanTween__value(plVar10,lVar13);
    }
    lVar12 = FUN_03607884(lVar12,lVar13,
                          *(undefined8 *)Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo);
    if (lVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_05371b10(lVar12,6,0);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    puVar6 = (undefined8 *)(lVar11 + 0x10);
    *puVar6 = uVar14;
    LeanTween__value(puVar6);
  }
  if (param_5 == 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<CleanupSessionAsync>d__25>__
                               );
    FUN_05fefbf8(uVar14,uVar9);
  }
  else {
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<CleanupSessionAsync>d__25>__
                               );
    FUN_05fefc94(uVar14,param_5);
  }
  FUN_05fee768(param_1,uVar14);
  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05ff5304(*(long *)(param_1 + 0x78),*(undefined8 *)(lVar5 + 0x20));
  if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05ff5a50(*(long *)(param_1 + 0x88),param_3);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
  ;
  plVar10 = *(long **)(param_1 + 0xa0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar10;
  lVar4 = *(long *)(lVar5 + 0x28);
  lVar5 = *(long *)(lVar5 + 0x18);
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
         ) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05fef960;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
                        ,0);
LAB_05fef960:
  iVar2 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  plVar10 = *(long **)(param_1 + 0xa0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05fef9c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar1,1);
LAB_05fef9c8:
  iVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  lVar4 = lVar4 - lVar5;
  lVar5 = lVar4 - iVar3;
  if ((((param_3 != 0) && ((param_4 & 1) != 0)) && (lVar4 = lVar4 - iVar2, 0 < lVar4)) &&
     (lVar4 < lVar5)) {
    FUN_05fefcdc((double)lVar4,param_1);
  }
  if (0 < lVar5) {
    FUN_05fefeec((double)lVar5,param_1);
  }
  *(undefined8 *)(param_1 + 0x40) = param_6;
  LeanTween__value((undefined8 *)(param_1 + 0x40),param_6);
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 != 2) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_05ff04a0(param_1,iVar2,2);
  }
  return;
}


