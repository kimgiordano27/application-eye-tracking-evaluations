/*
FUNCTION_NAME: FUN_05ac346c
ENTRY_POINT: 05ac346c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_05ac346c(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if ((DAT_06dc1e17 & 1) == 0) {
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_02d965b8(PTR_DAT_06a16428);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                );
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_02d965b8(PTR_DAT_06a10fd8);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    DAT_06dc1e17 = 1;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_05ac3d10;
    if (param_2[10] == 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
    else {
      FUN_05ac54d4(param_1,param_2);
      lVar11 = param_2[10];
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo)
      ;
      FUN_05bca5c4(uVar5,lVar11,uVar13,0);
      FUN_05b1b1a8(param_2,uVar5,0);
    }
    uVar10 = *(uint *)((long)param_2 + 0x94);
    if (uVar10 != 0xff) {
      if (uVar10 == 0x100) {
        uVar10 = *(uint *)(param_1 + 0x70);
      }
      else if ((uVar10 & 0xfffffff9) != 0) {
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                     ,param_2,0);
        uVar10 = *(uint *)((long)param_2 + 0x94);
      }
      uVar10 = uVar10 & 6;
    }
    uVar12 = *(uint *)(param_2 + 0xb);
    *(uint *)(param_2 + 0x18) = uVar10;
    if (uVar12 == 0x100) {
      uVar12 = *(uint *)(param_1 + 0x74);
      if (uVar12 != 0xff) {
        uVar12 = uVar12 & 6;
      }
    }
    else if (uVar12 == 0xff) {
      uVar12 = 0xff;
    }
    else {
      if ((uVar12 & 0xfffffff9) != 0) {
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__,
                     param_2,0);
        uVar12 = *(uint *)(param_2 + 0xb);
      }
      uVar12 = uVar12 & 6;
    }
    *(uint *)(param_2 + 0xe) = uVar12;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_05ac3d10;
    if (param_2[10] != 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
  }
  if (param_2[0x13] == 0) {
    if (param_2[0x14] != 0) {
      plVar3 = (long *)(param_2[0x14] + 0x28);
      *plVar3 = (long)param_2;
      LeanTween__value(plVar3,param_2);
      System_Xml_XmlRegisteredNonCachedStream__ReadByte(param_1,param_2[0x14]);
    }
    uVar5 = FUN_05b0cb78(param_2,0);
    FUN_05ac5d9c(param_1,uVar5,param_2[0x16],param_2);
    goto LAB_05ac39c4;
  }
  plVar3 = (long *)(param_2[0x13] + 0x28);
  *plVar3 = (long)param_2;
  LeanTween__value(plVar3,param_2);
  FUN_05ac1c10(param_1,param_2[0x13]);
  if (param_2[0x14] == 0) {
    FUN_05b0cb78(param_2,0);
  }
  plVar3 = (long *)param_2[0x13];
  if (plVar3 == (long *)0x0) goto LAB_05ac3d10;
  lVar11 = *plVar3;
  bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo + 0x130);
  if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo)) {
    bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo +
                     0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar3);
    }
    lVar11 = (**(code **)(lVar11 + 0x218))(plVar3,*(undefined8 *)(lVar11 + 0x220));
    if (lVar11 == 0) {
      uVar5 = FUN_05b19e58(param_2,0);
      puVar2 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      lVar11 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar11);
        lVar11 = *(long *)puVar2;
      }
      uVar4 = FUN_05bcaaa0(uVar5,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_05b19e58(param_2,0);
        if (lVar11 != 0) {
          uVar5 = *(undefined8 *)(lVar11 + 0x10);
          lVar11 = FUN_05b19e58(param_2,0);
          if (lVar11 != 0) {
            FUN_05bfdfc8(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                         ,uVar5,*(undefined8 *)(lVar11 + 0x18),param_2,0);
            goto LAB_05ac39c4;
          }
        }
        goto LAB_05ac3d10;
      }
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__,
                   param_2,0);
      goto LAB_05ac39c4;
    }
    if (*(char *)((long)plVar3 + 0x59) == '\0') {
      uVar4 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
      if ((uVar4 & 1) != 0) {
        FUN_05b0c090(plVar3,1,0);
      }
    }
    lVar11 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    if (lVar11 == 0) goto LAB_05ac3d10;
    *(undefined8 *)(lVar11 + 0x28) = plVar3;
    LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar3);
    uVar5 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    FUN_05ac1c10(param_1,uVar5);
    plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    puVar2 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo;
    if (plVar6 == (long *)0x0) {
LAB_05ac3830:
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (plVar6 == (long *)0x0) goto LAB_05ac3d10;
      lVar11 = *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo))
      goto LAB_05ac3830;
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (plVar6 == (long *)0x0) goto LAB_05ac3d10;
      lVar11 = *(long *)puVar2;
    }
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11))
    {
LAB_05ac3d1c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar6);
    }
    if (plVar6[0xd] == 0) {
LAB_05ac3d10:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_05bca8a4(plVar6[0xd],0);
    if ((uVar4 & 1) == 0) {
      FUN_05ac5b80(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[0xd]);
    }
    else {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                   ,*(undefined8 *)PTR_DAT_06a16428,plVar6,0);
    }
    if (plVar6[10] != 0) {
      puVar7 = (undefined8 *)(plVar6[10] + 0x28);
      *puVar7 = plVar6;
      LeanTween__value(puVar7,plVar6);
      System_Xml_XmlRegisteredNonCachedStream__ReadByte(param_1,plVar6[10]);
    }
    lVar11 = plVar6[0xb];
    lVar9 = plVar6[0xc];
LAB_05ac39a0:
    FUN_05ac5d9c(param_1,lVar11,lVar9,plVar6);
    FUN_05ac1cb0(param_1,plVar6);
  }
  else {
    lVar11 = (**(code **)(lVar11 + 0x218))(plVar3,*(undefined8 *)(lVar11 + 0x220));
    if (lVar11 != 0) {
      lVar11 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (lVar11 == 0) goto LAB_05ac3d10;
      *(undefined8 *)(lVar11 + 0x28) = plVar3;
      LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar3);
      uVar5 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      FUN_05ac1c10(param_1,uVar5);
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      puVar2 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      if (plVar6 == (long *)0x0) {
LAB_05ac3a80:
        plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
        if (plVar6 == (long *)0x0) goto LAB_05ac3d10;
        bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo)) goto LAB_05ac3d1c;
        if (plVar6[10] == 0) goto LAB_05ac3d10;
        uVar4 = FUN_05bca8a4(plVar6[10],0);
        if ((uVar4 & 1) == 0) {
          FUN_05ac5b80(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[10]);
        }
        else {
          FUN_05bfde00(param_1,*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                       ,*(undefined8 *)PTR_DAT_06a16428,plVar6,0);
        }
        if (plVar6[0xb] != 0) {
          plVar8 = (long *)(plVar6[0xb] + 0x28);
          *plVar8 = (long)plVar6;
          LeanTween__value(plVar8,plVar6);
          FUN_05ac3d24(param_1,plVar6[0xb],1);
        }
        lVar11 = plVar6[0xd];
        lVar9 = plVar6[0xe];
      }
      else {
        bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo
                         + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo))
        goto LAB_05ac3a80;
        plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
        if (plVar6 == (long *)0x0) goto LAB_05ac3d10;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
        goto LAB_05ac3d1c;
        if (plVar6[0xc] == 0) goto LAB_05ac3d10;
        uVar4 = FUN_05bca8a4(plVar6[0xc],0);
        if ((uVar4 & 1) == 0) {
          FUN_05ac5b80(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[0xc]);
        }
        else {
          FUN_05bfde00(param_1,*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                       ,*(undefined8 *)PTR_DAT_06a16428,plVar6,0);
        }
        lVar11 = plVar6[10];
        lVar9 = plVar6[0xb];
      }
      goto LAB_05ac39a0;
    }
    uVar5 = FUN_05b19e58(param_2,0);
    puVar2 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
    lVar11 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar4 = FUN_05bcaaa0(uVar5,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
    if ((uVar4 & 1) == 0) {
      lVar11 = FUN_05b19e58(param_2,0);
      if (lVar11 == 0) goto LAB_05ac3d10;
      uVar5 = *(undefined8 *)(lVar11 + 0x10);
      lVar11 = FUN_05b19e58(param_2,0);
      if (lVar11 == 0) goto LAB_05ac3d10;
      FUN_05bfdfc8(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                   ,uVar5,*(undefined8 *)(lVar11 + 0x18),param_2,0);
    }
    else {
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__,
                   param_2,0);
    }
  }
  FUN_05ac1cb0(param_1,plVar3);
LAB_05ac39c4:
  FUN_05ac1cb0(param_1,param_2);
  return;
}


