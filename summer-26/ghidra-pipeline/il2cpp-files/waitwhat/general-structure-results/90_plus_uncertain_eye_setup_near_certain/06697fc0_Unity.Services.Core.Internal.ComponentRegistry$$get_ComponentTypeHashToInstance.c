/*
FUNCTION_NAME: Unity.Services.Core.Internal.ComponentRegistry$$get_ComponentTypeHashToInstance
ENTRY_POINT: 06697fc0
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


void Unity_Services_Core_Internal_ComponentRegistry__get_ComponentTypeHashToInstance(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  long *unaff_x19;
  long unaff_x20;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *unaff_x23;
  int iVar18;
  undefined8 *unaff_x24;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *unaff_x29;
  undefined8 uVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
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
  
  FUN_0455e230();
  puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000028;
  lVar16 = *unaff_x19;
  if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar4 = *(undefined4 *)(lVar16 + 8);
  uVar14 = FUN_064b5b9c(4,0);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_0461fa28(&stack0x00000018,uVar4,uVar14,*(undefined8 *)UnityEngine_UI_ILayoutElement_TypeInfo);
  puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000018;
  lVar16 = *unaff_x19;
  if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_0456d268(&stack0x00000008,*(undefined4 *)(lVar16 + 8),4,1,*unaff_x24);
  uVar17 = 0;
  iVar15 = 0;
  iVar18 = 0x40;
  lVar16 = 0xc;
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000008;
  while( true ) {
    lVar20 = *unaff_x19;
    if ((*(ushort *)
          (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20)
          + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar11 = OVRPlugin_TrackingConfidence___TypeInfo;
    if ((long)*(int *)(lVar20 + 8) <= (long)uVar17) break;
    plVar21 = (long *)*unaff_x19;
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar1 = (undefined8 *)(lVar16 + *plVar21);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x70) + lVar16);
    uVar4 = *(undefined4 *)((long)puVar1 + -0xc);
    iVar3 = *(int *)(puVar1 + -1);
    bVar7 = *(byte *)((long)puVar1 + -3);
    uVar9 = *(undefined2 *)((long)puVar1 + -2);
    uVar22 = *puVar1;
    bVar8 = *(byte *)((long)puVar1 + -4);
    *(undefined4 *)((long)puVar2 + -0xc) = uVar4;
    *(int *)(puVar2 + -1) = iVar3;
    iVar6 = (int)uVar22;
    *(byte *)((long)puVar2 + -4) = bVar8;
    *(byte *)((long)puVar2 + -3) = bVar7;
    *(undefined2 *)((long)puVar2 + -2) = uVar9;
    *puVar2 = uVar22;
    iVar5 = *(int *)(*(long *)(unaff_x20 + 0x28) + (long)iVar6 * 4);
    iVar6 = *(int *)(*(long *)(unaff_x20 + 0x18) + (long)iVar6 * 4);
    if ((bVar7 & 1) == 0) {
      iVar5 = 1;
    }
    *(ulong *)(in_stack_00000050 + uVar17 * 8) = CONCAT44(iVar5 + iVar6,iVar6);
    uVar10 = iVar18 - iVar6 * iVar3;
    *(uint *)(*(long *)(unaff_x20 + 0x90) + uVar17 * 4) = uVar10;
    *(ulong *)(*(long *)(unaff_x20 + 0x80) + uVar17 * 8) =
         CONCAT44(uVar10 | (uint)bVar8 << 0x1f,uVar4);
    *(uint *)(in_stack_00000070 + uVar17 * 4) = uVar10;
    *(int *)(in_stack_00000060 + uVar17 * 4) = iVar3;
    System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
              (unaff_x20 + 0xa0,uVar4,uVar17 & 0xffffffff,*unaff_x23);
    if ((bVar7 & 1) != 0) {
      *(int *)(in_stack_00000080 + (long)iVar15 * 4) = (int)uVar17;
      iVar15 = iVar15 + 1;
    }
    iVar18 = iVar18 + iVar5 * iVar3;
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 0x14;
  }
  *(int *)(unaff_x20 + 0x38) = iVar18;
  lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar11);
  iVar5 = iVar18 + 3;
  if (-1 < iVar18) {
    iVar5 = iVar18;
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
    FUN_069a776c(lVar16,0x20,iVar15,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar16;
    puVar13 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar16 != 0) {
      FUN_03ac523c(lVar16,in_stack_00000080,in_stack_00000088,0,0,iVar15,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar16 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar4 = *(undefined4 *)(lVar16 + 8);
      lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar11);
      FUN_069a776c(lVar20,0x20,uVar4,4,0);
      uVar22 = in_stack_00000078;
      lVar16 = in_stack_00000070;
      puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar20;
      lVar19 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar20 != 0) {
        FUN_03ac523c(lVar20,lVar16,uVar22,0,0,*(undefined4 *)(lVar19 + 8),*(undefined8 *)puVar13);
        lVar16 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar4 = *(undefined4 *)(lVar16 + 8);
        lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar11);
        FUN_069a776c(lVar20,0x20,uVar4,8,0);
        uVar22 = in_stack_00000058;
        lVar16 = in_stack_00000050;
        puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar20;
        lVar19 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar20 != 0) {
          FUN_03ac54b4(lVar20,lVar16,uVar22,0,0,*(undefined4 *)(lVar19 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar16 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar4 = *(undefined4 *)(lVar16 + 8);
          lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar11);
          FUN_069a776c(lVar20,0x20,uVar4,4,0);
          uVar22 = in_stack_00000068;
          lVar16 = in_stack_00000060;
          puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar20;
          lVar19 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar20 != 0) {
            FUN_03ac523c(lVar20,lVar16,uVar22,0,0,*(undefined4 *)(lVar19 + 8),*(undefined8 *)puVar13
                        );
            puVar11 = PTR_DAT_070f7080;
            *(int *)(unaff_x20 + 0x3c) = iVar15;
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


