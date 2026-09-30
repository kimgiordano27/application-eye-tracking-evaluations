/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 05ddb800
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  short unaff_w19;
  ulong uVar6;
  long *unaff_x21;
  uint uVar7;
  
  lVar4 = *unaff_x21;
  uVar7 = 1;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x21;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_05ddb958;
    uVar2 = uVar7 - 1;
    if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)uVar2) goto LAB_05ddb8e0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_05ddb958;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_05ddb95c;
    if (*(char *)(lVar5 + (int)uVar2 + 0x20) == '\0') break;
    uVar7 = uVar7 + 1;
  }
  lVar4 = FUN_05e47b78(0);
  if (lVar4 == 0) {
LAB_05ddb958:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  sVar3 = FUN_05c829ac(lVar4,uVar2,0);
  lVar4 = *unaff_x21;
  if (sVar3 == unaff_w19) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *unaff_x21;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) goto LAB_05ddb958;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < uVar1) {
      *(undefined1 *)(lVar4 + (int)uVar2 + 0x20) = 1;
      return uVar1 == uVar7;
    }
  }
  else {
LAB_05ddb8e0:
    uVar6 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *unaff_x21;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_05ddb958;
      if ((long)*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (long)uVar6) {
        return false;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *unaff_x21;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_05ddb958;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
      lVar5 = lVar5 + uVar6;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(lVar5 + 0x20) = 0;
    }
  }
LAB_05ddb95c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


