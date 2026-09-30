/*
FUNCTION_NAME: FUN_037d9b6c
ENTRY_POINT: 037d9b6c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_037d9b6c(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  if ((DAT_04538f63 & 1) == 0) {
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__);
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JToken_AddAnnotation__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<AudioSource>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<CustomDropdown_Item>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__);
    FUN_01c5d288(Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__);
    FUN_01c5d288(Method_Newtonsoft_Json_Linq_JToken_EnsureValue__);
    DAT_04538f63 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_038d05a4(param_1,*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_EnsureValue__,param_2,0);
    return;
  }
  if (*(long *)(param_2 + 0xe0) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x30) = 1;
  if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar7 = FUN_0389cba0(*(long *)(param_2 + 0xa0),0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar16 = (long *)FUN_037fa1e0(*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0xa0),0);
    if (plVar16 == (long *)0x0) {
      plVar16 = *(long **)(param_2 + 0xa0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
      thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
      uVar12 = thunk_FUN_01c496e0();
      uVar13 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_Replace__);
      FUN_037f880c(uVar12,uVar13,uVar11,param_2,0);
      uVar11 = thunk_FUN_01c273e8(
                                 Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar12,uVar11);
    }
    bVar4 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__ + 0x130);
    if ((*(byte *)(*plVar16 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar16);
    }
    FUN_037d9b6c(param_1,plVar16);
    if (plVar16[0x1c] == 0) {
      plVar16 = *(long **)(param_2 + 0xa0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
      thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
      uVar12 = thunk_FUN_01c496e0();
      uVar13 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_ToBigInteger__);
      FUN_037f880c(uVar12,uVar13,uVar11,param_2,0);
      uVar11 = thunk_FUN_01c273e8(
                                 Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar12,uVar11);
    }
    *(long *)(param_2 + 200) = plVar16[0x19];
    lVar14 = FUN_037cc2a8();
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (*(long *)(param_2 + 0xb8) == 0) {
      if (*(long *)(param_2 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar7 = FUN_0389cba0(*(long *)(param_2 + 0xb0),0);
      if ((uVar7 & 1) == 0) {
        lVar14 = FUN_037e10e0(param_1,*(undefined8 *)(param_2 + 0xb0));
        *(long *)(param_2 + 200) = lVar14;
        if (lVar14 == 0) {
          plVar16 = *(long **)(param_2 + 0xb0);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar11 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar12 = thunk_FUN_01c496e0();
          uVar13 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_ToBigIntegerNullable__);
          FUN_037f880c(uVar12,uVar13,uVar11,param_2,0);
          uVar11 = thunk_FUN_01c273e8(
                                     Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,uVar11);
        }
        goto LAB_037d9de4;
      }
      if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar7 = FUN_0389cba0(*(long *)(param_2 + 0xa8),0);
      puVar2 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
      if ((uVar7 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar16 = (long *)FUN_037fa1e0(*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0xa8),0);
        if (plVar16 == (long *)0x0) {
          if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar15 = *(long *)(*(long *)(param_2 + 0xa8) + 0x10);
          lVar14 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03295500(0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar11 = FUN_0315929c(lVar15,uVar11,0);
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar12 = thunk_FUN_01c496e0();
          uVar13 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_ToObject__);
          FUN_037f880c(uVar12,uVar13,uVar11,param_2,0);
          uVar11 = thunk_FUN_01c273e8(
                                     Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar12,uVar11);
        }
        bVar4 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__ + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar16);
        }
        if ((char)plVar16[6] != '\0') goto LAB_037da234;
        FUN_037d9b6c(param_1,plVar16);
        puVar2 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
        if (plVar16[0x1c] == 0) {
          if (*(int *)(*(long *)
                        Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__ +
                      0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (DAT_04538eab == '\0') {
            FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
            DAT_04538eab = '\x01';
          }
          lVar14 = *(long *)puVar2;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar14 = *(long *)puVar2;
          }
          *(undefined8 *)(param_2 + 200) = **(undefined8 **)(lVar14 + 0xb8);
          puVar3 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
          if (DAT_04538eab == '\0') {
            FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
            lVar14 = *(long *)puVar3;
            DAT_04538eab = '\x01';
          }
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar14 = *(long *)puVar2;
          }
          if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = FUN_038043a4(**(long **)(lVar14 + 0xb8),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = FUN_037cc2a8();
        }
        else {
          *(long *)(param_2 + 200) = plVar16[0x19];
          lVar14 = FUN_037cc2a8();
        }
      }
      else {
        if (*(int *)(*(long *)
                      Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__ + 0xe0
                    ) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (DAT_04538eab == '\0') {
          FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
          DAT_04538eab = '\x01';
        }
        lVar14 = *(long *)puVar2;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar14 = *(long *)puVar2;
        }
        *(undefined8 *)(param_2 + 200) = **(undefined8 **)(lVar14 + 0xb8);
        puVar3 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
        if (DAT_04538eab == '\0') {
          FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__);
          lVar14 = *(long *)puVar3;
          DAT_04538eab = '\x01';
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar14 = *(long *)puVar2;
        }
        if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = FUN_038043a4(**(long **)(lVar14 + 0xb8),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = FUN_037cc2a8();
      }
      if (lVar14 == 0) goto LAB_037d9de4;
    }
    else {
      *(long *)(param_2 + 200) = *(long *)(param_2 + 0xb8);
LAB_037d9de4:
      plVar16 = *(long **)(param_2 + 200);
      if (plVar16 == (long *)0x0) goto LAB_037da3d0;
      lVar14 = *plVar16;
      bVar4 = *(byte *)(*(long *)
                         Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__ +
                       0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__)) {
        bVar4 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__ +
                         0x130);
        if ((*(byte *)(lVar14 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__))
        goto LAB_037da3d0;
        FUN_037d9278(param_1,plVar16);
        lVar14 = FUN_038043a4(plVar16,0);
        if (lVar14 == 0) goto LAB_037da3d0;
        lVar14 = FUN_038043a4(plVar16,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = FUN_037cc2a8();
      }
      else {
        FUN_037d87cc(param_1,plVar16);
        lVar14 = FUN_038043a4(plVar16,0);
        if (lVar14 == 0) goto LAB_037da3d0;
        lVar14 = FUN_038043a4(plVar16,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = FUN_037cc2a8();
      }
      if (lVar14 == 0) {
LAB_037da3d0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
    *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(param_2 + 0xc0);
    cVar1 = *(char *)(param_2 + 0x74);
    *(char *)(lVar14 + 0x72) = cVar1;
    plVar16 = *(long **)(param_2 + 200);
    if (plVar16 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)
                         Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__ +
                       0x130);
      if ((bVar4 <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) ==
          *(long *)Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__)) {
        bVar4 = FUN_037f5dac(plVar16,0);
        *(byte *)(lVar14 + 0x72) = cVar1 != '\0' | bVar4 & 1;
      }
    }
    *(undefined1 *)(lVar14 + 0x73) = *(undefined1 *)(param_2 + 0x76);
    *(uint *)(lVar14 + 0x90) = *(uint *)(param_2 + 0xd0) | *(uint *)(lVar14 + 0x90);
  }
  plVar16 = *(long **)(lVar14 + 0x30);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x298))
              (plVar16,*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(*plVar16 + 0x2a0));
  }
  if (((*(long *)(param_2 + 0x88) != 0) || (*(long *)(param_2 + 0x90) != 0)) &&
     (plVar16 = *(long **)(lVar14 + 0x80), plVar16 != (long *)0x0)) {
    if (((int)plVar16[2] != 0) &&
       (((int)plVar16[2] != 3 ||
        (uVar7 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180)),
        (uVar7 & 1) == 0)))) {
      thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
      uVar11 = thunk_FUN_01c496e0();
      uVar12 = thunk_FUN_01c273e8(Method_Newtonsoft_Json_Linq_JToken_ReadFrom__);
      FUN_037f8780(uVar11,uVar12,param_2,0);
      uVar12 = thunk_FUN_01c273e8(
                                 Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar11,uVar12);
    }
    lVar15 = *(long *)(param_2 + 0x88);
    if (lVar15 == 0) {
      *(undefined4 *)(lVar14 + 0x24) = 3;
      lVar15 = *(long *)(param_2 + 0x90);
    }
    else {
      *(undefined4 *)(lVar14 + 0x24) = 0;
    }
    plVar16 = *(long **)(lVar14 + 0x30);
    *(long *)(lVar14 + 0x38) = lVar15;
    puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
    if (plVar16 == (long *)0x0) {
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
      lVar15 = *(long *)puVar2;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar15 = *(long *)puVar2;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar16 = *(long **)(lVar15 + 0x68);
      if ((DAT_04538f0a & 1) == 0) {
        FUN_01c5d288(PTR_DAT_0422fc38);
        DAT_04538f0a = 1;
      }
      lVar15 = *(long *)(lVar14 + 0x38);
      if (lVar15 == 0) {
        lVar15 = **(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      lVar10 = thunk_FUN_01c496e0(*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_AddAnnotation__)
      ;
      FUN_0389ba40(lVar10,0);
      *(long *)(lVar10 + 0x50) = param_2;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (**(code **)(*plVar16 + 0x198))
                         (plVar16,lVar15,uVar11,lVar10,*(undefined8 *)(*plVar16 + 0x1a0));
    }
    else {
      iVar5 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      if (iVar5 == 0x25) {
        FUN_038d05a4(param_1,*(undefined8 *)
                              Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__,
                     param_2,0);
        goto LAB_037da128;
      }
      plVar16 = *(long **)(lVar14 + 0x30);
      if ((DAT_04538f0a & 1) == 0) {
        FUN_01c5d288(PTR_DAT_0422fc38);
        DAT_04538f0a = 1;
      }
      lVar15 = *(long *)(lVar14 + 0x38);
      if (lVar15 == 0) {
        lVar15 = **(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      lVar10 = thunk_FUN_01c496e0(*(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_AddAnnotation__)
      ;
      FUN_0389ba40(lVar10,0);
      *(long *)(lVar10 + 0x50) = param_2;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (**(code **)(*plVar16 + 0x228))
                         (plVar16,lVar15,uVar11,lVar10,1,*(undefined8 *)(*plVar16 + 0x230));
    }
    *(undefined8 *)(lVar14 + 0x40) = uVar11;
  }
LAB_037da128:
  uVar7 = FUN_037f7dfc(param_2,0);
  if ((uVar7 & 1) != 0) {
    plVar16 = (long *)FUN_037f7d58(param_2,0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = FUN_032a0fd4(plVar16,0);
    plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                   Method_Newtonsoft_Json_Linq_JToken_Annotation<JToken_LineInfoAnnotation>__
                                  ,uVar6);
    puVar2 = Method_System_Linq_Enumerable_ToList<CustomDropdown_Item>__;
    for (uVar7 = 0; iVar5 = FUN_032a0fd4(plVar16,0), (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
      plVar9 = (long *)(**(code **)(*plVar16 + 0x308))
                                 (plVar16,uVar7 & 0xffffffff,*(undefined8 *)(*plVar16 + 0x310));
      if (plVar9 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar9);
        }
      }
      FUN_037db08c(param_1,plVar9);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar15 = plVar9[0xe];
      if ((lVar15 != 0) &&
         (lVar10 = thunk_FUN_01c495e4(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
        uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar8[uVar7 + 4] = lVar15;
    }
    *(long **)(lVar14 + 0x98) = plVar8;
  }
  *(long *)(lVar14 + 0xa0) = param_2;
  *(long *)(param_2 + 0xe0) = lVar14;
LAB_037da234:
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}


