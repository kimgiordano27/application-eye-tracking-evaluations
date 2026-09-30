/*
FUNCTION_NAME: FUN_05e42cc4
ENTRY_POINT: 05e42cc4
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05e42cc4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_06a7b439 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_CatchConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo);
    DAT_06a7b439 = 1;
  }
  puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
  if (param_2 != 0) {
    uVar3 = FUN_05dbcb8c(param_2,0);
    plVar4 = (long *)thunk_FUN_02cea798(uVar3,*(undefined8 *)puVar1);
    if (plVar4 == (long *)0x0) {
LAB_05e42f10:
      uVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      UnityEngine_TextEditingUtilities__CanPaste(param_1,uVar2);
      return;
    }
    if (param_1[0x1a] != 0) {
      uVar5 = FUN_04b6ba1c(param_1[0x1a],plVar4,
                           *(undefined8 *)
                            Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo
                          );
      if ((uVar5 & 1) == 0) goto LAB_05e42f10;
      if (param_1[0x1a] != 0) {
        FUN_04b6bbe8(param_1[0x1a],plVar4,
                     *(undefined8 *)
                      Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_CatchConfig>_TypeInfo);
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05e42e08;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,0);
LAB_05e42e08:
        lVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
        FUN_040e7b1c(uVar3,param_1,
                     *(undefined8 *)
                      Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo
                     ,0);
        if (lVar7 != 0) {
          FUN_040e9d98(lVar7,uVar3,*(undefined8 *)Google_Protobuf_MessageParser<Vector3>_TypeInfo);
          lVar7 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_05e42eb4;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,1);
LAB_05e42eb4:
          lVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                      Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
          FUN_040e7b1c(uVar3,param_1,
                       *(undefined8 *)
                        Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo
                       ,0);
          if (lVar7 != 0) {
            FUN_040e9d98(lVar7,uVar3,
                         *(undefined8 *)Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
            goto LAB_05e42f10;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


