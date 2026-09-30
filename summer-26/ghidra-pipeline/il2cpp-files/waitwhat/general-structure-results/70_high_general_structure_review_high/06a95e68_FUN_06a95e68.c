/*
FUNCTION_NAME: FUN_06a95e68
ENTRY_POINT: 06a95e68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x06a96d38) */
/* WARNING: Removing unreachable block (ram,0x06a96e18) */

uint FUN_06a95e68(long param_1,long param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  long local_70;
  long local_68;
  
  puVar5 = Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__;
  if ((DAT_0755f4c5 & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryGetValue__);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<RunnerVisibilityLink>>__ctor__
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<RunnerVisibilityLink>>_Add__
                );
    FUN_03188a78(System_Xml_XmlEntity_TypeInfo);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Scene,_NetworkSceneManagerDefault>_ContainsKey__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Scene,_NetworkSceneManagerDefault>_Remove__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Scene,_NetworkSceneManagerDefault>_TryGetValue__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<string>>_set_Item__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__);
    FUN_03188a78(UnityEngine_XR_Hands_XRHand_TypeInfo);
    FUN_03188a78(PTR_DAT_071102b0);
    FUN_03188a78(System_Data_XSDSchema_TypeInfo);
    FUN_03188a78(Newtonsoft_Json_Converters_XmlDocumentTypeWrapper_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1928);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<string>>_ContainsKey__);
    FUN_03188a78(UnityEngine_Events_UnityAction<Tentacle>_TypeInfo);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<ScriptableObject,_HashSet<object>>_Add__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__);
    FUN_03188a78(UnityEngine_Events_UnityAction<Scene>_TypeInfo);
    FUN_03188a78(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_X25519PublicKeyParameters_TypeInfo
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<SpanMetric>>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__);
    FUN_03188a78(PTR_DAT_070c4248);
    FUN_03188a78(System_Xml_XmlException_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_XmlFormatClassReaderDelegate_TypeInfo);
    FUN_03188a78(System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                );
    DAT_0755f4c5 = 1;
  }
  lVar15 = *(long *)puVar5;
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar15 = *(long *)puVar5;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x30);
  if (lVar15 != 0) {
    UnityEngine_TerrainData___cctor(lVar15,0);
  }
  local_a8 = &local_68;
  local_b0 = 0;
  local_68 = lVar15;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0xa8) == 0)) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      uVar25 = thunk_FUN_069dc13c(param_1,0);
      uVar25 = FUN_057bf780(*(undefined8 *)
                             System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo,
                            uVar25,*(undefined8 *)
                                    System_Runtime_Serialization_XmlFormatClassReaderDelegate_TypeInfo
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f53c(uVar25,param_1,0);
    }
    else {
      uVar25 = thunk_FUN_069dc13c(param_1,0);
      uVar25 = FUN_057bf780(*(undefined8 *)
                             System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo,
                            uVar25,*(undefined8 *)System_Xml_XmlException_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f53c(uVar25,param_1,0);
    }
    uVar13 = 0;
    *param_3 = 0;
    goto LAB_06a961e4;
  }
  iVar10 = FUN_06a92984(param_1);
  if (iVar10 != 0) {
    lVar15 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c4248,*(undefined4 *)(param_2 + 0x18));
    *param_3 = lVar15;
    uVar21 = *(ulong *)(param_2 + 0x18);
    if (0 < (int)uVar21) {
      uVar18 = 0;
      do {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        uVar1 = uVar18 + 1;
        *(undefined4 *)(lVar15 + 0x20 + uVar18 * 4) = *(undefined4 *)(param_2 + 0x20 + uVar18 * 4);
        uVar18 = uVar1;
      } while ((uVar21 & 0xffffffff) != uVar1);
    }
    uVar13 = 0;
    goto LAB_06a961e4;
  }
  lVar15 = *(long *)(param_1 + 0x130);
  if ((lVar15 == 0) || (lVar24 = *(long *)(param_1 + 0x120), lVar24 == 0)) {
    FUN_06a8ef6c(param_1);
    lVar15 = *(long *)(param_1 + 0x130);
    lVar24 = *(long *)(param_1 + 0x120);
  }
  lVar19 = *(long *)(param_1 + 0x1d0);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  *(undefined4 *)(lVar19 + 0x18) = 0;
  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
  puVar5 = System_Data_XSDSchema_TypeInfo;
  if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_03ec5244(*(long *)(param_1 + 0x1d8),*(undefined8 *)System_Data_XSDSchema_TypeInfo);
  lVar19 = *(long *)(param_1 + 0x1e0);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar10 = *(int *)(lVar19 + 0x18);
  *(undefined4 *)(lVar19 + 0x18) = 0;
  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
  if (0 < iVar10) {
    FUN_0595236c(*(undefined8 *)(lVar19 + 0x10),0,iVar10,0);
  }
  if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_03ec5244(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
  lVar19 = *(long *)(param_1 + 0x1f0);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar23 = 0;
  local_74 = 0;
  *(undefined4 *)(lVar19 + 0x18) = 0;
  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_List<RunnerVisibilityLink>>_Add__;
  puVar5 = UnityEngine_XR_Hands_XRHand_TypeInfo;
  iVar10 = *(int *)(param_2 + 0x18);
  if (0 < iVar10) {
    do {
      iVar11 = FUN_06a97070(param_2,&local_74);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar21 = FUN_052f2124(lVar15,iVar11,*(undefined8 *)puVar6);
      if ((uVar21 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        iVar12 = FUN_06a839a4(iVar11,0);
        if (iVar12 == 0) {
          if (iVar11 == 0xa0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            iVar12 = FUN_06a839a4(0x20,0);
LAB_06a96390:
            if (iVar12 != 0) goto LAB_06a96398;
          }
          else if ((iVar11 == 0xad) || (iVar11 == 0x2011)) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            iVar12 = FUN_06a839a4(0x2d,0);
            goto LAB_06a96390;
          }
          lVar19 = *(long *)(param_1 + 0x1f0);
          if (lVar19 == 0) {
LAB_06a96dd8:
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar16 = *(long *)(lVar19 + 0x10);
          lVar20 = *(long *)PTR_DAT_070f1928;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_06a96dd8;
          uVar13 = *(uint *)(lVar19 + 0x18);
          if (uVar13 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar13 + 1;
            *(int *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = iVar11;
          }
          else {
            FUN_043967bc(lVar19,iVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          uVar23 = 1;
        }
        else {
LAB_06a96398:
          lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<string,_List<int>>_TryGetValue__
                             );
          FUN_06a8c88c(lVar19,iVar11,iVar12);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar21 = FUN_052f3970(lVar24,iVar12,&local_80,*(undefined8 *)System_Xml_XmlEntity_TypeInfo
                               );
          if ((uVar21 & 1) == 0) {
            if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar21 = FUN_03ec5d70(*(long *)(param_1 + 0x1d8),iVar12,*(undefined8 *)PTR_DAT_071102b0)
            ;
            if ((uVar21 & 1) != 0) {
              lVar16 = *(long *)(param_1 + 0x1d0);
              if (lVar16 == 0) {
LAB_06a96dcc:
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar20 = *(long *)(lVar16 + 0x10);
              lVar22 = *(long *)PTR_DAT_070f1928;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_06a96dcc;
              uVar13 = *(uint *)(lVar16 + 0x18);
              if (uVar13 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                *(int *)(lVar20 + (long)(int)uVar13 * 4 + 0x20) = iVar12;
              }
              else {
                FUN_043967bc(lVar16,iVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar21 = FUN_03ec5d70(*(long *)(param_1 + 0x1e8),iVar11,*(undefined8 *)PTR_DAT_071102b0)
            ;
            if ((uVar21 & 1) != 0) {
              lVar16 = *(long *)(param_1 + 0x1e0);
              if (lVar16 == 0) {
LAB_06a96dc4:
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar20 = *(long *)(lVar16 + 0x10);
              lVar22 = *(long *)
                        Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
              ;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_06a96dc4;
              uVar13 = *(uint *)(lVar16 + 0x18);
              if (uVar13 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar13 + 1;
                *(long *)(lVar20 + (long)(int)uVar13 * 8 + 0x20) = lVar19;
              }
              else {
                FUN_042e4a64(lVar16,lVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_06ab2544(lVar19,local_80,0);
            FUN_06ab254c(lVar19,param_1,0);
            lVar16 = *(long *)(param_1 + 0x128);
            if (lVar16 == 0) {
LAB_06a96dc0:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar20 = *(long *)(lVar16 + 0x10);
            lVar22 = *(long *)
                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
            ;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_06a96dc0;
            uVar13 = *(uint *)(lVar16 + 0x18);
            if (uVar13 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar13 + 1;
              *(long *)(lVar20 + (long)(int)uVar13 * 8 + 0x20) = lVar19;
            }
            else {
              FUN_042e4a64(lVar16,lVar19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            FUN_052f1f30(lVar15,iVar11,lVar19,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_List<RunnerVisibilityLink>>__ctor__
                        );
          }
        }
      }
      local_74 = local_74 + 1;
    } while (local_74 < iVar10);
  }
  if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(int *)(*(long *)(param_1 + 0x1d0) + 0x18) == 0) {
    *param_3 = param_2;
    uVar13 = uVar23 ^ 1;
    goto LAB_06a961e4;
  }
  lVar19 = *(long *)(param_1 + 0x140);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  plVar17 = *(long **)(lVar19 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar10 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  if (1 < iVar10) {
    lVar19 = *(long *)(param_1 + 0x140);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    plVar17 = *(long **)(lVar19 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar10 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
    if (1 < iVar10) goto LAB_06a96700;
  }
  lVar19 = *(long *)(param_1 + 0x140);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  lVar19 = *(long *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_069b4714(lVar19,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),0);
  lVar19 = *(long *)(param_1 + 0x140);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  uVar25 = *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)UnityEngine_XR_Hands_XRHand_TypeInfo + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_06a86808(uVar25,0);
LAB_06a96700:
  lVar19 = *(long *)(param_1 + 0x140);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  uVar25 = *(undefined8 *)(param_1 + 0x160);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  uVar26 = *(undefined8 *)(param_1 + 0x1d0);
  uVar14 = *(undefined4 *)(param_1 + 0x158);
  uVar3 = *(undefined4 *)(param_1 + 0x15c);
  uVar28 = *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
  if (*(int *)(*(long *)UnityEngine_XR_Hands_XRHand_TypeInfo + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar13 = FUN_06a844d4(uVar26,uVar14,0,uVar2,uVar25,uVar3,uVar28,&local_70,0);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar14 = *(undefined4 *)(local_70 + 0x18);
  uVar25 = *(undefined8 *)(param_1 + 0x118);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__ +
              0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_03ac086c(uVar25,uVar14,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
              );
  FUN_03ac0a38(lVar24,uVar14,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
              );
  puVar8 = 
  Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
  ;
  FUN_03ac08e0(*(undefined8 *)(param_1 + 0x1c8),uVar14,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
              );
  FUN_03ac08e0(*(undefined8 *)(param_1 + 0x1c0),uVar14,*(undefined8 *)puVar8);
  puVar7 = Newtonsoft_Json_Converters_XmlDocumentTypeWrapper_TypeInfo;
  puVar6 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo;
  puVar5 = PTR_DAT_070f1928;
  if (local_70 != 0) {
    uVar27 = 0;
    do {
      if ((int)*(uint *)(local_70 + 0x18) <= (int)uVar27) {
LAB_06a96988:
        lVar19 = *(long *)(param_1 + 0x1d0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(lVar19 + 0x18) = 0;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x1e0) + 0x18);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__
                    + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03ac08e0(lVar19,uVar14,*(undefined8 *)puVar8);
        FUN_03ac086c(*(undefined8 *)(param_1 + 0x128),uVar14,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<string>>_set_Item__)
        ;
        FUN_03ac0a38(lVar15,uVar14,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                    );
        puVar9 = Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__;
        puVar8 = Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__;
        puVar7 = 
        Method_System_Collections_Generic_Dictionary<string,_List<RunnerVisibilityLink>>__ctor__;
        puVar6 = System_Xml_XmlEntity_TypeInfo;
        lVar19 = *(long *)(param_1 + 0x1e0);
        if (lVar19 == 0) goto LAB_06a96bac;
        iVar10 = 0;
        goto LAB_06a96a30;
      }
      if (*(uint *)(local_70 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar19 = *(long *)(local_70 + (long)(int)uVar27 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_06a96988;
      uVar14 = FUN_06a82790(lVar19,0);
      FUN_06a827f4(lVar19,*(undefined4 *)(param_1 + 0x148),0);
      lVar16 = *(long *)(param_1 + 0x118);
      if (lVar16 == 0) {
LAB_06a96d9c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar20 = *(long *)(lVar16 + 0x10);
      lVar22 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_06a96d9c;
      uVar4 = *(uint *)(lVar16 + 0x18);
      if (uVar4 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar4 + 1;
        *(long *)(lVar20 + (long)(int)uVar4 * 8 + 0x20) = lVar19;
      }
      else {
        FUN_042e4a64(lVar16,lVar19,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_052f1f30(lVar24,uVar14,lVar19,*(undefined8 *)puVar6);
      lVar19 = *(long *)(param_1 + 0x1c8);
      if (lVar19 == 0) {
LAB_06a96da0:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar16 = *(long *)(lVar19 + 0x10);
      lVar20 = *(long *)puVar5;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar16 == 0) goto LAB_06a96da0;
      uVar4 = *(uint *)(lVar19 + 0x18);
      if (uVar4 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar4 + 1;
        *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_043967bc(lVar19,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      lVar19 = *(long *)(param_1 + 0x1c0);
      if (lVar19 == 0) {
LAB_06a96da4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar16 = *(long *)(lVar19 + 0x10);
      lVar20 = *(long *)puVar5;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar16 == 0) goto LAB_06a96da4;
      uVar4 = *(uint *)(lVar19 + 0x18);
      if (uVar4 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar4 + 1;
        *(undefined4 *)(lVar16 + (long)(int)uVar4 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_043967bc(lVar19,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      uVar27 = uVar27 + 1;
    } while (local_70 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
LAB_06a96a30:
  if (*(int *)(lVar19 + 0x18) <= iVar10) {
    if (*(char *)(param_1 + 0x14c) != '\0' && (uVar13 & 1) == 0) goto LAB_06a96c34;
    if ((uVar13 & 1) != 0) goto LAB_06a96c40;
    uVar25 = thunk_FUN_069dc13c(param_1,0);
    uVar25 = FUN_057b27f0(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                          ,uVar25,0);
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698e980(uVar25,0);
    uVar13 = 0;
    goto LAB_06a96c44;
  }
  lVar19 = FUN_042e47a4(lVar19,iVar10,*(undefined8 *)puVar8);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar21 = FUN_06ab253c(lVar19,0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8(uVar21,uVar21 & 0xffffffff);
  }
  uVar21 = FUN_052f3970(lVar24,uVar21 & 0xffffffff,&local_88,*(undefined8 *)puVar6);
  if ((uVar21 & 1) == 0) {
    lVar16 = *(long *)(param_1 + 0x1d0);
    uVar14 = FUN_06ab253c(lVar19,0);
    if (lVar16 == 0) {
LAB_06a96d88:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar19 = *(long *)(lVar16 + 0x10);
    lVar20 = *(long *)puVar5;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_06a96d88;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar19 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_043967bc(lVar16,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  else {
    FUN_06ab2544(lVar19,local_88,0);
    FUN_06ab254c(lVar19,param_1,0);
    lVar16 = *(long *)(param_1 + 0x128);
    if (lVar16 == 0) {
LAB_06a96d90:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar20 = *(long *)(lVar16 + 0x10);
    lVar22 = *(long *)
              Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar20 == 0) goto LAB_06a96d90;
    uVar27 = *(uint *)(lVar16 + 0x18);
    if (uVar27 < *(uint *)(lVar20 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar27 + 1;
      *(long *)(lVar20 + (long)(int)uVar27 * 8 + 0x20) = lVar19;
    }
    else {
      FUN_042e4a64(lVar16,lVar19,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar21 = FUN_06ab255c(lVar19,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8(uVar21,uVar21 & 0xffffffff);
    }
    FUN_052f1f30(lVar15,uVar21 & 0xffffffff,lVar19,*(undefined8 *)puVar7);
    if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_042e61ac(*(long *)(param_1 + 0x1e0),iVar10,*(undefined8 *)puVar9);
    iVar10 = iVar10 + -1;
  }
  lVar19 = *(long *)(param_1 + 0x1e0);
  iVar10 = iVar10 + 1;
  if (lVar19 == 0) {
LAB_06a96bac:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  goto LAB_06a96a30;
LAB_06a96c34:
  do {
    uVar21 = FUN_06a97170(param_1);
  } while ((uVar21 & 1) == 0);
LAB_06a96c40:
  uVar13 = 1;
LAB_06a96c44:
  if ((param_4 & 1) != 0) {
    FUN_06a97628(param_1);
  }
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&local_c8,*(long *)(param_1 + 0x1e0),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<ScriptableObject,_HashSet<object>>_Add__
              );
  puVar6 = Method_System_Collections_Generic_Dictionary<Scene,_NetworkSceneManagerDefault>_Remove__;
  puStack_98 = puStack_c0;
  local_a0 = local_c8;
  local_90 = local_b8;
  local_c8 = 0;
  puStack_c0 = &local_a0;
  while (uVar21 = FUN_054518b4(&local_a0,*(undefined8 *)puVar6), (uVar21 & 1) != 0) {
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar15 = *(long *)(param_1 + 0x1f0);
    uVar14 = FUN_06ab255c(local_90,0);
    if (lVar15 == 0) {
LAB_06a96d78:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar24 = *(long *)(lVar15 + 0x10);
    lVar19 = *(long *)puVar5;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar24 == 0) goto LAB_06a96d78;
    uVar27 = *(uint *)(lVar15 + 0x18);
    if (uVar27 < *(uint *)(lVar24 + 0x18)) {
      *(uint *)(lVar15 + 0x18) = uVar27 + 1;
      *(undefined4 *)(lVar24 + (long)(int)uVar27 * 4 + 0x20) = uVar14;
    }
    else {
      FUN_043967bc(lVar15,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_054518b0(&local_a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Scene,_NetworkSceneManagerDefault>_ContainsKey__
              );
  *param_3 = 0;
  lVar15 = *(long *)(param_1 + 0x1f0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (0 < *(int *)(lVar15 + 0x18)) {
    lVar15 = FUN_04398208(lVar15,*(undefined8 *)UnityEngine_Events_UnityAction<Scene>_TypeInfo);
    *param_3 = lVar15;
  }
  uVar13 = uVar13 & (uVar23 ^ 1);
LAB_06a961e4:
  if (*local_a8 != 0) {
    FUN_069807c8(*local_a8,0);
  }
  if (local_b0 == 0) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd0();
}


