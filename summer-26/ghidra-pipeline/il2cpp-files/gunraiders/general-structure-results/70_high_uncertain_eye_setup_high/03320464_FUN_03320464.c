/*
FUNCTION_NAME: FUN_03320464
ENTRY_POINT: 03320464
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * FUN_03320464(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__;
  puVar1 = PTR_DAT_0422fb28;
  if ((DAT_04533219 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                );
    FUN_01c5d288(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_Scroller_UxmlFactory_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04533219 = 1;
  }
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar8 = FUN_032e04b8(uVar8,0);
  uVar3 = FUN_032e935c(param_1,uVar8,0);
  if ((uVar3 & 1) == 0) {
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_032e04b8(uVar8,0);
    puVar2 = UnityEngine_UIElements_Scroller_UxmlFactory_TypeInfo;
    if (*(int *)(*(long *)UnityEngine_UIElements_Scroller_UxmlFactory_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)UnityEngine_UIElements_Scroller_UxmlFactory_TypeInfo);
    }
    lVar5 = FUN_0331d080(param_1,uVar8,0);
    if (lVar5 == 0) {
LAB_03320658:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(long *)(lVar5 + 0x18) == 0) {
      if (param_1 == (long *)0x0) goto LAB_03320658;
      uVar8 = (**(code **)(*param_1 + 0x858))(param_1,*(undefined8 *)(*param_1 + 0x860));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar3 = FUN_032ea0d4(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        uVar8 = (**(code **)(*param_1 + 0x858))(param_1,*(undefined8 *)(*param_1 + 0x860));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        plVar4 = (long *)FUN_0331de28(uVar8);
        if (plVar4 != (long *)0x0) {
          return plVar4;
        }
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar2;
      }
      plVar4 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    }
    else {
      iVar7 = (int)*(long *)(lVar5 + 0x18);
      if (1 < iVar7) {
        thunk_FUN_01c273e8(PTR_DAT_0423a628);
        uVar8 = thunk_FUN_01c496e0();
        uVar6 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                                  );
        FUN_032baa68(uVar8,uVar6,0);
        uVar6 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<ColorSchemaScriptableObject_ColorKey,_ColorSchemaScriptableObject_ColorStringPair>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,uVar6);
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar4 = *(long **)(lVar5 + 0x20);
      if ((plVar4 != (long *)0x0) &&
         (*plVar4 != *(long *)OVRPlugin_Media_InputVideoBufferType_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
    }
  }
  else {
    plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo
                                       );
    FUN_0324849c(plVar4,4,0);
  }
  return plVar4;
}


