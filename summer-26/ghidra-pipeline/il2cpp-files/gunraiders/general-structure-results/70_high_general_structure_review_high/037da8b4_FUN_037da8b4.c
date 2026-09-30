/*
FUNCTION_NAME: FUN_037da8b4
ENTRY_POINT: 037da8b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_037da8b4(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  if ((DAT_04538f60 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JContainer_System_ComponentModel_IBindingList_Find__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JToken_AddAnnotation__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JToken_get_First__);
    DAT_04538f60 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_038d05a4(param_1,*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_get_First__,param_2,0);
    return;
  }
  if (*(long *)(param_2 + 0x98) == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    if (*(long *)(param_2 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar4 = FUN_0389cba0(*(long *)(param_2 + 0x70),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar6 = (long *)FUN_037fa1e0(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x70),0);
      if (plVar6 == (long *)0x0) {
        plVar6 = *(long **)(param_2 + 0x70);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
        uVar7 = thunk_FUN_01c496e0();
        uVar8 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_get_Last__);
        FUN_037f880c(uVar7,uVar8,uVar11,param_2,0);
        uVar11 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar11);
      }
      bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__ + 0x130)
      ;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Linq_Enumerable_ToList<JsonWriter_State[]>__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar6);
      }
      FUN_037da8b4(param_1,plVar6);
      if (plVar6[0x13] == 0) {
        plVar6 = *(long **)(param_2 + 0x70);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
        uVar7 = thunk_FUN_01c496e0();
        uVar8 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
        FUN_037f880c(uVar7,uVar8,uVar11,param_2,0);
        uVar11 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar11);
      }
      lVar5 = FUN_037b2384(plVar6[0x13],0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 != (long *)0x0) {
        if (plVar6[0xb] == 0) {
          if (plVar6[10] == 0) {
            FUN_037e5c38(param_1,param_2,lVar5);
          }
        }
        else {
          if (*(long *)(param_2 + 0x50) != 0) {
            plVar6 = *(long **)(param_2 + 0x70);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
            uVar7 = thunk_FUN_01c496e0();
            uVar8 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
            FUN_037f880c(uVar7,uVar8,uVar11,param_2,0);
            uVar11 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar7,uVar11);
          }
          lVar9 = *(long *)(param_2 + 0x58);
          if (lVar9 != 0) {
            uVar11 = *(undefined8 *)(param_1 + 0x10);
            lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_Newtonsoft_Json_Linq_JToken_AddAnnotation__);
            FUN_0389ba40(lVar10,0);
            *(long *)(lVar10 + 0x50) = param_2;
            uVar11 = (**(code **)(*plVar12 + 0x228))
                               (plVar12,lVar9,uVar11,lVar10,1,*(undefined8 *)(*plVar12 + 0x230));
            uVar4 = (**(code **)(*plVar12 + 0x2a8))
                              (plVar12,*(undefined8 *)(lVar5 + 0x40),uVar11,
                               *(undefined8 *)(*plVar12 + 0x2b0));
            if ((uVar4 & 1) == 0) {
              plVar6 = *(long **)(param_2 + 0x70);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
              uVar7 = thunk_FUN_01c496e0();
              uVar8 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
              FUN_037f880c(uVar7,uVar8,uVar11,param_2,0);
              uVar11 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar7,uVar11);
            }
          }
        }
      }
      *(long *)(param_2 + 0x90) = plVar6[0x12];
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 0x80);
      lVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_Newtonsoft_Json_Linq_JContainer_System_ComponentModel_IBindingList_Find__
                                );
      FUN_037b1f10(lVar5,uVar11,0);
      if (*(long *)(param_2 + 0x88) == 0) {
        if (*(long *)(param_2 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar4 = FUN_0389cba0(*(long *)(param_2 + 0x78),0);
        puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
        if ((uVar4 & 1) == 0) {
          lVar9 = FUN_037ddd34(param_1,*(undefined8 *)(param_2 + 0x78));
          if (lVar9 == 0) {
            plVar6 = *(long **)(param_2 + 0x78);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
            uVar7 = thunk_FUN_01c496e0();
            uVar8 = thunk_FUN_01c273e8(Method_I2_Loc_SimpleJSON_JSONNode_SaveToCompressedStream__);
            FUN_037f880c(uVar7,uVar8,uVar11,param_2,0);
            uVar11 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar7,uVar11);
          }
          *(long *)(param_2 + 0x90) = lVar9;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar11 = *(undefined8 *)(lVar9 + 0x68);
          *(long *)(lVar5 + 0x28) = lVar9;
          *(undefined8 *)(lVar5 + 0x30) = uVar11;
        }
        else {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (DAT_04538f05 == '\0') {
            FUN_01c5d288(
                        Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__
                        );
            DAT_04538f05 = '\x01';
          }
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar2;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
          puVar3 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
          if (DAT_04538f05 == '\0') {
            FUN_01c5d288(
                        Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__
                        );
            lVar9 = *(long *)puVar3;
            DAT_04538f05 = '\x01';
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar2;
          }
          lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar10 + 0x68);
          puVar3 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
          if (DAT_04538f05 == '\0') {
            FUN_01c5d288(
                        Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__
                        );
            lVar9 = *(long *)puVar3;
            DAT_04538f05 = '\x01';
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar2;
          }
          *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
        }
      }
      else {
        FUN_037d9278(param_1);
        lVar9 = *(long *)(param_2 + 0x88);
        *(long *)(param_2 + 0x90) = lVar9;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar5 + 0x28) = lVar9;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar9 + 0x68);
      }
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x298))
                  (plVar6,*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(*plVar6 + 0x2a0));
      }
      FUN_037e5c38(param_1,param_2,lVar5);
    }
    *(long *)(lVar5 + 0x80) = param_2;
    *(long *)(param_2 + 0x98) = lVar5;
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}


