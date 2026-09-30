/*
FUNCTION_NAME: Unity.Services.Authentication.Generated.UpdateNameRequest$$set_Name
ENTRY_POINT: 0668ec50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Authentication_Generated_UpdateNameRequest__set_Name(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  long in_stack_00000040;
  int in_stack_00000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if ((DAT_07557ed5 & 1) == 0) {
    FUN_03188a78(Fusion_Photon_Realtime_IConnectionCallbacks_TypeInfo);
    FUN_03188a78(Photon_Realtime_IConnectionCallbacks_TypeInfo);
    FUN_03188a78(PTR_DAT_070f7080);
    FUN_03188a78(PTR_DAT_070f7070);
    FUN_03188a78(Oculus_Interaction_IActiveState_TypeInfo);
    FUN_03188a78(System_IConsoleDriver_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_IConstrainedXRBodyManipulator_TypeInfo
                );
    FUN_03188a78(System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo);
    FUN_03188a78(System_Runtime_Remoting_Activation_IConstructionReturnMessage_TypeInfo);
    FUN_03188a78(Unity_Properties_IConstructor_TypeInfo);
    FUN_03188a78(System_ComponentModel_IContainer_TypeInfo);
    FUN_03188a78(System_ComponentModel_Design_IComponentChangeService_TypeInfo);
    FUN_03188a78(Fusion_Protocol_ICommunicator_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_PlatformSupport_Network_Tcp_IContentConsumer_TypeInfo);
    FUN_03188a78(Unity_Services_Core_Configuration_IConfigurationLoader_TypeInfo);
    DAT_07557ed5 = 1;
  }
  puVar4 = Unity_Properties_IConstructor_TypeInfo;
  puVar3 = System_Runtime_Remoting_Activation_IConstructionReturnMessage_TypeInfo;
  puVar2 = Fusion_Protocol_ICommunicator_TypeInfo;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  _in_stack_00000088 = ZEXT816(0);
  in_stack_00000080 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  if (0 < (int)param_1[2]) {
    in_stack_00000090 = 0;
    in_stack_00000080 = param_1[3];
    in_stack_00000078 = SUB168(*(undefined1 (*) [16])(param_1 + 1),8);
    in_stack_00000070 = SUB168(*(undefined1 (*) [16])(param_1 + 1),0);
    in_stack_00000088 = 0;
    _in_stack_00000088 = FUN_069f5124(*param_1,(int)param_1[2] << 4,0,0,0);
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_000000c0 = in_stack_00000080;
    _in_stack_000000c8 = _in_stack_00000088;
    FUN_04622fe8(param_1 + 4,&stack0x000000b0,*(undefined8 *)puVar3);
    uVar6 = FUN_064b5b9c(4,0);
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000c0 = 0;
    FUN_04cf5da8(&stack0x000000b0,4,uVar6,0,*(undefined8 *)puVar2);
    param_1[2] = in_stack_000000b8;
    param_1[1] = in_stack_000000b0;
    param_1[3] = in_stack_000000c0;
  }
  uVar7 = FUN_04622ec0(param_1 + 4,*(undefined8 *)puVar4);
  puVar5 = System_ComponentModel_IContainer_TypeInfo;
  puVar3 = System_Runtime_Remoting_Activation_IConstructionCallMessage_TypeInfo;
  puVar2 = Fusion_Photon_Realtime_IConnectionCallbacks_TypeInfo;
  while ((uVar7 & 1) == 0) {
    FUN_04622f58(&stack0x000000b0,param_1 + 4,*(undefined8 *)puVar5);
    in_stack_00000078 = in_stack_000000b8;
    in_stack_00000070 = in_stack_000000b0;
    in_stack_00000080 = in_stack_000000c0;
    _in_stack_00000088 = _in_stack_000000c8;
    uVar7 = FUN_069f4d94(&stack0x00000088,0);
    if ((uVar7 & 1) == 0) break;
    System_Collections_Generic_ObjectEqualityComparer<ValueTuple<Vector4,_Vector2Int>>__Equals
              (&stack0x000000b0,param_1 + 4,*(undefined8 *)puVar3);
    in_stack_00000048 = (int)in_stack_000000b8;
    uStack000000000000004c = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
    in_stack_00000040 = in_stack_000000b0;
    in_stack_00000050 = in_stack_000000c0;
    _in_stack_00000058 = _in_stack_000000c8;
    uVar7 = FUN_069f4e0c(&stack0x00000058,0);
    if ((uVar7 & 1) == 0) {
      auVar13 = FUN_039ca5f8(&stack0x00000058,0,*(undefined8 *)puVar2);
      if (auVar13._8_4_ == in_stack_00000048 * 4) {
        if ((char)param_1[10] != '\0') {
          FUN_04cf5f1c(param_1 + 5,
                       *(undefined8 *)System_ComponentModel_Design_IComponentChangeService_TypeInfo)
          ;
          FUN_0456d550(param_1 + 8,*(undefined8 *)PTR_DAT_070f7080);
          *(undefined1 *)(param_1 + 10) = 0;
        }
        auVar1._8_4_ = in_stack_00000048;
        auVar1._0_8_ = in_stack_00000040;
        auVar1._12_4_ = uStack000000000000004c;
        param_1[6] = auVar1._8_8_;
        param_1[5] = in_stack_00000040;
        param_1[7] = in_stack_00000050;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        FUN_0456d398(&stack0x000000b0,auVar13._0_8_,auVar13._8_8_,4,
                     *(undefined8 *)Oculus_Interaction_IActiveState_TypeInfo);
        *(undefined1 *)(param_1 + 10) = 1;
        param_1[9] = in_stack_000000b8;
        param_1[8] = in_stack_000000b0;
      }
    }
    uVar7 = FUN_04622ec0(param_1 + 4,*(undefined8 *)puVar4);
  }
  puVar2 = PTR_DAT_070f7070;
  if (param_2 != 0) {
    FUN_0460e0d8(param_2 + 0x20,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_IConstrainedXRBodyManipulator_TypeInfo
                );
    puVar3 = System_IConsoleDriver_TypeInfo;
    if (((char)param_1[10] != '\0') && (0 < (int)param_1[6])) {
      lVar12 = 0;
      do {
        piVar10 = (int *)param_1[5];
        piVar8 = piVar10 + lVar12 * 5;
        in_stack_00000010 = *(undefined8 *)piVar8;
        in_stack_00000020 = piVar8[4];
        if (piVar8[1] == 1 || in_stack_00000020 != 0) {
          if (lVar12 != 0) {
            lVar11 = lVar12;
            do {
              if ((piVar10[4] != 0 || piVar10[1] == 1) && *piVar10 == *piVar8) {
                iVar9 = piVar8[2] - piVar10[2];
                goto LAB_0668efe4;
              }
              lVar11 = lVar11 + -1;
              piVar10 = piVar10 + 5;
            } while (lVar11 != 0);
          }
          iVar9 = 0;
        }
        else {
          iVar9 = -1;
        }
LAB_0668efe4:
        auVar13 = NEON_rev64(*(undefined1 (*) [16])
                              (param_1[8] +
                              (-(ulong)(((uint)lVar12 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                              (ulong)((uint)lVar12 << 2) << 2)),4);
        in_stack_00000018 = CONCAT44(piVar8[3],iVar9);
        uStack000000000000002c = auVar13._8_4_;
        in_stack_00000030 = auVar13._12_4_;
        uStack0000000000000024 = auVar13._0_4_;
        in_stack_00000028 = auVar13._4_4_;
        FUN_0460dd6c(param_2 + 0x20,&stack0x00000010,*(undefined8 *)puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[6]);
    }
    FUN_0456d268(&stack0x000000a0,0x100,2,1,*(undefined8 *)puVar2);
    if (*param_1 != 0) {
      FUN_03ac509c(*param_1,in_stack_000000a0,in_stack_000000a8,
                   *(undefined8 *)Photon_Realtime_IConnectionCallbacks_TypeInfo);
      FUN_0456d550(&stack0x000000a0,*(undefined8 *)PTR_DAT_070f7080);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


