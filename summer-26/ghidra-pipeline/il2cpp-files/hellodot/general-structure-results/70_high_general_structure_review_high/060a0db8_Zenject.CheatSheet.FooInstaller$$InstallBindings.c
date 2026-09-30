/*
FUNCTION_NAME: Zenject.CheatSheet.FooInstaller$$InstallBindings
ENTRY_POINT: 060a0db8
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_8;telemetry_or_network_hits_20
*/


void Zenject_CheatSheet_FooInstaller__InstallBindings
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
code_r0x060a0db8:
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x060a0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&switchD_060a0dd0::switchdataD_01490090)[param_1] * 4 + 0x60a0dd4))();
    return;
  }
Zenject_CheatSheet___ctor:
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,unaff_w27);
  uVar4 = thunk_FUN_02cea4e8(*(undefined8 *)Niantic_Peridot_Scans_SavedScansProto_TypeInfo,
                             &stack0x00000030);
  uVar4 = FUN_04db0cfc(*(undefined8 *)
                        System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo,uVar4,0)
  ;
  if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
  }
  FUN_05eb3cec(uVar4,0);
switchD_060a0d80_caseD_40000:
  do {
    while( true ) {
      do {
        unaff_w27 = FUN_06029154();
        if (*(long *)(unaff_x20 + 0x48) == 0) {
          return;
        }
        uVar3 = FUN_0609d228();
      } while ((uVar3 & 1) != 0);
      if (unaff_w29 < unaff_w27) break;
      if (0 < unaff_w27) {
        if (unaff_w27 - 0x20000U < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x060a0c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(unaff_x28 + (ulong)(unaff_w27 - 0x20000U) * 2) * 4 +
                    0x60a0c68))();
          return;
        }
        uVar1 = unaff_w27 - 0x10000;
        param_1 = (ulong)uVar1;
        in_CY = 0xc < uVar1;
        in_ZR = uVar1 == 0xd;
        goto code_r0x060a0db8;
      }
      if (unaff_w27 != -1) goto code_r0x060a0d04;
      FUN_0609f208();
    }
    if (unaff_w27 <= unaff_w25) {
      switch(unaff_w27) {
      case 0x40000:
        break;
      case 0x40001:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06021a9c();
        break;
      case 0x40002:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06022234();
        break;
      case 0x40003:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_060224b8();
        break;
      case 0x40004:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_060226f0();
        break;
      case 0x40005:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06022894();
        break;
      case 0x40006:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06022b68();
        break;
      case 0x40007:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06022ddc();
        break;
      case 0x40008:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06022ecc();
        break;
      case 0x40009:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_06023688();
        break;
      case 0x4000a:
        if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_0602384c();
        break;
      default:
        switch(unaff_w27) {
        case 0x30000:
          puVar5 = (undefined8 *)FUN_04007e94();
          FUN_0602b9e8(&stack0x00000010);
LAB_060a0ea8:
          in_stack_00000040 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
          in_stack_00000038 = in_stack_00000018;
          in_stack_00000030 = in_stack_00000010;
          puVar5[2] = in_stack_00000040;
          puVar5[1] = in_stack_00000018;
          *puVar5 = in_stack_00000010;
          break;
        case 0x30001:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a748();
          *(undefined4 *)(lVar6 + 0x18) = uVar2;
          break;
        case 0x30002:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a57c();
          *(undefined4 *)(lVar6 + 0x1c) = uVar2;
          *(undefined4 *)(lVar6 + 0x20) = param_3;
          *(undefined4 *)(lVar6 + 0x24) = param_4;
          *(undefined4 *)(lVar6 + 0x28) = param_5;
          break;
        case 0x30003:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a748();
          *(undefined4 *)(lVar6 + 0x2c) = uVar2;
          break;
        case 0x30004:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a4f8();
          *(undefined4 *)(lVar6 + 0x30) = uVar2;
          break;
        case 0x30005:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a4f8();
          *(undefined4 *)(lVar6 + 0x34) = uVar2;
          break;
        case 0x30006:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a4f8();
          *(undefined4 *)(lVar6 + 0x38) = uVar2;
          break;
        case 0x30007:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a490();
          *(undefined4 *)(lVar6 + 0x3c) = uVar2;
          break;
        case 0x30008:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a4f8();
          *(undefined4 *)(lVar6 + 0x40) = uVar2;
          break;
        case 0x30009:
          lVar6 = FUN_04007e94();
          uVar2 = FUN_0602a748();
          *(undefined4 *)(lVar6 + 0x44) = uVar2;
          break;
        default:
          goto Zenject_CheatSheet___ctor;
        }
      }
      goto switchD_060a0d80_caseD_40000;
    }
    if (unaff_w27 - 0x70000U < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x060a0c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(unaff_w27 - 0x70000U) * 2) * 4 + 0x60a0c2c))
                ();
      return;
    }
    switch(unaff_w27) {
    case 0x50000:
      puVar5 = (undefined8 *)
               FUN_04008314(in_stack_00000000,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
      FUN_06029fac(&stack0x00000010);
      goto LAB_060a0ea8;
    case 0x50001:
      lVar6 = FUN_04008314(in_stack_00000000,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
      auVar7 = FUN_0602a194();
      *(undefined1 (*) [16])(lVar6 + 0x18) = auVar7;
      break;
    case 0x50002:
      lVar6 = FUN_04008314(in_stack_00000000,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
      FUN_06029cbc(&stack0x00000010);
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uStack0000000000000020);
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      *(undefined4 *)(lVar6 + 0x38) = uStack0000000000000020;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000018;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000010;
      break;
    case 0x50003:
      lVar6 = FUN_04008314(in_stack_00000000,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
      FUN_06029908(&stack0x00000010);
      in_stack_00000040 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      *(undefined8 *)(lVar6 + 0x4c) = in_stack_00000040;
      *(undefined8 *)(lVar6 + 0x44) = in_stack_00000018;
      *(undefined8 *)(lVar6 + 0x3c) = in_stack_00000010;
      break;
    default:
      switch(unaff_w27) {
      case 0x60000:
        FUN_04008794(in_stack_00000008,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
        goto LAB_060a140c;
      case 0x60001:
        FUN_04008794(in_stack_00000008,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
LAB_060a140c:
        FUN_0602c808();
        break;
      case 0x60002:
        FUN_04008794(in_stack_00000008,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
        FUN_0602c998();
        break;
      case 0x60003:
        FUN_04008794(in_stack_00000008,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
        FUN_0602c61c();
        break;
      default:
        goto Zenject_CheatSheet___ctor;
      }
      *(undefined8 *)(unaff_x21 + 0x50) = 0;
    }
  } while( true );
code_r0x060a0d04:
  if (unaff_w27 != 0) goto Zenject_CheatSheet___ctor;
  goto switchD_060a0d80_caseD_40000;
}


