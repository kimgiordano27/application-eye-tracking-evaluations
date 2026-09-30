/*
FUNCTION_NAME: FUN_05add014
ENTRY_POINT: 05add014
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


void FUN_05add014(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if ((DAT_06dc1e6f & 1) == 0) {
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
                    /* try { // try from 05add0ac to 05bdd0b7 has its CatchHandler @ 05add294 */
    FUN_02d965b8(PTR_DAT_06a16428);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                );
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
                    /* try { // try from 05add0cc to 05bdd0df has its CatchHandler @ 05add288 */
    FUN_02d965b8(PTR_DAT_06a10fd8);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
                    /* try { // try from 05add0f4 to 05bdd0fb has its CatchHandler @ 05add284 */
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    DAT_06dc1e6f = 1;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_05add8ac;
    if (param_2[10] == 0) {
                    /* try { // try from 05add1b4 to 05bdd1cf has its CatchHandler @ 05add28c */
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
    else {
      FUN_05adee90(param_1,param_2);
      lVar11 = param_2[10];
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo)
      ;
                    /* try { // try from 05add17c to 05bdd197 has its CatchHandler @ 05add298 */
      FUN_05bca5c4(uVar4,lVar11,uVar13,0);
      FUN_05b1b1a8(param_2,uVar4,0);
    }
    uVar10 = *(uint *)((long)param_2 + 0x94);
    if (uVar10 != 0xff) {
      if (uVar10 == 0x100) {
        uVar10 = *(uint *)(param_1 + 0x5c);
      }
      else if ((uVar10 & 0xfffffff9) != 0) {
                    /* try { // try from 05add1ec to 05bdd1ff has its CatchHandler @ 05add280 */
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                     ,param_2,0);
        uVar10 = *(uint *)((long)param_2 + 0x94);
      }
                    /* try { // try from 05add200 to 05bdd267 has its CatchHandler @ 05adcf2c */
      uVar10 = uVar10 & 6;
    }
    uVar12 = *(uint *)(param_2 + 0xb);
    *(uint *)(param_2 + 0x18) = uVar10;
    if (uVar12 == 0x100) {
      uVar12 = *(uint *)(param_1 + 0x60);
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
    if (param_2 == (long *)0x0) goto LAB_05add8ac;
    if (param_2[10] != 0) {
                    /* try { // try from 05add114 to 05bdd117 has its CatchHandler @ 05add270 */
                    /* try { // try from 05add118 to 05bdd127 has its CatchHandler @ 05add27c */
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
                    /* try { // try from 05add138 to 05bdd153 has its CatchHandler @ 05add274 */
    }
  }
                    /* try { // try from 05add268 to 05bdd26b has its CatchHandler @ 05add290 */
                    /* try { // try from 05add26c to 05bdd26f has its CatchHandler @ 05add278 */
  if (param_2[0x13] == 0) {
    if (param_2[0x14] != 0) {
      plVar3 = (long *)(param_2[0x14] + 0x28);
      *plVar3 = (long)param_2;
      LeanTween__value(plVar3,param_2);
      FUN_05ae0418(param_1,param_2[0x14]);
    }
    uVar4 = FUN_05b0cb78(param_2,0);
    FUN_05adf6d0(param_1,uVar4,param_2[0x16],param_2);
    goto LAB_05add564;
  }
                    /* catch() { ... } // from try @ 05add114 with catch @ 05add270
                       try { // try from 05add270 to 05bdd2af has its CatchHandler @ 05adcf2c */
                    /* catch() { ... } // from try @ 05add138 with catch @ 05add274 */
  plVar3 = (long *)(param_2[0x13] + 0x28);
  *plVar3 = (long)param_2;
                    /* catch() { ... } // from try @ 05add26c with catch @ 05add278 */
  uVar4 = LeanTween__value(plVar3,param_2);
                    /* catch() { ... } // from try @ 05add118 with catch @ 05add27c */
                    /* catch() { ... } // from try @ 05add1ec with catch @ 05add280 */
  FUN_05adbc04(uVar4,param_2[0x13]);
                    /* catch() { ... } // from try @ 05add0f4 with catch @ 05add284 */
                    /* catch() { ... } // from try @ 05add0cc with catch @ 05add288 */
  if (param_2[0x14] == 0) {
                    /* catch() { ... } // from try @ 05add1b4 with catch @ 05add28c */
                    /* catch() { ... } // from try @ 05add268 with catch @ 05add290 */
                    /* catch() { ... } // from try @ 05add0ac with catch @ 05add294 */
    FUN_05b0cb78(param_2,0);
  }
                    /* catch() { ... } // from try @ 05add17c with catch @ 05add298 */
  plVar3 = (long *)param_2[0x13];
  if (plVar3 == (long *)0x0) goto LAB_05add8ac;
  lVar11 = *plVar3;
                    /* try { // try from 05add2b0 to 05bdd2c7 has its CatchHandler @ 05add330 */
  bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo + 0x130);
                    /* try { // try from 05add2c8 to 05bdd31f has its CatchHandler @ 05adcf2c */
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
      uVar4 = FUN_05b19e58(param_2,0);
      puVar2 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      lVar11 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar11);
        lVar11 = *(long *)puVar2;
      }
      uVar5 = FUN_05bcaaa0(uVar4,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      if ((uVar5 & 1) == 0) {
        lVar11 = FUN_05b19e58(param_2,0);
        if (lVar11 != 0) {
          uVar4 = *(undefined8 *)(lVar11 + 0x10);
          lVar11 = FUN_05b19e58(param_2,0);
          if (lVar11 != 0) {
            FUN_05bfdfc8(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                         ,uVar4,*(undefined8 *)(lVar11 + 0x18),param_2,0);
            goto LAB_05add564;
          }
        }
        goto LAB_05add8ac;
      }
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__,
                   param_2,0);
      goto LAB_05add564;
    }
    if (*(char *)((long)plVar3 + 0x59) == '\0') {
                    /* try { // try from 05add320 to 05bdd32f has its CatchHandler @ 05add330 */
      uVar5 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
                    /* catch() { ... } // from try @ 05add2b0 with catch @ 05add330
                       catch() { ... } // from try @ 05add320 with catch @ 05add330 */
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 05add334 to 05bdd337 has its CatchHandler @ 05add340 */
                    /* try { // try from 05add338 to 05bdd343 has its CatchHandler @ 05adcf2c */
                    /* catch() { ... } // from try @ 05add334 with catch @ 05add340 */
        FUN_05b0c090(plVar3,1,0);
      }
    }
    lVar11 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    if (lVar11 == 0) goto LAB_05add8ac;
    *(undefined8 *)(lVar11 + 0x28) = plVar3;
    LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar3);
    uVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    FUN_05adbc04(uVar4,uVar4);
    plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    puVar2 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo;
    if (plVar6 == (long *)0x0) {
LAB_05add3d0:
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (plVar6 == (long *)0x0) goto LAB_05add8ac;
      lVar11 = *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo))
      goto LAB_05add3d0;
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (plVar6 == (long *)0x0) goto LAB_05add8ac;
      lVar11 = *(long *)puVar2;
    }
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11))
    {
LAB_05add8b8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar6);
    }
    if (plVar6[0xd] == 0) {
LAB_05add8ac:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_05bca8a4(plVar6[0xd],0);
    if ((uVar5 & 1) == 0) {
      FUN_05adf548(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[0xd]);
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
      FUN_05ae0418(param_1,plVar6[10]);
    }
    lVar11 = plVar6[0xb];
    lVar9 = plVar6[0xc];
LAB_05add540:
    FUN_05adf6d0(param_1,lVar11,lVar9,plVar6);
    FUN_05ad92a4(param_1,plVar6);
  }
  else {
    lVar11 = (**(code **)(lVar11 + 0x218))(plVar3,*(undefined8 *)(lVar11 + 0x220));
    if (lVar11 != 0) {
      lVar11 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if (lVar11 == 0) goto LAB_05add8ac;
      *(undefined8 *)(lVar11 + 0x28) = plVar3;
      LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar3);
      uVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      FUN_05adbc04(uVar4,uVar4);
      plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      puVar2 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      if (plVar6 == (long *)0x0) {
LAB_05add61c:
        plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
        if (plVar6 == (long *)0x0) goto LAB_05add8ac;
        bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo)) goto LAB_05add8b8;
        if (plVar6[10] == 0) goto LAB_05add8ac;
        uVar5 = FUN_05bca8a4(plVar6[10],0);
        if ((uVar5 & 1) == 0) {
          FUN_05adf548(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[10]);
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
          FUN_05add8c0(param_1,plVar6[0xb],1);
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
        goto LAB_05add61c;
        plVar6 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
        if (plVar6 == (long *)0x0) goto LAB_05add8ac;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
        goto LAB_05add8b8;
        if (plVar6[0xc] == 0) goto LAB_05add8ac;
        uVar5 = FUN_05bca8a4(plVar6[0xc],0);
        if ((uVar5 & 1) == 0) {
          FUN_05adf548(param_1,plVar6,*(undefined8 *)PTR_DAT_06a16428,plVar6[0xc]);
        }
        else {
          FUN_05bfde00(param_1,*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                       ,*(undefined8 *)PTR_DAT_06a16428,plVar6,0);
        }
        lVar11 = plVar6[10];
        lVar9 = plVar6[0xb];
      }
      goto LAB_05add540;
    }
    uVar4 = FUN_05b19e58(param_2,0);
    puVar2 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
    lVar11 = *(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar5 = FUN_05bcaaa0(uVar4,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
    if ((uVar5 & 1) == 0) {
      lVar11 = FUN_05b19e58(param_2,0);
      if (lVar11 == 0) goto LAB_05add8ac;
      uVar4 = *(undefined8 *)(lVar11 + 0x10);
      lVar11 = FUN_05b19e58(param_2,0);
      if (lVar11 == 0) goto LAB_05add8ac;
      FUN_05bfdfc8(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                   ,uVar4,*(undefined8 *)(lVar11 + 0x18),param_2,0);
    }
    else {
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__,
                   param_2,0);
    }
  }
  FUN_05ad92a4(param_1,plVar3);
LAB_05add564:
  FUN_05ad92a4(param_1,param_2);
  return;
}


