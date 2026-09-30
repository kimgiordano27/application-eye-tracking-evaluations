/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$get_onDeviceDiscovered
ENTRY_POINT: 05e41e80
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void UnityEngineInternal_Input_NativeInputSystem__get_onDeviceDiscovered(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  puVar6 = (undefined8 *)FUN_02ce0a7c();
  lVar7 = (*(code *)*puVar6)();
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo);
  FUN_040e7b1c();
  if (lVar7 != 0) {
    FUN_040e9d98(lVar7,uVar8,*(undefined8 *)System_Func<ValueConnection,_ValueOutput>_TypeInfo);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_05e41f44;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x22,1);
LAB_05e41f44:
      lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
      FUN_040e7b1c();
      if (lVar7 != 0) {
        FUN_040e9d98(lVar7,uVar8,*(undefined8 *)System_Func<ValueInput,_int>_TypeInfo);
        puVar1 = System_Func<DebugSettings_Option,_string>_TypeInfo;
        if (*(char *)(unaff_x19 + 0xb3) != '\0') {
          plVar12 = *(long **)(unaff_x19 + 0x98);
          if (plVar12 == (long *)0x0) goto LAB_05e4231c;
          lVar7 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)System_Func<DebugSettings_Option,_string>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05e42000;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_02ce0a7c(plVar12,*(long *)System_Func<DebugSettings_Option,_string>_TypeInfo,
                                0);
LAB_05e42000:
          lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
          FUN_040e7b1c();
          if (lVar7 == 0) goto LAB_05e4231c;
          FUN_040e9d98(lVar7,uVar8,*(undefined8 *)System_Func<ValueConnection,_ValueInput>_TypeInfo)
          ;
          plVar12 = *(long **)(unaff_x19 + 0x98);
          if (plVar12 == (long *)0x0) goto LAB_05e4231c;
          lVar7 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_05e420b0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar1,1);
LAB_05e420b0:
          lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
          FUN_040e7b1c();
          if (lVar7 == 0) goto LAB_05e4231c;
          FUN_040e9d98(lVar7,uVar8,*(undefined8 *)System_Func<ValueInput,_bool>_TypeInfo);
        }
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
          while (uVar10 = FUN_0481edf8(&stack0x00000020,*(undefined8 *)puVar5),
                plVar12 = in_stack_00000030, (uVar10 & 1) != 0) {
            if (in_stack_00000030 != (long *)0x0) {
              lVar9 = *in_stack_00000030;
              lVar7 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_05e421d0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_02ce0a7c(in_stack_00000030,lVar7,0);
LAB_05e421d0:
              lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              uVar8 = thunk_FUN_02cea894(*(undefined8 *)
                                          Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
              FUN_040e7b1c();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              FUN_040e9d98(lVar7,uVar8,*(undefined8 *)puVar3);
              lVar9 = *plVar12;
              lVar7 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_05e42268;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar7,1);
LAB_05e42268:
              lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
              FUN_040e7b1c();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              FUN_040e9d98(lVar7,uVar8,*(undefined8 *)puVar4);
            }
          }
          FUN_0481edf4(&stack0x00000020,
                       *(undefined8 *)Google_Protobuf_MessageParser<VpsStateChangeEvent>_TypeInfo);
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            FUN_04b6b9bc(*(long *)(unaff_x19 + 0xd0),
                         *(undefined8 *)Google_Protobuf_MessageParser<WeightedDistribution>_TypeInfo
                        );
            *(undefined1 *)(unaff_x19 + 0xb0) = 0;
            if (*(long *)(unaff_x19 + 0xe0) != 0) {
              FUN_05ef7cbc();
              *(undefined8 *)(unaff_x19 + 0xe0) = 0;
            }
            return;
          }
        }
      }
    }
  }
LAB_05e4231c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


