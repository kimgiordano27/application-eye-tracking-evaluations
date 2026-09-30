/*
FUNCTION_NAME: System.Net.CookieTokenizer$$TokenFromName
ENTRY_POINT: 05591714
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 System_Net_CookieTokenizer__TokenFromName(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x23;
  long lVar9;
  undefined *puVar5;
  
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(unaff_x23 + 0xe0));
  }
  uVar1 = FUN_04d94540(param_1,0,0);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 055918b8 to 05691b73 has its CatchHandler @ 055918b8
                       catch() { ... } // from try @ 055918b8 with catch @ 055918b8
                       catch() { ... } // from try @ 05591b90 with catch @ 055918b8
                       catch() { ... } // from try @ 05591c18 with catch @ 055918b8
                       catch() { ... } // from try @ 05591cb4 with catch @ 055918b8 */
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar7 != 0) {
      plVar2 = (long *)FUN_04d95cb4(lVar7,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x23 + 0xe0) + 0xb8) + 0x10),0);
      uVar1 = FUN_04cb7c3c(plVar2,0,0);
      if ((uVar1 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x10);
        if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar7 == 0) goto LAB_05591a78;
        plVar2 = (long *)FUN_04d95ce4(lVar7,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Remove__
                                      ,0x34,0,*(undefined8 *)
                                               (*(long *)(*(long *)(unaff_x23 + 0xe0) + 0xb8) + 0x10
                                               ),0,0);
      }
      if (plVar2 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
        if (lVar7 != 0) {
          plVar2 = (long *)FUN_04d95e40(lVar7,*(undefined8 *)
                                               UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo
                                        ,0);
          uVar1 = FUN_04cb9a4c(plVar2,0,0);
          if ((uVar1 & 1) == 0) {
            if (plVar2 == (long *)0x0) goto LAB_05591a78;
            uVar8 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
          }
          else {
            lVar7 = *(long *)(unaff_x23 + 0x10);
            if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar8 = FUN_04d8a7b0(lVar7 + 0x20,0);
          }
          *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
          thunk_FUN_02bb0e9c();
          lVar7 = *(long *)(unaff_x19 + 0x10);
          plVar2 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
          if (plVar2 != (long *)0x0) {
            lVar9 = *(long *)(unaff_x19 + 0x28);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
            goto LAB_05591bc8;
            if ((int)plVar2[3] == 0) goto LAB_05591b28;
            plVar2[4] = lVar9;
            thunk_FUN_02bb0e9c(plVar2 + 4,lVar9);
            if (lVar7 != 0) {
              uVar8 = FUN_04d95cb4(lVar7,*(undefined8 *)
                                          UnityEngine_UIElements_PropagationPaths_TypeInfo,plVar2,0)
              ;
              uVar1 = FUN_04cb7c3c(uVar8,0,0);
              if ((uVar1 & 1) == 0) goto LAB_05591a64;
              uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
              uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
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
        }
      }
    }
  }
  else {
    uVar8 = *(undefined8 *)PTR_DAT_0632c300;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar2 = (long *)FUN_04d8a7b0(uVar8,0);
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x298))
                        (plVar2,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar2 + 0x2a0));
      if ((uVar1 & 1) != 0) {
        thunk_FUN_02ba3594(PTR_DAT_06312a10);
        FUN_0275e12c();
        uVar8 = FUN_04d046d8(0);
        plVar2 = *(long **)(unaff_x19 + 0x10);
        FUN_0275e13c(plVar2);
        uVar6 = (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
        uVar4 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TryGetValue__
                                  );
        uVar6 = FUN_04c0b058(uVar8,uVar4,uVar6,0);
        thunk_FUN_02ba3594(PTR_DAT_06312c98);
        uVar8 = thunk_FUN_02b79644();
        FUN_04d76a30(uVar8,uVar6,0);
LAB_05591bb0:
        uVar6 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar8,uVar6);
      }
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar1 = FUN_04d94540(param_1,0,0);
      if ((uVar1 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar2 = (long *)FUN_05591e50(uVar8);
        uVar1 = FUN_04cb9a4c(plVar2,0,0);
        if ((uVar1 & 1) != 0) {
          plVar2 = *(long **)(unaff_x19 + 0x10);
          FUN_0275e13c(plVar2);
          uVar8 = (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
          uVar6 = thunk_FUN_02ba3594(
                                    Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_set_Item__
                                    );
          uVar4 = thunk_FUN_02ba3594(
                                    Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster_RaycastHitData>__ctor__
                                    );
          uVar6 = FUN_04c0a5c4(uVar6,uVar8,uVar4,0);
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar8 = thunk_FUN_02b79644();
          FUN_04d7b3f4(uVar8,uVar6,0);
          goto LAB_05591bb0;
        }
        if (plVar2 == (long *)0x0) goto LAB_05591a78;
        param_1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      }
      *(undefined8 *)(unaff_x19 + 0x28) = param_1;
      thunk_FUN_02bb0e9c();
      lVar7 = *(long *)(unaff_x19 + 0x10);
      plVar2 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
      if (plVar2 != (long *)0x0) {
        lVar9 = *(long *)(unaff_x19 + 0x28);
        if ((lVar9 == 0) ||
           (lVar3 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0)) {
          if ((int)plVar2[3] != 0) {
            plVar2[4] = lVar9;
            thunk_FUN_02bb0e9c(plVar2 + 4,lVar9);
            if (lVar7 == 0) goto LAB_05591a78;
            uVar8 = FUN_04d95cb4(lVar7,*(undefined8 *)
                                        UnityEngine_UIElements_PropagationPaths_TypeInfo,plVar2,0);
            uVar1 = FUN_04cb7c3c(uVar8,0,0);
            if ((uVar1 & 1) == 0) {
LAB_05591a64:
              return *unaff_x20;
            }
            uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
            thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                              );
            FUN_0275e12c();
            puVar5 = 
            Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_get_Item__
            ;
LAB_05591aac:
            uVar4 = thunk_FUN_02ba3594(puVar5);
            uVar6 = FUN_05591f54(uVar6,uVar4,uVar8);
            uVar8 = thunk_FUN_02ba3594(
                                      Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar6,uVar8);
          }
LAB_05591b28:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
LAB_05591bc8:
        uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar8,0);
      }
    }
  }
LAB_05591a78:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


