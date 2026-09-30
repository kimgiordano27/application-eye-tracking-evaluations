/*
FUNCTION_NAME: FUN_05e43394
ENTRY_POINT: 05e43394
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_05e43394(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_06a7b43b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_CatchConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo);
    DAT_06a7b43b = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if ((uVar3 & 1) == 0) {
    if (param_2 != 0) {
      uVar4 = FUN_05dbcdf0(param_2,0);
      puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
      plVar5 = (long *)thunk_FUN_02cea798(uVar4,*(undefined8 *)
                                                 System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo
                                         );
      if (plVar5 == (long *)0x0) goto LAB_05e43600;
      if (param_1[0x1a] != 0) {
        uVar3 = FUN_04b6ba1c(param_1[0x1a],plVar5,
                             *(undefined8 *)
                              Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BounceConfig>_TypeInfo
                            );
        if ((uVar3 & 1) == 0) goto LAB_05e43600;
        if (param_1[0x1a] != 0) {
          FUN_04b6bbe8(param_1[0x1a],plVar5,
                       *(undefined8 *)
                        Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_CatchConfig>_TypeInfo
                      );
          lVar8 = *plVar5;
          lVar7 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05e434f8;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,lVar7,0);
LAB_05e434f8:
          lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          uVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                      Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
          FUN_040e7b1c(uVar4,param_1,
                       *(undefined8 *)
                        Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo
                       ,0);
          if (lVar7 != 0) {
            FUN_040e9d98(lVar7,uVar4,*(undefined8 *)Google_Protobuf_MessageParser<Vector3>_TypeInfo)
            ;
            lVar8 = *plVar5;
            lVar7 = *(long *)puVar1;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_05e435a4;
                }
                uVar3 = uVar3 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar3 != 0);
            }
            puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,lVar7,1);
LAB_05e435a4:
            lVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            uVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                        Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
            FUN_040e7b1c(uVar4,param_1,
                         *(undefined8 *)
                          Google_Protobuf_MessageParser<BehaviorTreeConfig_Types_BehaviorConfig>_TypeInfo
                         ,0);
            if (lVar7 != 0) {
              FUN_040e9d98(lVar7,uVar4,
                           *(undefined8 *)Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
              goto LAB_05e43600;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_05e43600:
  if ((((*(char *)((long)param_1 + 0x69) == '\0') && (*(char *)((long)param_1 + 0x6d) == '\0')) &&
      ((int)param_1[0xe] == 2)) &&
     (**(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) <= *(float *)(param_1 + 0xf))) {
                    /* WARNING: Could not recover jumptable at 0x05e43684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  UnityEngine_TextEditingUtilities__CanPaste(param_1,uVar2);
  return;
}


