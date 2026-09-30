/*
FUNCTION_NAME: FUN_05c42928
ENTRY_POINT: 05c42928
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_05c42928(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int local_34;
  
  if ((DAT_06dc2838 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ac70);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                );
    FUN_02d965b8(Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<VisualElement,_DataSourceContext>_set_Item__
                );
    FUN_02d965b8(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_List<Point2PointTransform>>_Remove__
                );
    DAT_06dc2838 = 1;
  }
  puVar5 = Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo;
  local_34 = 0;
  if (param_1 == 0) goto LAB_05c42de8;
  plVar11 = (long *)(param_1 + 0x48);
  plVar10 = (long *)*plVar11;
  if (plVar10 == (long *)0x0) goto LAB_05c42de8;
  bVar4 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                   + 0x130);
  plVar14 = plVar10;
  if ((bVar4 <= *(byte *)(*plVar10 + 0x130)) &&
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) ==
      *(long *)
       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
    plVar14 = (long *)plVar10[2];
    if (*(int *)(*(long *)Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (plVar14 == (long *)0x0) goto LAB_05c42de8;
    uVar9 = (**(code **)(*plVar14 + 0x138))
                      (plVar14,**(undefined8 **)(*(long *)puVar5 + 0xb8),
                       *(undefined8 *)(*plVar14 + 0x140));
    if ((uVar9 & 1) == 0) {
      plVar14 = (long *)plVar10[2];
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (plVar14 == (long *)0x0) goto LAB_05c42de8;
      uVar9 = (**(code **)(*plVar14 + 0x138))
                        (plVar14,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),
                         *(undefined8 *)(*plVar14 + 0x140));
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_05c42de8;
        plVar14 = (long *)FUN_05c41c30(*(long *)(param_1 + 0x30),plVar10);
        *plVar11 = (long)plVar14;
        LeanTween__value(plVar11,plVar14);
        plVar10 = (long *)*plVar11;
        if (plVar10 == (long *)0x0) goto LAB_05c42de8;
        goto LAB_05c429fc;
      }
    }
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
    iVar6 = 0x2741;
LAB_05c42bbc:
    FUN_05c4675c(uVar7,iVar6,0);
LAB_05c42bcc:
    FUN_05c4d028(param_1,uVar7,1,0);
    return 0;
  }
LAB_05c429fc:
  lVar12 = *(long *)(param_1 + 0x30);
  iVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
  if (lVar12 == 0) goto LAB_05c42de8;
  if ((*(int *)(lVar12 + 0x20) != iVar6) &&
     (((iVar6 != 2 || (*(int *)(lVar12 + 0x20) != 0x17)) ||
      (uVar9 = FUN_05c3e634(lVar12), (uVar9 & 1) == 0)))) {
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ac70);
    FUN_05452924(uVar7,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_List<Point2PointTransform>>_Remove__
                 ,0);
    goto LAB_05c42bcc;
  }
  lVar12 = *(long *)(param_1 + 0x30);
  local_34 = 0;
  if (lVar12 == 0) goto LAB_05c42de8;
  if (*(char *)(lVar12 + 0x58) != '\0') {
    *(undefined1 *)(lVar12 + 0x58) = 0;
    if (*(long *)(lVar12 + 0x30) == 0) goto LAB_05c42de8;
    FUN_0540b2e8(*(long *)(lVar12 + 0x30),0);
    lVar12 = *(long *)(param_1 + 0x30);
    if (lVar12 == 0) goto LAB_05c42de8;
    uVar3 = *(undefined4 *)(lVar12 + 0x28);
    uVar1 = *(undefined4 *)(lVar12 + 0x20);
    uVar2 = *(undefined4 *)(lVar12 + 0x24);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_02dafda0(uVar1,uVar2,uVar3,&local_34);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<VisualElement,_DataSourceContext>_set_Item__
                              );
    FUN_05c4bdfc(uVar8,uVar7,1,0);
    *(undefined8 *)(lVar12 + 0x30) = uVar8;
    LeanTween__value((undefined8 *)(lVar12 + 0x30),uVar8);
    iVar6 = local_34;
    if (local_34 != 0) {
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
      goto LAB_05c42bbc;
    }
    lVar12 = *(long *)(param_1 + 0x30);
    if (lVar12 == 0) goto LAB_05c42de8;
  }
  if (*(char *)(lVar12 + 0x50) == '\0') {
    if (plVar14 == (long *)0x0) goto LAB_05c42de8;
    uVar8 = *(undefined8 *)(lVar12 + 0x30);
    uVar7 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)
                          Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                        );
    }
    FUN_05c423fc(uVar8,uVar7,&local_34,0);
  }
  else {
    FUN_05c407b8(lVar12,0);
    if ((*(long *)(param_1 + 0x30) == 0) || (plVar14 == (long *)0x0)) goto LAB_05c42de8;
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
    uVar7 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)
                          Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                        );
    }
    FUN_05c423fc(uVar8,uVar7,&local_34,0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05c42de8;
    FUN_05c407b8(*(long *)(param_1 + 0x30),1);
  }
  iVar6 = local_34;
  puVar5 = Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo;
  if (local_34 - 0x2733U < 2) {
    lVar12 = *(long *)(param_1 + 0x30);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 0x51) = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      uVar7 = FUN_05c4cd70(param_1,0);
      puVar5 = 
      Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__;
      lVar12 = *(long *)
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
      ;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar12);
        lVar12 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x60);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                                );
      FUN_05c5a004(uVar8,2,uVar13,param_1,0);
      thunk_FUN_02dbb1e8(uVar7,uVar8,0);
      return 1;
    }
  }
  else if (local_34 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined2 *)(*(long *)(param_1 + 0x30) + 0x51) = 0x101;
      FUN_05c4d020(param_1,1,0);
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined2 *)(*(long *)(param_1 + 0x30) + 0x51) = 0;
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_05c4675c(uVar7,iVar6,0);
    goto LAB_05c42bcc;
  }
LAB_05c42de8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


