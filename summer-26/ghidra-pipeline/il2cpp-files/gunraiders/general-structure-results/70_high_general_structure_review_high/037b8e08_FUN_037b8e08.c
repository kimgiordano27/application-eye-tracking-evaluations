/*
FUNCTION_NAME: FUN_037b8e08
ENTRY_POINT: 037b8e08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_037b8e08(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 local_58;
  undefined8 *puStack_50;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = param_2;
  if ((DAT_04538ebd & 1) == 0) {
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_LoadFromCompressedStream__);
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_Deserialize__);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                );
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<JsonProperty,_string>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<Label,_string>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_Parse__);
    FUN_01c5d288(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedBase64__);
    DAT_04538ebd = 1;
  }
  local_40 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
    uVar5 = thunk_FUN_01c496e0();
    uVar9 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_LoadFromCompressedFile__);
    FUN_037f8780(uVar5,uVar9,param_2,0);
    uVar9 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedFile__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar9);
  }
  lVar4 = FUN_038043a4(param_2,0);
  if (lVar4 != 0) {
    return;
  }
  puStack_50 = &local_40;
  local_48 = &local_38;
  *(undefined1 *)(param_2 + 0x30) = 1;
  puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  local_58 = 0;
  plVar12 = *(long **)(param_2 + 0x98);
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Select<JsonProperty,_string>__ + 0x130)
    ;
    if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Linq_Enumerable_Select<JsonProperty,_string>__)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__ +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (DAT_04538f05 == '\0') {
        FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__)
        ;
        DAT_04538f05 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar2;
      }
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (plVar12[10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar7 = FUN_0389cba0(plVar12[10],0);
      if ((uVar7 & 1) == 0) {
        lVar4 = FUN_037bbac4(param_1,plVar12[10]);
        if (lVar4 == 0) {
          plVar12 = (long *)plVar12[10];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          lVar4 = local_38;
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar9 = thunk_FUN_01c496e0();
          uVar10 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedStream__);
          FUN_037f880c(uVar9,uVar10,uVar5,lVar4,0);
          uVar5 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedFile__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,uVar5);
        }
        if ((*(byte *)(lVar4 + 0x70) >> 3 & 1) != 0) {
          FUN_038d05a4(param_1,*(undefined8 *)Method_I2_Loc_SimpleJSON_JSONNode_Parse__,local_38,0);
        }
        plVar12[0xc] = lVar4;
      }
      else {
        FUN_037b8e08(param_1,plVar12[0xb]);
        lVar4 = plVar12[0xb];
        plVar12[0xc] = lVar4;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
      lVar6 = local_38;
      plVar12 = *(long **)(lVar4 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar5 = (**(code **)(*plVar12 + 0x288))(plVar12,local_38,*(undefined8 *)(*plVar12 + 0x290));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined8 *)(lVar6 + 0x68) = uVar5;
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = 8;
      goto LAB_037b8fdc;
    }
    bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Select<Label,_string>__ + 0x130);
    if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Linq_Enumerable_Select<Label,_string>__)) {
      if (plVar12[10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar7 = FUN_0389cba0(plVar12[10],0);
      if ((uVar7 & 1) == 0) {
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(local_38 + 0x88) != 0) {
          lVar4 = plVar12[10];
          uVar5 = FUN_03803138(*(long *)(local_38 + 0x88),0);
          if (*(int *)(*(long *)
                        Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_0389cd9c(lVar4,uVar5,0);
          if ((uVar7 & 1) != 0) {
            if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            plVar8 = *(long **)(local_38 + 0x88);
            if (plVar8 != (long *)0x0) {
              lVar4 = *(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__;
              if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
                  lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar8,lVar4);
              }
            }
            FUN_037b8e08(param_1);
            if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar4 = *(long *)(local_38 + 0x88);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            *(undefined8 *)(local_38 + 0x60) = *(undefined8 *)(lVar4 + 0x60);
            goto LAB_037b9270;
          }
        }
        puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
        plVar8 = (long *)plVar12[10];
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar7 = (**(code **)(*plVar8 + 0x138))
                          (plVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),
                           *(undefined8 *)(*plVar8 + 0x140));
        plVar8 = (long *)plVar12[10];
        if ((uVar7 & 1) != 0) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          lVar4 = local_38;
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar9 = thunk_FUN_01c496e0();
          uVar10 = thunk_FUN_01c273e8(Method_OVRSimpleJSON_JSONNode_Parse__);
          FUN_037f880c(uVar9,uVar10,uVar5,lVar4,0);
          uVar5 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedFile__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,uVar5);
        }
        lVar4 = FUN_037bbac4(param_1);
        if (lVar4 == 0) {
          plVar12 = (long *)plVar12[10];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          lVar4 = local_38;
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar9 = thunk_FUN_01c496e0();
          uVar10 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedStream__);
          FUN_037f880c(uVar9,uVar10,uVar5,lVar4,0);
          uVar5 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedFile__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,uVar5);
        }
        if ((*(byte *)(lVar4 + 0x70) >> 2 & 1) != 0) {
          FUN_038d05a4(param_1,*(undefined8 *)
                                Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedBase64__,local_38,
                       0);
        }
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(local_38 + 0x60) = lVar4;
      }
      else {
        FUN_037b8e08(param_1,plVar12[0xb]);
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar4 = plVar12[0xb];
        *(long *)(local_38 + 0x60) = lVar4;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
      }
LAB_037b9270:
      lVar6 = local_38;
      plVar8 = *(long **)(lVar4 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar5 = (**(code **)(*plVar8 + 0x278))
                        (plVar8,plVar12[0xc],*(undefined8 *)(param_1 + 0x10),local_38,
                         *(undefined8 *)(*plVar8 + 0x280));
      *(undefined8 *)(lVar6 + 0x68) = uVar5;
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = 4;
      goto LAB_037b8fdc;
    }
  }
  uVar5 = FUN_037bbc10(param_1,param_2);
  lVar4 = local_38;
  puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__ +
              0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_04538f05 == '\0') {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    DAT_04538f05 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar6 = *(long *)puVar2;
  }
  lVar3 = local_38;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  uVar5 = FUN_037f7890(uVar5,local_38,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined8 *)(lVar3 + 0x68) = uVar5;
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar11 = 0x10;
LAB_037b8fdc:
  *(undefined4 *)(local_38 + 0x5c) = uVar11;
  FUN_01baefd4(&local_58);
  return;
}


