/*
FUNCTION_NAME: System.Net.HttpWebRequest$$BeginGetResponse
ENTRY_POINT: 0625cf10
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

long System_Net_HttpWebRequest__BeginGetResponse(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  ushort uVar15;
  int *piVar16;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ushort uVar20;
  long lVar21;
  ushort uStack0000000000000010;
  undefined6 uStack0000000000000012;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if (param_1 != 0) {
    return param_1;
  }
  lVar7 = System_Net_HttpWebRequest_AuthorizationState__ToString();
  if (lVar7 != 0) {
    lVar18 = *(long *)(unaff_x21 + 0x28);
    FUN_06272714(lVar7,0);
    if (lVar18 != 0) {
      FUN_0625111c(lVar18,lVar7);
      lVar18 = *(long *)(unaff_x21 + 0x28);
      uVar19 = *(undefined8 *)(lVar7 + 0x48);
      uVar8 = FUN_06272714(lVar7,0);
      if (lVar18 != 0) {
        FUN_06250f7c(lVar18,lVar7,uVar19,uVar8,0);
        lVar18 = thunk_FUN_032a56a0(*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
        FUN_0627d150(lVar18,0);
        *(long *)(lVar7 + 0x10) = lVar18;
        thunk_FUN_0333a630((long *)(lVar7 + 0x10),lVar18);
        lVar9 = FUN_0625fb00();
        if (lVar9 != 0) {
          FUN_041e3694(&stack0x00000010,lVar9,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo
                      );
          puVar4 = OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo;
          puVar2 = PTR_DAT_072838d0;
          in_stack_00000030 = CONCAT62(uStack0000000000000012,uStack0000000000000010);
          uVar20 = 0;
          in_stack_00000038 = in_stack_00000018;
          in_stack_00000040 = in_stack_00000020;
          uVar15 = 0;
LAB_0625d034:
LAB_0625d040:
          uVar10 = FUN_052d44b4(&stack0x00000030,*(undefined8 *)puVar4);
          if ((uVar10 & 1) != 0) {
            if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar11 = FUN_06260884();
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            in_stack_00000028 = FUN_0625a8d4();
            if ((uVar15 & 0xff) != 0) {
              if (((in_stack_00000028 & 0xff) != 0) &&
                 (uVar5 = FUN_046474a8(&stack0x00000028,*(undefined8 *)puVar2),
                 ((uint)(uVar20 != 0) ^ ~uVar5 >> 0x1f) == 1)) {
                thunk_FUN_032e1da0(PTR_DAT_07279578);
                uVar8 = thunk_FUN_032a56a0();
                uVar19 = thunk_FUN_032e1da0(OVRPlugin_Vector4s___TypeInfo);
                FUN_0592371c(uVar8,uVar19,0);
                uVar19 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo)
                ;
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar8,uVar19);
              }
              goto LAB_0625d040;
            }
            uVar15 = 0;
            if ((in_stack_00000028 & 0xff) == 0) goto LAB_0625d040;
            uVar5 = FUN_046474a8(&stack0x00000028,*(undefined8 *)puVar2);
            uStack0000000000000010 = 0;
            FUN_04640ee0(&stack0x00000010,~uVar5 >> 0x1f,*(undefined8 *)PTR_DAT_07287818);
            uVar20 = uStack0000000000000010 >> 8;
            uVar15 = uStack0000000000000010;
            goto LAB_0625d034;
          }
          FUN_052d44b0(&stack0x00000030,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo
                      );
          puVar2 = OVRPlugin_Vector2f___TypeInfo;
          if ((uVar20 != 0) && ((uVar15 & 0xff) != 0)) {
            lVar11 = *(long *)OVRPlugin_Vector2f___TypeInfo;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar11 = *(long *)puVar2;
            }
            lVar21 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            if (lVar21 == 0) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar11 = *(long *)puVar2;
              }
              uVar8 = **(undefined8 **)(lVar11 + 0xb8);
              lVar21 = thunk_FUN_032a56a0(*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo
                                         );
              FUN_04eb489c(lVar21,uVar8,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,0);
              plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *plVar12 = lVar21;
              thunk_FUN_0333a630(plVar12,lVar21);
            }
            System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
                      (lVar9,lVar21,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
          }
          FUN_041e3694(&stack0x00000010,lVar9,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo
                      );
          puVar2 = PTR_DAT_07279510;
          in_stack_00000030 = CONCAT62(uStack0000000000000012,uStack0000000000000010);
          in_stack_00000038 = in_stack_00000018;
          in_stack_00000040 = in_stack_00000020;
          while (uVar10 = FUN_052d44b4(&stack0x00000030,*(undefined8 *)puVar4),
                lVar9 = in_stack_00000040, (uVar10 & 1) != 0) {
            FUN_06272714(lVar7,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar11 = FUN_06260884(lVar9);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(char *)(lVar11 + 0x58) == '\0') {
              uVar8 = *(undefined8 *)(lVar9 + 0x30);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar10 = FUN_0593c20c(uVar8,0,0);
              if ((uVar10 & 1) != 0) {
                uVar8 = *(undefined8 *)(lVar9 + 0x30);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar10 = FUN_0593c20c(uVar8);
                if ((uVar10 & 1) != 0) {
                  lVar9 = FUN_0625f964();
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  uVar10 = FUN_0627a884(lVar9,0);
                  if ((uVar10 & 1) != 0) {
                    FUN_06272714(lVar9,0);
                  }
                }
              }
              lVar9 = FUN_062608f0();
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_0627a09c(lVar9);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_0627b54c(lVar18,lVar9,0);
            }
          }
          FUN_052d44b0(&stack0x00000030,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo
                      );
          puVar13 = (undefined8 *)PTR_DAT_07282378;
          uVar8 = *(undefined8 *)PTR_DAT_07282378;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_059324dc(uVar8,0);
          uVar10 = FUN_0593b434();
          if (((uVar10 & 1) != 0) &&
             (plVar12 = *(long **)(unaff_x21 + 0x20), plVar12 != (long *)0x0)) {
            plVar12 = (long *)(**(code **)(*plVar12 + 0x388))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x390));
            puVar4 = PTR_DAT_0727a180;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            do {
              lVar11 = *plVar12;
              lVar9 = *(long *)puVar4;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 == 0) {
LAB_0625d384:
                puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar9,0);
              }
              else {
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                while (*(long *)(piVar16 + -2) != lVar9) {
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                  if (uVar10 == 0) goto LAB_0625d384;
                }
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              }
              uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              puVar3 = PTR_DAT_07279f60;
              if ((uVar10 & 1) == 0) {
                plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)PTR_DAT_07279f60);
                puVar13 = (undefined8 *)PTR_DAT_07282378;
                if (plVar12 == (long *)0x0) break;
                lVar9 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 == 0) {
LAB_0625d4cc:
                  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
                }
                else {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  while (*(long *)(piVar16 + -2) != *(long *)puVar3) {
                    uVar10 = uVar10 - 1;
                    piVar16 = piVar16 + 4;
                    if (uVar10 == 0) goto LAB_0625d4cc;
                  }
                  puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                }
                (*(code *)*puVar13)(plVar12,puVar13[1]);
                puVar13 = (undefined8 *)PTR_DAT_07282378;
                break;
              }
              lVar11 = *plVar12;
              lVar9 = *(long *)puVar4;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 == 0) {
LAB_0625d3e0:
                puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar9,1);
              }
              else {
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                while (*(long *)(piVar16 + -2) != lVar9) {
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                  if (uVar10 == 0) goto LAB_0625d3e0;
                }
                puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              }
              plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
              if (plVar14 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d618c(plVar14);
                }
              }
              plVar14 = *(long **)(lVar7 + 0x70);
              uVar8 = FUN_0625c6cc();
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8(uVar8,uVar8);
              }
              (**(code **)(*plVar14 + 0x308))(plVar14,uVar8,*(undefined8 *)(*plVar14 + 0x310));
            } while( true );
          }
          if (unaff_x22 == (long *)0x0) goto LAB_0625d930;
          uVar8 = (**(code **)(*unaff_x22 + 0x8b8))();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar2);
          }
          uVar10 = FUN_0593c20c(uVar8,0,0);
          if ((uVar10 & 1) == 0) {
LAB_0625d70c:
            FUN_06261490();
            if (lVar18 == 0) goto LAB_0625d930;
          }
          else {
            (**(code **)(*unaff_x22 + 0x8b8))();
            lVar9 = FUN_0625f964();
            if (lVar9 == 0) goto LAB_0625d930;
            plVar12 = *(long **)(lVar9 + 0x10);
            if (plVar12 == (long *)0x0) {
LAB_0625d5b0:
              plVar12 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)OVRPlugin_EyeGazeState___TypeInfo + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_0625d5b0;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)OVRPlugin_EyeGazeState___TypeInfo) {
                plVar12 = (long *)0x0;
              }
            }
            uVar8 = (**(code **)(*unaff_x22 + 0x8b8))();
            uVar19 = *puVar13;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)puVar2);
            }
            uVar19 = FUN_059324dc(uVar19,0);
            uVar10 = FUN_0593c20c(uVar8,uVar19,0);
            if ((uVar10 & 1) == 0) {
              FUN_06261374();
              if (plVar12 == (long *)0x0) goto LAB_0625d930;
            }
            else {
              *(long *)(lVar7 + 0x60) = lVar9;
              thunk_FUN_0333a630((long *)(lVar7 + 0x60),lVar9);
              if (plVar12 == (long *)0x0) goto LAB_0625d930;
              uVar10 = FUN_0627d0e4(plVar12,0);
              if ((uVar10 & 1) == 0) {
                if (lVar18 == 0) goto LAB_0625d930;
                *(undefined1 *)(lVar18 + 0x79) = 0;
              }
              FUN_06261374();
            }
            uVar10 = FUN_0627d0e4(plVar12,0);
            if ((uVar10 & 1) == 0) goto LAB_0625d70c;
            if (lVar18 == 0) goto LAB_0625d930;
            plVar12 = *(long **)(lVar18 + 0x18);
            if (plVar12 != (long *)0x0) {
              lVar9 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) {
LAB_0625d6c4:
                puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_07280318,1);
              }
              else {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                while (*(long *)(piVar16 + -2) != *(long *)PTR_DAT_07280318) {
                  uVar10 = uVar10 - 1;
                  piVar16 = piVar16 + 4;
                  if (uVar10 == 0) goto LAB_0625d6c4;
                }
                puVar13 = (undefined8 *)(lVar9 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              }
              iVar6 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              puVar4 = OVRPlugin_Vector4f___TypeInfo;
              if (iVar6 != 1) {
                thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
                FUN_02d9d3e0();
                lVar18 = thunk_FUN_032e1da0(puVar4);
                uVar8 = **(undefined8 **)(lVar18 + 0xb8);
                FUN_02d9d3f0(lVar7);
                lVar18 = *(long *)(lVar7 + 0x58);
                FUN_02d9d3f0(lVar18);
                uVar19 = *(undefined8 *)(lVar18 + 0x30);
                FUN_02d9d3f0(lVar7);
                lVar7 = *(long *)(lVar7 + 0x60);
                FUN_02d9d3f0(lVar7);
                lVar7 = *(long *)(lVar7 + 0x58);
                FUN_02d9d3f0(lVar7);
                uVar8 = FUN_057ab61c(uVar8,uVar19,*(undefined8 *)(lVar7 + 0x30),0);
                goto LAB_0625d9c8;
              }
              goto LAB_0625d70c;
            }
            FUN_06261490();
          }
          if (*(long *)(lVar18 + 0x68) == 0) {
            return lVar7;
          }
          uVar10 = FUN_0627d0e4(lVar18,0);
          if ((uVar10 & 1) != 0) {
            return lVar7;
          }
          lVar18 = *(long *)(lVar18 + 0x68);
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x28) != 0)) {
            uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
            uVar19 = *(undefined8 *)PTR_DAT_072813d0;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar19 = FUN_059324dc(uVar19,0);
            uVar10 = FUN_0593c20c(uVar8,uVar19,0);
            if ((uVar10 & 1) == 0) {
              return lVar7;
            }
            if (*(long *)(lVar18 + 0x28) != 0) {
              uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
              uVar19 = *(undefined8 *)PTR_DAT_07281f68;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar19 = FUN_059324dc(uVar19,0);
              uVar10 = FUN_0593c20c(uVar8,uVar19,0);
              if ((uVar10 & 1) == 0) {
                return lVar7;
              }
              if (*(long *)(lVar18 + 0x28) != 0) {
                uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
                uVar19 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar19 = FUN_059324dc(uVar19,0);
                uVar10 = FUN_0593c20c(uVar8,uVar19,0);
                if ((uVar10 & 1) == 0) {
                  return lVar7;
                }
                if (*(long *)(lVar18 + 0x28) != 0) {
                  uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
                  uVar19 = *(undefined8 *)PTR_DAT_07284e10;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  uVar19 = FUN_059324dc(uVar19,0);
                  uVar10 = FUN_0593c20c(uVar8,uVar19,0);
                  puVar2 = OVRPlugin_Vector4f___TypeInfo;
                  if ((uVar10 & 1) == 0) {
                    return lVar7;
                  }
                  thunk_FUN_032e1da0(OVRPlugin_Vector4f___TypeInfo);
                  FUN_02d9d3e0();
                  lVar9 = thunk_FUN_032e1da0(puVar2);
                  uVar19 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
                  FUN_02d9d3f0(lVar7);
                  lVar7 = *(long *)(lVar7 + 0x58);
                  FUN_02d9d3f0(lVar7);
                  uVar8 = *(undefined8 *)(lVar7 + 0x30);
                  FUN_02d9d3f0(lVar18);
                  uVar17 = *(undefined8 *)(lVar18 + 0x10);
                  FUN_02d9d3f0(lVar18);
                  lVar7 = *(long *)(lVar18 + 0x28);
                  FUN_02d9d3f0(lVar7);
                  uVar8 = FUN_057ab660(uVar19,uVar8,uVar17,*(undefined8 *)(lVar7 + 0x30),0);
LAB_0625d9c8:
                  thunk_FUN_032e1da0(PTR_DAT_07279578);
                  uVar19 = thunk_FUN_032a56a0();
                  FUN_0592371c(uVar19,uVar8,0);
                  uVar8 = thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_032d5dbc(uVar19,uVar8);
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


