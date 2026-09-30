/*
FUNCTION_NAME: FUN_05591574
ENTRY_POINT: 05591574
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 127
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_05591574(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar4;
  
  if ((DAT_066d171c & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0632c300);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                );
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(UnityEngine_UIElements_PropagationPaths_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Remove__
                );
    DAT_066d171c = 1;
  }
  puVar4 = PTR_DAT_06312310;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04d938a0(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar9 = thunk_FUN_02b79644();
    uVar5 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>__ctor__
                              );
    FUN_04d7b3f4(uVar9,uVar5,0);
    goto LAB_05591aac;
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  uVar5 = *puVar6;
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04d94540(uVar5,0,0);
  if ((uVar1 & 1) != 0) goto LAB_05591a64;
  plVar7 = *(long **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) != 3) {
    FUN_0275e13c(plVar7);
    uVar5 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
    uVar9 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Remove__
                              );
    uVar5 = FUN_04bffdac(uVar5,uVar9,0);
LAB_05591b00:
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar9 = thunk_FUN_02b79644();
    FUN_04d7b3f4(uVar9,uVar5,0);
LAB_05591bb0:
    uVar5 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9,uVar5);
  }
  if (plVar7 == (long *)0x0) goto LAB_05591a78;
  uVar1 = FUN_04d952d0(plVar7,0);
  if ((uVar1 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
      *puVar6 = uVar5;
      thunk_FUN_02bb0e9c(puVar6,uVar5);
      goto LAB_05591a64;
    }
    goto LAB_05591a78;
  }
  uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo;
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar7 = (long *)FUN_04d8a7b0(uVar5,0);
  if (plVar7 == (long *)0x0) goto LAB_05591a78;
  uVar1 = (**(code **)(*plVar7 + 0x298))
                    (plVar7,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar7 + 0x2a0));
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_05591c68(uVar5);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar4 + 0xe0));
    }
    uVar1 = FUN_04d94540(uVar5,0,0);
    if ((uVar1 & 1) != 0) goto LAB_05591740;
    lVar8 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar8 == 0) goto LAB_05591a78;
    plVar7 = (long *)FUN_04d95cb4(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo,
                                  *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0xe0) + 0xb8) + 0x10)
                                  ,0);
    uVar1 = FUN_04cb7c3c(plVar7,0,0);
    if ((uVar1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar8 == 0) goto LAB_05591a78;
      plVar7 = (long *)FUN_04d95ce4(lVar8,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Remove__
                                    ,0x34,0,*(undefined8 *)
                                             (*(long *)(*(long *)(puVar4 + 0xe0) + 0xb8) + 0x10),0,0
                                   );
    }
    if (plVar7 == (long *)0x0) goto LAB_05591a78;
    lVar8 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
    if (lVar8 == 0) goto LAB_05591a78;
    plVar7 = (long *)FUN_04d95e40(lVar8,*(undefined8 *)
                                         UnityEngine_Rendering_RenderersParameters_ParamNames_TypeInfo
                                  ,0);
    uVar1 = FUN_04cb9a4c(plVar7,0,0);
    if ((uVar1 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05591a78;
      uVar5 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x10);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_04d8a7b0(lVar8 + 0x20,0);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_02bb0e9c(puVar6,uVar5);
    lVar8 = *(long *)(param_1 + 0x10);
    plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
    if (plVar7 == (long *)0x0) goto LAB_05591a78;
    lVar10 = *(long *)(param_1 + 0x28);
    if ((lVar10 != 0) &&
       (lVar2 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0))
    goto LAB_05591bc8;
    if ((int)plVar7[3] == 0) goto LAB_05591b28;
    plVar7[4] = lVar10;
    thunk_FUN_02bb0e9c(plVar7 + 4,lVar10);
    if (lVar8 == 0) goto LAB_05591a78;
    uVar5 = FUN_04d95cb4(lVar8,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                         plVar7,0);
    uVar1 = FUN_04cb7c3c(uVar5,0,0);
    if ((uVar1 & 1) == 0) goto LAB_05591a64;
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_02ba3594(
                      Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                      );
    FUN_0275e12c();
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster_RaycastHitData>_Remove__
    ;
  }
  else {
    uVar5 = 0;
LAB_05591740:
    uVar9 = *(undefined8 *)PTR_DAT_0632c300;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar7 = (long *)FUN_04d8a7b0(uVar9,0);
    if (plVar7 == (long *)0x0) goto LAB_05591a78;
    uVar1 = (**(code **)(*plVar7 + 0x298))
                      (plVar7,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar1 & 1) != 0) {
      thunk_FUN_02ba3594(PTR_DAT_06312a10);
      FUN_0275e12c();
      uVar5 = FUN_04d046d8(0);
      plVar7 = *(long **)(param_1 + 0x10);
      FUN_0275e13c(plVar7);
      uVar9 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
      uVar3 = thunk_FUN_02ba3594(
                                Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TryGetValue__
                                );
      uVar5 = FUN_04c0b058(uVar5,uVar3,uVar9,0);
      thunk_FUN_02ba3594(PTR_DAT_06312c98);
      uVar9 = thunk_FUN_02b79644();
      FUN_04d76a30(uVar9,uVar5,0);
      goto LAB_05591bb0;
    }
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_04d94540(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      plVar7 = (long *)FUN_05591e50(uVar5);
      uVar1 = FUN_04cb9a4c(plVar7,0,0);
      if ((uVar1 & 1) != 0) {
        plVar7 = *(long **)(param_1 + 0x10);
        FUN_0275e13c(plVar7);
        uVar5 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
        uVar9 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_set_Item__
                                  );
        uVar3 = thunk_FUN_02ba3594(
                                  Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster_RaycastHitData>__ctor__
                                  );
        uVar5 = FUN_04c0a5c4(uVar9,uVar5,uVar3,0);
        goto LAB_05591b00;
      }
      if (plVar7 == (long *)0x0) goto LAB_05591a78;
      uVar5 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    }
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_02bb0e9c(puVar6,uVar5);
    lVar8 = *(long *)(param_1 + 0x10);
    plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
    if (plVar7 == (long *)0x0) {
LAB_05591a78:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *(long *)(param_1 + 0x28);
    if ((lVar10 != 0) &&
       (lVar2 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0)) {
LAB_05591bc8:
      uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_05591b28:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar7[4] = lVar10;
    thunk_FUN_02bb0e9c(plVar7 + 4,lVar10);
    if (lVar8 == 0) goto LAB_05591a78;
    uVar5 = FUN_04d95cb4(lVar8,*(undefined8 *)UnityEngine_UIElements_PropagationPaths_TypeInfo,
                         plVar7,0);
    uVar1 = FUN_04cb7c3c(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
LAB_05591a64:
      return *puVar6;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_02ba3594(
                      Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                      );
    FUN_0275e12c();
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_get_Item__;
  }
  uVar3 = thunk_FUN_02ba3594(puVar4);
  uVar9 = FUN_05591f54(uVar9,uVar3,uVar5);
LAB_05591aac:
  uVar5 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar9,uVar5);
}


