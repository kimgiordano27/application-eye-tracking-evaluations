/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$NotifyDeviceDiscovered
ENTRY_POINT: 05e420e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void UnityEngineInternal_Input_NativeInputSystem__NotifyDeviceDiscovered
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_040e7b1c(param_2,param_3,*(undefined8 *)(param_1 + 0x2b0));
  if (unaff_x20 != 0) {
    FUN_040e9d98();
    puVar5 = Google_Protobuf_MessageParser<WayfarerOnboardingFlowTelemetry>_TypeInfo;
    puVar4 = Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo;
    puVar3 = Google_Protobuf_MessageParser<Vector3>_TypeInfo;
    puVar2 = Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo;
    puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      FUN_04b6be90(&stack0x00000008,*(long *)(unaff_x19 + 0xd0),
                   *(undefined8 *)Google_Protobuf_MessageParser<WeightedRange>_TypeInfo);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar7 = FUN_0481edf8(&stack0x00000020,*(undefined8 *)puVar5),
            plVar6 = in_stack_00000030, (uVar7 & 1) != 0) {
        if (in_stack_00000030 != (long *)0x0) {
          lVar11 = *in_stack_00000030;
          lVar10 = *(long *)puVar1;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05e421d0;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_02ce0a7c(in_stack_00000030,lVar10,0);
LAB_05e421d0:
          lVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                      Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
          FUN_040e7b1c();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_040e9d98(lVar10,uVar9,*(undefined8 *)puVar3);
          lVar11 = *plVar6;
          lVar10 = *(long *)puVar1;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_05e42268;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar10,1);
LAB_05e42268:
          lVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
          FUN_040e7b1c();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_040e9d98(lVar10,uVar9,*(undefined8 *)puVar4);
        }
      }
      FUN_0481edf4(&stack0x00000020,
                   *(undefined8 *)Google_Protobuf_MessageParser<VpsStateChangeEvent>_TypeInfo);
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        FUN_04b6b9bc(*(long *)(unaff_x19 + 0xd0),
                     *(undefined8 *)Google_Protobuf_MessageParser<WeightedDistribution>_TypeInfo);
        *(undefined1 *)(unaff_x19 + 0xb0) = 0;
        if (*(long *)(unaff_x19 + 0xe0) != 0) {
          FUN_05ef7cbc();
          *(undefined8 *)(unaff_x19 + 0xe0) = 0;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


