/*
FUNCTION_NAME: Unity.Services.Core.Internal.ComponentRegistry$$IsComponentTypeRegistered
ENTRY_POINT: 06698048
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


void Unity_Services_Core_Internal_ComponentRegistry__IsComponentTypeRegistered(ulong param_1)

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
  long *unaff_x19;
  long unaff_x20;
  int iVar14;
  long unaff_x21;
  ulong uVar15;
  undefined8 *unaff_x23;
  int iVar16;
  undefined8 *unaff_x24;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *unaff_x29;
  undefined8 uVar21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
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
  
  if ((param_1 & 1) == 0) {
    FUN_031c09d4();
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_0456d268(&stack0x00000008,*(undefined4 *)(unaff_x21 + 8),4,1,*unaff_x24);
  uVar15 = 0;
  iVar14 = 0;
  iVar16 = 0x40;
  lVar17 = 0xc;
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000008;
  while( true ) {
    lVar19 = *unaff_x19;
    if ((*(ushort *)
          (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20)
          + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar11 = OVRPlugin_TrackingConfidence___TypeInfo;
    if ((long)*(int *)(lVar19 + 8) <= (long)uVar15) break;
    plVar20 = (long *)*unaff_x19;
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar1 = (undefined8 *)(lVar17 + *plVar20);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x70) + lVar17);
    uVar3 = *(undefined4 *)((long)puVar1 + -0xc);
    iVar4 = *(int *)(puVar1 + -1);
    bVar7 = *(byte *)((long)puVar1 + -3);
    uVar9 = *(undefined2 *)((long)puVar1 + -2);
    uVar21 = *puVar1;
    bVar8 = *(byte *)((long)puVar1 + -4);
    *(undefined4 *)((long)puVar2 + -0xc) = uVar3;
    *(int *)(puVar2 + -1) = iVar4;
    iVar6 = (int)uVar21;
    *(byte *)((long)puVar2 + -4) = bVar8;
    *(byte *)((long)puVar2 + -3) = bVar7;
    *(undefined2 *)((long)puVar2 + -2) = uVar9;
    *puVar2 = uVar21;
    iVar5 = *(int *)(*(long *)(unaff_x20 + 0x28) + (long)iVar6 * 4);
    iVar6 = *(int *)(*(long *)(unaff_x20 + 0x18) + (long)iVar6 * 4);
    if ((bVar7 & 1) == 0) {
      iVar5 = 1;
    }
    *(ulong *)(in_stack_00000050 + uVar15 * 8) = CONCAT44(iVar5 + iVar6,iVar6);
    uVar10 = iVar16 - iVar6 * iVar4;
    *(uint *)(*(long *)(unaff_x20 + 0x90) + uVar15 * 4) = uVar10;
    *(ulong *)(*(long *)(unaff_x20 + 0x80) + uVar15 * 8) =
         CONCAT44(uVar10 | (uint)bVar8 << 0x1f,uVar3);
    *(uint *)(in_stack_00000070 + uVar15 * 4) = uVar10;
    *(int *)(in_stack_00000060 + uVar15 * 4) = iVar4;
    System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
              (unaff_x20 + 0xa0,uVar3,uVar15 & 0xffffffff,*unaff_x23);
    if ((bVar7 & 1) != 0) {
      *(int *)(in_stack_00000080 + (long)iVar14 * 4) = (int)uVar15;
      iVar14 = iVar14 + 1;
    }
    iVar16 = iVar16 + iVar5 * iVar4;
    uVar15 = uVar15 + 1;
    lVar17 = lVar17 + 0x14;
  }
  *(int *)(unaff_x20 + 0x38) = iVar16;
  lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar11);
  iVar5 = iVar16 + 3;
  if (-1 < iVar16) {
    iVar5 = iVar16;
  }
  FUN_069a776c(lVar17,0x20,iVar5 >> 2,4,0);
  *(long *)(unaff_x20 + 0x48) = lVar17;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  if (lVar17 != 0) {
    FUN_03ac55f0(lVar17,in_stack_00000038,in_stack_00000040,0,0,4,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar11);
    FUN_069a776c(lVar17,0x20,iVar14,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar17;
    puVar13 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar17 != 0) {
      FUN_03ac523c(lVar17,in_stack_00000080,in_stack_00000088,0,0,iVar14,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar17 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar3 = *(undefined4 *)(lVar17 + 8);
      lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar11);
      FUN_069a776c(lVar19,0x20,uVar3,4,0);
      uVar21 = in_stack_00000078;
      lVar17 = in_stack_00000070;
      puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar19;
      lVar18 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar19 != 0) {
        FUN_03ac523c(lVar19,lVar17,uVar21,0,0,*(undefined4 *)(lVar18 + 8),*(undefined8 *)puVar13);
        lVar17 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar3 = *(undefined4 *)(lVar17 + 8);
        lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar11);
        FUN_069a776c(lVar19,0x20,uVar3,8,0);
        uVar21 = in_stack_00000058;
        lVar17 = in_stack_00000050;
        puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar19;
        lVar18 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar19 != 0) {
          FUN_03ac54b4(lVar19,lVar17,uVar21,0,0,*(undefined4 *)(lVar18 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar17 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar3 = *(undefined4 *)(lVar17 + 8);
          lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar11);
          FUN_069a776c(lVar19,0x20,uVar3,4,0);
          uVar21 = in_stack_00000068;
          lVar17 = in_stack_00000060;
          puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar19;
          lVar18 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar19 != 0) {
            FUN_03ac523c(lVar19,lVar17,uVar21,0,0,*(undefined4 *)(lVar18 + 8),*(undefined8 *)puVar13
                        );
            puVar11 = PTR_DAT_070f7080;
            *(int *)(unaff_x20 + 0x3c) = iVar14;
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


