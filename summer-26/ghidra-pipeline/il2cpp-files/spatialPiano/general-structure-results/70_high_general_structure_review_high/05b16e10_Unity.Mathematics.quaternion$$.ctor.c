/*
FUNCTION_NAME: Unity.Mathematics.quaternion$$.ctor
ENTRY_POINT: 05b16e10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8
*/


void Unity_Mathematics_quaternion___ctor(int param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  code *pcVar14;
  undefined8 uVar15;
  long *unaff_x27;
  long unaff_x28;
  double dVar16;
  double dVar17;
  long lVar18;
  double unaff_d8;
  double dVar19;
  double unaff_d10;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  long in_stack_000001f8;
  
code_r0x05b16e10:
  if (param_1 < 1) {
LAB_05b16e9c:
    do {
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 == 0) {
LAB_05b1780c:
        puVar1 = 
        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
        ;
        dVar16 = *(double *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar11 = thunk_FUN_02f3b7c8(0);
        lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
        *(double *)(unaff_x19 + 0x4d8) = unaff_d10 + *(double *)(unaff_x19 + 0x4d8);
        *(double *)(unaff_x19 + 0x4d0) =
             dVar16 + (double)(lVar11 - in_stack_00000028) / (double)lVar18;
        FUN_05b18300();
        FUN_05b53060(unaff_x19 + 0x418,in_stack_00000030,0);
        if ((in_stack_00000038 & 0x100000000) != 0) {
          FUN_05b17d28();
        }
        FUN_05b17fd8();
        *(undefined4 *)(unaff_x19 + 0xac) = 0;
        if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
          return;
        }
LAB_05b17d20:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      dVar16 = (double)FUN_05b51450(unaff_x28,0);
      uVar4 = FUN_05b512b8(unaff_x28,0);
      if ((in_stack_00000048._4_4_ == 0) || (dVar16 < unaff_d8)) {
        if (unaff_x27 == (long *)0x0) {
          FUN_05b5138c(unaff_x28,0);
          unaff_x27 = (long *)FUN_05b07514();
          if (unaff_x27 == (long *)0x0) {
            FUN_05b5335c(unaff_x19 + 0x418,0,0);
            goto LAB_05b16dd4;
          }
        }
        uVar6 = FUN_05ac420c(unaff_x27,0);
        if (((((uVar6 & 1) == 0) && (uVar4 != 0x44434647)) && (uVar4 != 0x4452454d)) &&
           ((*(ushort *)((long)unaff_x27 + 0xdc) & 0x180) != 0)) {
          FUN_05b5335c(unaff_x19 + 0x418,0,0);
        }
        else {
          if (*(long *)(unaff_x19 + 0x4e0) == 0) {
            if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05b17d20;
          }
          lVar11 = unaff_x21;
          if (((*(char *)(*(long *)(unaff_x19 + 0x4e0) + 100) == '\0') &&
              (bVar2 = FUN_05ac4b84(unaff_x27,0), (bVar2 & unaff_x28 != unaff_x21) != 0)) &&
             (lVar18 = FUN_05b533fc(unaff_x19 + 0x418,0), lVar18 != 0)) {
            iVar3 = FUN_05b5138c(unaff_x28,0);
            iVar5 = FUN_05b5138c(lVar18,0);
            if ((iVar3 == iVar5) &&
               ((in_stack_00000048._4_4_ == 0 ||
                (dVar17 = (double)FUN_05b51450(lVar18,0), dVar17 < unaff_d8)))) {
              uVar7 = FUN_05b4e2dc(unaff_x28,0);
              uVar8 = FUN_05b4e2dc(lVar18,0);
              uVar15 = *(undefined8 *)Method_System_IO_BinaryReader__ctor__;
              lVar11 = thunk_FUN_02f45174(unaff_x27,uVar15);
              if (lVar11 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(unaff_x27,uVar15);
                }
                goto LAB_05b17d20;
              }
              lVar11 = *(long *)Method_System_IO_BinaryReader__ctor__;
              plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar11);
              if (plVar9 == (long *)0x0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(unaff_x27,lVar11);
                }
                goto LAB_05b17d20;
              }
              lVar12 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar11) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_05b1708c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar11,0);
LAB_05b1708c:
              uVar6 = (*(code *)*puVar10)(plVar9,uVar7,uVar8,puVar10[1]);
              lVar11 = lVar18;
              if ((uVar6 & 1) != 0) {
                FUN_05b5335c(unaff_x19 + 0x418,0,0);
                goto LAB_05b16dd4;
              }
            }
          }
          unaff_x21 = lVar11;
          uVar6 = FUN_05ac4bb0(unaff_x27,0);
          if ((uVar6 & 1) != 0) {
            uVar7 = FUN_05b4e2dc(unaff_x28,0);
            uVar8 = *(undefined8 *)Method_System_IO_BinaryReader_FillBuffer__;
            lVar11 = thunk_FUN_02f45174(unaff_x27,uVar8);
            if (lVar11 == 0) {
              if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(unaff_x27,uVar8);
              }
              goto LAB_05b17d20;
            }
            lVar11 = *(long *)Method_System_IO_BinaryReader_FillBuffer__;
            plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar11);
            if (plVar9 == (long *)0x0) {
              if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(unaff_x27,lVar11);
              }
              goto LAB_05b17d20;
            }
            lVar18 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar11) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_05b17178;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar11,0);
LAB_05b17178:
            uVar6 = (*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
            if ((uVar6 & 1) == 0) {
              FUN_05b5335c(unaff_x19 + 0x418,0,0);
              goto LAB_05b16dd4;
            }
          }
          iVar3 = FUN_0441cf88(unaff_x19 + 0x280,
                               *(undefined8 *)
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034C_PostfixBurstDelegate>__
                              );
          if (0 < iVar3) {
            lVar11 = *(long *)Method_System_Array_GetValue__;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar11 = *(long *)Method_System_Array_GetValue__;
            }
            FUN_03380f78(unaff_x19 + 0x280,unaff_x28,unaff_x27,
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48),
                         *(undefined8 *)
                          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Angle_0000035A_PostfixBurstDelegate>__
                         ,0,*(undefined8 *)
                             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate>__
                        );
            uVar6 = FUN_05b51460(unaff_x28,0);
            if ((uVar6 & 1) != 0) {
              FUN_05b5335c(unaff_x19 + 0x418,0,0);
              goto LAB_05b16dd4;
            }
          }
          iVar3 = *(int *)(unaff_x19 + 0x4c0);
          dVar17 = -0.0;
          if (dVar16 <= unaff_d8) {
            dVar17 = unaff_d8 - dVar16;
          }
          *(int *)(unaff_x19 + 0x4c4) = *(int *)(unaff_x19 + 0x4c4) + 1;
          iVar5 = FUN_05b50518(unaff_x28,0);
          *(int *)(unaff_x19 + 0x4c0) = iVar5 + iVar3;
          puVar1 = 
          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
          ;
          if ((int)uVar4 < 0x4452454e) {
            if (uVar4 == 0x44434647) {
              FUN_05ac4958(unaff_x27,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05a99e04(unaff_x27,7,0);
              lVar11 = *(long *)Method_System_Array_GetValue__;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar11 = *(long *)Method_System_Array_GetValue__;
              }
              FUN_033814f0(unaff_x19 + 0xf0,unaff_x27,7,
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58),
                           *(undefined8 *)
                            Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0,
                           *(undefined8 *)
                            Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                          );
            }
            else if (uVar4 == 0x444c5441) {
LAB_05b1745c:
              in_stack_000000e0 = unaff_x28;
              uVar6 = FUN_05abe1cc(unaff_x27,0);
              if (dVar16 < (double)unaff_x27[0x25]) {
                if ((uVar6 & 1) == 0) {
LAB_05b174b4:
                  bVar2 = *(byte *)(*(long *)
                                     Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                                   + 0x130);
                  if ((*(byte *)(*unaff_x27 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)
                       Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                     )) goto LAB_05b177e4;
                  goto LAB_05b174e8;
                }
                lVar11 = unaff_x27[2];
                if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                iVar3 = FUN_05b529d8(&stack0x000000e0,0);
                if (iVar3 == (int)lVar11) goto LAB_05b174b4;
LAB_05b174ec:
                lVar11 = in_stack_000000e0;
                lVar12 = *(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                ;
                *(undefined1 *)(unaff_x19 + 0x4f8) = 1;
                lVar18 = thunk_FUN_02f45174(unaff_x27,lVar12);
                if (lVar18 != 0) {
                  lVar12 = *(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                  ;
                  plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar12);
                  if (plVar9 != (long *)0x0) {
                    lVar18 = *plVar9;
                    uVar6 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    if (uVar6 != 0) {
                      piVar13 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == lVar12) {
                          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                          goto LAB_05b176d4;
                        }
                        uVar6 = uVar6 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar12,1);
LAB_05b176d4:
                    (*(code *)*puVar10)(plVar9,lVar11,puVar10[1]);
                    bVar2 = *(char *)(unaff_x19 + 0x4f8) != '\0';
                    goto LAB_05b176f0;
                  }
                }
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(unaff_x27,lVar12);
                }
                goto LAB_05b17d20;
              }
LAB_05b174e8:
              if ((uVar6 & 1) != 0) goto LAB_05b174ec;
              lVar11 = unaff_x27[2];
              if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              iVar3 = FUN_05b529d8(&stack0x000000e0,0);
              if (iVar3 != (int)lVar11) goto LAB_05b177e4;
              FUN_05b52284(in_stack_000000e0,0);
              bVar2 = FUN_05b18070();
LAB_05b176f0:
              FUN_05b52824(&stack0x000000e0,0);
              iVar3 = *(int *)((long)unaff_x27 + 0xec);
              iVar5 = FUN_05b52824(&stack0x000000e0,0);
              dVar19 = (double)unaff_x27[0x25];
              *(int *)((long)unaff_x27 + 0xec) = iVar5 + iVar3;
              dVar16 = (double)FUN_05b5295c(&stack0x000000e0,0);
              if (dVar19 <= dVar16) {
                lVar11 = FUN_05b5295c(&stack0x000000e0,0);
                unaff_x27[0x25] = lVar11;
              }
              if ((bVar2 & 1) != 0) {
                (**(code **)(*unaff_x27 + 0x248))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x250));
              }
            }
            else if (uVar4 == 0x4452454d) {
              FUN_05b07690();
              uVar6 = FUN_05ac4398(unaff_x27,0);
              if ((uVar6 & 1) != 0) {
                in_stack_000000a8 = unaff_x27[0x1f];
                in_stack_000000a0 = unaff_x27[0x1e];
                in_stack_000000b8 = unaff_x27[0x21];
                in_stack_000000b0 = unaff_x27[0x20];
                in_stack_000000c8 = unaff_x27[0x23];
                in_stack_000000c0 = unaff_x27[0x22];
                in_stack_000000d0 = unaff_x27[0x24];
                uVar6 = FUN_05a9c2fc(&stack0x000000a0,0);
                if ((uVar6 & 1) == 0) {
                  FUN_032eac64(unaff_x19 + 0xa0,unaff_x19 + 0x98,unaff_x27,10,
                               *(undefined8 *)Method_System_Data_BinaryNode_ResultSqlType__);
                  lVar11 = *(long *)Method_System_Array_GetValue__;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar11 = *(long *)Method_System_Array_GetValue__;
                  }
                  FUN_033814f0(unaff_x19 + 0xf0,unaff_x27,2,
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58),
                               *(undefined8 *)
                                Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0,
                               *(undefined8 *)
                                Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                              );
                }
              }
            }
          }
          else if (uVar4 < 0x494d4554) {
            if (uVar4 == 0x44525354) {
              if (unaff_x28 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              FUN_05b12238();
            }
            else if ((uVar4 == 0x494d4553) &&
                    (plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                                  ), plVar9 != (long *)0x0)) {
              if (unaff_x28 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              lVar18 = *(long *)puVar1;
              memmove(&stack0x000000e8,(void *)(unaff_x28 + 0x14),0x84);
              lVar11 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar18) {
                    puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_05b177b8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar18,1);
LAB_05b177b8:
              pcVar14 = (code *)*puVar10;
              memcpy(&stack0x00000170,&stack0x000000e8,0x84);
              (*pcVar14)(plVar9,&stack0x00000170,puVar10[1]);
            }
          }
          else if (uVar4 == 0x54455854) {
            lVar11 = thunk_FUN_02f45174(unaff_x27,
                                        *(undefined8 *)
                                         Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                       );
            if (lVar11 != 0) {
              if (unaff_x28 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              uVar4 = *(uint *)(unaff_x28 + 0x14);
              if ((int)uVar4 < 0x10000) {
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar11,uVar4);
              }
              else {
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar11,
                             uVar4 + 0xf0000 >> 10 & 0x3ff | 0xffffd800);
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar11,uVar4 & 0x3ff | 0xffffdc00);
              }
            }
          }
          else if (uVar4 == 0x53544154) goto LAB_05b1745c;
LAB_05b177e4:
          FUN_05b5335c(unaff_x19 + 0x418,0,0);
          uVar6 = FUN_05b181e0();
          unaff_d10 = unaff_d10 + dVar17;
          if ((uVar6 & 1) != 0) goto LAB_05b1780c;
        }
      }
      else {
        FUN_05b5335c(unaff_x19 + 0x418,1,0);
      }
LAB_05b16dd4:
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 < 1) goto LAB_05b1780c;
      unaff_x28 = FUN_05b52f4c(unaff_x19 + 0x418,0);
      if (unaff_w20 == 4) goto code_r0x05b16e00;
      unaff_x27 = (long *)0x0;
    } while( true );
  }
  FUN_05b5138c(unaff_x28,0);
  unaff_x27 = (long *)FUN_05b07514();
  if (((unaff_x27 != (long *)0x0) && (uVar6 = FUN_05ac43a4(unaff_x27,0), (uVar6 & 1) != 0)) &&
     ((iVar3 = FUN_05b512b8(unaff_x28,0), iVar3 == 0x53544154 ||
      (iVar3 = FUN_05b512b8(unaff_x28,0), iVar3 == 0x444c5441)))) goto LAB_05b16e9c;
  unaff_x28 = FUN_05b5335c(unaff_x19 + 0x418,1,0);
  goto LAB_05b16e04;
code_r0x05b16e00:
  unaff_x27 = (long *)0x0;
LAB_05b16e04:
  param_1 = FUN_05b52f34(unaff_x19 + 0x418,0);
  goto code_r0x05b16e10;
}


