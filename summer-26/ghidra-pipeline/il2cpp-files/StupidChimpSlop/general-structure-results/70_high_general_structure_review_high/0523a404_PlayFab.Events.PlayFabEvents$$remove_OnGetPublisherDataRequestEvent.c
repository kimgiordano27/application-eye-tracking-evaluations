/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetPublisherDataRequestEvent
ENTRY_POINT: 0523a404
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


uint PlayFab_Events_PlayFabEvents__remove_OnGetPublisherDataRequestEvent(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  
  if ((DAT_06a52212 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(PTR_DAT_0664a090);
    FUN_02d4dc40(PTR_DAT_0664a098);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_EventCallback<GeometryChangedEvent>_TypeInfo);
    DAT_06a52212 = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05ea2df4(*(undefined8 *)UnityEngine_UIElements_EventCallback<GeometryChangedEvent>_TypeInfo,
                 0);
  }
  else {
    lVar6 = FUN_05239250(param_1);
    puVar3 = PTR_DAT_0664a098;
    if (lVar6 == 0) {
      plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
      if (plVar7 == (long *)0x0) goto LAB_0523a6dc;
      if ((param_1 != 0) &&
         (lVar6 = thunk_FUN_02d8a53c(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_0523a6e4;
      if ((int)plVar7[3] == 0) goto LAB_0523a6e0;
      plVar7[4] = param_1;
      thunk_FUN_02dc1ef0(plVar7 + 4,param_1);
      puVar11 = (undefined8 *)UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar11 = (undefined8 *)UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo;
      }
    }
    else {
      if (*(char *)(lVar6 + 0x18) != *(char *)(param_2 + 0x18)) {
        lVar8 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664a098);
        FUN_051ac524(lVar8,0);
        puVar1 = PTR_DAT_066462a0;
        uStack000000000000000c = *(undefined1 *)(param_2 + 0x18);
        uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x18),
                                    (long)&stack0x00000008 + 4);
        puVar4 = UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeInfo;
        puVar2 = PTR_DAT_0664a090;
        if (lVar8 == 0) {
LAB_0523a6dc:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0483c224(lVar8,*(undefined8 *)
                            UnityEngine_UIElements_EventBase<PointerMoveEvent>_TypeInfo,uVar10,
                     *(undefined8 *)PTR_DAT_0664a090);
        lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
        FUN_051ac524(lVar9,0);
        uStack0000000000000008 = *(undefined1 *)(lVar6 + 0x18);
        uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
        if ((lVar9 == 0) ||
           (FUN_0483c224(lVar9,*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar2), param_1 == 0))
        goto LAB_0523a6dc;
        uVar5 = FUN_05200208(param_1,lVar8,lVar9,0,0);
        goto LAB_0523a600;
      }
      plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
      if (plVar7 == (long *)0x0) goto LAB_0523a6dc;
      if ((param_1 != 0) &&
         (lVar6 = thunk_FUN_02d8a53c(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_0523a6e4:
        uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar10,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_0523a6e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar7[4] = param_1;
      thunk_FUN_02dc1ef0(plVar7 + 4,param_1);
      lVar6 = thunk_FUN_02d8a53c(param_2,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar6 == 0) goto LAB_0523a6e4;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_0523a6e0;
      plVar7[5] = param_2;
      thunk_FUN_02dc1ef0(plVar7 + 5,param_2);
      puVar11 = (undefined8 *)UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar11 = (undefined8 *)UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo;
      }
    }
    FUN_05ea3014(*puVar11,plVar7,0);
  }
  uVar5 = 0;
LAB_0523a600:
  return uVar5 & 1;
}


