/*
FUNCTION_NAME: System.Net.CookieTokenizer$$Reset
ENTRY_POINT: 055916b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 System_Net_CookieTokenizer__Reset(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x23;
  long lVar9;
  undefined *puVar5;
  
  if (in_w9 == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar1 = (long *)FUN_04d8a7b0();
  if (plVar1 == (long *)0x0) goto LAB_05591a78;
  uVar2 = (**(code **)(*plVar1 + 0x298))
                    (plVar1,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar1 + 0x2a0));
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_05591c68(uVar6);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x23 + 0xe0));
    }
    uVar2 = FUN_04d94540(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar7 == 0) goto LAB_05591a78;
      plVar1 = (long *)FUN_04d95cb4(lVar7,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x23 + 0xe0) + 0xb8) + 0x10),0);
      uVar2 = FUN_04cb7c3c(plVar1,0,0);
      if ((uVar2 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x10);
        if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar7 == 0) goto LAB_05591a78;
        plVar1 = (long *)FUN_04d95ce4(lVar7,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Remove__
                                      ,0x34,0,*(undefined8 *)
                                               (*(long *)(*(long *)(unaff_x23 + 0xe0) + 0xb8) + 0x10
                                               ),0,0);
      }
      if (plVar1 == (long *)0x0) goto LAB_05591a78;
      lVar7 = (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(*plVar1 + 0x3e0));
      if (lVar7 == 0) goto LAB_05591a78;
      plVar1 = (long *)FUN_04d95e40(lVar7,*(undefined8 *)
                                           UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo
                                    ,0);
      uVar2 = FUN_04cb9a4c(plVar1,0,0);
      if ((uVar2 & 1) == 0) {
        if (plVar1 == (long *)0x0) goto LAB_05591a78;
        uVar6 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      }
      else {
        lVar7 = *(long *)(unaff_x23 + 0x10);
        if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar6 = FUN_04d8a7b0(lVar7 + 0x20,0);
      }
      *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
      thunk_FUN_02bb0e9c();
      lVar7 = *(long *)(unaff_x19 + 0x10);
      plVar1 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
      if (plVar1 == (long *)0x0) goto LAB_05591a78;
      lVar9 = *(long *)(unaff_x19 + 0x28);
      if ((lVar9 != 0) &&
         (lVar3 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_05591bc8;
      if ((int)plVar1[3] == 0) goto LAB_05591b28;
      plVar1[4] = lVar9;
      thunk_FUN_02bb0e9c(plVar1 + 4,lVar9);
      if (lVar7 == 0) goto LAB_05591a78;
      uVar6 = FUN_04d95cb4(lVar7,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                           plVar1,0);
      uVar2 = FUN_04cb7c3c(uVar6,0,0);
      if ((uVar2 & 1) == 0) goto LAB_05591a64;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
      thunk_FUN_02ba3594(
                        Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                        );
      FUN_0275e12c();
      puVar5 = 
      Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster_RaycastHitData>_Remove__
      ;
      goto LAB_05591aac;
    }
  }
  else {
    uVar6 = 0;
  }
  uVar8 = *(undefined8 *)PTR_DAT_0632c300;
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar1 = (long *)FUN_04d8a7b0(uVar8,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x298))
                      (plVar1,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar1 + 0x2a0));
    if ((uVar2 & 1) != 0) {
      thunk_FUN_02ba3594(PTR_DAT_06312a10);
      FUN_0275e12c();
      uVar6 = FUN_04d046d8(0);
      plVar1 = *(long **)(unaff_x19 + 0x10);
      FUN_0275e13c(plVar1);
      uVar8 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
      uVar4 = thunk_FUN_02ba3594(
                                Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TryGetValue__
                                );
      uVar8 = FUN_04c0b058(uVar6,uVar4,uVar8,0);
      thunk_FUN_02ba3594(PTR_DAT_06312c98);
      uVar6 = thunk_FUN_02b79644();
      FUN_04d76a30(uVar6,uVar8,0);
LAB_05591bb0:
      uVar8 = thunk_FUN_02ba3594(
                                Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar6,uVar8);
    }
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_04d94540(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar1 = (long *)FUN_05591e50(uVar6);
      uVar2 = FUN_04cb9a4c(plVar1,0,0);
      if ((uVar2 & 1) != 0) {
        plVar1 = *(long **)(unaff_x19 + 0x10);
        FUN_0275e13c(plVar1);
        uVar6 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
        uVar8 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_set_Item__
                                  );
        uVar4 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster_RaycastHitData>__ctor__
                                  );
        uVar8 = FUN_04c0a5c4(uVar8,uVar6,uVar4,0);
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        FUN_04d7b3f4(uVar6,uVar8,0);
        goto LAB_05591bb0;
      }
      if (plVar1 == (long *)0x0) goto LAB_05591a78;
      uVar6 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    }
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
    thunk_FUN_02bb0e9c();
    lVar7 = *(long *)(unaff_x19 + 0x10);
    plVar1 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
    if (plVar1 != (long *)0x0) {
      lVar9 = *(long *)(unaff_x19 + 0x28);
      if ((lVar9 != 0) &&
         (lVar3 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_05591bc8:
        uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,0);
      }
      if ((int)plVar1[3] == 0) {
LAB_05591b28:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar1[4] = lVar9;
      thunk_FUN_02bb0e9c(plVar1 + 4,lVar9);
      if (lVar7 != 0) {
        uVar6 = FUN_04d95cb4(lVar7,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                             plVar1,0);
        uVar2 = FUN_04cb7c3c(uVar6,0,0);
        if ((uVar2 & 1) == 0) {
LAB_05591a64:
          return *unaff_x20;
        }
        uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
        thunk_FUN_02ba3594(
                          Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                          );
        FUN_0275e12c();
        puVar5 = 
        Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_get_Item__
        ;
LAB_05591aac:
        uVar4 = thunk_FUN_02ba3594(puVar5);
        uVar8 = FUN_05591f54(uVar8,uVar4,uVar6);
        uVar6 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar8,uVar6);
      }
    }
  }
LAB_05591a78:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


