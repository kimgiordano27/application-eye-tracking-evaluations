/*
FUNCTION_NAME: FUN_057234c0
ENTRY_POINT: 057234c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_15;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_7
*/


void FUN_057234c0(long *param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long *local_68;
  
                    /* try { // try from 057234d8 to 058234e3 has its CatchHandler @ 05723e34 */
  plVar10 = param_1;
  if ((DAT_06bc07d0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d4730);
                    /* try { // try from 05723508 to 0582350b has its CatchHandler @ 05723d98 */
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<string,_ResourceSet>_TryGetValue__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                );
                    /* try { // try from 05723520 to 0582352b has its CatchHandler @ 05723e04 */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                );
                    /* try { // try from 05723548 to 0582354b has its CatchHandler @ 05723d94 */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                );
                    /* try { // try from 0572354c to 05823563 has its CatchHandler @ 05723dd8 */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                );
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__);
                    /* try { // try from 05723584 to 0582358f has its CatchHandler @ 05723ddc */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__);
                    /* try { // try from 057235b0 to 058235bb has its CatchHandler @ 05723de0 */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__);
                    /* try { // try from 057235bc to 058235d3 has its CatchHandler @ 05723df8 */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__);
                    /* try { // try from 057235d4 to 058235ef has its CatchHandler @ 05723de4 */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                );
                    /* try { // try from 05723624 to 05823627 has its CatchHandler @ 05723d64 */
                    /* try { // try from 05723628 to 05823633 has its CatchHandler @ 05723d3c */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Add__
                );
                    /* try { // try from 0572366c to 05823677 has its CatchHandler @ 05723e24 */
    FUN_02f08768(PTR_DAT_067d6758);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Clear__
                );
    plVar10 = (long *)FUN_02f08768(
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                  );
    DAT_06bc07d0 = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x30) != '\0') {
      return;
    }
                    /* try { // try from 057236a8 to 058236ab has its CatchHandler @ 05723d80 */
                    /* try { // try from 057236ac to 058236bb has its CatchHandler @ 05723dd0 */
    *(undefined1 *)(param_2 + 0x30) = 1;
    if (*(long *)(param_2 + 0x48) != 0) {
      plVar10 = (long *)param_1[2];
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      lVar11 = (**(code **)(*plVar10 + 0x1a8))
                         (plVar10,*(long *)(param_2 + 0x48),*(undefined8 *)(*plVar10 + 0x1b0));
      *(long *)(param_2 + 0x48) = lVar11;
      if (lVar11 == 0) goto LAB_05723f3c;
      if (*(int *)(lVar11 + 0x10) == 0) {
        plVar10 = (long *)FUN_058572c8(param_1,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                                       ,param_2,0);
      }
      else {
                    /* try { // try from 057236f0 to 058236f3 has its CatchHandler @ 05723d64 */
        plVar10 = (long *)FUN_05725b7c(param_1,lVar11,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_get_Item__
                                       ,param_2);
      }
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_ResourceSet>_TryGetValue__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 0572373c to 05823747 has its CatchHandler @ 05723e10 */
      lVar11 = FUN_05701c00(0x20,0);
      if ((lVar11 == 0) || (plVar10 = *(long **)(lVar11 + 0x68), plVar10 == (long *)0x0))
      goto LAB_05723f3c;
      plVar12 = (long *)(**(code **)(*plVar10 + 0x238))
                                  (plVar10,*(undefined8 *)(param_2 + 0x50),0,0,&local_68,
                                   *(undefined8 *)(*plVar10 + 0x240));
      if (plVar12 == (long *)0x0) {
        if ((local_68 != (long *)0x0) && (*local_68 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        *(long **)(param_2 + 0x50) = local_68;
        plVar10 = local_68;
      }
      else {
                    /* try { // try from 05723778 to 0582377b has its CatchHandler @ 05723d70 */
                    /* try { // try from 0572377c to 0582378b has its CatchHandler @ 05723da8 */
        lVar11 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,4);
        if (lVar11 == 0) goto LAB_05723f3c;
                    /* try { // try from 057237a0 to 058237a3 has its CatchHandler @ 05723d68 */
                    /* try { // try from 057237a4 to 058237af has its CatchHandler @ 05723db4 */
        if ((*(int *)(lVar11 + 0x18) == 0) ||
           (*(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_067d6758,
           *(int *)(lVar11 + 0x18) == 1)) {
LAB_05724650:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(param_2 + 0x50);
        uVar13 = FUN_0576ed04(plVar10,0);
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05724650;
        *(undefined8 *)(lVar11 + 0x30) = uVar13;
        uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        puVar4 = 
        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Add__;
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) goto LAB_05724650;
        *(undefined8 *)(lVar11 + 0x38) = uVar13;
        plVar10 = (long *)FUN_058574dc(param_1,*(undefined8 *)puVar4,lVar11,plVar12,param_2,0);
      }
    }
    FUN_057251c0(plVar10,param_2);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Clear__;
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>__ctor__;
    plVar10 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
    lVar11 = *(long *)(param_2 + 0x58);
    if (lVar11 != 0) {
      iVar9 = 0;
      while (iVar7 = FUN_05079c6c(lVar11,0), iVar9 < iVar7) {
        plVar12 = *(long **)(param_2 + 0x58);
        if ((plVar12 == (long *)0x0) ||
           (plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                        (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310)),
           plVar12 == (long *)0x0)) goto LAB_05723f3c;
        bVar1 = *(byte *)(*plVar10 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
        goto LAB_05724640;
        lVar11 = plVar12[9];
        plVar12[5] = param_2;
        uVar13 = FUN_05725cd4(param_1,plVar12);
        if (plVar12[7] == 0) {
          if ((int)plVar12[0xc] == 1) {
            if (lVar11 == 0) {
LAB_05723924:
              uVar13 = FUN_05857240(param_1,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
                                    ,*(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                    ,plVar12,0);
            }
          }
          else if ((lVar11 == 0) && ((int)plVar12[0xc] == 3)) goto LAB_05723924;
        }
        else {
          uVar13 = FUN_05725b7c(param_1,plVar12[7],*(undefined8 *)puVar4,plVar12);
        }
        iVar7 = (int)plVar12[0xc];
        if (iVar7 == 1) {
          if (plVar12[9] != 0) {
LAB_05723a48:
            if (lVar11 == 0) goto LAB_05723f3c;
LAB_05723a4c:
            if (*(long *)(lVar11 + 0x48) == 0) {
              if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
                lVar11 = FUN_057225e0(param_1,param_3,lVar11);
                plVar12[9] = lVar11;
              }
            }
            else {
              uVar14 = FUN_04f6dc3c(*(undefined8 *)(param_2 + 0x48),*(long *)(lVar11 + 0x48),0);
              if ((uVar14 & 1) != 0) {
                FUN_05857408(param_1,*(undefined8 *)puVar3,*(undefined8 *)(lVar11 + 0x48),
                             *(undefined8 *)(param_2 + 0x48),plVar12,0);
              }
            }
            FUN_057234c0(param_1,lVar11,*(undefined8 *)(param_2 + 0x48),param_4);
          }
        }
        else if (iVar7 == 3) {
          if (lVar11 != 0) {
            FUN_0572583c(uVar13,plVar12);
            goto LAB_05723a4c;
          }
        }
        else {
          if (iVar7 != 2) goto LAB_05723a48;
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                           0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
          goto LAB_05723f3c;
          lVar19 = plVar12[0xd];
          uVar14 = thunk_FUN_04f6d944(lVar19,*(undefined8 *)(param_2 + 0x48),0);
          if ((uVar14 & 1) != 0) {
            FUN_058572c8(param_1,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                         ,plVar12,0);
          }
          if (lVar11 == 0) {
            if (lVar19 != 0) {
              if (*(int *)(lVar19 + 0x10) == 0) {
                FUN_05857240(param_1,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                             ,lVar19,plVar12,0);
              }
              else {
                FUN_05725b7c(param_1,lVar19,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_get_Item__
                             ,plVar12);
              }
            }
          }
          else {
            uVar14 = FUN_04f6dc3c(lVar19,*(undefined8 *)(lVar11 + 0x48),0);
            if ((uVar14 & 1) != 0) {
              FUN_05857408(param_1,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                           ,lVar19,*(undefined8 *)(lVar11 + 0x48),plVar12,0);
            }
            lVar18 = param_1[0x15];
            param_1[0x15] = lVar11;
            FUN_057234c0(param_1,lVar11,lVar19,param_4);
            param_1[0x15] = lVar18;
          }
        }
        lVar11 = *(long *)(param_2 + 0x58);
        iVar9 = iVar9 + 1;
        if (lVar11 == 0) goto LAB_05723f3c;
      }
      param_1[0xc] = param_2;
      FUN_05725968(param_1,param_2);
      FUN_05725d60(param_1,param_2);
      if (param_3 == 0) {
        param_3 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      }
      param_1[10] = param_3;
      FUN_05726060(param_1,param_2);
      plVar12 = (long *)param_1[0x12];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0));
        puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
        lVar11 = *(long *)(param_2 + 0x58);
        if (lVar11 != 0) {
          iVar9 = 0;
          plVar12 = (long *)
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
          ;
          goto LAB_05723b94;
        }
      }
    }
  }
  goto LAB_05723f3c;
LAB_05723b94:
  iVar7 = FUN_05079c6c(lVar11,0);
  if (iVar7 <= iVar9) {
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar10 = *(long **)(param_2 + 0x60);
    if (plVar10 != (long *)0x0) {
      iVar9 = FUN_05079c6c(plVar10,0);
      puVar6 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (iVar9 < 1) goto FUN_057245cc;
      iVar9 = 0;
      plVar15 = (long *)
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      goto LAB_05723fa4;
    }
    goto LAB_05723f3c;
  }
  plVar15 = *(long **)(param_2 + 0x58);
  if ((plVar15 == (long *)0x0) ||
     (plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                  (plVar15,iVar9,*(undefined8 *)(*plVar15 + 0x310)),
     plVar15 == (long *)0x0)) goto LAB_05723f3c;
  bVar1 = *(byte *)(*plVar15 + 0x130);
  bVar2 = *(byte *)(*plVar10 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar11 = *(long *)(*plVar15 + 200), *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *plVar10)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar15);
  }
  lVar19 = plVar15[9];
  iVar7 = (int)plVar15[0xc];
  if (lVar19 == 0) {
    if (iVar7 == 3) {
      bVar2 = *(byte *)(*plVar12 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *plVar12))
      goto LAB_05723f3c;
      lVar11 = plVar15[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_058658f4(lVar11,0,0);
      if ((uVar14 & 1) != 0) {
        lVar11 = plVar15[0xd];
        if (lVar11 == 0) goto LAB_05723f3c;
        iVar7 = 0;
        while (iVar8 = FUN_05079c6c(lVar11,0), iVar7 < iVar8) {
          plVar16 = (long *)plVar15[0xd];
          if (plVar16 == (long *)0x0) goto LAB_05723f3c;
          plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                      (plVar16,iVar7,*(undefined8 *)(*plVar16 + 0x310));
          if (plVar16 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(param_1,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,plVar15,0);
            break;
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_05723f08;
          lVar11 = plVar15[0xd];
          iVar7 = iVar7 + 1;
          if (lVar11 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
    if (iVar7 == 3) {
      plVar10 = (long *)param_1[0x16];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar10,0);
        param_1[0x16] = (long)plVar10;
      }
      lVar18 = param_1[0x15];
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*plVar12 + 0x130);
      if (*(byte *)(*plVar15 + 0x130) < bVar1) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = plVar15;
        if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *plVar12) {
          plVar16 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar11,0);
      *(long **)(lVar11 + 0x10) = plVar16;
      *(long *)(lVar11 + 0x18) = lVar18;
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar10 + 0x308))(plVar10,lVar11,*(undefined8 *)(*plVar10 + 0x310));
      plVar10 = (long *)param_1[0x12];
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      lVar11 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar19,*(undefined8 *)(*plVar10 + 0x310));
      plVar10 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      plVar12 = (long *)
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar11 == 0) {
        plVar16 = (long *)param_1[0x12];
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x2a8))(plVar16,lVar19,plVar15,*(undefined8 *)(*plVar16 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(param_1,lVar19,param_2);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar7 == 2) {
      if (lVar19 == param_1[0xb]) goto LAB_05723f24;
      bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                       0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
      goto LAB_05723f3c;
      lVar11 = plVar15[0xd];
      if (lVar11 == 0) {
        lVar11 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      }
      if (param_4 == (long *)0x0) goto LAB_05723f3c;
      uVar14 = (**(code **)(*param_4 + 0x348))(param_4,lVar19,*(undefined8 *)(*param_4 + 0x350));
      if ((uVar14 & 1) == 0) {
        (**(code **)(*param_4 + 0x308))(param_4,lVar19,*(undefined8 *)(*param_4 + 0x310));
      }
      if ((param_1[0xb] == 0) ||
         (plVar16 = (long *)FUN_0576b140(param_1[0xb],0), plVar16 == (long *)0x0))
      goto LAB_05723f3c;
      uVar14 = (**(code **)(*plVar16 + 0x348))(plVar16,lVar11,*(undefined8 *)(*plVar16 + 0x350));
      if ((uVar14 & 1) == 0) {
        if ((param_1[0xb] == 0) ||
           (plVar16 = (long *)FUN_0576b140(param_1[0xb],0), plVar16 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar16 + 0x308))(plVar16,lVar11,*(undefined8 *)(*plVar16 + 0x310));
      }
    }
    else if (iVar7 == 1) {
      plVar16 = (long *)param_1[0x12];
      if (plVar16 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar16 + 0x308))(plVar16,lVar19,*(undefined8 *)(*plVar16 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(param_1,plVar15);
LAB_05723f30:
  lVar11 = *(long *)(param_2 + 0x58);
  iVar9 = iVar9 + 1;
  if (lVar11 == 0) goto LAB_05723f3c;
  goto LAB_05723b94;
LAB_05723fa4:
  do {
    lVar19 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar19 == 0) goto LAB_05723f3c;
    *(long *)(lVar19 + 0x28) = param_2;
    plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
    if (plVar12 == (long *)0x0) {
LAB_05724010:
      plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar12 != (long *)0x0) {
        lVar19 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar19))
        goto LAB_05724058;
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar19 = *(long *)puVar5;
          bVar1 = *(byte *)(lVar19 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar19))
          goto LAB_05724640;
        }
        FUN_0572740c(param_1,plVar12);
        uVar13 = FUN_05769f9c(param_2,0);
        if (plVar12 != (long *)0x0) {
LAB_05724540:
          lVar19 = plVar12[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar12 == (long *)0x0) {
LAB_057240a0:
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *plVar15)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar15 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15))
              goto LAB_05724640;
            }
            FUN_05727d7c(param_1,plVar12,0);
            goto LAB_057243d8;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(param_1,plVar12);
            uVar13 = FUN_0576a064(param_2,0);
            if (plVar12 != (long *)0x0) {
              lVar19 = plVar12[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 == (long *)0x0) {
              FUN_05728564(param_1,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
              FUN_05728564(param_1,plVar12);
              uVar13 = *(undefined8 *)(param_2 + 0xa0);
              goto LAB_05724540;
            }
            goto LAB_05724640;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar13 = (**(code **)(*plVar10 + 0x308))
                               (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
            plVar12 = (long *)FUN_02a7e998(uVar13,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(param_1,plVar12);
            if (plVar12 != (long *)0x0) {
              uVar13 = *(undefined8 *)(param_2 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 == (long *)0x0) {
LAB_057245a4:
              plVar12 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
                plVar12 = (long *)0x0;
              }
            }
            FUN_0572897c(param_1,plVar12);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar13 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        FUN_058572c8(param_1,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar13,0);
        uVar13 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar11 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar11,uVar13,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar19 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar19))
        goto LAB_057240a0;
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar19 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar19 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
        }
        FUN_05727504(param_1,plVar12,0);
LAB_057243d8:
        uVar13 = FUN_0576a000(param_2,0);
        if (plVar12 == (long *)0x0) goto LAB_05723f3c;
        uVar17 = FUN_0577ac88(plVar12,0);
        FUN_05856a70(param_1,uVar13,uVar17,plVar12,0);
        plVar15 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto LAB_05724010;
      FUN_057272a8(param_1,plVar12);
      uVar13 = FUN_05769f38(param_2,0);
      lVar19 = plVar12[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(param_1,uVar13,lVar19,plVar12,0);
    }
System_Xml_XmlException__get_Message:
    iVar9 = iVar9 + 1;
    iVar7 = FUN_05079c6c(plVar10,0);
  } while (iVar9 < iVar7);
FUN_057245cc:
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar11 != 0) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar9 = 0;
      do {
        lVar19 = *(long *)(param_2 + 0x60);
        uVar13 = FUN_03abf644(lVar11,iVar9,*(undefined8 *)puVar4);
        if (lVar19 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar19,uVar13,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar11 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


