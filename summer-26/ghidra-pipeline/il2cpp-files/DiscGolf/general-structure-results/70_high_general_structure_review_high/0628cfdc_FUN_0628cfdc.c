/*
FUNCTION_NAME: FUN_0628cfdc
ENTRY_POINT: 0628cfdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0628d460) */
/* WARNING: Removing unreachable block (ram,0x0628d27c) */
/* WARNING: Removing unreachable block (ram,0x0628d508) */
/* WARNING: Removing unreachable block (ram,0x0628d39c) */
/* WARNING: Removing unreachable block (ram,0x0628d3c4) */

void FUN_0628cfdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  undefined8 *puStack_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined1 local_88 [16];
  long local_78;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_06dc7543 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Specialized_NameObjectCollectionBase_System_Collections_ICollection_CopyTo__
                );
    FUN_02d965b8(Method_System_Xml_NameTable_Add__);
    FUN_02d965b8(Method_Unity_Services_Multiplayer_LobbyConverter_ToSessionProperty__);
    FUN_02d965b8(Method_System_ComponentModel_ReflectPropertyDescriptor_FillAttributes__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_0__);
    FUN_02d965b8(Method_System_ComponentModel_ReflectPropertyDescriptor_GetValue__);
    FUN_02d965b8(Method_System_ComponentModel_ReflectPropertyDescriptor_ResetValue__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_1__);
    FUN_02d965b8(Method_System_Data_RecordManager__ctor__);
    FUN_02d965b8(Method_System_Collections_Specialized_NameValueCollection_Set__);
    FUN_02d965b8(Method_Unity_Services_Multiplayer_LobbyConverter_ToFilterField__);
    FUN_02d965b8(Method_System_ComponentModel_ReflectPropertyDescriptor_get_GetMethodValue__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_3__);
    FUN_02d965b8(Method_System_Net_Http_Headers_NameValueHeaderValue_TryParseElement__);
    FUN_02d965b8(Method_System_ComponentModel_ReferenceConverter_ConvertTo__);
    FUN_02d965b8(Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__);
    DAT_06dc7543 = 1;
  }
  puVar3 = Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__;
  local_88._8_8_ = 0;
  local_78 = 0;
  local_90 = 0;
  local_88._0_8_ = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  if (*(char *)(param_1 + 0x31) != '\0') {
    uVar11 = thunk_FUN_06354368(param_1,0);
    uVar12 = thunk_FUN_02dfd288(
                               Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetAttribute<NonSerializedAttribute>__
                               );
    uVar13 = thunk_FUN_02dfd288(
                               Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetAttribute<SerializableAttribute>__
                               );
    uVar11 = FUN_0536d554(uVar12,uVar11,uVar13,0);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar12 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar12,uVar11,0);
    uVar11 = thunk_FUN_02dfd288(
                               Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetCollectionItemType__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar12,uVar11);
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  local_c8 = &local_68;
  local_d0 = 0;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(param_4 + 0x18);
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0550afb4(*(undefined8 *)(param_4 + 0x10),0,iVar1,0);
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_88 = FUN_03e9d880(**(long **)(lVar8 + 0xb8),&local_78,
                          *(undefined8 *)Method_System_Data_RecordManager__ctor__);
  local_d8 = local_88;
  local_e0 = 0;
  FUN_0628c0e8(local_68,local_78);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&local_f8,param_3,*(undefined8 *)Method_LobbyCreateUI_<Awake>b__22_3__);
  puVar7 = Method_System_ComponentModel_ReflectPropertyDescriptor_get_GetMethodValue__;
  puVar6 = Method_System_ComponentModel_ReflectPropertyDescriptor_GetValue__;
  puVar5 = Method_System_ComponentModel_ReflectPropertyDescriptor_FillAttributes__;
  puVar4 = Method_System_Xml_NameTable_Add__;
  puVar3 = Method_LobbyCreateUI_<Awake>b__22_0__;
  local_90 = local_e8;
  puStack_98 = puStack_f0;
  local_a0 = local_f8;
  do {
    uVar9 = FUN_05156804(&local_a0,*(undefined8 *)puVar3);
    lVar8 = local_90;
    if ((uVar9 & 1) == 0) {
      FUN_05156800(&local_a0,
                   *(undefined8 *)
                    Method_Unity_Services_Multiplayer_LobbyConverter_ToSessionProperty__);
      puVar3 = Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__;
      FUN_044356d4(local_d8,*(undefined8 *)
                             Method_System_ComponentModel_ReferenceConverter_ConvertTo__);
      if (local_e0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar3;
      }
      FUN_04011b6c(param_4,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                   *(undefined8 *)
                    Method_System_Net_Http_Headers_NameValueHeaderValue_TryParseElement__);
      lVar8 = *(long *)puVar3;
      *(undefined1 *)(*local_c8 + 0x31) = 0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        FUN_04ecdaf0(lVar8,*(undefined8 *)
                            Method_System_Collections_Specialized_NameObjectCollectionBase_System_Collections_ICollection_CopyTo__
                    );
        if (local_d0 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04010c90(&local_f8,local_78,*(undefined8 *)puVar7);
    local_c0 = local_f8;
    fVar17 = 1.0;
    local_f8 = 0;
    puStack_b8 = puStack_f0;
    local_b0 = local_e8;
    puStack_f0 = &local_c0;
    do {
      uVar9 = FUN_05156804(&local_c0,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) break;
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar16 = (float)FUN_0628b530(local_b0,param_2,lVar8);
      fVar17 = fVar17 * fVar16;
    } while (0.0 < fVar17);
    FUN_05156800(&local_c0,*(undefined8 *)puVar5);
    if (0.0 <= fVar17) {
      lVar14 = *(long *)(param_4 + 0x10);
      lVar15 = *(long *)Method_System_Collections_Specialized_NameValueCollection_Set__;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = *(uint *)(param_4 + 0x18);
      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(param_4 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = lVar8;
        LeanTween__value(plVar10,lVar8);
      }
      else {
        FUN_040101ec(param_4,lVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04ecd950(fVar17,lVar14,lVar8,*(undefined8 *)puVar4);
    }
  } while( true );
}


