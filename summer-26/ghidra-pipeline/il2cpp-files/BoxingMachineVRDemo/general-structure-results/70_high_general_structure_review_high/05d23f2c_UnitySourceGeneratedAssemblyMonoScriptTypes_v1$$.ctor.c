/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$.ctor
ENTRY_POINT: 05d23f2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_13;validity_or_gating_hits_10;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  undefined8 *puVar10;
  
  puVar2 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__;
  puVar6 = *(undefined8 **)(unaff_x21 + 0xb70);
  puVar8 = *(undefined8 **)(unaff_x23 + 0x2e0);
  puVar9 = *(undefined8 **)(unaff_x24 + 0xbf0);
  puVar10 = *(undefined8 **)(unaff_x25 + 0x2c8);
  if ((*(byte *)(unaff_x20 + 0xa31) & 1) == 0) {
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRView>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRView>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRView>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XRView>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlNode>_ToArray__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<OrgScopedID>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<OrgScopedID>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<Party>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<Party>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<PartyID>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<PartyID>_get_Data__);
    FUN_02d6084c(Method_Oculus_Platform_Message<PartyUpdateNotification>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<PartyUpdateNotification>_get_Data__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchema>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaElement>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaElement>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__);
    FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>_get_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_List<fsConverter>__ctor__);
    FUN_02d6084c(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__);
    FUN_02d6084c(PTR_DAT_06780bf0);
    FUN_02d6084c(PTR_DAT_0678c2c8);
    FUN_02d6084c(PTR_DAT_0678e2e0);
    *(undefined1 *)(unaff_x20 + 0xa31) = 1;
  }
  FUN_05d429ac(param_1,*puVar6,*puVar8,*puVar9,*puVar10,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                              );
    FUN_04d5cbb4(lVar5,uVar7,
                 *(undefined8 *)
                  Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_02dd37b4(plVar4,lVar5);
  }
  if (param_1 != 0) {
    FUN_035d1030(param_1,lVar5,
                 *(undefined8 *)Method_Oculus_Platform_Message<PartyUpdateNotification>_get_Data__);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchema>_get_Count__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_get_Item__);
      FUN_04d5ce24(lVar5,uVar7,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>_get_Data__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d1144(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>__ctor__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_set_Item__);
      FUN_04d642fc(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<OrgScopedID>__ctor__,0)
      ;
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d17bc(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_Add__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>__ctor__);
      FUN_04d5dd8c(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<OrgScopedID>_get_Data__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d1480(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
      FUN_04d65ff8(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<Party>__ctor__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d19e4(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
      FUN_04d5e05c(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<Party>_get_Data__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d1594(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>_get_Item__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_get_Count__);
      FUN_04d660ac(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<PartyID>__ctor__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d1af8(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_get_Item__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_Clear__);
      FUN_04d5ea34(lVar5,uVar7,*(undefined8 *)Method_Oculus_Platform_Message<PartyID>_get_Data__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d16a8(param_1,lVar5,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = Method_System_Collections_Generic_List<fsConverter>__ctor__;
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>_ToArray__);
      FUN_04d662c8(lVar5,uVar7,
                   *(undefined8 *)Method_Oculus_Platform_Message<PartyUpdateNotification>__ctor__,0)
      ;
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar4 = lVar5;
      thunk_FUN_02dd37b4(plVar4,lVar5);
    }
    FUN_035d1c0c(param_1,lVar5,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


