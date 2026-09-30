/*
FUNCTION_NAME: WebSocketSharp.PayloadData$$get_ApplicationData
ENTRY_POINT: 097e07dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void WebSocketSharp_PayloadData__get_ApplicationData
               (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  
switchD_097df640_caseD_40000:
  do {
    iVar1 = FUN_0972d864();
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 097e0734 with catch @ 097e0820
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 097e079c with catch @ 097e0824
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 097e0758 with catch @ 097e0828
                        */
      return;
    }
    uVar3 = FUN_097da30c();
  } while ((uVar3 & 1) != 0);
  if (unaff_w25 < iVar1) {
    if (iVar1 <= unaff_w27) {
      switch(iVar1) {
      case 0x40000:
        break;
      case 0x40001:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_097240cc();
        break;
      case 0x40002:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09724874();
        break;
      case 0x40003:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09724af8();
        break;
      case 0x40004:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09724d30();
        break;
      case 0x40005:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09724ed4();
        break;
      case 0x40006:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_097251a8();
        break;
      case 0x40007:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_0972541c();
        break;
      case 0x40008:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_0972550c();
        break;
      case 0x40009:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09725d1c();
        break;
      case 0x4000a:
        if (*(int *)(*(long *)
                      UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_09725ee0();
        break;
      default:
        switch(iVar1) {
        case 0x30000:
          puVar6 = (undefined8 *)FUN_0676e2e4();
          FUN_097303a0(&stack0x00000010);
          in_stack_00000040 = uStack0000000000000020;
          in_stack_00000038 = uStack0000000000000018;
          in_stack_00000030 = in_stack_00000010;
          puVar6[2] = CONCAT44(uStack0000000000000024,uStack0000000000000020);
          puVar6[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          *puVar6 = in_stack_00000010;
          goto LAB_097e0640;
        case 0x30001:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972f000();
          *(undefined4 *)(lVar7 + 0x18) = uVar2;
          break;
        case 0x30002:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972ee24();
          *(undefined4 *)(lVar7 + 0x1c) = uVar2;
          *(int *)(lVar7 + 0x20) = (int)param_2;
          *(undefined4 *)(lVar7 + 0x24) = param_3;
          *(undefined4 *)(lVar7 + 0x28) = param_4;
          break;
        case 0x30003:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972f000();
          *(undefined4 *)(lVar7 + 0x2c) = uVar2;
          break;
        case 0x30004:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972eda0();
          *(undefined4 *)(lVar7 + 0x30) = uVar2;
          break;
        case 0x30005:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972eda0();
          *(undefined4 *)(lVar7 + 0x34) = uVar2;
          break;
        case 0x30006:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972eda0();
          *(undefined4 *)(lVar7 + 0x38) = uVar2;
          break;
        case 0x30007:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972ed38();
          *(undefined4 *)(lVar7 + 0x3c) = uVar2;
          break;
        case 0x30008:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972eda0();
          *(undefined4 *)(lVar7 + 0x40) = uVar2;
          break;
        case 0x30009:
          lVar7 = FUN_0676e2e4();
          uVar2 = FUN_0972f000();
          *(undefined4 *)(lVar7 + 0x44) = uVar2;
          break;
        default:
          goto switchD_097df6f4_default;
        }
      }
      goto switchD_097df640_caseD_40000;
    }
    switch(iVar1) {
    case 0x70000:
      puVar4 = (undefined4 *)FUN_0676f11c();
LAB_097df6a8:
      uVar2 = FUN_0972ee24();
      *puVar4 = uVar2;
      puVar4[1] = (int)param_2;
      puVar4[2] = param_3;
      puVar4[3] = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x70001:
      lVar7 = FUN_0676f11c();
      FUN_0972f958(&stack0x00000010);
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = uStack0000000000000020;
      *(ulong *)(lVar7 + 0x18) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(lVar7 + 0x10) = in_stack_00000010;
      *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(ulong *)(lVar7 + 0x20) = CONCAT44(uStack0000000000000024,uStack0000000000000020);
      param_2 = in_stack_00000010;
      goto LAB_097e0640;
    case 0x70002:
      lVar7 = FUN_0676f11c();
      auVar9 = FUN_097308e4();
      *(undefined1 (*) [12])(lVar7 + 0x30) = auVar9;
      goto switchD_097df640_caseD_40000;
    case 0x70003:
      lVar7 = FUN_0676f11c();
      auVar9 = FUN_097309cc();
      *(undefined1 (*) [12])(lVar7 + 0x3c) = auVar9;
      goto switchD_097df640_caseD_40000;
    case 0x70004:
      lVar7 = FUN_0676f11c();
      uVar5 = FUN_09730b5c();
      *(undefined8 *)(lVar7 + 0x48) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x70005:
      lVar7 = FUN_0676f11c();
      FUN_09730cdc(&stack0x00000010);
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000030 = in_stack_00000010;
      in_stack_00000038 = uStack0000000000000018;
      *(undefined4 *)(lVar7 + 0x60) = uStack0000000000000020;
      *(ulong *)(lVar7 + 0x58) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(lVar7 + 0x50) = in_stack_00000010;
      goto switchD_097df640_caseD_40000;
    case 0x70006:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972ee24();
      *(undefined4 *)(lVar7 + 100) = uVar2;
      *(int *)(lVar7 + 0x68) = (int)param_2;
      *(undefined4 *)(lVar7 + 0x6c) = param_3;
      *(undefined4 *)(lVar7 + 0x70) = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x70007:
      lVar7 = FUN_0676f11c();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x74) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x70008:
      lVar7 = FUN_0676f11c();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x7c) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x70009:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972ee24();
      *(undefined4 *)(lVar7 + 0x84) = uVar2;
      *(int *)(lVar7 + 0x88) = (int)param_2;
      *(undefined4 *)(lVar7 + 0x8c) = param_3;
      *(undefined4 *)(lVar7 + 0x90) = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x7000a:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972ee24();
      *(undefined4 *)(lVar7 + 0x94) = uVar2;
      *(int *)(lVar7 + 0x98) = (int)param_2;
      *(undefined4 *)(lVar7 + 0x9c) = param_3;
      *(undefined4 *)(lVar7 + 0xa0) = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x7000b:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972ee24();
      *(undefined4 *)(lVar7 + 0xa4) = uVar2;
      *(int *)(lVar7 + 0xa8) = (int)param_2;
      *(undefined4 *)(lVar7 + 0xac) = param_3;
      *(undefined4 *)(lVar7 + 0xb0) = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x7000c:
      lVar7 = FUN_0676f11c();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0xb4) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x7000d:
      lVar7 = FUN_0676f11c();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0xbc) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x7000e:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972ed38();
      *(undefined4 *)(lVar7 + 0xc4) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x7000f:
      lVar7 = FUN_0676f11c();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 200) = uVar2;
      goto switchD_097df640_caseD_40000;
    }
    switch(iVar1) {
    case 0x50000:
      puVar6 = (undefined8 *)
               FUN_0676e7a4(in_stack_00000000,
                            *(undefined8 *)
                             DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64_var
                           );
      FUN_0972e6fc(&stack0x00000010);
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      puVar6[2] = CONCAT44(uStack0000000000000024,uStack0000000000000020);
      puVar6[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *puVar6 = in_stack_00000010;
      goto switchD_097df640_caseD_40000;
    case 0x50001:
      lVar7 = FUN_0676e7a4(in_stack_00000000,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64_var
                          );
      auVar8 = FUN_0972ea3c();
      *(undefined1 (*) [16])(lVar7 + 0x18) = auVar8;
      goto switchD_097df640_caseD_40000;
    case 0x50002:
      lVar7 = FUN_0676e7a4(in_stack_00000000,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64_var
                          );
      FUN_0972e404(&stack0x00000010);
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      *(undefined4 *)(lVar7 + 0x38) = uStack0000000000000020;
      *(ulong *)(lVar7 + 0x30) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000010;
      goto switchD_097df640_caseD_40000;
    case 0x50003:
      lVar7 = FUN_0676e7a4(in_stack_00000000,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64_var
                          );
      FUN_0972e054(&stack0x00000010);
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      *(ulong *)(lVar7 + 0x4c) = CONCAT44(uStack0000000000000024,uStack0000000000000020);
      *(ulong *)(lVar7 + 0x44) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(lVar7 + 0x3c) = in_stack_00000010;
      goto switchD_097df640_caseD_40000;
    default:
      switch(iVar1) {
      case 0x60000:
        FUN_0676ec64(in_stack_00000008,
                     *(undefined8 *)
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68_var
                    );
        goto LAB_097dfcd0;
      case 0x60001:
        FUN_0676ec64(in_stack_00000008,
                     *(undefined8 *)
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68_var
                    );
LAB_097dfcd0:
        FUN_09731210();
        break;
      case 0x60002:
        FUN_0676ec64(in_stack_00000008,
                     *(undefined8 *)
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68_var
                    );
        FUN_097313a0();
        break;
      case 0x60003:
        FUN_0676ec64(in_stack_00000008,
                     *(undefined8 *)
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68_var
                    );
        FUN_09731024();
        break;
      default:
        goto switchD_097df6f4_default;
      }
      *unaff_x26 = 0;
    }
  }
  else {
    if (iVar1 < 1) {
      if (iVar1 == -1) {
        FUN_097dc3c8();
      }
      else if (iVar1 != 0) goto switchD_097df6f4_default;
      goto switchD_097df640_caseD_40000;
    }
    if (iVar1 - 0x20000U < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x097df50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(unaff_x29 + (ulong)(iVar1 - 0x20000U) * 2) * 4 + 0x97df510))();
      return;
    }
    switch(iVar1) {
    case 0x10000:
      puVar4 = (undefined4 *)FUN_0676d964();
      goto LAB_097df6a8;
    case 0x10001:
      lVar7 = FUN_0676d964();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x10002:
      lVar7 = FUN_0676d964();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x18) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x10003:
      lVar7 = FUN_0676d964();
      FUN_0973066c(&stack0x00000010);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      param_2 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar7 + 0x34) = CONCAT44(uStack0000000000000028,uStack0000000000000024);
      *(undefined8 *)(lVar7 + 0x2c) = param_2;
      goto switchD_097df640_caseD_40000;
    case 0x10004:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 0x3c) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x10005:
      lVar7 = FUN_0676d964();
      uVar5 = FUN_0972f624();
      *(undefined8 *)(lVar7 + 0x40) = uVar5;
      break;
    case 0x10006:
      lVar7 = FUN_0676d964();
      auVar8 = FUN_0972f0fc();
      *(undefined1 (*) [16])(lVar7 + 0x48) = auVar8;
      break;
    case 0x10007:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 0x58) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x10008:
      lVar7 = FUN_0676d964();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x5c) = uVar5;
      goto switchD_097df640_caseD_40000;
    case 0x10009:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 100) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x1000a:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 0x68) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x1000b:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972ee24();
      *(undefined4 *)(lVar7 + 0x6c) = uVar2;
      *(int *)(lVar7 + 0x70) = (int)param_2;
      *(undefined4 *)(lVar7 + 0x74) = param_3;
      *(undefined4 *)(lVar7 + 0x78) = param_4;
      goto switchD_097df640_caseD_40000;
    case 0x1000c:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972ed38();
      *(undefined4 *)(lVar7 + 0x7c) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x1000d:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 0x80) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x1000e:
      lVar7 = FUN_0676d964();
      uVar2 = FUN_0972f000();
      *(undefined4 *)(lVar7 + 0x84) = uVar2;
      goto switchD_097df640_caseD_40000;
    case 0x1000f:
      lVar7 = FUN_0676d964();
      uVar5 = FUN_0972dec4();
      *(undefined8 *)(lVar7 + 0x88) = uVar5;
      goto switchD_097df640_caseD_40000;
    default:
switchD_097df6f4_default:
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar1);
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)System_Buffers_ArrayPool<Quaternion>_TypeInfo,
                                 &stack0x00000030);
      uVar5 = FUN_078ab14c(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c7534(uVar5,0);
      goto switchD_097df640_caseD_40000;
    }
  }
LAB_097e0640:
  thunk_FUN_044bb4b4();
  goto switchD_097df640_caseD_40000;
}


