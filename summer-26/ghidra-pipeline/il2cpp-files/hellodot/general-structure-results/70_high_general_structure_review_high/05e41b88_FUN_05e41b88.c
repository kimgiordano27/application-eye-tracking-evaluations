/*
FUNCTION_NAME: FUN_05e41b88
ENTRY_POINT: 05e41b88
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_12;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e41b88(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_06a7b436 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<JsonSchemaModel>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<JsonSchema>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<VpsStateChangeEvent>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<WayfarerOnboardingFlowTelemetry>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<WayspotAnchorStateChangeEvent>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<WeightedDistribution>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<WeightedRange>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<DebugSettings_Option,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_ReflectionObject>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_SerializationEvents>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueConnection,_ValueInput>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueConnection,_ValueOutput>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueInput,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueInput,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo);
    DAT_06a7b436 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (param_1[9] == 0) goto LAB_05e4231c;
  UnityEngine_XR_OpenXR_Input_OpenXRInput__GetActionHandle(param_1[9],0);
  if ((char)param_1[0x16] != '\0') {
    plVar14 = (long *)param_1[0x11];
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)
                                System_Collections_Generic_ICollection<JsonSchema>_TypeInfo);
    FUN_047b3b70(uVar8,param_1,*(undefined8 *)(*param_1 + 0x260),0);
    puVar2 = System_Collections_Generic_ICollection<JsonSchemaModel>_TypeInfo;
    puVar1 = System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo;
    if (plVar14 == (long *)0x0) goto LAB_05e4231c;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_05e41d98;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02ce0a7c(plVar14,*(long *)
                                   System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo,1);
LAB_05e41d98:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    plVar14 = (long *)param_1[0x11];
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_047b3b70(uVar8,param_1,*(undefined8 *)(*param_1 + 0x270),0);
    if (plVar14 == (long *)0x0) goto LAB_05e4231c;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_05e41e20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar1,3);
LAB_05e41e20:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    puVar1 = System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo;
    if (*(char *)((long)param_1 + 0xb2) != '\0') {
      plVar14 = (long *)param_1[0x12];
      if (plVar14 == (long *)0x0) goto LAB_05e4231c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05e41e94;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02ce0a7c(plVar14,*(long *)
                                     System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo,0
                           );
LAB_05e41e94:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo);
      FUN_040e7b1c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x280),0);
      if (lVar10 == 0) goto LAB_05e4231c;
      FUN_040e9d98(lVar10,uVar8,*(undefined8 *)System_Func<ValueConnection,_ValueOutput>_TypeInfo);
      plVar14 = (long *)param_1[0x12];
      if (plVar14 == (long *)0x0) goto LAB_05e4231c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05e41f44;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar1,1);
LAB_05e41f44:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
      FUN_040e7b1c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x290),0);
      if (lVar10 == 0) goto LAB_05e4231c;
      FUN_040e9d98(lVar10,uVar8,*(undefined8 *)System_Func<ValueInput,_int>_TypeInfo);
    }
    puVar1 = System_Func<DebugSettings_Option,_string>_TypeInfo;
    if (*(char *)((long)param_1 + 0xb3) != '\0') {
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_05e4231c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)System_Func<DebugSettings_Option,_string>_TypeInfo
             ) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05e42000;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02ce0a7c(plVar14,*(long *)System_Func<DebugSettings_Option,_string>_TypeInfo,0);
LAB_05e42000:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
      FUN_040e7b1c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
      if (lVar10 == 0) goto LAB_05e4231c;
      FUN_040e9d98(lVar10,uVar8,*(undefined8 *)System_Func<ValueConnection,_ValueInput>_TypeInfo);
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_05e4231c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05e420b0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar1,1);
LAB_05e420b0:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
      FUN_040e7b1c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
      if (lVar10 == 0) goto LAB_05e4231c;
      FUN_040e9d98(lVar10,uVar8,*(undefined8 *)System_Func<ValueInput,_bool>_TypeInfo);
    }
  }
  puVar7 = Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo;
  puVar6 = Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo;
  puVar5 = Google_Protobuf_MessageParser<WayfarerOnboardingFlowTelemetry>_TypeInfo;
  puVar4 = Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo;
  puVar3 = Google_Protobuf_MessageParser<Vector3>_TypeInfo;
  puVar2 = Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo;
  puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
  if (param_1[0x1a] != 0) {
    FUN_04b6be90(&local_98,param_1[0x1a],
                 *(undefined8 *)Google_Protobuf_MessageParser<WeightedRange>_TypeInfo);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar12 = FUN_0481edf8(&local_80,*(undefined8 *)puVar5), plVar14 = local_70,
          (uVar12 & 1) != 0) {
      if (local_70 != (long *)0x0) {
        lVar11 = *local_70;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05e421d0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(local_70,lVar10,0);
LAB_05e421d0:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
        FUN_040e7b1c(uVar8,param_1,*(undefined8 *)puVar6,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_040e9d98(lVar10,uVar8,*(undefined8 *)puVar3);
        lVar11 = *plVar14;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_05e42268;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar14,lVar10,1);
LAB_05e42268:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
        FUN_040e7b1c(uVar8,param_1,*(undefined8 *)puVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_040e9d98(lVar10,uVar8,*(undefined8 *)puVar4);
      }
    }
    FUN_0481edf4(&local_80,
                 *(undefined8 *)Google_Protobuf_MessageParser<VpsStateChangeEvent>_TypeInfo);
    if (param_1[0x1a] != 0) {
      FUN_04b6b9bc(param_1[0x1a],
                   *(undefined8 *)Google_Protobuf_MessageParser<WeightedDistribution>_TypeInfo);
      *(undefined1 *)(param_1 + 0x16) = 0;
      if (param_1[0x1c] != 0) {
        FUN_05ef7cbc(param_1,param_1[0x1c],0);
        param_1[0x1c] = 0;
      }
      return;
    }
  }
LAB_05e4231c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


