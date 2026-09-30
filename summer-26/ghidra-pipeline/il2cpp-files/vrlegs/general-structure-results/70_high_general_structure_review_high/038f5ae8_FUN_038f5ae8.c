/*
FUNCTION_NAME: FUN_038f5ae8
ENTRY_POINT: 038f5ae8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_14
*/


void FUN_038f5ae8(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>__ctor__
  ;
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_RegisterReferences<Object>__
  ;
  puVar2 = Method_UnityEngine_ExposedReference<CinemachineVirtualCameraBase>_Resolve__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
  ;
  if ((DAT_041385a1 & 1) == 0) {
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_RegisterReferences<Object>__
                );
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>__ctor__
                );
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>__ctor__
                );
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_RegisterReferences<Object>__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_char>__ctor__);
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                );
    FUN_01ab69ac(Method__Common_DataStructsAndAlgo_ExpiringCache<int,_int>_Add__);
    FUN_01ab69ac(PTR_DAT_03cc1608);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    FUN_01ab69ac(Method_UnityEngine_ExposedReference<CinemachineVirtualCameraBase>_Resolve__);
    FUN_01ab69ac(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>__ctor__
                );
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<BaseCommandModel>_get_Content__);
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<EloData>_get_Content__);
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<GamePunish>_get_Content__);
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>__ctor__);
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>_get_Content__);
    FUN_01ab69ac(Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>_set_Content__);
    DAT_041385a1 = 1;
  }
  uVar11 = *(undefined8 *)puVar2;
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_0219a4f0(lVar6,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>_get_Content__;
  puVar4 = Method__Common_Util_Http_FVRHttpResponseEntry<BaseCommandModel>_get_Content__;
  puVar2 = PTR_DAT_03cc1608;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  uVar8 = FUN_026e58e8(uVar13,uVar8,0);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_RegisterReferences<Object>__
  ;
  if (lVar6 == 0) goto LAB_038f60f4;
  local_48 = 10;
  FUN_0219b9a4(lVar6,&local_48,uVar8,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_RegisterReferences<Object>__
              );
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = Method__Common_Util_Http_FVRHttpResponseEntry<GamePunish>_get_Content__;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  uVar8 = FUN_026e58e8(uVar13,uVar8,0);
  local_48 = 0x16;
  FUN_0219b9a4(lVar6,&local_48,uVar8,*(undefined8 *)puVar2);
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>__ctor__
  ;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  uVar8 = FUN_026e58e8(uVar13,uVar8,0);
  local_48 = 0x28;
  FUN_0219b9a4(lVar6,&local_48,uVar8,*(undefined8 *)puVar2);
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>__ctor__;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  uVar8 = FUN_026e58e8(uVar13,uVar8,0);
  local_48 = 0x29;
  FUN_0219b9a4(lVar6,&local_48,uVar8,*(undefined8 *)puVar2);
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = Method__Common_Util_Http_FVRHttpResponseEntry<EloData>_get_Content__;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  uVar8 = FUN_026e58e8(uVar13,uVar8,0);
  local_48 = 0x17;
  FUN_0219b9a4(lVar6,&local_48,uVar8,*(undefined8 *)puVar2);
  if (DAT_041386a0 == '\0') {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_rdtSerializerRegistry_ConvertObjectDelegate>__ctor__
                );
    DAT_041386a0 = '\x01';
  }
  puVar5 = Method__Common_Util_Http_FVRHttpResponseEntry<SessionListContainer>_set_Content__;
  puVar2 = Method__Common_DataStructsAndAlgo_ExpiringCache<int,_int>_Add__;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar11 = FUN_025bdc88(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4,0);
  uVar11 = FUN_026e58e8(uVar8,uVar11,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>__ctor__
  ;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 == 0) goto LAB_038f60f4;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),&local_48,*(undefined8 *)(lVar9 + 0x28))
  ;
  local_4c = local_48;
  FUN_0219b634(lVar6,&local_4c,&local_48,*(undefined8 *)puVar3);
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__;
  if (lVar7 == 0) goto LAB_038f60f4;
  (**(code **)(lVar7 + 0x18))
            (*(undefined8 *)(lVar7 + 0x40),CONCAT44(uStack_44,local_48),&local_48,
             *(undefined8 *)(lVar7 + 0x28));
  plVar10 = (long *)CONCAT44(uStack_44,local_48);
  if (plVar10 == (long *)0x0) {
LAB_038f5ffc:
    plVar10 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_038f5ffc;
    if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
      plVar10 = (long *)0x0;
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_038f60f4;
  (**(code **)(lVar6 + 0x18))
            (*(undefined8 *)(lVar6 + 0x40),uVar11,&local_48,*(undefined8 *)(lVar6 + 0x28));
  plVar12 = (long *)CONCAT44(uStack_44,local_48);
  if (plVar12 == (long *)0x0) {
LAB_038f6060:
    plVar12 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_038f6060;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
      plVar12 = (long *)0x0;
    }
  }
  lVar6 = FUN_038f59a4();
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
  ;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
    FUN_02215b6c(*(long *)(lVar6 + 0x30),0,plVar10,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_RegisterReferences<Object>__
                );
    lVar6 = FUN_038f59a4();
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x30);
      lVar6 = FUN_038f59a4();
      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) && (lVar7 != 0)) {
        FUN_02215b6c(lVar7,*(int *)(*(long *)(lVar6 + 0x30) + 0x18) + -1,plVar12,
                     *(undefined8 *)puVar3);
        return;
      }
    }
  }
LAB_038f60f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


