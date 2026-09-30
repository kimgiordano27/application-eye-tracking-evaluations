/*
FUNCTION_NAME: Unity.Services.Core.Internal.CoreLogger$$LogWarning
ENTRY_POINT: 06697c54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction
*/


long Unity_Services_Core_Internal_CoreLogger__LogWarning(long param_1)

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
  undefined *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  int *piVar19;
  long *unaff_x19;
  long unaff_x20;
  long lVar20;
  undefined8 *unaff_x21;
  long lVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
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
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xdd8));
  FUN_03188a78(Oculus_Avatar2_IJointMonitor_TypeInfo);
  FUN_03188a78(Newtonsoft_Json_IJsonLineInfo_TypeInfo);
  FUN_03188a78(System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
  FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
  FUN_03188a78(PTR_DAT_070f7080);
  FUN_03188a78(System_Text_Json_Serialization_IJsonOnSerializing_TypeInfo);
  FUN_03188a78(Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  FUN_03188a78(UnityEngine_UIElements_IKeyboardEvent_TypeInfo);
  FUN_03188a78(PTR_DAT_070f7070);
  FUN_03188a78(System_Diagnostics_Internal_ILReader_TypeInfo);
  FUN_03188a78(Fusion_LagCompensation_ILagCompensationBroadphase_TypeInfo);
  FUN_03188a78(Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo);
  FUN_03188a78(UnityEngine_UI_ILayoutController_TypeInfo);
  FUN_03188a78(UnityEngine_UI_ILayoutElement_TypeInfo);
  FUN_03188a78(PTR_DAT_0710c410);
  *(undefined1 *)(unaff_x20 + 0xf1a) = 1;
  puVar11 = PTR_DAT_070f7070;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  lVar20 = *unaff_x19;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_0456d268(&stack0x00000080,*(undefined4 *)(lVar20 + 8),2,1,*(undefined8 *)puVar11);
  lVar20 = *unaff_x19;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_0456d268(&stack0x00000070,*(undefined4 *)(lVar20 + 8),2,1,*(undefined8 *)puVar11);
  lVar20 = *unaff_x19;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  puVar13 = System_Diagnostics_Internal_ILReader_TypeInfo;
  puVar12 = Oculus_Interaction_IInteractable_TypeInfo;
  FUN_0456d268(&stack0x00000060,*(undefined4 *)(lVar20 + 8),2,1,*(undefined8 *)puVar11);
  lVar20 = *unaff_x19;
  if ((*(ushort *)
        (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20) +
        0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_045ca718(&stack0x00000050,*(undefined4 *)(lVar20 + 8),2,1,*(undefined8 *)puVar13);
  lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar12);
  FUN_05971910(lVar20,0);
  puVar14 = UnityEngine_UI_ILayoutController_TypeInfo;
  puVar13 = Fusion_LagCompensation_ILagCompensationBroadphase_TypeInfo;
  if (lVar20 != 0) {
    uVar18 = *(undefined8 *)puVar11;
    *(undefined8 *)(lVar20 + 0x10) = *unaff_x21;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_0456d268(&stack0x00000038,2,4,1,uVar18);
    uVar18 = *(undefined8 *)puVar11;
    *(undefined8 *)(lVar20 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar20 + 0x18) = in_stack_00000038;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_0456d268(&stack0x00000028,2,4,1,uVar18);
    lVar21 = 0;
    iVar27 = 0;
    *(undefined8 *)(lVar20 + 0x30) = in_stack_00000030;
    *(undefined8 *)(lVar20 + 0x28) = in_stack_00000028;
    bVar15 = true;
    do {
      bVar10 = bVar15;
      *(int *)(*(long *)(lVar20 + 0x18) + lVar21 * 4) = iVar27;
      in_stack_00000048 = *unaff_x21;
      iVar27 = *(int *)((long)unaff_x21 + lVar21 * 4) + iVar27;
      uVar16 = FUN_066a33a0(&stack0x00000048,lVar21,0);
      *(undefined4 *)(*(long *)(lVar20 + 0x28) + lVar21 * 4) = uVar16;
      lVar21 = 1;
      bVar15 = false;
    } while (bVar10);
    if ((DAT_07557f13 & 1) == 0) {
      FUN_03188a78(Oculus_Interaction_IInteractable_TypeInfo);
      DAT_07557f13 = 1;
    }
    piVar19 = *(int **)(*(long *)puVar12 + 0xb8);
    iVar27 = *piVar19 + 1;
    *piVar19 = iVar27;
    puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined4 *)(lVar20 + 0x40) = 0;
    *(int *)(lVar20 + 0x44) = iVar27;
    lVar21 = *unaff_x19;
    if ((*(byte *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_0459ceb0(&stack0x00000038,*(undefined4 *)(lVar21 + 8),4,1,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerializing_TypeInfo);
    puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar20 + 0x88) = in_stack_00000040;
    *(undefined8 *)(lVar20 + 0x80) = in_stack_00000038;
    lVar21 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_0455e230(&stack0x00000028,*(undefined4 *)(lVar21 + 8),4,1,
                 *(undefined8 *)UnityEngine_UIElements_IKeyboardEvent_TypeInfo);
    puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar20 + 0x78) = in_stack_00000030;
    *(undefined8 *)(lVar20 + 0x70) = in_stack_00000028;
    lVar21 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    uVar16 = *(undefined4 *)(lVar21 + 8);
    uVar17 = FUN_064b5b9c(4,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_0461fa28(&stack0x00000018,uVar16,uVar17,
                 *(undefined8 *)UnityEngine_UI_ILayoutElement_TypeInfo);
    puVar12 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
    *(undefined8 *)(lVar20 + 0xa8) = in_stack_00000020;
    *(undefined8 *)(lVar20 + 0xa0) = in_stack_00000018;
    lVar21 = *unaff_x19;
    if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_0456d268(&stack0x00000008,*(undefined4 *)(lVar21 + 8),4,1,*(undefined8 *)puVar11);
    uVar22 = 0;
    iVar27 = 0;
    iVar23 = 0x40;
    lVar21 = 0xc;
    *(undefined8 *)(lVar20 + 0x98) = in_stack_00000010;
    *(undefined8 *)(lVar20 + 0x90) = in_stack_00000008;
    while( true ) {
      lVar25 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar11 = OVRPlugin_TrackingConfidence___TypeInfo;
      if ((long)*(int *)(lVar25 + 8) <= (long)uVar22) break;
      plVar26 = (long *)*unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar1 = (undefined8 *)(lVar21 + *plVar26);
      puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x70) + lVar21);
      uVar16 = *(undefined4 *)((long)puVar1 + -0xc);
      iVar3 = *(int *)(puVar1 + -1);
      bVar6 = *(byte *)((long)puVar1 + -3);
      uVar8 = *(undefined2 *)((long)puVar1 + -2);
      uVar18 = *puVar1;
      bVar7 = *(byte *)((long)puVar1 + -4);
      *(undefined4 *)((long)puVar2 + -0xc) = uVar16;
      *(int *)(puVar2 + -1) = iVar3;
      iVar5 = (int)uVar18;
      *(byte *)((long)puVar2 + -4) = bVar7;
      *(byte *)((long)puVar2 + -3) = bVar6;
      *(undefined2 *)((long)puVar2 + -2) = uVar8;
      *puVar2 = uVar18;
      iVar4 = *(int *)(*(long *)(lVar20 + 0x28) + (long)iVar5 * 4);
      iVar5 = *(int *)(*(long *)(lVar20 + 0x18) + (long)iVar5 * 4);
      if ((bVar6 & 1) == 0) {
        iVar4 = 1;
      }
      *(ulong *)(in_stack_00000050 + uVar22 * 8) = CONCAT44(iVar4 + iVar5,iVar5);
      uVar9 = iVar23 - iVar5 * iVar3;
      *(uint *)(*(long *)(lVar20 + 0x90) + uVar22 * 4) = uVar9;
      *(ulong *)(*(long *)(lVar20 + 0x80) + uVar22 * 8) =
           CONCAT44(uVar9 | (uint)bVar7 << 0x1f,uVar16);
      *(uint *)(in_stack_00000070 + uVar22 * 4) = uVar9;
      *(int *)(in_stack_00000060 + uVar22 * 4) = iVar3;
      System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
                (lVar20 + 0xa0,uVar16,uVar22 & 0xffffffff,*(undefined8 *)puVar14);
      if ((bVar6 & 1) != 0) {
        *(int *)(in_stack_00000080 + (long)iVar27 * 4) = (int)uVar22;
        iVar27 = iVar27 + 1;
      }
      iVar23 = iVar23 + iVar4 * iVar3;
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 0x14;
    }
    *(int *)(lVar20 + 0x38) = iVar23;
    lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar11);
    iVar4 = iVar23 + 3;
    if (-1 < iVar23) {
      iVar4 = iVar23;
    }
    FUN_069a776c(lVar21,0x20,iVar4 >> 2,4,0);
    *(long *)(lVar20 + 0x48) = lVar21;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo)
    ;
    if (lVar21 != 0) {
      FUN_03ac55f0(lVar21,in_stack_00000038,in_stack_00000040,0,0,4,
                   *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
      lVar21 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar11);
      FUN_069a776c(lVar21,0x20,iVar27,4,0);
      *(long *)(lVar20 + 0x50) = lVar21;
      puVar12 = Oculus_Avatar2_IJointMonitor_TypeInfo;
      if (lVar21 != 0) {
        FUN_03ac523c(lVar21,in_stack_00000080,in_stack_00000088,0,0,iVar27,
                     *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
        lVar21 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar16 = *(undefined4 *)(lVar21 + 8);
        lVar25 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar11);
        FUN_069a776c(lVar25,0x20,uVar16,4,0);
        uVar18 = in_stack_00000078;
        lVar21 = in_stack_00000070;
        puVar13 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(lVar20 + 0x58) = lVar25;
        lVar24 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar13 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar25 != 0) {
          FUN_03ac523c(lVar25,lVar21,uVar18,0,0,*(undefined4 *)(lVar24 + 8),*(undefined8 *)puVar12);
          lVar21 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar16 = *(undefined4 *)(lVar21 + 8);
          lVar25 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar11);
          FUN_069a776c(lVar25,0x20,uVar16,8,0);
          uVar18 = in_stack_00000058;
          lVar21 = in_stack_00000050;
          puVar13 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(lVar20 + 0x60) = lVar25;
          lVar24 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar13 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar25 != 0) {
            FUN_03ac54b4(lVar25,lVar21,uVar18,0,0,*(undefined4 *)(lVar24 + 8),
                         *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
            lVar21 = *unaff_x19;
            if ((*(ushort *)
                  (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_031c09d4();
            }
            uVar16 = *(undefined4 *)(lVar21 + 8);
            lVar25 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar11);
            FUN_069a776c(lVar25,0x20,uVar16,4,0);
            uVar18 = in_stack_00000068;
            lVar21 = in_stack_00000060;
            puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
            *(long *)(lVar20 + 0x68) = lVar25;
            lVar24 = *unaff_x19;
            if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
              FUN_031c09d4();
            }
            if (lVar25 != 0) {
              FUN_03ac523c(lVar25,lVar21,uVar18,0,0,*(undefined4 *)(lVar24 + 8),
                           *(undefined8 *)puVar12);
              puVar11 = PTR_DAT_070f7080;
              *(int *)(lVar20 + 0x3c) = iVar27;
              FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar11);
              FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar11);
              FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar11);
              return lVar20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


