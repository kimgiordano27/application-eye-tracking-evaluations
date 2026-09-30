/*
FUNCTION_NAME: FUN_036d5598
ENTRY_POINT: 036d5598
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036d5598(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  if ((DAT_03ff75cb & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_46__);
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9d560);
    thunk_FUN_01ad9084(PTR_DAT_03d9d568);
    thunk_FUN_01ad9084(PTR_DAT_03d9d570);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d578);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_47__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cdd0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d580);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d588);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d590);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d598);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d4e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5a8);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5b0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(StringLiteral_2724);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9d5b8);
    DAT_03ff75cb = 1;
  }
  puVar2 = PTR_DAT_03d9d560;
  FUN_03b1216c(param_1,0);
  if (*(long *)(param_1 + 0x220) == 0) {
    *(undefined8 *)(param_1 + 0x220) =
         **(undefined8 **)
           (*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ + 0xb8);
    thunk_FUN_01b4f09c();
  }
  puVar3 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_03d9d568;
  if (lVar6 == 0) {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x160) = 1;
    uVar7 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x168) = uVar7;
    thunk_FUN_01b4f09c(param_1 + 0x168);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar8 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 600);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x138);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_01b47fd0(*(undefined8 *)StringLiteral_2724,1);
        uVar7 = *(undefined8 *)PTR_DAT_03d9d5b0;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                            );
        }
        lVar6 = FUN_0304eec0(uVar7,0);
        if (plVar9 == (long *)0x0) goto LAB_036d5d50;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
          uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar7,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar9[4] = lVar6;
        thunk_FUN_01b4f09c(plVar9 + 4,lVar6);
        lVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391ff60(lVar6,*(undefined8 *)PTR_DAT_03d9d5b8,plVar9,0);
        if (lVar6 == 0) goto LAB_036d5d50;
        FUN_03923d4c(lVar6,0x34,0);
        lVar10 = FUN_0391fab4(lVar6,0);
        if (((*(long *)(param_1 + 0x138) == 0) ||
            (lVar11 = FUN_036dfed8(*(long *)(param_1 + 0x138),0), lVar11 == 0)) ||
           (uVar7 = FUN_03928c2c(lVar11,0), lVar10 == 0)) goto LAB_036d5d50;
        FUN_03929618(lVar10,uVar7,0);
        lVar10 = FUN_0391fab4(lVar6,0);
        if (lVar10 == 0) goto LAB_036d5d50;
        FUN_0392a690(lVar10,0);
        lVar10 = FUN_0391c2b8(param_1,0);
        if (lVar10 == 0) goto LAB_036d5d50;
        uVar5 = FUN_0391faf0(lVar10,0);
        FUN_0391fb2c(lVar6,uVar5,0);
        uVar7 = FUN_01ed712c(lVar6,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                            );
        *(undefined8 *)(param_1 + 0x248) = uVar7;
        thunk_FUN_01b4f09c(param_1 + 0x248);
        uVar7 = FUN_01ed712c(lVar6,*(undefined8 *)PTR_DAT_03d9d580);
        *(undefined8 *)(param_1 + 600) = uVar7;
        thunk_FUN_01b4f09c(param_1 + 600,uVar7);
        lVar10 = *(long *)(param_1 + 600);
        if (*(int *)(*(long *)PTR_DAT_03d9d588 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_039acb70(0);
        uVar12 = FUN_039066e4(0);
        if (lVar10 == 0) goto LAB_036d5d50;
        FUN_03af8d1c(lVar10,uVar7,uVar12,0);
        plVar9 = (long *)FUN_01ed7044(lVar6,*(undefined8 *)PTR_DAT_03d9cdd0);
        if (plVar9 == (long *)0x0) goto LAB_036d5d50;
        (**(code **)(*plVar9 + 0x2f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x300));
        FUN_036d5d64(param_1);
      }
    }
  }
  puVar3 = PTR_DAT_03d9d578;
  uVar7 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__
                      );
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  thunk_FUN_01b4f09c(param_1 + 0x108);
  lVar6 = FUN_01e8b6d8(param_1,*(undefined8 *)puVar3);
  if (lVar6 == 0) goto LAB_036d5d50;
  if (1 < *(int *)(lVar6 + 0x18)) {
    plVar9 = *(long **)(lVar6 + 0x28);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_03d9d590;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar1) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x170) = plVar13;
      if (*(byte *)(*plVar9 + 0x130) < bVar1) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_01b4f09c(param_1 + 0x170,plVar9);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_036d5d50;
    uVar7 = FUN_01e8a9f8(*(long *)(param_1 + 0x110),*(undefined8 *)PTR_DAT_03d9d570);
    *(undefined8 *)(param_1 + 0x120) = uVar7;
    thunk_FUN_01b4f09c(param_1 + 0x120);
  }
  uVar7 = *(undefined8 *)(param_1 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 600);
    if (*(int *)(*(long *)PTR_DAT_03d9d588 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_039acb70(0);
    uVar12 = FUN_039066e4(0);
    if (lVar6 == 0) goto LAB_036d5d50;
    FUN_03af8d1c(lVar6,uVar7,uVar12,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar7,0,0);
  puVar3 = Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__;
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x138);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    FUN_0392e4c8(uVar7,param_1,*(undefined8 *)PTR_DAT_03d9d598,0);
    if (lVar6 == 0) goto LAB_036d5d50;
    FUN_039affc0(lVar6,uVar7,0);
    lVar6 = *(long *)(param_1 + 0x138);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_0392e4c8(uVar7,param_1,*(undefined8 *)PTR_DAT_03d9d5a8,0);
    if (lVar6 == 0) goto LAB_036d5d50;
    FUN_039affc0(lVar6,uVar7,0);
    uVar7 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x150) == 0) goto LAB_036d5d50;
      lVar6 = *(long *)(*(long *)(param_1 + 0x150) + 0x118);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                );
      FUN_02200540(uVar7,param_1,*(undefined8 *)PTR_DAT_03d9d4e8,0);
      if (lVar6 == 0) goto LAB_036d5d50;
      FUN_02205354(lVar6,uVar7,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
    }
    FUN_036d3a30(param_1);
  }
  puVar4 = PTR_DAT_03d9d5a0;
  puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_46__;
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__;
  lVar6 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
  uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02518558(uVar7,param_1,*(undefined8 *)puVar4,0);
  if (lVar6 != 0) {
    FUN_02898410(lVar6,uVar7,
                 *(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_47__
                );
    return;
  }
LAB_036d5d50:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


