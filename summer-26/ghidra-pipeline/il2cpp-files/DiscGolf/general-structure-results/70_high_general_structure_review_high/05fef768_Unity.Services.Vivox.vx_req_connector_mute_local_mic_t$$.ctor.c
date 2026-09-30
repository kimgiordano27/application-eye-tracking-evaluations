/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_connector_mute_local_mic_t$$.ctor
ENTRY_POINT: 05fef768
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_req_connector_mute_local_mic_t___ctor
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      lVar4 = FUN_02dd004c();
      goto LAB_05fef794;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  lVar4 = param_1 + (long)(*in_x10 + param_4) * 0x10 + 0x138;
LAB_05fef794:
  lVar4 = thunk_FUN_02db5310(*(undefined8 *)(lVar4 + 8));
  lVar4 = (**(code **)(lVar4 + 8))();
  if (lVar4 == 0) {
    uVar14 = thunk_FUN_02dfd288(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SharedSpatialAnchorCore_<InitSpatialAnchor>d__16>__
                               );
    uVar14 = FUN_05ff3734(0x33,uVar14,0,0);
    uVar10 = thunk_FUN_02dfd288(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar14,uVar10);
  }
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  Unity_Services_Vivox_VivoxServiceInternal__MuteInputDevice();
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<OnRemovedFromSession>d__32>__
  ;
  lVar12 = *(long *)(lVar4 + 0x10);
  if (lVar12 != 0) {
    lVar11 = *(long *)(unaff_x19 + 0x70);
    lVar5 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<OnRemovedFromSession>d__32>__
    ;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar1;
    }
    puVar7 = *(undefined8 **)(lVar5 + 0xb8);
    lVar13 = puVar7[1];
    if (lVar13 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar14 = *puVar7;
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo
                                 );
      FUN_03b7820c(lVar13,uVar14,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<InitializeModulesAsync>d__24>__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar6 = lVar13;
      LeanTween__value(plVar6,lVar13);
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
    puVar7 = (undefined8 *)(lVar11 + 0x10);
    *puVar7 = uVar14;
    LeanTween__value(puVar7);
  }
  if (unaff_x23 == 0) {
    uVar10 = *(undefined8 *)(lVar4 + 0x20);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<CleanupSessionAsync>d__25>__
                               );
    FUN_05fefbf8(uVar14,uVar10);
  }
  else {
    thunk_FUN_02dd3144(*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionManager_<CleanupSessionAsync>d__25>__
                      );
    FUN_05fefc94();
  }
  FUN_05fee768();
  if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05ff5304(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(lVar4 + 0x20));
  if (*(long *)(unaff_x19 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05ff5a50();
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
  ;
  plVar6 = *(long **)(unaff_x19 + 0xa0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar6;
  lVar5 = *(long *)(lVar4 + 0x28);
  lVar4 = *(long *)(lVar4 + 0x18);
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
         ) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05fef960;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(plVar6,*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
                        ,0);
LAB_05fef960:
  iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  plVar6 = *(long **)(unaff_x19 + 0xa0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_05fef9c8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar1,1);
LAB_05fef9c8:
  iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  lVar5 = lVar5 - lVar4;
  lVar4 = lVar5 - iVar3;
  if ((((unaff_x22 != 0) && ((unaff_x21 & 1) != 0)) && (lVar5 = lVar5 - iVar2, 0 < lVar5)) &&
     (lVar5 < lVar4)) {
    FUN_05fefcdc((double)lVar5);
  }
  if (0 < lVar4) {
    FUN_05fefeec((double)lVar4);
  }
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
  LeanTween__value();
  if (*(int *)(unaff_x19 + 0x98) != 2) {
    *(undefined4 *)(unaff_x19 + 0x98) = 2;
    FUN_05ff04a0();
  }
  return;
}


