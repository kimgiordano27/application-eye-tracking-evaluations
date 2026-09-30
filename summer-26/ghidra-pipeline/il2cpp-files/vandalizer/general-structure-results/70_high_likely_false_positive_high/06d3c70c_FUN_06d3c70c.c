/*
FUNCTION_NAME: FUN_06d3c70c
ENTRY_POINT: 06d3c70c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06d3c70c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0759b2a8;
  if ((DAT_07a50e1c & 1) == 0) {
    FUN_031f20f4(Mono_Math_BigInteger___TypeInfo);
    FUN_031f20f4(System_Numerics_BigInteger___TypeInfo);
    FUN_031f20f4(System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum___TypeInfo);
    FUN_031f20f4(System_Xml_Schema_BitSet___TypeInfo);
    FUN_031f20f4(UnityEngine_BoneWeight___TypeInfo);
    FUN_031f20f4(bool___TypeInfo);
    FUN_031f20f4(Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event___TypeInfo
                );
    FUN_031f20f4(UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo);
    FUN_031f20f4(System_Linq_Expressions_Interpreter_ByRefUpdater___TypeInfo);
    FUN_031f20f4(byte___TypeInfo);
    FUN_031f20f4(System_Globalization_CalendarData___TypeInfo);
    FUN_031f20f4(System_Globalization_CalendarId___TypeInfo);
    FUN_031f20f4(UnityEngine_Camera___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Crmf_CertReqMsg___TypeInfo);
    FUN_031f20f4(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateEntry___TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a50e1c = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x198);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_06e5ba28(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x198);
    if (lVar3 == 0) {
LAB_06d3c9d4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar5 = *(long *)(lVar3 + 0x148);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                  UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo);
      FUN_056fa11c(uVar4,param_1,*(undefined8 *)Mono_Math_BigInteger___TypeInfo,0);
      FUN_04313708(lVar5,uVar4,*(undefined8 *)System_Globalization_CalendarData___TypeInfo);
      lVar3 = *(long *)(param_1 + 0x198);
      if (lVar3 == 0) goto LAB_06d3c9d4;
    }
    lVar5 = *(long *)(lVar3 + 0x150);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)byte___TypeInfo);
      FUN_056fa11c(uVar4,param_1,*(undefined8 *)System_Numerics_BigInteger___TypeInfo,0);
      FUN_04313708(lVar5,uVar4,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Crmf_CertReqMsg___TypeInfo);
      lVar3 = *(long *)(param_1 + 0x198);
      if (lVar3 == 0) goto LAB_06d3c9d4;
    }
    lVar5 = *(long *)(lVar3 + 0x160);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)bool___TypeInfo);
      FUN_056fa11c(uVar4,param_1,
                   *(undefined8 *)
                    System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum___TypeInfo,0);
      FUN_04313708(lVar5,uVar4,*(undefined8 *)UnityEngine_Camera___TypeInfo);
      lVar3 = *(long *)(param_1 + 0x198);
      if (lVar3 == 0) goto LAB_06d3c9d4;
    }
    lVar5 = *(long *)(lVar3 + 0x168);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_ByRefUpdater___TypeInfo);
      FUN_056fa11c(uVar4,param_1,*(undefined8 *)System_Xml_Schema_BitSet___TypeInfo,0);
      FUN_04313708(lVar5,uVar4,
                   *(undefined8 *)
                    Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateEntry___TypeInfo);
      lVar3 = *(long *)(param_1 + 0x198);
      if (lVar3 == 0) goto LAB_06d3c9d4;
    }
    lVar3 = *(long *)(lVar3 + 0x158);
    if (lVar3 != 0) {
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                  Oisoi_Networking_OisoiCoreAPI_BulkCreateUpdateGameEventRequestData_Event___TypeInfo
                                );
      FUN_056fa11c(uVar4,param_1,*(undefined8 *)UnityEngine_BoneWeight___TypeInfo,0);
      FUN_04313708(lVar3,uVar4,*(undefined8 *)System_Globalization_CalendarId___TypeInfo);
      return;
    }
  }
  return;
}


