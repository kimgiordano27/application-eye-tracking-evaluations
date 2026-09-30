/*
FUNCTION_NAME: FUN_05e42f40
ENTRY_POINT: 05e42f40
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_05e42f40(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  
                    /* try { // try from 05e42f40 to 05f42fe3 has its CatchHandler @ 05e42f40
                       catch() { ... } // from try @ 05e42f40 with catch @ 05e42f40
                       catch() { ... } // from try @ 05e43018 with catch @ 05e42f40
                       catch() { ... } // from try @ 05e43060 with catch @ 05e42f40
                       catch() { ... } // from try @ 05e430c0 with catch @ 05e42f40
                       catch() { ... } // from try @ 05e430e8 with catch @ 05e42f40
                       catch() { ... } // from try @ 05e43118 with catch @ 05e42f40 */
  if ((DAT_06a7b43a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BlinkConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<UninterpretedOption>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector2Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo);
    DAT_06a7b43a = 1;
  }
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
LAB_05e43008:
    if ((((*(char *)((long)param_1 + 0x69) == '\0') && (*(char *)((long)param_1 + 0x6d) == '\0')) &&
        ((int)param_1[0xe] == 1)) &&
       (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= *(float *)(param_1 + 0xf))) {
                    /* WARNING: Could not recover jumptable at 0x05e4338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
      return;
    }
    uVar6 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    UnityEngine_TextEditingUtilities__CanPaste(param_1,uVar6);
    return;
  }
  if (param_2 != 0) {
    uVar7 = FUN_05dbccac(param_2,0);
    puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
    plVar8 = (long *)thunk_FUN_02cea798(uVar7,*(undefined8 *)
                                               System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo
                                       );
    if (plVar8 == (long *)0x0) goto LAB_05e43008;
    if (param_1[0x1a] != 0) {
      uVar9 = FUN_04b6ba1c(param_1[0x1a],plVar8,
                           *(undefined8 *)
                            Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo
                          );
      if ((uVar9 & 1) != 0) goto LAB_05e43008;
      if (param_1[0x1a] != 0) {
        FUN_04b6c49c(param_1[0x1a],plVar8,
                     *(undefined8 *)
                      Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BlinkConfig>_TypeInfo);
        lVar11 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e43128;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,0);
LAB_05e43128:
        lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        puVar3 = Google_Protobuf_MessageParser<UInt32Value>_TypeInfo;
        uVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
        puVar4 = Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo;
        FUN_040e7b1c(uVar7,param_1,
                     *(undefined8 *)
                      Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo
                     ,0);
        if (lVar11 != 0) {
          FUN_040e9d98(lVar11,uVar7,*(undefined8 *)Google_Protobuf_MessageParser<Vector3>_TypeInfo);
          lVar11 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_05e431d4;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,1);
LAB_05e431d4:
          lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          puVar2 = Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo;
          uVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                      Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
          puVar5 = Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo;
          FUN_040e7b1c(uVar7,param_1,
                       *(undefined8 *)
                        Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo
                       ,0);
          if (lVar11 != 0) {
            FUN_040e9d98(lVar11,uVar7,
                         *(undefined8 *)Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
            lVar11 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto FUN_05e4327c;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,0);
FUN_05e4327c:
            lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
            FUN_040e7b1c(uVar7,param_1,*(undefined8 *)puVar4,0);
            if (lVar11 != 0) {
              FUN_040e9d5c(lVar11,uVar7,
                           *(undefined8 *)Google_Protobuf_MessageParser<Vector2Proto>_TypeInfo);
              lVar11 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_05e43318;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar10 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,1);
LAB_05e43318:
              lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
              FUN_040e7b1c(uVar7,param_1,*(undefined8 *)puVar5,0);
              if (lVar11 != 0) {
                FUN_040e9d5c(lVar11,uVar7,
                             *(undefined8 *)
                              Google_Protobuf_MessageParser<UninterpretedOption>_TypeInfo);
                goto LAB_05e43008;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


