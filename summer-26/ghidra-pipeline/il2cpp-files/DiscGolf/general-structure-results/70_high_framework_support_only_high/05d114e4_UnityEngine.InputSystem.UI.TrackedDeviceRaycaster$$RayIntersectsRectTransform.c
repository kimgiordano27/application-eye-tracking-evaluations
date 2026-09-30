/*
FUNCTION_NAME: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster$$RayIntersectsRectTransform
ENTRY_POINT: 05d114e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 UnityEngine_InputSystem_UI_TrackedDeviceRaycaster__RayIntersectsRectTransform(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  uVar2 = FUN_05362cb4();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  uVar3 = FUN_05c0d38c(uVar2,1,unaff_x19 + 0x60,0);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x78);
    uVar2 = FUN_0536d554(*(undefined8 *)
                          Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<DisplayStyle>__ctor__
                        );
    if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<int>_Add__ + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Method_System_Collections_Generic_HashSet<int>_Add__);
    }
    uVar2 = FUN_05cf2024(uVar2,0);
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x30);
      *puVar9 = uVar2;
      LeanTween__value(puVar9,uVar2);
      return 1;
    }
    goto LAB_05d1181c;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d1181c;
  FUN_05c0c1dc(*(long *)(unaff_x19 + 0x60),0);
  FUN_05d14f5c();
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d1181c;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar2 = FUN_05c0c424(*(long *)(unaff_x19 + 0x60),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d1181c;
  uVar4 = FUN_05c0b228(*(long *)(unaff_x19 + 0x60),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d1181c;
  uVar5 = FUN_05c0ab9c(*(long *)(unaff_x19 + 0x60),0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d1181c;
  uVar6 = FUN_05c0c1dc(*(long *)(unaff_x19 + 0x60),0);
  if (*(int *)(*(long *)
                Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_Remove__ +
              0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)
                        Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_Remove__
                      );
  }
  uVar2 = FUN_05ce9228(uVar10,uVar2,uVar4,uVar5,uVar6,0);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  LeanTween__value(unaff_x19 + 0x60,uVar2);
  lVar7 = *unaff_x26;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *unaff_x26;
  }
  uVar3 = FUN_05508644(uVar2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
  if ((uVar3 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x80) == '\0') {
LAB_05d11720:
      if ((*(char *)(unaff_x19 + 0x20) == '\0') &&
         ((iVar1 = FUN_0536a4b0(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_069ff540,5,
                                0), iVar1 == 0 ||
          (iVar1 = FUN_0536a4b0(*(undefined8 *)(unaff_x19 + 0x38),
                                *(undefined8 *)
                                 OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,5,0),
          iVar1 == 0)))) {
        if ((*(long *)(unaff_x19 + 0x78) != 0) &&
           (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x28), lVar7 != 0)) {
          uVar2 = 0x19b;
LAB_05d11810:
          FUN_05d084f4(lVar7,0,uVar2);
          return 0;
        }
        goto LAB_05d1181c;
      }
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05d1181c;
    lVar7 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x30),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,
                         0);
    if (lVar7 == 0) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      goto LAB_05d11720;
    }
    iVar1 = FUN_0536a4b0(lVar7,*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,5,0);
    *(bool *)(unaff_x19 + 0x80) = iVar1 == 0;
    if (iVar1 != 0) {
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x28), lVar7 == 0)) goto LAB_05d1181c;
      uVar2 = 0x1f5;
      goto LAB_05d11810;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar2 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x30),
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                         ,0);
    iVar1 = FUN_0536a4b0(uVar2,*(undefined8 *)
                                Assets_Scripts_Menu_PlayerSave_<>c__DisplayClass56_0_TypeInfo,5,0);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(long *)(unaff_x19 + 0x78) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x78) + 0x28) != 0))
    {
      lVar7 = FUN_05d10a10();
      lVar8 = *unaff_x25;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar8);
        lVar8 = *unaff_x25;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        FUN_05c22620(lVar7,lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
        return 1;
      }
    }
  }
LAB_05d1181c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


