/*
FUNCTION_NAME: Unity.Services.Core.Internal.ComponentRegistry$$ResetProvidedComponents
ENTRY_POINT: 06698110
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_Core_Internal_ComponentRegistry__ResetProvidedComponents
               (undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 in_ZR;
  long lVar11;
  uint in_w8;
  undefined8 *in_x9;
  undefined2 in_w10;
  int in_w11;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  byte unaff_w25;
  long unaff_x26;
  long lVar12;
  int unaff_w27;
  long lVar13;
  long *plVar14;
  long *unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    *(undefined2 *)((long)in_x9 + -2) = in_w10;
    *in_x9 = param_1;
                    /* try { // try from 0669811c to 0679812b has its CatchHandler @ 06698188 */
    iVar3 = *(int *)(*(long *)(unaff_x20 + 0x28) + (long)in_w11 * 4);
    iVar4 = *(int *)(*(long *)(unaff_x20 + 0x18) + (long)in_w11 * 4);
                    /* try { // try from 0669812c to 067981a3 has its CatchHandler @ 06697f90 */
    if ((bool)in_ZR) {
      iVar3 = 1;
    }
    *(ulong *)(in_stack_00000050 + unaff_x22 * 8) = CONCAT44(iVar3 + iVar4,iVar4);
    uVar6 = unaff_w24 - iVar4 * unaff_w27;
    *(uint *)(*(long *)(unaff_x20 + 0x90) + unaff_x22 * 4) = uVar6;
    *(ulong *)(*(long *)(unaff_x20 + 0x80) + unaff_x22 * 8) =
         param_3 | (ulong)(uVar6 | in_w8 << 0x1f) << 0x20;
    *(uint *)(in_stack_00000070 + unaff_x22 * 4) = uVar6;
    *(int *)(in_stack_00000060 + unaff_x22 * 4) = unaff_w27;
    System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
              (param_2,param_3,param_4,*unaff_x23);
    if ((unaff_w25 & 1) != 0) {
      *(int *)(in_stack_00000080 + (long)unaff_w21 * 4) = (int)unaff_x22;
      unaff_w21 = unaff_w21 + 1;
    }
    unaff_w24 = unaff_w24 + iVar3 * unaff_w27;
    unaff_x22 = unaff_x22 + 1;
    unaff_x26 = unaff_x26 + 0x14;
    lVar13 = *unaff_x19;
    if ((*(ushort *)
          (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20)
          + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar7 = OVRPlugin_TrackingConfidence___TypeInfo;
    if ((long)*(int *)(lVar13 + 8) <= (long)unaff_x22) break;
    plVar14 = (long *)*unaff_x19;
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    param_2 = unaff_x20 + 0xa0;
    param_4 = unaff_x22 & 0xffffffff;
    puVar1 = (undefined8 *)(unaff_x26 + *plVar14);
    in_x9 = (undefined8 *)(*(long *)(unaff_x20 + 0x70) + unaff_x26);
    param_3 = (ulong)*(uint *)((long)puVar1 + -0xc);
    unaff_w27 = *(int *)(puVar1 + -1);
    unaff_w25 = *(byte *)((long)puVar1 + -3);
    in_w10 = *(undefined2 *)((long)puVar1 + -2);
    param_1 = *puVar1;
    bVar5 = *(byte *)((long)puVar1 + -4);
    in_w8 = (uint)bVar5;
    *(uint *)((long)in_x9 + -0xc) = *(uint *)((long)puVar1 + -0xc);
    *(int *)(in_x9 + -1) = unaff_w27;
    in_w11 = (int)param_1;
    in_ZR = (unaff_w25 & 1) == 0;
    *(byte *)((long)in_x9 + -4) = bVar5;
    *(byte *)((long)in_x9 + -3) = unaff_w25;
  }
  *(int *)(unaff_x20 + 0x38) = unaff_w24;
  lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar7);
  iVar3 = unaff_w24 + 3;
  if (-1 < unaff_w24) {
    iVar3 = unaff_w24;
  }
  FUN_069a776c(lVar13,0x20,iVar3 >> 2,4,0);
  *(long *)(unaff_x20 + 0x48) = lVar13;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  if (lVar13 != 0) {
    FUN_03ac55f0(lVar13,in_stack_00000038,in_stack_00000040,0,0,4,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
    lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar7);
    FUN_069a776c(lVar13,0x20,unaff_w21,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar13;
    puVar9 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar13 != 0) {
      FUN_03ac523c(lVar13,in_stack_00000080,in_stack_00000088,0,0,unaff_w21,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar13 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar2 = *(undefined4 *)(lVar13 + 8);
      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar7);
      FUN_069a776c(lVar11,0x20,uVar2,4,0);
      uVar10 = in_stack_00000078;
      lVar13 = in_stack_00000070;
      puVar8 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar11;
      lVar12 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar11 != 0) {
        FUN_03ac523c(lVar11,lVar13,uVar10,0,0,*(undefined4 *)(lVar12 + 8),*(undefined8 *)puVar9);
        lVar13 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar2 = *(undefined4 *)(lVar13 + 8);
        lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar7);
        FUN_069a776c(lVar11,0x20,uVar2,8,0);
        uVar10 = in_stack_00000058;
        lVar13 = in_stack_00000050;
        puVar8 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar11;
        lVar12 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar8 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar11 != 0) {
          FUN_03ac54b4(lVar11,lVar13,uVar10,0,0,*(undefined4 *)(lVar12 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar13 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar2 = *(undefined4 *)(lVar13 + 8);
          lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar7);
          FUN_069a776c(lVar11,0x20,uVar2,4,0);
          uVar10 = in_stack_00000068;
          lVar13 = in_stack_00000060;
          puVar7 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar11;
          lVar12 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar7 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar11 != 0) {
            FUN_03ac523c(lVar11,lVar13,uVar10,0,0,*(undefined4 *)(lVar12 + 8),*(undefined8 *)puVar9)
            ;
            puVar7 = PTR_DAT_070f7080;
            *(int *)(unaff_x20 + 0x3c) = unaff_w21;
            FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar7);
            FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar7);
            FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


