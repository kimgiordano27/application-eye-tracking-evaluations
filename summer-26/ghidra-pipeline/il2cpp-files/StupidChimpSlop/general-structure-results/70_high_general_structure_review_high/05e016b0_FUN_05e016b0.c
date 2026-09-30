/*
FUNCTION_NAME: FUN_05e016b0
ENTRY_POINT: 05e016b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05e01b34) */
/* WARNING: Removing unreachable block (ram,0x05e01950) */
/* WARNING: Removing unreachable block (ram,0x05e01bdc) */
/* WARNING: Removing unreachable block (ram,0x05e01a70) */
/* WARNING: Removing unreachable block (ram,0x05e01a98) */

void FUN_05e016b0(long param_1,undefined8 param_2,long param_3,long param_4)

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
  if ((DAT_06a586c7 & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpSection_get_DeliveryFormat__);
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpSection_get_DeliveryMethod__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__);
    FUN_02d4dc40(Method_System_Net_Configuration_WebProxyScriptElement_set_DownloadTimeout__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Name__);
    FUN_02d4dc40(Method_Photon_Voice_WebRTCAudioProcessor_ReverseStreamThread__);
    FUN_02d4dc40(Method_System_Net_WebReadStream_BeginRead__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_ObjectType__);
    FUN_02d4dc40(Method_System_Net_Configuration_WebProxyScriptElement__ctor__);
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpSection_get_Properties__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_GetElement__);
    FUN_02d4dc40(Method_System_Net_WebReadStream_Flush__);
    FUN_02d4dc40(Method_System_Net_ServerCertValidationCallback_Callback__);
    FUN_02d4dc40(Method_System_Net_Configuration_SmtpSection_get_SpecifiedPickupDirectory__);
    FUN_02d4dc40(
                Method_System_Net_Configuration_WebProxyScriptElement_get_AutoConfigUrlRetryInterval__
                );
    FUN_02d4dc40(Method_System_Net_WebProxyDataBuilder_ParseProtocolProxies__);
    DAT_06a586c7 = 1;
  }
  puVar3 = Method_System_Net_WebProxyDataBuilder_ParseProtocolProxies__;
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
    uVar11 = thunk_FUN_05ee6e70(param_1,0);
    uVar12 = thunk_FUN_02db45e8(Method_System_Net_WebRequest_CreateHttp__);
    uVar13 = thunk_FUN_02db45e8(Method_System_Net_WebRequest_CreateHttp__);
    uVar11 = FUN_04e80678(uVar12,uVar11,uVar13,0);
    thunk_FUN_02db45e8(PTR_DAT_066463b8);
    uVar12 = thunk_FUN_02d8a638();
    FUN_05002ed0(uVar12,uVar11,0);
    uVar11 = thunk_FUN_02db45e8(Method_System_Net_WebRequest_EndGetRequestStream__);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar12,uVar11);
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  local_c8 = &local_68;
  local_d0 = 0;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar1 = *(int *)(param_4 + 0x18);
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_05025690(*(undefined8 *)(param_4 + 0x10),0,iVar1,0);
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar8 = *(long *)puVar3;
  }
  if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  local_88 = FUN_035b1878(**(long **)(lVar8 + 0xb8),&local_78,
                          *(undefined8 *)
                           Method_System_Net_Configuration_WebProxyScriptElement__ctor__);
  local_d8 = local_88;
  local_e0 = 0;
  FUN_05e007bc(local_68,local_78);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  FUN_036a68ac(&local_f8,param_3,
               *(undefined8 *)Method_System_Net_ServerCertValidationCallback_Callback__);
  puVar7 = Method_System_Net_WebReadStream_Flush__;
  puVar6 = Method_Photon_Voice_WebRTCAudioProcessor_ReverseStreamThread__;
  puVar5 = Method_System_Net_Configuration_WebProxyScriptElement_set_DownloadTimeout__;
  puVar4 = Method_System_Net_Configuration_SmtpSection_get_DeliveryMethod__;
  puVar3 = Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Name__;
  local_90 = local_e8;
  puStack_98 = puStack_f0;
  local_a0 = local_f8;
  do {
    uVar9 = FUN_049c6928(&local_a0,*(undefined8 *)puVar3);
    lVar8 = local_90;
    if ((uVar9 & 1) == 0) {
      FUN_049c6924(&local_a0,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__);
      puVar3 = Method_System_Net_WebProxyDataBuilder_ParseProtocolProxies__;
      FUN_03a1908c(local_d8,*(undefined8 *)
                             Method_System_Net_Configuration_WebProxyScriptElement_get_AutoConfigUrlRetryInterval__
                  );
      if (local_e0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar8 = *(long *)puVar3;
      }
      FUN_036a7788(param_4,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                   *(undefined8 *)
                    Method_System_Net_Configuration_SmtpSection_get_SpecifiedPickupDirectory__);
      lVar8 = *(long *)puVar3;
      *(undefined1 *)(*local_c8 + 0x31) = 0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        System_Array_EmptyInternalEnumerator<RenderGraph_DebugData_PassData>___cctor
                  (lVar8,*(undefined8 *)
                          Method_System_Net_Configuration_SmtpSection_get_DeliveryFormat__);
        if (local_d0 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_036a68ac(&local_f8,local_78,*(undefined8 *)puVar7);
    local_c0 = local_f8;
    fVar17 = 1.0;
    local_f8 = 0;
    puStack_b8 = puStack_f0;
    local_b0 = local_e8;
    puStack_f0 = &local_c0;
    do {
      uVar9 = FUN_049c6928(&local_c0,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) break;
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      fVar16 = (float)FUN_05dffc04(local_b0,param_2,lVar8);
      fVar17 = fVar17 * fVar16;
    } while (0.0 < fVar17);
    FUN_049c6924(&local_c0,*(undefined8 *)puVar5);
    if (0.0 <= fVar17) {
      lVar14 = *(long *)(param_4 + 0x10);
      lVar15 = *(long *)Method_System_Net_Configuration_SmtpSection_get_Properties__;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar2 = *(uint *)(param_4 + 0x18);
      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(param_4 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = lVar8;
        thunk_FUN_02dc1ef0(plVar10,lVar8);
      }
      else {
        FUN_036a5e08(param_4,lVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)Method_System_Net_WebProxyDataBuilder_ParseProtocolProxies__;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *(long *)Method_System_Net_WebProxyDataBuilder_ParseProtocolProxies__;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_0486f5c0(fVar17,lVar14,lVar8,*(undefined8 *)puVar4);
    }
  } while( true );
}


