/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetVersion
ENTRY_POINT: 03396734
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_1_0___ovrp_GetVersion(void)

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
  long *unaff_x19;
  long unaff_x20;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_01c5d288(
              Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
              );
  FUN_01c5d288(PTR_DAT_0422fc38);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x27 + 0x6b2) = 1;
  if ((unaff_x20 != 0) && (*(int *)(unaff_x20 + 0x24) == 8)) {
    uVar4 = FUN_03396c28();
    return uVar4;
  }
  if (unaff_x19 == (long *)0x0) {
LAB_03396b44:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 != 5) {
      switch(iVar2) {
      case 1:
        uVar4 = FUN_033974a8();
        return uVar4;
      case 2:
        uVar4 = FUN_03397f9c();
        return uVar4;
      case 3:
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar6 != (long *)0x0) {
          pcVar9 = *(code **)(*plVar6 + 0x168);
          goto LAB_03396804;
        }
        goto LAB_03396b44;
      default:
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000008 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = uVar3;
        uVar4 = FUN_03307544(&stack0x00000008,0);
        uVar7 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
                                  );
        FUN_03146988(uVar7,uVar4,0);
        break;
      case 6:
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
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
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar6);
        }
        uVar4 = *(undefined8 *)PTR_DAT_0422fb40;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar4,0);
        uVar5 = FUN_032e935c();
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_032556a4(plVar6,0);
          return uVar4;
        }
        uVar5 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2();
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
        FUN_032e04b8(uVar4,0);
        uVar5 = FUN_032e935c();
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
        pcVar9 = *(code **)(*unaff_x19 + 0x198);
LAB_03396804:
        (*pcVar9)();
        lVar8 = *(long *)PTR_DAT_042305b0;
        if (*(int *)(lVar8 + 0xe0) == 0) {
LAB_03396824:
          thunk_FUN_01c1d1e8(lVar8);
        }
LAB_03396828:
        FUN_03295500(0);
        uVar4 = FUN_033985d4();
        return uVar4;
      }
      goto LAB_03396b18;
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar5 & 1) != 0);
  thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__);
LAB_03396b18:
  uVar4 = FUN_0335cdc4();
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar7);
}


