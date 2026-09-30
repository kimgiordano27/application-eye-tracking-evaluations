/*
FUNCTION_NAME: FUN_06c91d30
ENTRY_POINT: 06c91d30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06c91d30(undefined8 param_1,long param_2,long param_3,long param_4,ulong param_5,
                 uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
  if ((DAT_07a5078f & 1) == 0) {
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075b7460);
    FUN_031f20f4(PTR_DAT_075f90a8);
    DAT_07a5078f = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  plVar6 = *(long **)(lVar3 + 0xb8);
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    puVar1 = PTR_DAT_075b7460;
    lVar3 = plVar6[1];
    if (lVar3 != 0) {
      FUN_0439c6d0(lVar3,*(undefined8 *)PTR_DAT_075b7460);
      lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
      lVar7 = *(long *)(lVar3 + 0x10);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        lVar3 = *(long *)(lVar3 + 0x18);
        if (lVar3 != 0) {
          FUN_0439c6d0(lVar3,*(undefined8 *)puVar1);
          if ((param_5 & 1) != 0) {
            if (param_2 == 0) goto LAB_06c91f8c;
            uVar4 = FUN_06e418a8(param_2,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
            }
            FUN_06c91f90(uVar4);
            if (param_3 == 0) goto LAB_06c91f8c;
            FUN_06e418a8(param_3,0);
            FUN_06c91f90();
          }
          if ((param_6 & 1) != 0) {
            if (param_2 == 0) goto LAB_06c91f8c;
            uVar4 = FUN_06e41b3c(param_2,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
            }
            FUN_06c9203c(uVar4);
            if (param_3 == 0) goto LAB_06c91f8c;
            FUN_06e41b3c(param_3,0);
            FUN_06c9203c();
          }
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar3 = *(long *)puVar2;
          }
          FUN_06c920e8(**(undefined8 **)(lVar3 + 0xb8),8);
          FUN_06c920e8(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),8);
          if ((param_5 & 1) == 0) {
            if (param_3 == 0) goto LAB_06c91f8c;
            uVar4 = FUN_06e418a8(param_3,0);
          }
          else {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar3 = *(long *)puVar2;
            }
            uVar4 = FUN_06c92170(param_1,**(undefined8 **)(lVar3 + 0xb8),param_2,param_3);
          }
          if ((param_6 & 1) == 0) {
            if (param_3 == 0) goto LAB_06c91f8c;
            uVar5 = FUN_06e41b3c(param_3,0);
          }
          else {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar3 = *(long *)puVar2;
            }
            uVar5 = FUN_06c92334(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),param_2,
                                 param_3);
          }
          if (param_4 != 0) {
            FUN_06e42020(param_4,uVar4,uVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_06c91f8c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


