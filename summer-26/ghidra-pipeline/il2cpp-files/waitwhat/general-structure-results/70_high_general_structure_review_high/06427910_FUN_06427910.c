/*
FUNCTION_NAME: FUN_06427910
ENTRY_POINT: 06427910
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


undefined8 FUN_06427910(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_24 [4];
  
  lVar3 = param_1;
  if ((DAT_0755689c & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c48c8);
    FUN_03188a78(System_Net_RequestStream_var);
    FUN_03188a78(UnityEngine_RequireComponent_var);
    FUN_03188a78(PTR_DAT_070c6e90);
    FUN_03188a78(System_Resources_ResourceReader_var);
    FUN_03188a78(UnityEngine_ResourceRequest_var);
    FUN_03188a78(PTR_DAT_070cb898);
    FUN_03188a78(PTR_DAT_070c33f0);
    FUN_03188a78(System_Resources_ResourceSet_var);
    FUN_03188a78(Fusion_RpcAttribute_var);
    FUN_03188a78(Fusion_RpcInvokeDelegate_var);
    FUN_03188a78(PTR_DAT_070c3400);
    FUN_03188a78(Fusion_RpcStaticInvokeDelegate_var);
    FUN_03188a78(OVRTriangleMesh_var);
    FUN_03188a78(PTR_DAT_070f4518);
    FUN_03188a78(System_ParamsArray_var);
    FUN_03188a78(PTR_DAT_070c84c8);
    lVar3 = FUN_03188a78(System_Data_Rule_var);
    DAT_0755689c = 1;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  local_24[0] = 0;
  if (iVar2 - 2U < 2) {
    uVar5 = FUN_0642635c(lVar3,*(undefined8 *)(param_1 + 0x18));
    return uVar5;
  }
  puVar7 = (undefined8 *)OVRTriangleMesh_var;
  if (iVar2 != 4) {
    if (iVar2 != 1) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = FUN_057bdc60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_070c84c8,0);
        if ((uVar4 & 1) == 0) {
          puVar7 = (undefined8 *)OVRTriangleMesh_var;
          if (*(int *)(param_1 + 0x24) == 0) goto LAB_06427d3c;
          plVar6 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)PTR_DAT_070c48c8);
          FUN_057c92b0(plVar6,0);
          uVar8 = *(uint *)(param_1 + 0x24);
          if ((uVar8 >> 7 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            FUN_057cac1c(plVar6,*(undefined8 *)Fusion_RpcStaticInvokeDelegate_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 6 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)Fusion_RpcAttribute_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 5 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)System_Data_Rule_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 4 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)Fusion_RpcInvokeDelegate_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 3 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)System_Net_RequestStream_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 2 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)UnityEngine_RequireComponent_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 1 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)System_Resources_ResourceReader_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 & 1) != 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)System_Resources_ResourceSet_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          if ((uVar8 >> 0xf & 1) == 0) {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_06427e70;
            iVar2 = FUN_057c9de4(plVar6,0);
            if (0 < iVar2) {
              FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c33f0,0);
            }
            FUN_057cac1c(plVar6,*(undefined8 *)UnityEngine_ResourceRequest_var,0);
            uVar8 = *(uint *)(param_1 + 0x24);
          }
          FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070f4518,0);
          puVar1 = PTR_DAT_070cb898;
          local_24[0] = (undefined1)uVar8;
          uVar5 = FUN_058a6cdc(local_24,*(undefined8 *)PTR_DAT_070cb898,0);
          FUN_057cac1c(plVar6,uVar5,0);
          if (0xff < (int)uVar8) {
            FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c6e90,0);
            local_24[0] = (undefined1)(uVar8 >> 8);
            uVar5 = FUN_058a6cdc(local_24,*(undefined8 *)puVar1,0);
            FUN_057cac1c(plVar6,uVar5,0);
          }
          FUN_057cac1c(plVar6,*(undefined8 *)PTR_DAT_070c3400,0);
          if ((param_2 & 1) != 0) {
            uVar5 = FUN_059752e8(0);
            FUN_057cac1c(plVar6,uVar5,0);
          }
          uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return uVar5;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar5 = FUN_057b5e54(*(undefined8 *)System_ParamsArray_var,
                               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
          return uVar5;
        }
      }
LAB_06427e70:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    puVar7 = *(undefined8 **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
  }
LAB_06427d3c:
  return *puVar7;
}


