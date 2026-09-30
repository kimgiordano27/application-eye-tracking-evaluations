/*
FUNCTION_NAME: Unity.Services.Core.Internal.CoreLogger$$LogException
ENTRY_POINT: 06697e94
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


void Unity_Services_Core_Internal_CoreLogger__LogException
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar15;
  ulong uVar16;
  undefined8 *unaff_x23;
  int iVar17;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long lVar18;
  uint unaff_w27;
  long lVar19;
  long *plVar20;
  int iVar21;
  long *unaff_x29;
  undefined8 uVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
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
  
  *(long *)(unaff_x20 + 0x20) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x18) = param_1._0_8_;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  FUN_0456d268(param_2,2,4,1);
  lVar15 = 0;
  iVar21 = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack0000000000000030;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack0000000000000028;
  do {
    *(int *)(*(long *)(unaff_x20 + 0x18) + lVar15 * 4) = iVar21;
    in_stack_00000048 = *unaff_x21;
    iVar21 = *(int *)((long)unaff_x21 + lVar15 * 4) + iVar21;
    uVar13 = FUN_066a33a0(&stack0x00000048,lVar15,0);
    *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + lVar15 * 4) = uVar13;
    lVar15 = 1;
    uVar3 = unaff_w27 & 1;
    unaff_w27 = 0;
  } while (uVar3 != 0);
  if ((DAT_07557f13 & 1) == 0) {
    FUN_03188a78(Oculus_Interaction_IInteractable_TypeInfo);
    DAT_07557f13 = 1;
  }
  iVar21 = **(int **)(*unaff_x25 + 0xb8) + 1;
  **(int **)(*unaff_x25 + 0xb8) = iVar21;
  puVar10 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  *(int *)(unaff_x20 + 0x44) = iVar21;
  lVar15 = *unaff_x19;
  if ((*(byte *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_0459ceb0(&stack0x00000038,*(undefined4 *)(lVar15 + 8),4,1,
               *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerializing_TypeInfo);
  puVar10 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000040;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000038;
  lVar15 = *unaff_x19;
                    /* try { // try from 06697f90 to 0679811b has its CatchHandler @ 06697f90
                       catch() { ... } // from try @ 06697f90 with catch @ 06697f90
                       catch() { ... } // from try @ 0669812c with catch @ 06697f90
                       catch() { ... } // from try @ 066981c0 with catch @ 06697f90 */
  if ((*(ushort *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  FUN_0455e230(&stack0x00000028,*(undefined4 *)(lVar15 + 8),4,1,
               *(undefined8 *)UnityEngine_UIElements_IKeyboardEvent_TypeInfo);
  puVar10 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack0000000000000030;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack0000000000000028;
  lVar15 = *unaff_x19;
  if ((*(ushort *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar13 = *(undefined4 *)(lVar15 + 8);
  uVar14 = FUN_064b5b9c(4,0);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_0461fa28(&stack0x00000018,uVar13,uVar14,*(undefined8 *)UnityEngine_UI_ILayoutElement_TypeInfo)
  ;
  puVar10 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000018;
  lVar15 = *unaff_x19;
  if ((*(ushort *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_0456d268(&stack0x00000008,*(undefined4 *)(lVar15 + 8),4,1,*unaff_x24);
  uVar16 = 0;
  iVar21 = 0;
  iVar17 = 0x40;
  lVar15 = 0xc;
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000010;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000008;
  while( true ) {
    lVar19 = *unaff_x19;
    if ((*(ushort *)
          (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20)
          + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar10 = OVRPlugin_TrackingConfidence___TypeInfo;
    if ((long)*(int *)(lVar19 + 8) <= (long)uVar16) break;
    plVar20 = (long *)*unaff_x19;
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar1 = (undefined8 *)(lVar15 + *plVar20);
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x70) + lVar15);
    uVar13 = *(undefined4 *)((long)puVar1 + -0xc);
    iVar4 = *(int *)(puVar1 + -1);
    bVar7 = *(byte *)((long)puVar1 + -3);
    uVar9 = *(undefined2 *)((long)puVar1 + -2);
    uVar22 = *puVar1;
    bVar8 = *(byte *)((long)puVar1 + -4);
    *(undefined4 *)((long)puVar2 + -0xc) = uVar13;
    *(int *)(puVar2 + -1) = iVar4;
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
    *(ulong *)(in_stack_00000050 + uVar16 * 8) = CONCAT44(iVar5 + iVar6,iVar6);
    uVar3 = iVar17 - iVar6 * iVar4;
    *(uint *)(*(long *)(unaff_x20 + 0x90) + uVar16 * 4) = uVar3;
    *(ulong *)(*(long *)(unaff_x20 + 0x80) + uVar16 * 8) =
         CONCAT44(uVar3 | (uint)bVar8 << 0x1f,uVar13);
    *(uint *)(in_stack_00000070 + uVar16 * 4) = uVar3;
    *(int *)(in_stack_00000060 + uVar16 * 4) = iVar4;
    System_Collections_Generic_ObjectEqualityComparer<StyleList<StylePropertyName>>__GetHashCode
              (unaff_x20 + 0xa0,uVar13,uVar16 & 0xffffffff,*unaff_x23);
    if ((bVar7 & 1) != 0) {
      *(int *)(in_stack_00000080 + (long)iVar21 * 4) = (int)uVar16;
      iVar21 = iVar21 + 1;
    }
    iVar17 = iVar17 + iVar5 * iVar4;
    uVar16 = uVar16 + 1;
    lVar15 = lVar15 + 0x14;
  }
  *(int *)(unaff_x20 + 0x38) = iVar17;
  lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar10);
  iVar5 = iVar17 + 3;
  if (-1 < iVar17) {
    iVar5 = iVar17;
  }
  FUN_069a776c(lVar15,0x20,iVar5 >> 2,4,0);
  *(long *)(unaff_x20 + 0x48) = lVar15;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  if (lVar15 != 0) {
    FUN_03ac55f0(lVar15,in_stack_00000038,in_stack_00000040,0,0,4,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
    lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar10);
    FUN_069a776c(lVar15,0x20,iVar21,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar15;
    puVar12 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar15 != 0) {
      FUN_03ac523c(lVar15,in_stack_00000080,in_stack_00000088,0,0,iVar21,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar15 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar13 = *(undefined4 *)(lVar15 + 8);
      lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar10);
      FUN_069a776c(lVar19,0x20,uVar13,4,0);
      uVar22 = in_stack_00000078;
      lVar15 = in_stack_00000070;
      puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar19;
      lVar18 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar19 != 0) {
        FUN_03ac523c(lVar19,lVar15,uVar22,0,0,*(undefined4 *)(lVar18 + 8),*(undefined8 *)puVar12);
        lVar15 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar13 = *(undefined4 *)(lVar15 + 8);
        lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar10);
        FUN_069a776c(lVar19,0x20,uVar13,8,0);
        uVar22 = in_stack_00000058;
        lVar15 = in_stack_00000050;
        puVar11 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar19;
        lVar18 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar19 != 0) {
          FUN_03ac54b4(lVar19,lVar15,uVar22,0,0,*(undefined4 *)(lVar18 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar15 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar13 = *(undefined4 *)(lVar15 + 8);
          lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar10);
          FUN_069a776c(lVar19,0x20,uVar13,4,0);
          uVar22 = in_stack_00000068;
          lVar15 = in_stack_00000060;
          puVar10 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar19;
          lVar18 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar19 != 0) {
            FUN_03ac523c(lVar19,lVar15,uVar22,0,0,*(undefined4 *)(lVar18 + 8),*(undefined8 *)puVar12
                        );
            puVar10 = PTR_DAT_070f7080;
            *(int *)(unaff_x20 + 0x3c) = iVar21;
            FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar10);
            FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar10);
            FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


