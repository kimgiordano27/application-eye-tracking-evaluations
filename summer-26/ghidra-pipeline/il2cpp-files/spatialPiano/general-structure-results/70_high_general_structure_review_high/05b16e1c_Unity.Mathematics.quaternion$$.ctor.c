/*
FUNCTION_NAME: Unity.Mathematics.quaternion$$.ctor
ENTRY_POINT: 05b16e1c
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


void Unity_Mathematics_quaternion___ctor(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  code *pcVar15;
  undefined8 uVar16;
  long unaff_x28;
  double dVar17;
  double dVar18;
  long lVar19;
  double unaff_d8;
  double dVar20;
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
  
code_r0x05b16e1c:
  FUN_05b5138c(param_1,0);
  plVar6 = (long *)FUN_05b07514();
  if ((plVar6 != (long *)0x0) && (uVar7 = FUN_05ac43a4(plVar6,0), (uVar7 & 1) != 0)) {
    iVar3 = FUN_05b512b8(unaff_x28,0);
    param_1 = unaff_x28;
    if (iVar3 == 0x53544154) goto LAB_05b16e9c;
    iVar3 = FUN_05b512b8(unaff_x28,0);
    if (iVar3 == 0x444c5441) goto LAB_05b16e9c;
  }
  param_1 = FUN_05b5335c(unaff_x19 + 0x418,1,0);
LAB_05b16e04:
  iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
  unaff_x28 = param_1;
  if (iVar3 < 1) {
LAB_05b16e9c:
    do {
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 == 0) {
LAB_05b1780c:
        puVar1 = 
        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
        ;
        dVar17 = *(double *)(unaff_x19 + 0x4d0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar12 = thunk_FUN_02f3b7c8(0);
        lVar19 = **(long **)(*(long *)puVar1 + 0xb8);
        *(double *)(unaff_x19 + 0x4d8) = unaff_d10 + *(double *)(unaff_x19 + 0x4d8);
        *(double *)(unaff_x19 + 0x4d0) =
             dVar17 + (double)(lVar12 - in_stack_00000028) / (double)lVar19;
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
      dVar17 = (double)FUN_05b51450(param_1,0);
      uVar4 = FUN_05b512b8(param_1,0);
      if ((in_stack_00000048._4_4_ == 0) || (dVar17 < unaff_d8)) {
        if (plVar6 == (long *)0x0) {
          FUN_05b5138c(param_1,0);
          plVar6 = (long *)FUN_05b07514();
          if (plVar6 == (long *)0x0) {
            FUN_05b5335c(unaff_x19 + 0x418,0,0);
            goto LAB_05b16dd4;
          }
        }
        uVar7 = FUN_05ac420c(plVar6,0);
        if (((((uVar7 & 1) == 0) && (uVar4 != 0x44434647)) && (uVar4 != 0x4452454d)) &&
           ((*(ushort *)((long)plVar6 + 0xdc) & 0x180) != 0)) {
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
          lVar12 = unaff_x21;
          if (((*(char *)(*(long *)(unaff_x19 + 0x4e0) + 100) == '\0') &&
              (bVar2 = FUN_05ac4b84(plVar6,0), (bVar2 & param_1 != unaff_x21) != 0)) &&
             (lVar19 = FUN_05b533fc(unaff_x19 + 0x418,0), lVar19 != 0)) {
            iVar3 = FUN_05b5138c(param_1,0);
            iVar5 = FUN_05b5138c(lVar19,0);
            if ((iVar3 == iVar5) &&
               ((in_stack_00000048._4_4_ == 0 ||
                (dVar18 = (double)FUN_05b51450(lVar19,0), dVar18 < unaff_d8)))) {
              uVar8 = FUN_05b4e2dc(param_1,0);
              uVar9 = FUN_05b4e2dc(lVar19,0);
              uVar16 = *(undefined8 *)Method_System_IO_BinaryReader__ctor__;
              lVar12 = thunk_FUN_02f45174(plVar6,uVar16);
              if (lVar12 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar6,uVar16);
                }
                goto LAB_05b17d20;
              }
              lVar12 = *(long *)Method_System_IO_BinaryReader__ctor__;
              plVar10 = (long *)thunk_FUN_02f45174(plVar6,lVar12);
              if (plVar10 == (long *)0x0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar6,lVar12);
                }
                goto LAB_05b17d20;
              }
              lVar13 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar12) {
                    puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_05b1708c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar12,0);
LAB_05b1708c:
              uVar7 = (*(code *)*puVar11)(plVar10,uVar8,uVar9,puVar11[1]);
              lVar12 = lVar19;
              if ((uVar7 & 1) != 0) {
                FUN_05b5335c(unaff_x19 + 0x418,0,0);
                goto LAB_05b16dd4;
              }
            }
          }
          unaff_x21 = lVar12;
          uVar7 = FUN_05ac4bb0(plVar6,0);
          if ((uVar7 & 1) != 0) {
            uVar8 = FUN_05b4e2dc(param_1,0);
            uVar9 = *(undefined8 *)Method_System_IO_BinaryReader_FillBuffer__;
            lVar12 = thunk_FUN_02f45174(plVar6,uVar9);
            if (lVar12 == 0) {
              if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar6,uVar9);
              }
              goto LAB_05b17d20;
            }
            lVar12 = *(long *)Method_System_IO_BinaryReader_FillBuffer__;
            plVar10 = (long *)thunk_FUN_02f45174(plVar6,lVar12);
            if (plVar10 == (long *)0x0) {
              if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar6,lVar12);
              }
              goto LAB_05b17d20;
            }
            lVar19 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar11 = (undefined8 *)(lVar19 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_05b17178;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar12,0);
LAB_05b17178:
            uVar7 = (*(code *)*puVar11)(plVar10,uVar8,puVar11[1]);
            if ((uVar7 & 1) == 0) {
              FUN_05b5335c(unaff_x19 + 0x418,0,0);
              goto LAB_05b16dd4;
            }
          }
          iVar3 = FUN_0441cf88(unaff_x19 + 0x280,
                               *(undefined8 *)
                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034C_PostfixBurstDelegate>__
                              );
          if (0 < iVar3) {
            lVar12 = *(long *)Method_System_Array_GetValue__;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar12 = *(long *)Method_System_Array_GetValue__;
            }
            FUN_03380f78(unaff_x19 + 0x280,param_1,plVar6,
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x48),
                         *(undefined8 *)
                          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Angle_0000035A_PostfixBurstDelegate>__
                         ,0,*(undefined8 *)
                             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate>__
                        );
            uVar7 = FUN_05b51460(param_1,0);
            if ((uVar7 & 1) != 0) {
              FUN_05b5335c(unaff_x19 + 0x418,0,0);
              goto LAB_05b16dd4;
            }
          }
          iVar3 = *(int *)(unaff_x19 + 0x4c0);
          dVar18 = -0.0;
          if (dVar17 <= unaff_d8) {
            dVar18 = unaff_d8 - dVar17;
          }
          *(int *)(unaff_x19 + 0x4c4) = *(int *)(unaff_x19 + 0x4c4) + 1;
          iVar5 = FUN_05b50518(param_1,0);
          *(int *)(unaff_x19 + 0x4c0) = iVar5 + iVar3;
          puVar1 = 
          Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
          ;
          if ((int)uVar4 < 0x4452454e) {
            if (uVar4 == 0x44434647) {
              FUN_05ac4958(plVar6,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05a99e04(plVar6,7,0);
              lVar12 = *(long *)Method_System_Array_GetValue__;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar12 = *(long *)Method_System_Array_GetValue__;
              }
              FUN_033814f0(unaff_x19 + 0xf0,plVar6,7,
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58),
                           *(undefined8 *)
                            Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0,
                           *(undefined8 *)
                            Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                          );
            }
            else if (uVar4 == 0x444c5441) {
LAB_05b1745c:
              in_stack_000000e0 = param_1;
              uVar7 = FUN_05abe1cc(plVar6,0);
              if (dVar17 < (double)plVar6[0x25]) {
                if ((uVar7 & 1) == 0) {
LAB_05b174b4:
                  bVar2 = *(byte *)(*(long *)
                                     Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                                   + 0x130);
                  if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)
                       Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                     )) goto LAB_05b177e4;
                  goto LAB_05b174e8;
                }
                lVar12 = plVar6[2];
                if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                iVar3 = FUN_05b529d8(&stack0x000000e0,0);
                if (iVar3 == (int)lVar12) goto LAB_05b174b4;
LAB_05b174ec:
                lVar12 = in_stack_000000e0;
                lVar13 = *(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                ;
                *(undefined1 *)(unaff_x19 + 0x4f8) = 1;
                lVar19 = thunk_FUN_02f45174(plVar6,lVar13);
                if (lVar19 != 0) {
                  lVar13 = *(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
                  ;
                  plVar10 = (long *)thunk_FUN_02f45174(plVar6,lVar13);
                  if (plVar10 != (long *)0x0) {
                    lVar19 = *plVar10;
                    uVar7 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar7 != 0) {
                      piVar14 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar13) {
                          puVar11 = (undefined8 *)(lVar19 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                          goto LAB_05b176d4;
                        }
                        uVar7 = uVar7 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar13,1);
LAB_05b176d4:
                    (*(code *)*puVar11)(plVar10,lVar12,puVar11[1]);
                    bVar2 = *(char *)(unaff_x19 + 0x4f8) != '\0';
                    goto LAB_05b176f0;
                  }
                }
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar6,lVar13);
                }
                goto LAB_05b17d20;
              }
LAB_05b174e8:
              if ((uVar7 & 1) != 0) goto LAB_05b174ec;
              lVar12 = plVar6[2];
              if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              iVar3 = FUN_05b529d8(&stack0x000000e0,0);
              if (iVar3 != (int)lVar12) goto LAB_05b177e4;
              FUN_05b52284(in_stack_000000e0,0);
              bVar2 = FUN_05b18070();
LAB_05b176f0:
              FUN_05b52824(&stack0x000000e0,0);
              iVar3 = *(int *)((long)plVar6 + 0xec);
              iVar5 = FUN_05b52824(&stack0x000000e0,0);
              dVar20 = (double)plVar6[0x25];
              *(int *)((long)plVar6 + 0xec) = iVar5 + iVar3;
              dVar17 = (double)FUN_05b5295c(&stack0x000000e0,0);
              if (dVar20 <= dVar17) {
                lVar12 = FUN_05b5295c(&stack0x000000e0,0);
                plVar6[0x25] = lVar12;
              }
              if ((bVar2 & 1) != 0) {
                (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
              }
            }
            else if (uVar4 == 0x4452454d) {
              FUN_05b07690();
              uVar7 = FUN_05ac4398(plVar6,0);
              if ((uVar7 & 1) != 0) {
                in_stack_000000a8 = plVar6[0x1f];
                in_stack_000000a0 = plVar6[0x1e];
                in_stack_000000b8 = plVar6[0x21];
                in_stack_000000b0 = plVar6[0x20];
                in_stack_000000c8 = plVar6[0x23];
                in_stack_000000c0 = plVar6[0x22];
                in_stack_000000d0 = plVar6[0x24];
                uVar7 = FUN_05a9c2fc(&stack0x000000a0,0);
                if ((uVar7 & 1) == 0) {
                  FUN_032eac64(unaff_x19 + 0xa0,unaff_x19 + 0x98,plVar6,10,
                               *(undefined8 *)Method_System_Data_BinaryNode_ResultSqlType__);
                  lVar12 = *(long *)Method_System_Array_GetValue__;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar12 = *(long *)Method_System_Array_GetValue__;
                  }
                  FUN_033814f0(unaff_x19 + 0xf0,plVar6,2,
                               *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58),
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
              if (param_1 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              FUN_05b12238();
            }
            else if ((uVar4 == 0x494d4553) &&
                    (plVar6 = (long *)thunk_FUN_02f45174(plVar6,*(undefined8 *)
                                                                                                                                  
                                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                                  ), plVar6 != (long *)0x0)) {
              if (param_1 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              lVar19 = *(long *)puVar1;
              memmove(&stack0x000000e8,(void *)(param_1 + 0x14),0x84);
              lVar12 = *plVar6;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar19) {
                    puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_05b177b8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_02f421d0(plVar6,lVar19,1);
LAB_05b177b8:
              pcVar15 = (code *)*puVar11;
              memcpy(&stack0x00000170,&stack0x000000e8,0x84);
              (*pcVar15)(plVar6,&stack0x00000170,puVar11[1]);
            }
          }
          else if (uVar4 == 0x54455854) {
            lVar12 = thunk_FUN_02f45174(plVar6,*(undefined8 *)
                                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                       );
            if (lVar12 != 0) {
              if (param_1 == 0) {
                if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05b17d20;
              }
              uVar4 = *(uint *)(param_1 + 0x14);
              if ((int)uVar4 < 0x10000) {
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,uVar4);
              }
              else {
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,
                             uVar4 + 0xf0000 >> 10 & 0x3ff | 0xffffd800);
                FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,uVar4 & 0x3ff | 0xffffdc00);
              }
            }
          }
          else if (uVar4 == 0x53544154) goto LAB_05b1745c;
LAB_05b177e4:
          FUN_05b5335c(unaff_x19 + 0x418,0,0);
          uVar7 = FUN_05b181e0();
          unaff_d10 = unaff_d10 + dVar18;
          if ((uVar7 & 1) != 0) goto LAB_05b1780c;
        }
      }
      else {
        FUN_05b5335c(unaff_x19 + 0x418,1,0);
      }
LAB_05b16dd4:
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 < 1) goto LAB_05b1780c;
      param_1 = FUN_05b52f4c(unaff_x19 + 0x418,0);
      if (unaff_w20 == 4) goto code_r0x05b16e00;
      plVar6 = (long *)0x0;
    } while( true );
  }
  goto code_r0x05b16e1c;
code_r0x05b16e00:
  plVar6 = (long *)0x0;
  goto LAB_05b16e04;
}


