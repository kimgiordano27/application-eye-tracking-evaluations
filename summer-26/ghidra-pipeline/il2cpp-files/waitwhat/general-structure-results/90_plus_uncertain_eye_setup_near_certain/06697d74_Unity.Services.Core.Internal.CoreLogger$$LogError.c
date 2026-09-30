/*
FUNCTION_NAME: Unity.Services.Core.Internal.CoreLogger$$LogError
ENTRY_POINT: 06697d74
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Unity_Services_Core_Internal_CoreLogger__LogError(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  int *piVar18;
  long *unaff_x19;
  long lVar19;
  undefined8 *unaff_x21;
  long lVar20;
  ulong uVar21;
  int iVar22;
  undefined8 *unaff_x24;
  long lVar23;
  long lVar24;
  long *plVar25;
  int iVar26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  
  lVar19 = *unaff_x19;
  if ((*(ushort *)(*(long *)(**(long **)(param_1 + 0xe38) + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_0456d268(&stack0x00000070,*(undefined4 *)(lVar19 + 8),2,1,*unaff_x24);
  lVar19 = *unaff_x19;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  puVar13 = System_Diagnostics_Internal_ILReader_TypeInfo;
  puVar11 = Oculus_Interaction_IInteractable_TypeInfo;
  FUN_0456d268(&stack0x00000060,*(undefined4 *)(lVar19 + 8),2,1,*unaff_x24);
  lVar19 = *unaff_x19;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_045ca718(&stack0x00000050,*(undefined4 *)(lVar19 + 8),2,1,*(undefined8 *)puVar13);
  lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar11);
  FUN_05971910(lVar19,0);
  puVar12 = UnityEngine_UI_ILayoutController_TypeInfo;
  puVar13 = Fusion_LagCompensation_ILagCompensationBroadphase_TypeInfo;
  if (lVar19 != 0) {
    uVar17 = *unaff_x24;
    *(undefined8 *)(lVar19 + 0x10) = *unaff_x21;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_0456d268(&stack0x00000038,2,4,1,uVar17);
    uVar17 = *unaff_x24;
    *(undefined8 *)(lVar19 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar19 + 0x18) = in_stack_00000038;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_0456d268(&stack0x00000028,2,4,1,uVar17);
    lVar20 = 0;
    iVar26 = 0;
    *(undefined8 *)(lVar19 + 0x30) = in_stack_00000030;
    *(undefined8 *)(lVar19 + 0x28) = in_stack_00000028;
    bVar14 = true;
    do {
      bVar10 = bVar14;
      *(int *)(*(long *)(lVar19 + 0x18) + lVar20 * 4) = iVar26;
      in_stack_00000048 = *unaff_x21;
      iVar26 = *(int *)((long)unaff_x21 + lVar20 * 4) + iVar26;
      uVar15 = FUN_066a33a0(&stack0x00000048,lVar20,0);
      *(undefined4 *)(*(long *)(lVar19 + 0x28) + lVar20 * 4) = uVar15;
      lVar20 = 1;
      bVar14 = false;
    } while (bVar10);
    if ((DAT_07557f13 & 1) == 0) {
      FUN_03188a78(Oculus_Interaction_IInteractable_TypeInfo);
      DAT_07557f13 = 1;
    }
    piVar18 = *(int **)(*(long *)puVar11 + 0xb8);
    iVar26 = *piVar18 + 1;
    *piVar18 = iVar26;
    puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined4 *)(lVar19 + 0x40) = 0;
    *(int *)(lVar19 + 0x44) = iVar26;
    lVar20 = *unaff_x19;
    if ((*(byte *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_0459ceb0(&stack0x00000038,*(undefined4 *)(lVar20 + 8),4,1,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerializing_TypeInfo);
    puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar19 + 0x88) = in_stack_00000040;
    *(undefined8 *)(lVar19 + 0x80) = in_stack_00000038;
    lVar20 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_0455e230(&stack0x00000028,*(undefined4 *)(lVar20 + 8),4,1,
                 *(undefined8 *)UnityEngine_UIElements_IKeyboardEvent_TypeInfo);
    puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar19 + 0x78) = in_stack_00000030;
    *(undefined8 *)(lVar19 + 0x70) = in_stack_00000028;
    lVar20 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    uVar15 = *(undefined4 *)(lVar20 + 8);
    uVar16 = FUN_064b5b9c(4,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_0461fa28(&stack0x00000018,uVar15,uVar16,
                 *(undefined8 *)UnityEngine_UI_ILayoutElement_TypeInfo);
    puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar19 + 0xa8) = in_stack_00000020;
    *(undefined8 *)(lVar19 + 0xa0) = in_stack_00000018;
    lVar20 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_0456d268(&stack0x00000008,*(undefined4 *)(lVar20 + 8),4,1,*unaff_x24);
    uVar21 = 0;
    iVar26 = 0;
    iVar22 = 0x40;
    lVar20 = 0xc;
    *(undefined8 *)(lVar19 + 0x98) = in_stack_00000010;
    *(undefined8 *)(lVar19 + 0x90) = in_stack_00000008;
    while( true ) {
      lVar24 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar11 = OVRPlugin_TrackingConfidence___TypeInfo;
      if ((long)*(int *)(lVar24 + 8) <= (long)uVar21) break;
      plVar25 = (long *)*unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar1 = (undefined8 *)(lVar20 + *plVar25);
      puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x70) + lVar20);
      uVar15 = *(undefined4 *)((long)puVar1 + -0xc);
      iVar3 = *(int *)(puVar1 + -1);
      bVar6 = *(byte *)((long)puVar1 + -3);
      uVar8 = *(undefined2 *)((long)puVar1 + -2);
      uVar17 = *puVar1;
      bVar7 = *(byte *)((long)puVar1 + -4);
      *(undefined4 *)((long)puVar2 + -0xc) = uVar15;
      *(int *)(puVar2 + -1) = iVar3;
      iVar5 = (int)uVar17;
      *(byte *)((long)puVar2 + -4) = bVar7;
      *(byte *)((long)puVar2 + -3) = bVar6;
      *(undefined2 *)((long)puVar2 + -2) = uVar8;
      *puVar2 = uVar17;
      iVar4 = *(int *)(*(long *)(lVar19 + 0x28) + (long)iVar5 * 4);
      iVar5 = *(int *)(*(long *)(lVar19 + 0x18) + (long)iVar5 * 4);
      if ((bVar6 & 1) == 0) {
        iVar4 = 1;
      }
      *(ulong *)(in_stack_00000050 + uVar21 * 8) = CONCAT44(iVar4 + iVar5,iVar5);
      uVar9 = iVar22 - iVar5 * iVar3;
      *(uint *)(*(long *)(lVar19 + 0x90) + uVar21 * 4) = uVar9;
      *(ulong *)(*(long *)(lVar19 + 0x80) + uVar21 * 8) =
           CONCAT44(uVar9 | (uint)bVar7 << 0x1f,uVar15);
      *(uint *)(in_stack_00000070 + uVar21 * 4) = uVar9;
      *(int *)(in_stack_00000060 + uVar21 * 4) = iVar3;
      System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
                (lVar19 + 0xa0,uVar15,uVar21 & 0xffffffff,*(undefined8 *)puVar12);
      if ((bVar6 & 1) != 0) {
        *(int *)(in_stack_00000080 + (long)iVar26 * 4) = (int)uVar21;
        iVar26 = iVar26 + 1;
      }
      iVar22 = iVar22 + iVar4 * iVar3;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x14;
    }
    *(int *)(lVar19 + 0x38) = iVar22;
    lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar11);
    iVar4 = iVar22 + 3;
    if (-1 < iVar22) {
      iVar4 = iVar22;
    }
    FUN_069a776c(lVar20,0x20,iVar4 >> 2,4,0);
    *(long *)(lVar19 + 0x48) = lVar20;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo)
    ;
    if (lVar20 != 0) {
      FUN_03ac55f0(lVar20,in_stack_00000038,in_stack_00000040,0,0,4,
                   *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
      lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar11);
      FUN_069a776c(lVar20,0x20,iVar26,4,0);
      *(long *)(lVar19 + 0x50) = lVar20;
      puVar13 = Oculus_Avatar2_IJointMonitor_TypeInfo;
      if (lVar20 != 0) {
        FUN_03ac523c(lVar20,in_stack_00000080,in_stack_00000088,0,0,iVar26,
                     *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
        lVar20 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar15 = *(undefined4 *)(lVar20 + 8);
        lVar24 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar11);
        FUN_069a776c(lVar24,0x20,uVar15,4,0);
        uVar17 = in_stack_00000078;
        lVar20 = in_stack_00000070;
        puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(lVar19 + 0x58) = lVar24;
        lVar23 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar24 != 0) {
          FUN_03ac523c(lVar24,lVar20,uVar17,0,0,*(undefined4 *)(lVar23 + 8),*(undefined8 *)puVar13);
          lVar20 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar15 = *(undefined4 *)(lVar20 + 8);
          lVar24 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar11);
          FUN_069a776c(lVar24,0x20,uVar15,8,0);
          uVar17 = in_stack_00000058;
          lVar20 = in_stack_00000050;
          puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(lVar19 + 0x60) = lVar24;
          lVar23 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar24 != 0) {
            FUN_03ac54b4(lVar24,lVar20,uVar17,0,0,*(undefined4 *)(lVar23 + 8),
                         *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
            lVar20 = *unaff_x19;
            if ((*(ushort *)
                  (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_031c09d4();
            }
            uVar15 = *(undefined4 *)(lVar20 + 8);
            lVar24 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar11);
            FUN_069a776c(lVar24,0x20,uVar15,4,0);
            uVar17 = in_stack_00000068;
            lVar20 = in_stack_00000060;
            puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
            *(long *)(lVar19 + 0x68) = lVar24;
            lVar23 = *unaff_x19;
            if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
              FUN_031c09d4();
            }
            if (lVar24 != 0) {
              FUN_03ac523c(lVar24,lVar20,uVar17,0,0,*(undefined4 *)(lVar23 + 8),
                           *(undefined8 *)puVar13);
              puVar11 = PTR_DAT_070f7080;
              *(int *)(lVar19 + 0x3c) = iVar26;
              FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar11);
              FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar11);
              FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar11);
              return lVar19;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


