/*
FUNCTION_NAME: FUN_05d23f08
ENTRY_POINT: 05d23f08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_10;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_05d23f08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__;
  puVar4 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
  puVar3 = PTR_DAT_0678e2e0;
  puVar2 = PTR_DAT_0678c2c8;
  puVar1 = PTR_DAT_06780bf0;
  if ((DAT_06b82a31 & 1) == 0) {
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
    DAT_06b82a31 = 1;
  }
  FUN_05d429ac(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar3,*(undefined8 *)puVar1,
               *(undefined8 *)puVar2,0);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar5;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                              );
    FUN_04d5cbb4(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  if (param_1 != 0) {
    FUN_035d1030(param_1,lVar8,
                 *(undefined8 *)Method_Oculus_Platform_Message<PartyUpdateNotification>_get_Data__);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchema>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_get_Item__);
      FUN_04d5ce24(lVar8,uVar9,
                   *(undefined8 *)
                    Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>_get_Data__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d1144(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_set_Item__);
      FUN_04d642fc(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<OrgScopedID>__ctor__,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d17bc(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_Add__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>__ctor__);
      FUN_04d5dd8c(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<OrgScopedID>_get_Data__
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d1480(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
      FUN_04d65ff8(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<Party>__ctor__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d19e4(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_get_Count__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
      FUN_04d5e05c(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<Party>_get_Data__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d1594(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaObject>_get_Item__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_get_Count__);
      FUN_04d660ac(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<PartyID>__ctor__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d1af8(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<XmlSchemaElement>_get_Item__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_Clear__);
      FUN_04d5ea34(lVar8,uVar9,*(undefined8 *)Method_Oculus_Platform_Message<PartyID>_get_Data__,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d16a8(param_1,lVar8,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar5;
    }
    puVar1 = Method_System_Collections_Generic_List<fsConverter>__ctor__;
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar5;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>_ToArray__);
      FUN_04d662c8(lVar8,uVar9,
                   *(undefined8 *)Method_Oculus_Platform_Message<PartyUpdateNotification>__ctor__,0)
      ;
      plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      *plVar7 = lVar8;
      thunk_FUN_02dd37b4(plVar7,lVar8);
    }
    FUN_035d1c0c(param_1,lVar8,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


