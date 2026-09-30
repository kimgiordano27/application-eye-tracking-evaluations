/*
FUNCTION_NAME: System.Net.HttpWebRequest$$GetWebException
ENTRY_POINT: 0625cd6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0625d50c) */
/* WARNING: Removing unreachable block (ram,0x0625d950) */

long System_Net_HttpWebRequest__GetWebException(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ushort uVar14;
  int *piVar15;
  ulong unaff_x19;
  long lVar16;
  long unaff_x21;
  long unaff_x22;
  long *plVar17;
  undefined8 uVar18;
  long unaff_x24;
  long lVar19;
  undefined8 uVar20;
  ushort uVar21;
  long lVar22;
  ushort uStack0000000000000010;
  undefined6 uStack0000000000000012;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(OVRPlugin_EyeGazeState___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_Quatf___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07280318);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(OVRPlugin_SpaceComponentType___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_SpaceQueryResult___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072872b8);
    thunk_FUN_032e1da0(PTR_DAT_07287818);
    thunk_FUN_032e1da0(PTR_DAT_072872c0);
    thunk_FUN_032e1da0(PTR_DAT_0727fe58);
    thunk_FUN_032e1da0(PTR_DAT_072838d0);
    thunk_FUN_032e1da0(PTR_DAT_07284e10);
    thunk_FUN_032e1da0(MikeNspired_UnityXRHandPoser_TransformStruct___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(PTR_DAT_07281f68);
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(OVRPlugin_TrackingConfidence___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_Vector2f___TypeInfo);
    thunk_FUN_032e1da0(OVRPlugin_Vector3f___TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x1cc) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  if (unaff_x24 != 0) {
    plVar17 = *(long **)(unaff_x24 + 0x10);
    if ((*(char *)(unaff_x21 + 0x40) == '\0') && ((unaff_x19 & 1) == 0)) {
      if (*(int *)(*(long *)MikeNspired_UnityXRHandPoser_TransformStruct___TypeInfo + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_062513dc(plVar17,0,0);
    }
    lVar16 = *(long *)(unaff_x21 + 0x28);
    uVar7 = FUN_0625f9f4();
    if (lVar16 != 0) {
      lVar16 = FUN_06251274(lVar16,plVar17,uVar7,0);
      if (lVar16 != 0) {
        return lVar16;
      }
      lVar16 = System_Net_HttpWebRequest_AuthorizationState__ToString();
      if (lVar16 != 0) {
        lVar19 = *(long *)(unaff_x21 + 0x28);
        uVar7 = FUN_06272714(lVar16,0);
        if (lVar19 != 0) {
          FUN_0625111c(lVar19,lVar16,plVar17,uVar7,0);
          lVar19 = *(long *)(unaff_x21 + 0x28);
          uVar20 = *(undefined8 *)(lVar16 + 0x48);
          uVar7 = FUN_06272714(lVar16,0);
          if (lVar19 != 0) {
            FUN_06250f7c(lVar19,lVar16,uVar20,uVar7,0);
            lVar19 = thunk_FUN_032a56a0(*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
            FUN_0627d150(lVar19,0);
            *(long *)(lVar16 + 0x10) = lVar19;
            thunk_FUN_0333a630((long *)(lVar16 + 0x10),lVar19);
            lVar8 = FUN_0625fb00();
            if (lVar8 != 0) {
              FUN_041e3694(&stack0x00000010,lVar8,
                           *(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
              puVar4 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
              puVar2 = PTR_DAT_072838d0;
              in_stack_00000030 = CONCAT62(uStack0000000000000012,uStack0000000000000010);
              uVar21 = 0;
              in_stack_00000038 = in_stack_00000018;
              in_stack_00000040 = in_stack_00000020;
              uVar14 = 0;
LAB_0625d034:
LAB_0625d040:
              uVar9 = FUN_052d44b4(&stack0x00000030,*(undefined8 *)puVar4);
              if ((uVar9 & 1) != 0) {
                if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar10 = FUN_06260884();
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                in_stack_00000028 = FUN_0625a8d4();
                if ((uVar14 & 0xff) != 0) {
                  if (((in_stack_00000028 & 0xff) != 0) &&
                     (uVar5 = FUN_046474a8(&stack0x00000028,*(undefined8 *)puVar2),
                     ((uint)(uVar21 != 0) ^ ~uVar5 >> 0x1f) == 1)) {
                    thunk_FUN_032e1da0(PTR_DAT_07279578);
                    uVar7 = thunk_FUN_032a56a0();
                    uVar20 = thunk_FUN_032e1da0(OVRPlugin_Vector4s___TypeInfo);
                    FUN_0592371c(uVar7,uVar20,0);
                    uVar20 = thunk_FUN_032e1da0(
                                               OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo
                                               );
                    /* WARNING: Subroutine does not return */
                    FUN_032d5dbc(uVar7,uVar20);
                  }
                  goto LAB_0625d040;
                }
                uVar14 = 0;
                if ((in_stack_00000028 & 0xff) == 0) goto LAB_0625d040;
                uVar5 = FUN_046474a8(&stack0x00000028,*(undefined8 *)puVar2);
                uStack0000000000000010 = 0;
                FUN_04640ee0(&stack0x00000010,~uVar5 >> 0x1f,*(undefined8 *)PTR_DAT_07287818);
                uVar21 = uStack0000000000000010 >> 8;
                uVar14 = uStack0000000000000010;
                goto LAB_0625d034;
              }
              FUN_052d44b0(&stack0x00000030,
                           *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
              puVar2 = OVRPlugin_Vector2f___TypeInfo;
              if ((uVar21 != 0) && ((uVar14 & 0xff) != 0)) {
                lVar10 = *(long *)OVRPlugin_Vector2f___TypeInfo;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                  lVar10 = *(long *)puVar2;
                }
                lVar22 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                if (lVar22 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar10 = *(long *)puVar2;
                  }
                  uVar7 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar22 = thunk_FUN_032a56a0(*(undefined8 *)
                                               OVRPlugin_FaceTrackingDataSource___TypeInfo);
                  FUN_04eb489c(lVar22,uVar7,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,0
                              );
                  plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                  *plVar11 = lVar22;
                  thunk_FUN_0333a630(plVar11,lVar22);
                }
                System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
                          (lVar8,lVar22,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
              }
              FUN_041e3694(&stack0x00000010,lVar8,
                           *(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
              puVar2 = PTR_DAT_07279510;
              in_stack_00000030 = CONCAT62(uStack0000000000000012,uStack0000000000000010);
              in_stack_00000038 = in_stack_00000018;
              in_stack_00000040 = in_stack_00000020;
              while (uVar9 = FUN_052d44b4(&stack0x00000030,*(undefined8 *)puVar4),
                    lVar8 = in_stack_00000040, (uVar9 & 1) != 0) {
                FUN_06272714(lVar16,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                lVar10 = FUN_06260884(lVar8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                if (*(char *)(lVar10 + 0x58) == '\0') {
                  uVar7 = *(undefined8 *)(lVar8 + 0x30);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar9 = FUN_0593c20c(uVar7,0,0);
                  if ((uVar9 & 1) != 0) {
                    uVar7 = *(undefined8 *)(lVar8 + 0x30);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar9 = FUN_0593c20c(uVar7,plVar17,0);
                    if ((uVar9 & 1) != 0) {
                      lVar8 = FUN_0625f964();
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_032d5ee8();
                      }
                      uVar9 = FUN_0627a884(lVar8,0);
                      if ((uVar9 & 1) != 0) {
                        FUN_06272714(lVar8,0);
                      }
                    }
                  }
                  lVar8 = FUN_062608f0();
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_0627a09c(lVar8,plVar17,0);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_0627b54c(lVar19,lVar8,0);
                }
              }
              FUN_052d44b0(&stack0x00000030,
                           *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
              puVar12 = (undefined8 *)PTR_DAT_07282378;
              uVar7 = *(undefined8 *)PTR_DAT_07282378;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar7 = FUN_059324dc(uVar7,0);
              uVar9 = FUN_0593b434(plVar17,uVar7,0);
              if (((uVar9 & 1) != 0) &&
                 (plVar11 = *(long **)(unaff_x21 + 0x20), plVar11 != (long *)0x0)) {
                plVar11 = (long *)(**(code **)(*plVar11 + 0x388))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                puVar4 = PTR_DAT_0727a180;
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                do {
                  lVar10 = *plVar11;
                  lVar8 = *(long *)puVar4;
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar9 == 0) {
LAB_0625d384:
                    puVar12 = (undefined8 *)FUN_032937ac(plVar11,lVar8,0);
                  }
                  else {
                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    while (*(long *)(piVar15 + -2) != lVar8) {
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                      if (uVar9 == 0) goto LAB_0625d384;
                    }
                    puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                  }
                  uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                  puVar3 = PTR_DAT_07279f60;
                  if ((uVar9 & 1) == 0) {
                    plVar11 = (long *)thunk_FUN_032a55a4(plVar11,*(undefined8 *)PTR_DAT_07279f60);
                    puVar12 = (undefined8 *)PTR_DAT_07282378;
                    if (plVar11 == (long *)0x0) break;
                    lVar8 = *plVar11;
                    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar9 == 0) {
LAB_0625d4cc:
                      puVar12 = (undefined8 *)FUN_032937ac(plVar11,*(long *)puVar3,0);
                    }
                    else {
                      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      while (*(long *)(piVar15 + -2) != *(long *)puVar3) {
                        uVar9 = uVar9 - 1;
                        piVar15 = piVar15 + 4;
                        if (uVar9 == 0) goto LAB_0625d4cc;
                      }
                      puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                    }
                    (*(code *)*puVar12)(plVar11,puVar12[1]);
                    puVar12 = (undefined8 *)PTR_DAT_07282378;
                    break;
                  }
                  lVar10 = *plVar11;
                  lVar8 = *(long *)puVar4;
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar9 == 0) {
LAB_0625d3e0:
                    puVar12 = (undefined8 *)FUN_032937ac(plVar11,lVar8,1);
                  }
                  else {
                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    while (*(long *)(piVar15 + -2) != lVar8) {
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                      if (uVar9 == 0) goto LAB_0625d3e0;
                    }
                    puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  }
                  plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                  if (plVar13 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d618c(plVar13);
                    }
                  }
                  plVar13 = *(long **)(lVar16 + 0x70);
                  uVar7 = FUN_0625c6cc();
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8(uVar7,uVar7);
                  }
                  (**(code **)(*plVar13 + 0x308))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x310));
                } while( true );
              }
              if (plVar17 == (long *)0x0) goto LAB_0625d930;
              uVar7 = (**(code **)(*plVar17 + 0x8b8))(plVar17,*(undefined8 *)(*plVar17 + 0x8c0));
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)puVar2);
              }
              uVar9 = FUN_0593c20c(uVar7,0,0);
              if ((uVar9 & 1) == 0) {
LAB_0625d70c:
                FUN_06261490();
                if (lVar19 == 0) goto LAB_0625d930;
              }
              else {
                (**(code **)(*plVar17 + 0x8b8))(plVar17,*(undefined8 *)(*plVar17 + 0x8c0));
                lVar8 = FUN_0625f964();
                if (lVar8 == 0) goto LAB_0625d930;
                plVar11 = *(long **)(lVar8 + 0x10);
                if (plVar11 == (long *)0x0) {
LAB_0625d5b0:
                  plVar11 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
                  if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_0625d5b0;
                  if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
                    plVar11 = (long *)0x0;
                  }
                }
                uVar7 = (**(code **)(*plVar17 + 0x8b8))(plVar17,*(undefined8 *)(*plVar17 + 0x8c0));
                uVar20 = *puVar12;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(*(long *)puVar2);
                }
                uVar20 = FUN_059324dc(uVar20,0);
                uVar9 = FUN_0593c20c(uVar7,uVar20,0);
                if ((uVar9 & 1) == 0) {
                  FUN_06261374();
                  if (plVar11 == (long *)0x0) goto LAB_0625d930;
                }
                else {
                  *(long *)(lVar16 + 0x60) = lVar8;
                  thunk_FUN_0333a630((long *)(lVar16 + 0x60),lVar8);
                  if (plVar11 == (long *)0x0) goto LAB_0625d930;
                  uVar9 = FUN_0627d0e4(plVar11,0);
                  if ((uVar9 & 1) == 0) {
                    if (lVar19 == 0) goto LAB_0625d930;
                    *(undefined1 *)(lVar19 + 0x79) = 0;
                  }
                  FUN_06261374();
                }
                uVar9 = FUN_0627d0e4(plVar11,0);
                if ((uVar9 & 1) == 0) goto LAB_0625d70c;
                if (lVar19 == 0) goto LAB_0625d930;
                plVar17 = *(long **)(lVar19 + 0x18);
                if (plVar17 != (long *)0x0) {
                  lVar8 = *plVar17;
                  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar9 == 0) {
LAB_0625d6c4:
                    puVar12 = (undefined8 *)FUN_032937ac(plVar17,*(long *)PTR_DAT_07280318,1);
                  }
                  else {
                    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    while (*(long *)(piVar15 + -2) != *(long *)PTR_DAT_07280318) {
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                      if (uVar9 == 0) goto LAB_0625d6c4;
                    }
                    puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  }
                  iVar6 = (*(code *)*puVar12)(plVar17,puVar12[1]);
                  puVar4 = OVRPlugin_Vector4f___TypeInfo;
                  if (iVar6 != 1) {
                    thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
                    FUN_02d9d3e0();
                    lVar19 = thunk_FUN_032e1da0(puVar4);
                    uVar7 = **(undefined8 **)(lVar19 + 0xb8);
                    FUN_02d9d3f0(lVar16);
                    lVar19 = *(long *)(lVar16 + 0x58);
                    FUN_02d9d3f0(lVar19);
                    uVar20 = *(undefined8 *)(lVar19 + 0x30);
                    FUN_02d9d3f0(lVar16);
                    lVar16 = *(long *)(lVar16 + 0x60);
                    FUN_02d9d3f0(lVar16);
                    lVar16 = *(long *)(lVar16 + 0x58);
                    FUN_02d9d3f0(lVar16);
                    uVar7 = FUN_057ab61c(uVar7,uVar20,*(undefined8 *)(lVar16 + 0x30),0);
                    goto LAB_0625d9c8;
                  }
                  goto LAB_0625d70c;
                }
                FUN_06261490();
              }
              if (*(long *)(lVar19 + 0x68) == 0) {
                return lVar16;
              }
              uVar9 = FUN_0627d0e4(lVar19,0);
              if ((uVar9 & 1) != 0) {
                return lVar16;
              }
              lVar19 = *(long *)(lVar19 + 0x68);
              if ((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
                uVar7 = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x10);
                uVar20 = *(undefined8 *)PTR_DAT_072813d0;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar20 = FUN_059324dc(uVar20,0);
                uVar9 = FUN_0593c20c(uVar7,uVar20,0);
                if ((uVar9 & 1) == 0) {
                  return lVar16;
                }
                if (*(long *)(lVar19 + 0x28) != 0) {
                  uVar7 = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x10);
                  uVar20 = *(undefined8 *)PTR_DAT_07281f68;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar20 = FUN_059324dc(uVar20,0);
                  uVar9 = FUN_0593c20c(uVar7,uVar20,0);
                  if ((uVar9 & 1) == 0) {
                    return lVar16;
                  }
                  if (*(long *)(lVar19 + 0x28) != 0) {
                    uVar7 = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x10);
                    uVar20 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar20 = FUN_059324dc(uVar20,0);
                    uVar9 = FUN_0593c20c(uVar7,uVar20,0);
                    if ((uVar9 & 1) == 0) {
                      return lVar16;
                    }
                    if (*(long *)(lVar19 + 0x28) != 0) {
                      uVar7 = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x10);
                      uVar20 = *(undefined8 *)PTR_DAT_07284e10;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar20 = FUN_059324dc(uVar20,0);
                      uVar9 = FUN_0593c20c(uVar7,uVar20,0);
                      puVar2 = OVRPlugin_Vector4f___TypeInfo;
                      if ((uVar9 & 1) == 0) {
                        return lVar16;
                      }
                      thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
                      FUN_02d9d3e0();
                      lVar8 = thunk_FUN_032e1da0(puVar2);
                      uVar20 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
                      FUN_02d9d3f0(lVar16);
                      lVar16 = *(long *)(lVar16 + 0x58);
                      FUN_02d9d3f0(lVar16);
                      uVar7 = *(undefined8 *)(lVar16 + 0x30);
                      FUN_02d9d3f0(lVar19);
                      uVar18 = *(undefined8 *)(lVar19 + 0x10);
                      FUN_02d9d3f0(lVar19);
                      lVar16 = *(long *)(lVar19 + 0x28);
                      FUN_02d9d3f0(lVar16);
                      uVar7 = FUN_057ab660(uVar20,uVar7,uVar18,*(undefined8 *)(lVar16 + 0x30),0);
LAB_0625d9c8:
                      thunk_FUN_032e1da0(PTR_DAT_07279578);
                      uVar20 = thunk_FUN_032a56a0();
                      FUN_0592371c(uVar20,uVar7,0);
                      uVar7 = thunk_FUN_032e1da0(
                                                OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo
                                                );
                    /* WARNING: Subroutine does not return */
                      FUN_032d5dbc(uVar20,uVar7);
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
LAB_0625d930:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


