/*
FUNCTION_NAME: FUN_05ab638c
ENTRY_POINT: 05ab638c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_05ab638c(long param_1,long *param_2,long *param_3,uint param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  
  puVar2 = OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo;
                    /* try { // try from 05ab63b0 to 05bb63b7 has its CatchHandler @ 05ab6730 */
  if ((DAT_06dc1ddf & 1) == 0) {
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115d0);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_SetResult__
                );
    FUN_02d965b8(PTR_DAT_06a115a0);
    FUN_02d965b8(PTR_DAT_06a115d8);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(PTR_DAT_06a0a838);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo);
    DAT_06dc1ddf = 1;
  }
  puVar19 = (ulong *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05b08194(lVar5,0);
  puVar3 = PTR_DAT_06a115d0;
  puVar2 = PTR_DAT_06a10f28;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*puVar19 + 0x130);
    if (bVar1 <= *(byte *)(*param_3 + 0x130)) {
      plVar10 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *puVar19) {
        plVar10 = (long *)0x0;
      }
      goto LAB_05ab64dc;
    }
  }
  plVar10 = (long *)0x0;
LAB_05ab64dc:
  do {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)puVar2,0);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_02dfd288(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                        );
      uVar9 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WrappedDistributedAuthorityService_<JoinSessionForLobbyIdAsync>d__13>__
                                );
      FUN_05ab1b08(uVar9,uVar7,0,0);
LAB_05ab6a40:
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_SetStateMachine__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar9,uVar7);
    }
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar8 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)puVar3,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
      uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      uVar8 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)PTR_DAT_06a115a0,0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar8 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)
                                          OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_0536ba54(uVar7,*(undefined8 *)PTR_DAT_06a0a838,0);
          if ((((uVar8 & 1) != 0) &&
              (uVar8 = FUN_0536ba54(uVar7,*(undefined8 *)
                                           OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo
                                    ,0), (uVar8 & 1) != 0)) &&
             (uVar8 = FUN_0536ba54(uVar7,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_SetResult__
                                   ,0), (uVar8 & 1) != 0)) {
            thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VivoxJWTTokenGen_<FetchLoginMintTokenAsync>d__5>__
                              );
            uVar9 = thunk_FUN_02dd3144();
            uVar15 = thunk_FUN_02dfd288(
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_get_Task__
                                       );
            FUN_05ab87a8(uVar9,uVar15,uVar7);
            goto LAB_05ab6a40;
          }
        }
        else {
          if (*param_2 == 0) goto LAB_05ab6a08;
          FUN_05b0e870(*param_2,1,0);
        }
        goto LAB_05ab68c0;
      }
      if (plVar10 == (long *)0x0) {
LAB_05ab6678:
        plVar10 = (long *)thunk_FUN_02dd3144();
        FUN_05b0c958(plVar10,0);
        if (*param_2 == 0) goto LAB_05ab6a08;
        plVar6 = (long *)(*param_2 + 0xb8);
        *plVar6 = (long)plVar10;
        uVar8 = LeanTween__value(plVar6,plVar10);
      }
      else {
        if (*(int *)(*puVar19 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dc1dca == '\0') {
          FUN_02d965b8(puVar19);
          DAT_06dc1dca = '\x01';
        }
        uVar8 = *puVar19;
        if (*(int *)(uVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          uVar8 = *puVar19;
        }
        if (plVar10 == (long *)**(long **)(uVar8 + 0xb8)) goto LAB_05ab6678;
      }
      if ((param_3 == (long *)0x0) || (param_3[0xd] == 0)) {
LAB_05ab66c4:
        if (plVar10 == (long *)0x0) goto LAB_05ab6a08;
      }
      else {
        if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0xb0), lVar11 == 0))
        goto LAB_05ab6a08;
        uVar8 = FUN_05bca8a4(lVar11,0);
        if ((uVar8 & 1) != 0) goto LAB_05ab66c4;
        plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                             OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo
                                           );
        FUN_05b1a060(plVar6,0);
        if (plVar10 == (long *)0x0) goto LAB_05ab6a08;
        plVar10[0x13] = (long)plVar6;
        LeanTween__value(plVar10 + 0x13,plVar6);
        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                     OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo
                                   );
        FUN_05b1a130(lVar11,0);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        (**(code **)(*plVar6 + 0x228))(plVar6,lVar11,*(undefined8 *)(*plVar6 + 0x230));
        if ((*param_2 == 0) || (lVar11 == 0)) goto LAB_05ab6a08;
        FUN_05b1a070(lVar11,*(undefined8 *)(*param_2 + 0xb0),0);
        puVar4 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
        lVar17 = *param_2;
        if (lVar17 == 0) goto LAB_05ab6a08;
        lVar14 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar17 + 0x10);
        *(undefined4 *)(lVar17 + 0x10) = 0;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar14 = *(long *)puVar4;
        }
        uVar8 = FUN_05b0e9e8(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      }
      if (plVar10[0x13] == 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        uVar18 = FUN_05b0cb78(plVar10,0);
        uVar13 = FUN_05b0cc10(plVar10,0);
      }
      else {
        lVar11 = FUN_05ab6b1c(uVar8,plVar10);
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar9 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        uVar15 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           lVar11 == 0)) goto LAB_05ab6a08;
        uVar18 = *(undefined8 *)(lVar11 + 0x50);
        uVar13 = FUN_05b0cc10(plVar10,0);
      }
      lVar11 = FUN_05ab35b8(param_1,uVar7,uVar9,uVar15,uVar12,param_4 & 1,param_5,uVar18,uVar13);
      puVar19 = (ulong *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
      if (lVar11 != 0) {
        if (lVar5 == 0) goto LAB_05ab6a08;
        FUN_05b0992c(lVar5,lVar11,0);
      }
    }
    else {
      if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
      uVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      uVar8 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)PTR_DAT_06a115d8,0);
      if ((uVar8 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_05ab6a08;
        plVar16 = *(long **)(param_1 + 0x38);
        uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        plVar6 = *(long **)(param_1 + 0x20);
        if ((plVar6 == (long *)0x0) ||
           (uVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
           plVar16 == (long *)0x0)) goto LAB_05ab6a08;
        (**(code **)(*plVar16 + 0x1f8))(plVar16,uVar7,uVar9,*(undefined8 *)(*plVar16 + 0x200));
      }
    }
LAB_05ab68c0:
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_05ab6a08:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
    if ((uVar8 & 1) == 0) {
      if (((param_4 & 1) == 0) && (plVar10 != (long *)0x0)) {
        FUN_05ab6a8c(param_1,plVar10,lVar5);
        return;
      }
      return;
    }
  } while( true );
}


