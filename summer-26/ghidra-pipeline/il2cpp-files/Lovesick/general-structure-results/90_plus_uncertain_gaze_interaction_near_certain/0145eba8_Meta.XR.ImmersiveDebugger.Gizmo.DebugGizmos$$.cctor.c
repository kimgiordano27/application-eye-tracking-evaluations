/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$.cctor
ENTRY_POINT: 0145eba8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 222
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long unaff_x19;
  long unaff_x20;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033ee2d8);
  thunk_FUN_00d48444(StringLiteral_11624);
  thunk_FUN_00d48444(StringLiteral_2590);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Material>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033ed380);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(System_Nullable<short>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                    );
  thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  thunk_FUN_00d48444(Oculus_Platform_LogEventName_TypeInfo);
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
  thunk_FUN_00d48444(OVRHaptics_OVRHapticsOutput_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033edb18);
  thunk_FUN_00d48444(Oculus_Platform_Request<CowatchViewerList>_TypeInfo);
  thunk_FUN_00d48444(Method_MedleyBossPushPhase_StartPhase__);
  thunk_FUN_00d48444(PTR_DAT_033f3698);
  thunk_FUN_00d48444(System_Threading_WaitCallback_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f5960);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<JsonPosition>_Add__);
  thunk_FUN_00d48444(StringLiteral_12992);
  thunk_FUN_00d48444(UnityEngine_UIElements_IEventDispatchingStrategy_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_GUIStyle___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa9e) = 1;
  puVar8 = StringLiteral_302;
  puVar7 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  puVar6 = System_Nullable<short>_TypeInfo;
  _uStack0000000000000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(unaff_x19 + 0x10) == 1) {
    lVar11 = *(long *)(unaff_x19 + 0x60);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      lVar12 = FUN_020407b0(*(long *)(unaff_x19 + 0x70),0);
      lVar20 = *(long *)(unaff_x19 + 0x20);
      if ((lVar20 != 0) && (*(long *)(lVar20 + 0x50) != 0)) {
        FUN_0144a264(*(long *)(lVar20 + 0x50),*(undefined8 *)(lVar20 + 0x90),
                     *(undefined8 *)(lVar20 + 0x70),*(undefined8 *)(unaff_x19 + 0x50),0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar20 != 0)) {
          if (0 < *(int *)(lVar20 + 0x18)) {
            FUN_0132138c(lVar20,0,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
            lVar20 = *(long *)(unaff_x19 + 0x20);
            if ((lVar20 == 0) || (in_stack_00000028 == 0)) goto LAB_0145f564;
            FUN_01445034(in_stack_00000028,*(undefined8 *)(lVar20 + 0x90),
                         *(undefined8 *)(lVar20 + 0x70),0);
          }
          puVar6 = 
          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
          ;
          lVar20 = *(long *)(unaff_x19 + 0x38);
          if (lVar20 != 0) {
            (**(code **)(lVar20 + 0x18))
                      (DAT_028aa4e8,*(undefined8 *)(lVar20 + 0x40),
                       *(undefined8 *)UnityEngine_UIElements_IEventDispatchingStrategy_TypeInfo,
                       *(undefined8 *)(lVar20 + 0x28));
          }
          plVar24 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
          puVar6 = Method_System_Collections_Generic_List<JsonPosition>_Add__;
          if (plVar24 != (long *)0x0) {
            FUN_0160aa4c(plVar24,0);
            FUN_0160c8e8(plVar24,*(undefined8 *)puVar6,0);
            puVar9 = Method_MedleyBossPushPhase_StartPhase__;
            puVar8 = OVRHaptics_OVRHapticsOutput_TypeInfo;
            puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
            puVar6 = PTR_DAT_033f5960;
            lVar20 = *(long *)(unaff_x19 + 0x20);
            if (lVar20 != 0) {
              lVar26 = 4;
              do {
                if ((DAT_03776a98 & 1) == 0) {
                  thunk_FUN_00d48444(StringLiteral_11854);
                  DAT_03776a98 = 1;
                }
                uVar21 = lVar26 - 4;
                iVar23 = 0;
                if (*(long *)(lVar20 + 0x70) != 0) {
                  iVar23 = *(int *)(*(long *)(lVar20 + 0x70) + 0x18);
                }
                if ((long)iVar23 <= (long)uVar21) {
                  lVar20 = *(long *)(unaff_x19 + 0x58);
                  uVar17 = (**(code **)(*plVar24 + 0x168))
                                     (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                  if ((lVar20 != 0) &&
                     (uVar17 = FUN_0160c430(lVar20,uVar17,0), puVar7 = StringLiteral_302,
                     puVar6 = Newtonsoft_Json_Linq_JToken_TypeInfo, lVar11 != 0)) {
                    FUN_01458618(uVar17,*(undefined8 *)(unaff_x19 + 0x20),
                                 *(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x68)
                                 ,*(undefined8 *)(unaff_x19 + 0x78));
                    lVar11 = *(long *)(unaff_x19 + 0x38);
                    if (lVar11 != 0) {
                      (**(code **)(lVar11 + 0x18))
                                (DAT_028aa3e4,*(undefined8 *)(lVar11 + 0x40),
                                 *(undefined8 *)UnityEngine_GUIStyle___TypeInfo,
                                 *(undefined8 *)(lVar11 + 0x28));
                    }
                    if (*(long *)(unaff_x19 + 0x40) != 0) {
                      FUN_0143f4b4(*(long *)(unaff_x19 + 0x40),0);
                      plVar24 = *(long **)(unaff_x19 + 0x50);
                      if (plVar24 == (long *)0x0) goto LAB_0145f3f8;
                      lVar11 = *plVar24;
                      uVar17 = *(undefined8 *)(unaff_x19 + 0x38);
                      uVar21 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar21 == 0) goto LAB_0145f280;
                      piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      goto LAB_0145f268;
                    }
                  }
                  break;
                }
                lVar20 = *(long *)(unaff_x19 + 0x78);
                if (lVar20 == 0) break;
                if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_0145f568;
                uVar17 = *(undefined8 *)(lVar20 + lVar26 * 8);
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = FUN_02681b9c(uVar17,0,0);
                if ((uVar13 & 1) == 0) {
                  lVar20 = *(long *)(unaff_x19 + 0x20);
                  if (lVar20 == 0) break;
                  cVar5 = *(char *)(lVar20 + 0x49);
                  uVar17 = *(undefined8 *)(lVar20 + 0x80);
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar13 = FUN_01457470(uVar21 & 0xffffffff,cVar5 != '\0',uVar17);
                  if ((uVar13 & 1) == 0) {
                    if (((*(long *)(unaff_x19 + 0x20) != 0) &&
                        (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar20 != 0)) &&
                       (FUN_0132138c(lVar20,uVar21 & 0xffffffff,&stack0x00000028,
                                     *(undefined8 *)StringLiteral_11624), in_stack_00000028 != 0)) {
                      uVar17 = FUN_01600424(*(undefined8 *)System_Threading_WaitCallback_TypeInfo,
                                            *(undefined8 *)(in_stack_00000028 + 0x10),
                                            *(undefined8 *)PTR_DAT_033edb18,0);
                      goto LAB_0145f18c;
                    }
                    break;
                  }
                }
                else {
                  plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
                  if (plVar14 == (long *)0x0) break;
                  lVar20 = *(long *)puVar8;
                  if ((lVar20 != 0) &&
                     (lVar20 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar20 == 0)) {
LAB_0145f56c:
                    uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar17,0);
                  }
                  if ((int)plVar14[3] == 0) goto LAB_0145f568;
                  plVar14[4] = *(long *)puVar8;
                  if (((*(long *)(unaff_x19 + 0x20) == 0) ||
                      (lVar20 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar20 == 0)) ||
                     (FUN_0132138c(lVar20,(int)lVar26 + -4,&stack0x00000028,
                                   *(undefined8 *)StringLiteral_11624), in_stack_00000028 == 0))
                  break;
                  lVar20 = *(long *)(in_stack_00000028 + 0x10);
                  if ((lVar20 != 0) &&
                     (lVar15 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar15 == 0)) goto LAB_0145f56c;
                  uVar19 = *(uint *)(plVar14 + 3);
                  if (uVar19 < 2) {
LAB_0145f568:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar14[5] = lVar20;
                  lVar20 = *(long *)puVar9;
                  if (lVar20 != 0) {
                    lVar20 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                    if (lVar20 == 0) goto LAB_0145f56c;
                    uVar19 = *(uint *)(plVar14 + 3);
                  }
                  if (uVar19 < 3) goto LAB_0145f568;
                  plVar14[6] = *(long *)puVar9;
                  lVar20 = *(long *)(unaff_x19 + 0x78);
                  if (lVar20 == 0) break;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_0145f568;
                  plVar16 = *(long **)(lVar20 + lVar26 * 8);
                  if (plVar16 == (long *)0x0) break;
                  uVar10 = (**(code **)(*plVar16 + 0x1a8))
                                     (plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
                  _uStack0000000000000010 = CONCAT44(uVar10,uStack0000000000000010);
                  lVar20 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
                  if ((lVar20 != 0) &&
                     (lVar15 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar15 == 0)) goto LAB_0145f56c;
                  uVar19 = *(uint *)(plVar14 + 3);
                  if (uVar19 < 4) goto LAB_0145f568;
                  plVar14[7] = lVar20;
                  lVar20 = *(long *)puVar6;
                  if (lVar20 != 0) {
                    lVar20 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40));
                    if (lVar20 == 0) goto LAB_0145f56c;
                    uVar19 = *(uint *)(plVar14 + 3);
                  }
                  if (uVar19 < 5) goto LAB_0145f568;
                  plVar14[8] = *(long *)puVar6;
                  lVar20 = *(long *)(unaff_x19 + 0x78);
                  if (lVar20 == 0) break;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_0145f568;
                  plVar16 = *(long **)(lVar20 + lVar26 * 8);
                  if (plVar16 == (long *)0x0) break;
                  uVar10 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
                  _uStack0000000000000010 = CONCAT44(uVar10,uStack0000000000000010);
                  lVar20 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
                  if ((lVar20 != 0) &&
                     (lVar15 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar15 == 0)) goto LAB_0145f56c;
                  if (*(uint *)(plVar14 + 3) < 6) goto LAB_0145f568;
                  plVar14[9] = lVar20;
                  uVar17 = FUN_01600844(plVar14,0);
LAB_0145f18c:
                  FUN_0160c8e8(plVar24,uVar17,0);
                }
                lVar20 = *(long *)(unaff_x19 + 0x20);
                lVar26 = lVar26 + 1;
              } while (lVar20 != 0);
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    puVar6 = GoogleSheetsToUnity_GSTU_Cell_TypeInfo;
    if (lVar11 != 0) {
      FUN_02040640(lVar11,0);
      *(long *)(unaff_x19 + 0x70) = lVar11;
      FUN_02040900(lVar11,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      lVar11 = *(long *)(unaff_x19 + 0x20);
      if (lVar11 != 0) {
        if ((DAT_03776a98 & 1) == 0) {
          thunk_FUN_00d48444(StringLiteral_11854);
          DAT_03776a98 = 1;
        }
        lVar11 = *(long *)(lVar11 + 0x70);
        if (lVar11 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(lVar11 + 0x18);
        }
        uVar17 = FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,uVar10);
        iVar23 = *(int *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x19 + 0x78) = uVar17;
        puVar6 = PTR_DAT_033f3698;
        if (3 < iVar23) {
          if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
          in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x70),0);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar7);
          }
          uVar17 = FUN_01789268(&stack0x00000018,0);
          uVar17 = FUN_015f5b28(*(undefined8 *)puVar6,uVar17,0);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_02660dac(uVar17,0);
          uVar17 = *(undefined8 *)(unaff_x19 + 0x78);
          iVar23 = *(int *)(unaff_x19 + 0x28);
        }
        plVar24 = *(long **)(unaff_x19 + 0x30);
        if (plVar24 != (long *)0x0) {
          lVar11 = *plVar24;
          uVar25 = *(undefined8 *)(unaff_x19 + 0x20);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
          uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
          uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar21 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_033ed380) {
                puVar18 = (undefined8 *)(lVar11 + (long)(*piVar22 + 3) * 0x10 + 0x138);
                goto LAB_0145f39c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar18 = (undefined8 *)FUN_00d59724(plVar24,*(long *)PTR_DAT_033ed380,3);
LAB_0145f39c:
          uVar17 = (*(code *)*puVar18)(plVar24,uVar1,uVar25,uVar3,uVar2,uVar17,uVar4,iVar23);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar17;
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
      }
    }
  }
LAB_0145f564:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_0145f268:
    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_2590) {
      puVar18 = (undefined8 *)(lVar11 + (long)(*piVar22 + 1) * 0x10 + 0x138);
      goto LAB_0145f3e8;
    }
  }
LAB_0145f280:
  puVar18 = (undefined8 *)FUN_00d59724(plVar24,*(long *)StringLiteral_2590,1);
LAB_0145f3e8:
  (*(code *)*puVar18)(plVar24,uVar17,puVar18[1]);
LAB_0145f3f8:
  plVar24 = *(long **)(unaff_x19 + 0x58);
  if ((plVar24 != (long *)0x0) && (2 < *(int *)(unaff_x19 + 0x28))) {
    uVar17 = (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    FUN_02660dac(uVar17,0);
  }
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
    lVar11 = FUN_020407b0(*(long *)(unaff_x19 + 0x70),0);
    _uStack0000000000000010 = CONCAT44(uStack0000000000000014,(float)lVar11 - (float)lVar12);
    uVar17 = FUN_017841b4(&stack0x00000010,*(undefined8 *)StringLiteral_12992,0);
    uVar17 = FUN_015f5b28(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,uVar17,
                          0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    FUN_02660dac(uVar17,0);
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
      in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x70),0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar17 = FUN_01789268(&stack0x00000018,0);
      uVar17 = FUN_015f5b28(*(undefined8 *)
                             Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                            ,uVar17,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      FUN_02660dac(uVar17,0);
    }
  }
  return 0;
}


