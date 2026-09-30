/*
FUNCTION_NAME: FUN_027f6348
ENTRY_POINT: 027f6348
PROGRAM: Lovesick-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;strong_file_logging_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_027f6348(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_03788a36 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8098);
    thunk_FUN_00d48444(Method_Polenter_Serialization_SharpSerializer__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Fma_mm256_fmadd_pd__);
    thunk_FUN_00d48444(
                      Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_ComponentModel_TypeConverter_GetConvertFromException__);
    thunk_FUN_00d48444(StringLiteral_5072);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_3__);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass15_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2e30);
    thunk_FUN_00d48444(StringLiteral_12803);
    thunk_FUN_00d48444(StringLiteral_8085);
    thunk_FUN_00d48444(PTR_DAT_033f0078);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<InitConfigOptions,_bool>_get_Count__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__)
    ;
    thunk_FUN_00d48444(StringLiteral_3301);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RegexFC>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_GetEnumerator__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6720);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TrashSwarm>_get_Item__);
    thunk_FUN_00d48444(StringLiteral_10512);
    thunk_FUN_00d48444(PTR_DAT_033ea750);
    thunk_FUN_00d48444(System_Xml_XmlTextReaderImpl_NodeData___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CwRoot>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2558);
    DAT_03788a36 = 1;
  }
  puVar4 = StringLiteral_10512;
  puVar3 = Method_System_Collections_Generic_List<TrashSwarm>_get_Item__;
  puVar2 = PTR_DAT_033f6720;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  plVar15 = *(long **)(param_3 + 0x18);
  if (plVar15 != (long *)0x0) {
    uVar12 = 0;
    do {
      uVar8 = (ulong)*(uint *)(plVar15 + 3);
      if ((long)(int)*(uint *)(plVar15 + 3) <= (long)uVar12) {
        return;
      }
      lVar10 = *(long *)(param_3 + 0x20);
      if (lVar10 == 0) break;
      if ((*(uint *)(lVar10 + 0x18) <= uVar12) || (uVar8 <= uVar12)) goto LAB_027f6ee4;
      plVar14 = *(long **)(lVar10 + uVar12 * 8 + 0x20);
      lVar13 = plVar15[uVar12 + 4];
      lVar10 = *(long *)(param_3 + 0x10);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_027f6ee4;
      lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
      if (lVar10 == lVar13) {
        if (plVar14 == (long *)0x0) {
          lVar10 = *(long *)(param_3 + 0x28);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_027f6ee4;
          plVar15 = *(long **)(lVar10 + uVar12 * 8 + 0x20);
          if (plVar15 == (long *)0x0) goto LAB_027f6c64;
          lVar5 = *plVar15;
          lVar10 = *(long *)(param_3 + 0x30);
          lVar13 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar13) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_027f6c40;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar15,lVar13,1);
LAB_027f6c40:
          uVar16 = (*(code *)*puVar6)(plVar15,puVar6[1]);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_027f6ee4;
          lVar10 = lVar10 + uVar12 * 8;
        }
        else {
          lVar13 = *plVar14;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar10) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_027f6c08;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar14,lVar10,5);
LAB_027f6c08:
          uVar16 = (*(code *)*puVar6)(plVar14,puVar6[1]);
          lVar10 = *(long *)(param_3 + 0x30);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_027f6ee4;
          lVar10 = lVar10 + uVar12 * 8;
        }
        *(undefined4 *)(lVar10 + 0x20) = uVar16;
        *(int *)(lVar10 + 0x24) = (int)param_2;
      }
      else {
        if (lVar10 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar15 + 0x40));
          if (lVar5 == 0) {
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          uVar8 = (ulong)*(uint *)(plVar15 + 3);
        }
        if (uVar8 <= uVar12) goto LAB_027f6ee4;
        plVar15[uVar12 + 4] = lVar10;
        if (plVar14 == (long *)0x0) {
          lVar5 = *(long *)(param_3 + 0x28);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_027f6ee4;
          if (*(long *)(lVar5 + uVar12 * 8 + 0x20) == 0) {
            FUN_027ab890(&uStack_78,param_4,0);
            uVar7 = param_2;
            if (*(int *)(*(long *)System_Xml_XmlTextReaderImpl_NodeData___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
              uVar7 = param_2;
            }
            uVar17 = FUN_027f6f9c(uVar12 & 0xffffffff,param_5);
            FUN_027f701c(lVar13,lVar10,0,uVar12 & 0xffffffff);
            param_2 = uVar7;
            FUN_01134800(uVar17,lVar13,lVar10,0,uVar12 & 0xffffffff,
                         *(undefined8 *)Method_System_Collections_Generic_List<CwRoot>__ctor__);
            lVar5 = *(long *)(param_3 + 0x30);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar5 = lVar5 + uVar12 * 8;
            *(int *)(lVar5 + 0x20) = (int)uVar17;
            *(int *)(lVar5 + 0x24) = (int)uVar7;
            lVar5 = *(long *)StringLiteral_2558;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar5 = *(long *)StringLiteral_2558;
            }
            if (uVar12 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
              FUN_027f739c(uVar17,uVar7,lVar13,lVar10,0);
              FUN_01124ce0(uVar17,lVar13,lVar10,0,*(undefined8 *)PTR_DAT_033ea750);
              param_2 = uVar7;
            }
            puVar6 = &uStack_78;
            goto LAB_027f6974;
          }
        }
        else {
          lVar9 = *plVar14;
          lVar5 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                uVar7 = param_2;
                goto LAB_027f67a4;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar14,lVar5,5);
          uVar7 = param_2;
LAB_027f67a4:
          uVar17 = (*(code *)*puVar6)(plVar14,puVar6[1]);
          lVar5 = *(long *)(param_3 + 0x30);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_027f6ee4;
          lVar5 = lVar5 + uVar12 * 8;
          *(int *)(lVar5 + 0x20) = (int)uVar17;
          *(int *)(lVar5 + 0x24) = (int)uVar7;
          lVar5 = *plVar14;
          lVar9 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar9 + 300);
          param_2 = uVar7;
          if ((bVar1 <= *(byte *)(lVar5 + 300)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
            lVar5 = (**(code **)(lVar5 + 0x188))(plVar14,*(undefined8 *)(lVar5 + 400));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__
                                );
            }
            lVar9 = FUN_012c4efc(*(undefined8 *)
                                  Method_System_ComponentModel_TypeConverter_GetConvertFromException__
                                );
            if (lVar5 != lVar9) {
              lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
              if (*(int *)(*(long *)
                            Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)
                                    Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__
                                  );
              }
              lVar9 = FUN_012c4efc(*(undefined8 *)StringLiteral_8098);
              if (lVar5 != lVar9) {
                lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                if (*(int *)(*(long *)StringLiteral_8085 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_8085);
                }
                lVar9 = FUN_012c4efc(*(undefined8 *)PTR_DAT_033f2e30);
                if (lVar5 != lVar9) {
                  lVar5 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<RegexFC>_get_Count__
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        Method_System_Collections_Generic_List<RegexFC>_get_Count__)
                    ;
                  }
                  lVar9 = FUN_012c4efc(*(undefined8 *)
                                        Method_Polenter_Serialization_SharpSerializer__ctor__);
                  if (lVar5 != lVar9) goto LAB_027f697c;
                }
              }
            }
            FUN_027ab890(&local_80,param_4,0);
            FUN_027f701c(uVar17,uVar7,lVar13,lVar10,plVar14,uVar12 & 0xffffffff);
            FUN_01134800(uVar17,lVar13,lVar10,plVar14,uVar12 & 0xffffffff,
                         *(undefined8 *)Method_System_Collections_Generic_List<CwRoot>__ctor__);
            puVar6 = &local_80;
            param_2 = uVar7;
LAB_027f6974:
            FUN_027ab90c(puVar6,0);
          }
        }
LAB_027f697c:
        lVar5 = *(long *)(param_3 + 0x20);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_027f6ee4;
        *(undefined8 *)(lVar5 + uVar12 * 8 + 0x20) = 0;
        lVar5 = *(long *)(param_3 + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_027f6ee4;
        plVar15 = *(long **)(lVar5 + uVar12 * 8 + 0x20);
        if (plVar15 == (long *)0x0) goto LAB_027f6c64;
        lVar9 = *plVar15;
        lVar5 = *(long *)puVar3;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              uVar7 = param_2;
              goto LAB_027f6a08;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar15,lVar5,1);
        uVar7 = param_2;
LAB_027f6a08:
        uVar17 = (*(code *)*puVar6)(plVar15,puVar6[1]);
        lVar5 = *(long *)(param_3 + 0x30);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_027f6ee4;
        lVar5 = lVar5 + uVar12 * 8;
        *(int *)(lVar5 + 0x20) = (int)uVar17;
        *(int *)(lVar5 + 0x24) = (int)uVar7;
        lVar5 = *plVar15;
        lVar9 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar9 + 300);
        param_2 = uVar7;
        if ((bVar1 <= *(byte *)(lVar5 + 300)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
          lVar5 = (**(code **)(lVar5 + 0x188))(plVar15,*(undefined8 *)(lVar5 + 400));
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                              );
          }
          lVar9 = FUN_012c4efc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_3__);
          if (lVar5 == lVar9) {
LAB_027f6b80:
            FUN_027ab890(&uStack_88,param_4,0);
            FUN_027f739c(uVar17,uVar7,lVar13,lVar10,plVar15);
            FUN_01124ce0(uVar17,lVar13,lVar10,plVar15,*(undefined8 *)PTR_DAT_033ea750);
            puVar6 = &uStack_88;
            param_2 = uVar7;
          }
          else {
            lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            if (*(int *)(*(long *)PTR_DAT_033f0078 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)PTR_DAT_033f0078);
            }
            lVar9 = FUN_012c4efc(*(undefined8 *)
                                  Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
                                );
            if (lVar5 == lVar9) goto LAB_027f6b80;
            lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            if (*(int *)(*(long *)StringLiteral_3301 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_3301);
            }
            lVar9 = FUN_012c4efc(*(undefined8 *)StringLiteral_5072);
            if (lVar5 == lVar9) goto LAB_027f6b80;
            lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_GetEnumerator__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  Method_System_Collections_Generic_List<DebugUIHandlerIndirectToggle>_GetEnumerator__
                                );
            }
            lVar9 = FUN_012c4efc(*(undefined8 *)StringLiteral_12803);
            if (lVar5 == lVar9) goto LAB_027f6b80;
            lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<InitConfigOptions,_bool>_get_Count__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  Method_System_Collections_Generic_Dictionary<InitConfigOptions,_bool>_get_Count__
                                );
            }
            lVar9 = FUN_012c4efc(*(undefined8 *)
                                  DG_Tweening_DOTweenModuleUI_<>c__DisplayClass15_0_TypeInfo);
            if (lVar5 != lVar9) {
              lVar5 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (*(int *)(*(long *)
                            OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)
                                    OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo
                                  );
              }
              lVar9 = FUN_012c4efc(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_X86_Fma_mm256_fmadd_pd__);
              if (lVar5 != lVar9) goto LAB_027f6bd8;
            }
            FUN_027ab890(&local_90,param_4,0);
            FUN_027f701c(uVar17,uVar7,lVar13,lVar10,0,uVar12 & 0xffffffff);
            param_2 = uVar7;
            FUN_01134800(uVar17,lVar13,lVar10,0,uVar12 & 0xffffffff,
                         *(undefined8 *)Method_System_Collections_Generic_List<CwRoot>__ctor__);
            lVar5 = *(long *)StringLiteral_2558;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar5 = *(long *)StringLiteral_2558;
            }
            if (uVar12 == *(uint *)(*(long *)(lVar5 + 0xb8) + 8)) {
              FUN_027f739c(uVar17,uVar7,lVar13,lVar10,plVar15);
              FUN_01124ce0(uVar17,lVar13,lVar10,plVar15,*(undefined8 *)PTR_DAT_033ea750);
              param_2 = uVar7;
            }
            puVar6 = &local_90;
          }
          FUN_027ab90c(puVar6,0);
        }
LAB_027f6bd8:
        lVar10 = *(long *)(param_3 + 0x28);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_027f6ee4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20) = 0;
      }
LAB_027f6c64:
      plVar15 = *(long **)(param_3 + 0x18);
      uVar12 = uVar12 + 1;
    } while (plVar15 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


