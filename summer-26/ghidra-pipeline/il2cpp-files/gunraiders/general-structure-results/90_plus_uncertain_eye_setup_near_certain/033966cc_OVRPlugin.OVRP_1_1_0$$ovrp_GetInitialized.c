/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetInitialized
ENTRY_POINT: 033966cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
OVRPlugin_OVRP_1_1_0__ovrp_GetInitialized
          (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  uVar4 = param_1;
  if ((DAT_045336b2 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb40);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_UnityEngine_AddressableAssets_AssetReferenceT<Texture>__ctor__);
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
                );
    FUN_01c5d288(PTR_DAT_0422fc38);
    uVar4 = FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_045336b2 = 1;
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 0x24) == 8)) {
    uVar4 = FUN_03396c28(uVar4,param_2,param_4);
    return uVar4;
  }
  if (param_2 == (long *)0x0) {
LAB_03396b44:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (iVar2 != 5) {
      switch(iVar2) {
      case 1:
        uVar4 = FUN_033974a8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar4;
      case 2:
        uVar4 = FUN_03397f9c(param_1,param_2,param_3,param_4,param_5,param_8,0);
        return uVar4;
      case 3:
        plVar6 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        if (plVar6 != (long *)0x0) {
          pcVar9 = *(code **)(*plVar6 + 0x168);
          uVar4 = *(undefined8 *)(*plVar6 + 0x170);
          goto LAB_03396804;
        }
        goto LAB_03396b44;
      default:
        FUN_019b2708(param_2);
        uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        param_10 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        param_11 = 0xffffffffffffffff;
        param_12 = uVar3;
        uVar4 = FUN_03307544(&param_10,0);
        uVar7 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
                                  );
        uVar4 = FUN_03146988(uVar7,uVar4,0);
        break;
      case 6:
        plVar6 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
                                  );
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
        FUN_033b3c58(uVar4,plVar6,0);
        return uVar4;
      case 9:
        plVar6 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
        uVar4 = *(undefined8 *)PTR_DAT_0422fb40;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_032e04b8(uVar4,0);
        uVar5 = FUN_032e935c(param_3,uVar4,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_032556a4(plVar6,0);
          return uVar4;
        }
        uVar5 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(param_3,param_4,plVar6);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        lVar8 = *(long *)PTR_DAT_042305b0;
        if (*(int *)(lVar8 + 0xe0) != 0) goto LAB_03396828;
        goto LAB_03396824;
      case 0xb:
      case 0xc:
        uVar4 = *(undefined8 *)Method_UnityEngine_AddressableAssets_AssetReferenceT<Texture>__ctor__
        ;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_032e04b8(uVar4,0);
        uVar5 = FUN_032e935c(param_3,uVar4,0);
        puVar1 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar8 = *(long *)puVar1;
          }
          return **(undefined8 **)(lVar8 + 0xb8);
        }
      case 7:
      case 8:
      case 10:
      case 0x10:
      case 0x11:
        pcVar9 = *(code **)(*param_2 + 0x198);
        uVar4 = *(undefined8 *)(*param_2 + 0x1a0);
        plVar6 = param_2;
LAB_03396804:
        plVar6 = (long *)(*pcVar9)(plVar6,uVar4);
        lVar8 = *(long *)PTR_DAT_042305b0;
        if (*(int *)(lVar8 + 0xe0) == 0) {
LAB_03396824:
          thunk_FUN_01c1d1e8(lVar8);
        }
LAB_03396828:
        uVar4 = FUN_03295500(0);
        uVar4 = FUN_033985d4(uVar4,param_2,plVar6,uVar4,param_4,param_3);
        return uVar4;
      }
      goto LAB_03396b18;
    }
    uVar5 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  } while ((uVar5 & 1) != 0);
  uVar4 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                            );
LAB_03396b18:
  uVar4 = FUN_0335cdc4(param_2,uVar4,0);
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar7);
}


