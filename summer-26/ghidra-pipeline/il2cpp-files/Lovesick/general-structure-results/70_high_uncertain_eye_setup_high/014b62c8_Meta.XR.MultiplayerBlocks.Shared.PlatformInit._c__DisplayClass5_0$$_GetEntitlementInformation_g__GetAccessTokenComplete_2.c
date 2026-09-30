/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__GetAccessTokenComplete|2
ENTRY_POINT: 014b62c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__GetAccessTokenComplete_2
               (ulong param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_7493);
    thunk_FUN_00d48444(StringLiteral_6551);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_610);
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float4>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_9885);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<char,_char>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4e80);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1329);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlayerPlatform>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033ebec0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s8__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_set_Key__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ParametricDoor>_Add__);
    thunk_FUN_00d48444(System_Collections_Generic_List<BaseInputModule>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2822);
    thunk_FUN_00d48444(StringLiteral_13783);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_JSONNode>_Remove__);
    thunk_FUN_00d48444(System_Xml_XmlTextReaderImpl_XmlContext_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xd81) = 1;
  }
  lVar8 = thunk_FUN_00d62348(*unaff_x22);
  if (lVar8 == 0) goto LAB_014b69ec;
  FUN_017b46ec(lVar8,0);
  *(long *)(lVar8 + 0x10) = param_2;
  *(long *)(lVar8 + 0x18) = param_3;
  puVar5 = Method_System_Collections_Generic_List<ParametricDoor>_Add__;
  if (param_3 == 0) goto LAB_014b69ec;
  lVar9 = FUN_00bc379c(param_3,*(undefined8 *)
                                Method_System_Collections_Generic_List<ParametricDoor>_Add__);
  puVar6 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<OVRScenePrefabOverride>_MoveNext__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
  ;
  if (lVar9 == 0) goto LAB_014b69ec;
  if (*(int *)(lVar9 + 0x28) == 1) {
    lVar9 = *(long *)(lVar8 + 0x18);
    if (*(long *)(param_2 + 0x30) == lVar9) {
      return;
    }
    *(long *)(param_2 + 0x30) = lVar9;
    plVar10 = (long *)thunk_FUN_00d6225c(lVar9,*(undefined8 *)puVar3);
    if (plVar10 != (long *)0x0) {
      if (*(long *)(param_2 + 0xc0) == 0) goto LAB_014b69ec;
      uVar11 = FUN_015018a4(*(long *)(param_2 + 0xc0),0);
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_014b6538;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,4);
LAB_014b6538:
      (*(code *)*puVar12)(plVar10,uVar11,puVar12[1]);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if (lVar9 == 0) goto LAB_014b69ec;
      FUN_016f27fc(lVar9,param_2,*(undefined8 *)System_Xml_XmlTextReaderImpl_XmlContext_TypeInfo,0);
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_014b65c0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,2);
LAB_014b65c0:
      (*(code *)*puVar12)(plVar10,lVar9,puVar12[1]);
    }
    puVar3 = StringLiteral_7493;
    plVar10 = *(long **)(param_2 + 0x30);
    if (plVar10 == (long *)0x0) {
LAB_014b6658:
      if (plVar10 == (long *)0x0) goto LAB_014b69ec;
    }
    else {
      bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<BaseInputModule>_TypeInfo + 300);
      if ((bVar1 <= *(byte *)(*plVar10 + 300)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Collections_Generic_List<BaseInputModule>_TypeInfo)) {
        lVar9 = FUN_00bc379c(plVar10,*(undefined8 *)puVar5);
        if (lVar9 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar9 + 0x10);
        }
        lVar13 = plVar10[0x13];
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar9 == 0) goto LAB_014b69ec;
        FUN_014a3520(lVar9,uVar11,lVar13);
        plVar10[0x1c] = lVar9;
        plVar10 = *(long **)(param_2 + 0x30);
        goto LAB_014b6658;
      }
    }
    lVar9 = **(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d32ed4(plVar10,*(long *)(lVar9 + 0x80) + 0xe0);
    if (*plVar10 == 0) goto LAB_014b69ec;
    lVar13 = *(long *)(*plVar10 + 0x80);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4e80);
    if ((lVar9 == 0) ||
       (FUN_013df2bc(lVar9,param_2,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_JSONNode>_Remove__,0),
       lVar13 == 0)) goto LAB_014b69ec;
    FUN_013df780(lVar13,lVar9,*(undefined8 *)StringLiteral_1329);
  }
  else {
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_014b69ec;
    lVar13 = *(long *)(param_2 + 0x88);
    lVar9 = FUN_00bc379c(*(long *)(lVar8 + 0x18),*(undefined8 *)puVar5);
    if ((lVar9 == 0) || (lVar13 == 0)) goto LAB_014b69ec;
    FUN_01275a3c(lVar13,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                 *(undefined8 *)StringLiteral_6551);
  }
  lVar9 = *(long *)(lVar8 + 0x18);
  if (lVar9 != 0) {
    lVar13 = **(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    plVar10 = (long *)thunk_FUN_00d32ed4(lVar9,*(long *)(lVar13 + 0x80) + 0xe0);
    puVar3 = 
    Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
    if (*plVar10 != 0) {
      lVar13 = *(long *)(*plVar10 + 0x28);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                                );
      puVar7 = StringLiteral_13783;
      if (lVar9 != 0) {
        FUN_013df2bc(lVar9,param_2,*(undefined8 *)StringLiteral_13783,0);
        puVar4 = Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__;
        if (lVar13 != 0) {
          FUN_013df780(lVar13,lVar9,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
          lVar9 = *(long *)(lVar8 + 0x18);
          if (lVar9 != 0) {
            lVar13 = **(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_00d5941c();
            }
            plVar10 = (long *)thunk_FUN_00d32ed4(lVar9,*(long *)(lVar13 + 0x80) + 0xe0);
            if (*plVar10 != 0) {
              lVar13 = *(long *)(*plVar10 + 0x30);
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if ((lVar9 != 0) && (FUN_013df2bc(lVar9,param_2,*(undefined8 *)puVar7,0), lVar13 != 0)
                 ) {
                FUN_013df780(lVar13,lVar9,*(undefined8 *)puVar4);
                lVar9 = *(long *)(lVar8 + 0x18);
                if (lVar9 != 0) {
                  lVar13 = **(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
                  if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                    lVar13 = FUN_00d5941c();
                  }
                  plVar10 = (long *)thunk_FUN_00d32ed4(lVar9,*(long *)(lVar13 + 0x80) + 0xe0);
                  if (*plVar10 != 0) {
                    lVar13 = *(long *)(*plVar10 + 0x38);
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if ((lVar9 != 0) &&
                       (FUN_013df2bc(lVar9,param_2,*(undefined8 *)puVar7,0), lVar13 != 0)) {
                      FUN_013df780(lVar13,lVar9,*(undefined8 *)puVar4);
                      lVar9 = *(long *)(lVar8 + 0x18);
                      if (lVar9 != 0) {
                        lVar13 = **(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
                        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
                          lVar13 = FUN_00d5941c();
                        }
                        plVar10 = (long *)thunk_FUN_00d32ed4(lVar9,*(long *)(lVar13 + 0x80) + 0xe0);
                        if (*plVar10 != 0) {
                          lVar13 = *(long *)(*plVar10 + 0x40);
                          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                          if ((lVar9 != 0) &&
                             (FUN_013df2bc(lVar9,param_2,*(undefined8 *)StringLiteral_2822,0),
                             puVar2 = StringLiteral_610, lVar13 != 0)) {
                            FUN_013df780(lVar13,lVar9,*(undefined8 *)puVar4);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (DAT_03776498 == '\0') {
                              thunk_FUN_00d48444(StringLiteral_610);
                              DAT_03776498 = '\x01';
                            }
                            lVar9 = *(long *)puVar2;
                            if (*(int *)(lVar9 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar9 = *(long *)puVar2;
                            }
                            if (*(long *)(lVar8 + 0x18) != 0) {
                              lVar13 = **(long **)(lVar9 + 0xb8);
                              lVar9 = FUN_00bc379c(*(long *)(lVar8 + 0x18),*(undefined8 *)puVar5);
                              if ((lVar9 != 0) &&
                                 (uVar11 = FUN_028a05b8(*(undefined8 *)(lVar9 + 0x10),0),
                                 lVar13 != 0)) {
                                FUN_028a07a8(lVar13,uVar11,1,0);
                                lVar9 = FUN_014b4c8c(param_2);
                                if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
                                  (**(code **)(lVar9 + 0x18))
                                            (*(undefined8 *)(lVar9 + 0x40),
                                             *(undefined8 *)(lVar8 + 0x18),
                                             *(undefined8 *)(lVar9 + 0x28));
                                }
                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                puVar5 = Method_System_IO_BinaryReader_ReadString__;
                                if (lVar9 != 0) {
                                  FUN_016f27fc(lVar9,lVar8,*(undefined8 *)StringLiteral_9885,0);
                                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  FUN_014e0608(lVar9,0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014b69ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


