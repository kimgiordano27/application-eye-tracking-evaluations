/*
FUNCTION_NAME: Unity.Services.Core.Internal.LockedComponentRegistry$$get_Registry
ENTRY_POINT: 06698188
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


void Unity_Services_Core_Internal_LockedComponentRegistry__get_Registry(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *unaff_x29;
  undefined8 uVar18;
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
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0669811c with catch @ 06698188
                        */
    unaff_x26 = unaff_x26 + 0x14;
    lVar16 = *unaff_x19;
    if ((*(ushort *)
          (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20)
          + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar11 = OVRPlugin_TrackingConfidence___TypeInfo;
    if ((long)*(int *)(lVar16 + 8) <= (long)unaff_x22) break;
    plVar17 = (long *)*unaff_x19;
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar1 = (undefined8 *)(unaff_x26 + *plVar17);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x70) + unaff_x26);
    uVar3 = *(undefined4 *)((long)puVar1 + -0xc);
    iVar4 = *(int *)(puVar1 + -1);
    bVar7 = *(byte *)((long)puVar1 + -3);
    uVar9 = *(undefined2 *)((long)puVar1 + -2);
    uVar18 = *puVar1;
    bVar8 = *(byte *)((long)puVar1 + -4);
    *(undefined4 *)((long)puVar2 + -0xc) = uVar3;
    *(int *)(puVar2 + -1) = iVar4;
    iVar6 = (int)uVar18;
    *(byte *)((long)puVar2 + -4) = bVar8;
    *(byte *)((long)puVar2 + -3) = bVar7;
    *(undefined2 *)((long)puVar2 + -2) = uVar9;
    *puVar2 = uVar18;
    iVar5 = *(int *)(*(long *)(unaff_x20 + 0x28) + (long)iVar6 * 4);
    iVar6 = *(int *)(*(long *)(unaff_x20 + 0x18) + (long)iVar6 * 4);
    if ((bVar7 & 1) == 0) {
      iVar5 = 1;
    }
    *(ulong *)(in_stack_00000050 + unaff_x22 * 8) = CONCAT44(iVar5 + iVar6,iVar6);
    uVar10 = unaff_w24 - iVar6 * iVar4;
    *(uint *)(*(long *)(unaff_x20 + 0x90) + unaff_x22 * 4) = uVar10;
    *(ulong *)(*(long *)(unaff_x20 + 0x80) + unaff_x22 * 8) =
         CONCAT44(uVar10 | (uint)bVar8 << 0x1f,uVar3);
    *(uint *)(in_stack_00000070 + unaff_x22 * 4) = uVar10;
    *(int *)(in_stack_00000060 + unaff_x22 * 4) = iVar4;
    System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
              (unaff_x20 + 0xa0,uVar3,unaff_x22 & 0xffffffff,*unaff_x23);
    if ((bVar7 & 1) != 0) {
      *(int *)(in_stack_00000080 + (long)unaff_w21 * 4) = (int)unaff_x22;
      unaff_w21 = unaff_w21 + 1;
    }
    unaff_w24 = unaff_w24 + iVar5 * iVar4;
    unaff_x22 = unaff_x22 + 1;
  }
  *(int *)(unaff_x20 + 0x38) = unaff_w24;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar11);
  iVar5 = unaff_w24 + 3;
  if (-1 < unaff_w24) {
    iVar5 = unaff_w24;
  }
  FUN_069a776c(lVar16,0x20,iVar5 >> 2,4,0);
  *(long *)(unaff_x20 + 0x48) = lVar16;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  if (lVar16 != 0) {
    FUN_03ac55f0(lVar16,in_stack_00000038,in_stack_00000040,0,0,4,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar11);
    FUN_069a776c(lVar16,0x20,unaff_w21,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar16;
    puVar13 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar16 != 0) {
      FUN_03ac523c(lVar16,in_stack_00000080,in_stack_00000088,0,0,unaff_w21,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar16 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar3 = *(undefined4 *)(lVar16 + 8);
      lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar11);
      FUN_069a776c(lVar14,0x20,uVar3,4,0);
      uVar18 = in_stack_00000078;
      lVar16 = in_stack_00000070;
      puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar14;
      lVar15 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar14 != 0) {
        FUN_03ac523c(lVar14,lVar16,uVar18,0,0,*(undefined4 *)(lVar15 + 8),*(undefined8 *)puVar13);
        lVar16 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar3 = *(undefined4 *)(lVar16 + 8);
        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar11);
        FUN_069a776c(lVar14,0x20,uVar3,8,0);
        uVar18 = in_stack_00000058;
        lVar16 = in_stack_00000050;
        puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar14;
        lVar15 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar14 != 0) {
          FUN_03ac54b4(lVar14,lVar16,uVar18,0,0,*(undefined4 *)(lVar15 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar16 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar3 = *(undefined4 *)(lVar16 + 8);
          lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar11);
          FUN_069a776c(lVar14,0x20,uVar3,4,0);
          uVar18 = in_stack_00000068;
          lVar16 = in_stack_00000060;
          puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar14;
          lVar15 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar14 != 0) {
            FUN_03ac523c(lVar14,lVar16,uVar18,0,0,*(undefined4 *)(lVar15 + 8),*(undefined8 *)puVar13
                        );
            puVar11 = PTR_DAT_070f7080;
            *(int *)(unaff_x20 + 0x3c) = unaff_w21;
            FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar11);
            FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar11);
            FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar11);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


