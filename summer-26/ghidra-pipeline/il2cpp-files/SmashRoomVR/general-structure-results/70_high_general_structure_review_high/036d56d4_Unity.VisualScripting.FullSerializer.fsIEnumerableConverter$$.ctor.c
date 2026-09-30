/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsIEnumerableConverter$$.ctor
ENTRY_POINT: 036d56d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_fsIEnumerableConverter___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01ad9084(
                    Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                    );
  thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
  thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
  thunk_FUN_01ad9084(PTR_DAT_03d9d5b8);
  *(undefined1 *)(unaff_x20 + 0x5cb) = 1;
  FUN_03b1216c();
  if (*(long *)(unaff_x19 + 0x220) == 0) {
    *(undefined8 *)(unaff_x19 + 0x220) =
         **(undefined8 **)
           (*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ + 0xb8);
    thunk_FUN_01b4f09c();
  }
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  lVar5 = FUN_01e8a9f8();
  if (lVar5 == 0) {
    *(undefined1 *)(unaff_x19 + 0x160) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x160) = 1;
    uVar6 = FUN_01e8a9f8();
    *(undefined8 *)(unaff_x19 + 0x168) = uVar6;
    thunk_FUN_01b4f09c(unaff_x19 + 0x168);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar7 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((uVar7 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 600);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03922f24(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x138);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_01b47fd0(*(undefined8 *)StringLiteral_2724,1);
        uVar6 = *(undefined8 *)PTR_DAT_03d9d5b0;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                            );
        }
        lVar5 = FUN_0304eec0(uVar6,0);
        if (plVar8 == (long *)0x0) goto LAB_036d5d50;
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar6,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar8[4] = lVar5;
        thunk_FUN_01b4f09c(plVar8 + 4,lVar5);
        lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391ff60(lVar5,*(undefined8 *)PTR_DAT_03d9d5b8,plVar8,0);
        if (lVar5 == 0) goto LAB_036d5d50;
        FUN_03923d4c(lVar5,0x34,0);
        lVar9 = FUN_0391fab4(lVar5,0);
        if (((*(long *)(unaff_x19 + 0x138) == 0) ||
            (lVar10 = FUN_036dfed8(*(long *)(unaff_x19 + 0x138),0), lVar10 == 0)) ||
           (uVar6 = FUN_03928c2c(lVar10,0), lVar9 == 0)) goto LAB_036d5d50;
        FUN_03929618(lVar9,uVar6,0);
        lVar9 = FUN_0391fab4(lVar5,0);
        if (lVar9 == 0) goto LAB_036d5d50;
        FUN_0392a690(lVar9,0);
        lVar9 = FUN_0391c2b8();
        if (lVar9 == 0) goto LAB_036d5d50;
        uVar4 = FUN_0391faf0(lVar9,0);
        FUN_0391fb2c(lVar5,uVar4,0);
        uVar6 = FUN_01ed712c(lVar5,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                            );
        *(undefined8 *)(unaff_x19 + 0x248) = uVar6;
        thunk_FUN_01b4f09c(unaff_x19 + 0x248);
        uVar6 = FUN_01ed712c(lVar5,*(undefined8 *)PTR_DAT_03d9d580);
        *(undefined8 *)(unaff_x19 + 600) = uVar6;
        thunk_FUN_01b4f09c(unaff_x19 + 600,uVar6);
        lVar9 = *(long *)(unaff_x19 + 600);
        if (*(int *)(*(long *)PTR_DAT_03d9d588 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_039acb70(0);
        uVar11 = FUN_039066e4(0);
        if (lVar9 == 0) goto LAB_036d5d50;
        FUN_03af8d1c(lVar9,uVar6,uVar11,0);
        plVar8 = (long *)FUN_01ed7044(lVar5,*(undefined8 *)PTR_DAT_03d9cdd0);
        if (plVar8 == (long *)0x0) goto LAB_036d5d50;
        (**(code **)(*plVar8 + 0x2f8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x300));
        FUN_036d5d64();
      }
    }
  }
  uVar6 = FUN_01e8a9f8();
  *(undefined8 *)(unaff_x19 + 0x108) = uVar6;
  thunk_FUN_01b4f09c(unaff_x19 + 0x108);
  lVar5 = FUN_01e8b6d8();
  if (lVar5 == 0) goto LAB_036d5d50;
  if (1 < *(int *)(lVar5 + 0x18)) {
    plVar8 = *(long **)(lVar5 + 0x28);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x170) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_03d9d590;
      bVar1 = *(byte *)(lVar5 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
          plVar12 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x170) = plVar12;
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar8 = (long *)0x0;
      }
    }
    thunk_FUN_01b4f09c(unaff_x19 + 0x170,plVar8);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0391f968(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_036d5d50;
    uVar6 = FUN_01e8a9f8(*(long *)(unaff_x19 + 0x110),*(undefined8 *)PTR_DAT_03d9d570);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
    thunk_FUN_01b4f09c(unaff_x19 + 0x120);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0391f968(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 600);
    if (*(int *)(*(long *)PTR_DAT_03d9d588 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_039acb70(0);
    uVar11 = FUN_039066e4(0);
    if (lVar5 == 0) goto LAB_036d5d50;
    FUN_03af8d1c(lVar5,uVar6,uVar11,0);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0391f968(uVar6,0,0);
  puVar3 = Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__;
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x138);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    FUN_0392e4c8();
    if (lVar5 == 0) goto LAB_036d5d50;
    FUN_039affc0(lVar5,uVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x138);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_0392e4c8();
    if (lVar5 == 0) goto LAB_036d5d50;
    FUN_039affc0(lVar5,uVar6,0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_036d5d50;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x150) + 0x118);
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                );
      FUN_02200540();
      if (lVar5 == 0) goto LAB_036d5d50;
      FUN_02205354(lVar5,uVar6,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
    }
    FUN_036d3a30();
  }
  puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_46__;
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__;
  lVar5 = *(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_02518558();
  if (lVar5 != 0) {
    FUN_02898410(lVar5,uVar6,
                 *(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_47__
                );
    return;
  }
LAB_036d5d50:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


