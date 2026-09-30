/*
FUNCTION_NAME: Unity.Mathematics.quaternion$$EulerYZX
ENTRY_POINT: 05b178bc
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


void Unity_Mathematics_quaternion__EulerYZX(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long in_x9;
  int *piVar16;
  long unaff_x19;
  int unaff_w20;
  code *pcVar17;
  undefined8 uVar18;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long lVar19;
  long *plVar20;
  double dVar21;
  double dVar22;
  double unaff_d8;
  double dVar23;
  double dVar24;
  uint uStack000000000000003c;
  undefined8 in_stack_00000048;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long in_stack_000001f8;
  
  piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar16 + -2) == param_3) {
      puVar14 = (undefined8 *)(param_1 + (long)(*piVar16 + 0x17) * 0x10 + 0x138);
      goto LAB_05b178fc;
    }
    in_x9 = in_x9 + -1;
    piVar16 = piVar16 + 4;
  } while (in_x9 != 0);
  puVar14 = (undefined8 *)FUN_02f421d0();
LAB_05b178fc:
  uVar5 = (*(code *)*puVar14)();
  if ((((uVar5 ^ 1) & 1) == 0) && (*(int *)(unaff_x25 + 0x18) != 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar6 = thunk_FUN_02f3b7c8(0);
    if (*(long *)(unaff_x19 + 0x4e0) == 0) {
      if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_05b17d20;
    }
    in_stack_000001e0 = 0;
    in_stack_00000188 = 0;
    in_stack_00000180 = 0;
    in_stack_00000198 = 0;
    in_stack_00000190 = 0;
    in_stack_000001a8 = 0;
    in_stack_000001a0 = 0;
    in_stack_000001b8 = 0;
    in_stack_000001b0 = 0;
    in_stack_000001c8 = 0;
    in_stack_000001c0 = 0;
    in_stack_000001d8 = 0;
    in_stack_000001d0 = 0;
    in_stack_00000178 = 0;
    in_stack_00000170 = 0;
    uStack000000000000003c = unaff_w26;
    FUN_05b52fd4(&stack0x00000170);
    memcpy((void *)(unaff_x19 + 0x418),&stack0x00000170,0x78);
    dVar24 = 0.0;
    lVar19 = 0;
LAB_05b16dd4:
    do {
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 < 1) break;
      lVar7 = FUN_05b52f4c(unaff_x19 + 0x418,0);
      if (unaff_w20 == 4) {
        plVar20 = (long *)0x0;
        while (iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0), 0 < iVar3) {
          FUN_05b5138c(lVar7,0);
          plVar20 = (long *)FUN_05b07514();
          if (((plVar20 != (long *)0x0) && (uVar8 = FUN_05ac43a4(plVar20,0), (uVar8 & 1) != 0)) &&
             ((iVar3 = FUN_05b512b8(lVar7,0), iVar3 == 0x53544154 ||
              (iVar3 = FUN_05b512b8(lVar7,0), iVar3 == 0x444c5441)))) break;
          lVar7 = FUN_05b5335c(unaff_x19 + 0x418,1,0);
        }
      }
      else {
        plVar20 = (long *)0x0;
      }
      iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
      if (iVar3 == 0) break;
      dVar21 = (double)FUN_05b51450(lVar7,0);
      uVar5 = FUN_05b512b8(lVar7,0);
      if ((in_stack_00000048._4_4_ != 0) && (unaff_d8 <= dVar21)) {
        FUN_05b5335c(unaff_x19 + 0x418,1,0);
        goto LAB_05b16dd4;
      }
      if (plVar20 == (long *)0x0) {
        FUN_05b5138c(lVar7,0);
        plVar20 = (long *)FUN_05b07514();
        if (plVar20 == (long *)0x0) {
          FUN_05b5335c(unaff_x19 + 0x418,0,0);
          goto LAB_05b16dd4;
        }
      }
      uVar8 = FUN_05ac420c(plVar20,0);
      if (((((uVar8 & 1) == 0) && (uVar5 != 0x44434647)) && (uVar5 != 0x4452454d)) &&
         ((*(ushort *)((long)plVar20 + 0xdc) & 0x180) != 0)) {
        FUN_05b5335c(unaff_x19 + 0x418,0,0);
        goto LAB_05b16dd4;
      }
      if (*(long *)(unaff_x19 + 0x4e0) == 0) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05b17d20;
      }
      lVar12 = lVar19;
      if (((*(char *)(*(long *)(unaff_x19 + 0x4e0) + 100) == '\0') &&
          (bVar2 = FUN_05ac4b84(plVar20,0), (bVar2 & lVar7 != lVar19) != 0)) &&
         (lVar9 = FUN_05b533fc(unaff_x19 + 0x418,0), lVar9 != 0)) {
        iVar3 = FUN_05b5138c(lVar7,0);
        iVar4 = FUN_05b5138c(lVar9,0);
        if ((iVar3 == iVar4) &&
           ((in_stack_00000048._4_4_ == 0 ||
            (dVar22 = (double)FUN_05b51450(lVar9,0), dVar22 < unaff_d8)))) {
          uVar10 = FUN_05b4e2dc(lVar7,0);
          uVar11 = FUN_05b4e2dc(lVar9,0);
          uVar18 = *(undefined8 *)Method_System_IO_BinaryReader__ctor__;
          lVar12 = thunk_FUN_02f45174(plVar20,uVar18);
          if (lVar12 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar20,uVar18);
            }
            goto LAB_05b17d20;
          }
          lVar12 = *(long *)Method_System_IO_BinaryReader__ctor__;
          plVar13 = (long *)thunk_FUN_02f45174(plVar20,lVar12);
          if (plVar13 == (long *)0x0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar20,lVar12);
            }
            goto LAB_05b17d20;
          }
          lVar15 = *plVar13;
          uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_05b1708c;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar13,lVar12,0);
LAB_05b1708c:
          uVar8 = (*(code *)*puVar14)(plVar13,uVar10,uVar11,puVar14[1]);
          lVar12 = lVar9;
          if ((uVar8 & 1) != 0) {
            FUN_05b5335c(unaff_x19 + 0x418,0,0);
            goto LAB_05b16dd4;
          }
        }
      }
      lVar19 = lVar12;
      uVar8 = FUN_05ac4bb0(plVar20,0);
      if ((uVar8 & 1) != 0) {
        uVar10 = FUN_05b4e2dc(lVar7,0);
        uVar11 = *(undefined8 *)Method_System_IO_BinaryReader_FillBuffer__;
        lVar12 = thunk_FUN_02f45174(plVar20,uVar11);
        if (lVar12 == 0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar20,uVar11);
          }
          goto LAB_05b17d20;
        }
        lVar12 = *(long *)Method_System_IO_BinaryReader_FillBuffer__;
        plVar13 = (long *)thunk_FUN_02f45174(plVar20,lVar12);
        if (plVar13 == (long *)0x0) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar20,lVar12);
          }
          goto LAB_05b17d20;
        }
        lVar9 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar14 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05b17178;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(plVar13,lVar12,0);
LAB_05b17178:
        uVar8 = (*(code *)*puVar14)(plVar13,uVar10,puVar14[1]);
        if ((uVar8 & 1) == 0) {
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
        FUN_03380f78(unaff_x19 + 0x280,lVar7,plVar20,
                     *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x48),
                     *(undefined8 *)
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Angle_0000035A_PostfixBurstDelegate>__
                     ,0,*(undefined8 *)
                         Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate>__
                    );
        uVar8 = FUN_05b51460(lVar7,0);
        if ((uVar8 & 1) != 0) {
          FUN_05b5335c(unaff_x19 + 0x418,0,0);
          goto LAB_05b16dd4;
        }
      }
      iVar3 = *(int *)(unaff_x19 + 0x4c0);
      dVar22 = -0.0;
      if (dVar21 <= unaff_d8) {
        dVar22 = unaff_d8 - dVar21;
      }
      *(int *)(unaff_x19 + 0x4c4) = *(int *)(unaff_x19 + 0x4c4) + 1;
      iVar4 = FUN_05b50518(lVar7,0);
      *(int *)(unaff_x19 + 0x4c0) = iVar4 + iVar3;
      puVar1 = 
      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
      ;
      if ((int)uVar5 < 0x4452454e) {
        if (uVar5 == 0x44434647) {
          FUN_05ac4958(plVar20,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__ +
                      0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05a99e04(plVar20,7,0);
          lVar7 = *(long *)Method_System_Array_GetValue__;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar7 = *(long *)Method_System_Array_GetValue__;
          }
          FUN_033814f0(unaff_x19 + 0xf0,plVar20,7,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58),
                       *(undefined8 *)Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0
                       ,*(undefined8 *)
                         Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                      );
        }
        else if (uVar5 == 0x444c5441) {
LAB_05b1745c:
          in_stack_000000e0 = lVar7;
          uVar8 = FUN_05abe1cc(plVar20,0);
          if (dVar21 < (double)plVar20[0x25]) {
            if ((uVar8 & 1) == 0) {
LAB_05b174b4:
              bVar2 = *(byte *)(*(long *)
                                 Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                               + 0x130);
              if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)
                   Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                 )) goto LAB_05b177e4;
              goto LAB_05b174e8;
            }
            lVar7 = plVar20[2];
            if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            iVar3 = FUN_05b529d8(&stack0x000000e0,0);
            if (iVar3 == (int)lVar7) goto LAB_05b174b4;
LAB_05b174ec:
            lVar7 = in_stack_000000e0;
            lVar9 = *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
            ;
            *(undefined1 *)(unaff_x19 + 0x4f8) = 1;
            lVar12 = thunk_FUN_02f45174(plVar20,lVar9);
            if (lVar12 != 0) {
              lVar9 = *(long *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
              ;
              plVar13 = (long *)thunk_FUN_02f45174(plVar20,lVar9);
              if (plVar13 != (long *)0x0) {
                lVar12 = *plVar13;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar9) {
                      puVar14 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_05b176d4;
                    }
                    uVar8 = uVar8 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar8 != 0);
                }
                puVar14 = (undefined8 *)FUN_02f421d0(plVar13,lVar9,1);
LAB_05b176d4:
                (*(code *)*puVar14)(plVar13,lVar7,puVar14[1]);
                bVar2 = *(char *)(unaff_x19 + 0x4f8) != '\0';
                goto LAB_05b176f0;
              }
            }
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar20,lVar9);
            }
            goto LAB_05b17d20;
          }
LAB_05b174e8:
          if ((uVar8 & 1) != 0) goto LAB_05b174ec;
          lVar7 = plVar20[2];
          if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          iVar3 = FUN_05b529d8(&stack0x000000e0,0);
          if (iVar3 != (int)lVar7) goto LAB_05b177e4;
          FUN_05b52284(in_stack_000000e0,0);
          bVar2 = FUN_05b18070();
LAB_05b176f0:
          FUN_05b52824(&stack0x000000e0,0);
          iVar3 = *(int *)((long)plVar20 + 0xec);
          iVar4 = FUN_05b52824(&stack0x000000e0,0);
          dVar23 = (double)plVar20[0x25];
          *(int *)((long)plVar20 + 0xec) = iVar4 + iVar3;
          dVar21 = (double)FUN_05b5295c(&stack0x000000e0,0);
          if (dVar23 <= dVar21) {
            lVar7 = FUN_05b5295c(&stack0x000000e0,0);
            plVar20[0x25] = lVar7;
          }
          if ((bVar2 & 1) != 0) {
            (**(code **)(*plVar20 + 0x248))(plVar20,*(undefined8 *)(*plVar20 + 0x250));
          }
        }
        else if (uVar5 == 0x4452454d) {
          FUN_05b07690();
          uVar8 = FUN_05ac4398(plVar20,0);
          if ((uVar8 & 1) != 0) {
            in_stack_000000a8 = plVar20[0x1f];
            in_stack_000000a0 = plVar20[0x1e];
            in_stack_000000b8 = plVar20[0x21];
            in_stack_000000b0 = plVar20[0x20];
            in_stack_000000c8 = plVar20[0x23];
            in_stack_000000c0 = plVar20[0x22];
            in_stack_000000d0 = plVar20[0x24];
            uVar8 = FUN_05a9c2fc(&stack0x000000a0,0);
            if ((uVar8 & 1) == 0) {
              FUN_032eac64(unaff_x19 + 0xa0,unaff_x19 + 0x98,plVar20,10,
                           *(undefined8 *)Method_System_Data_BinaryNode_ResultSqlType__);
              lVar7 = *(long *)Method_System_Array_GetValue__;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar7 = *(long *)Method_System_Array_GetValue__;
              }
              FUN_033814f0(unaff_x19 + 0xf0,plVar20,2,
                           *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58),
                           *(undefined8 *)
                            Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0,
                           *(undefined8 *)
                            Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                          );
            }
          }
        }
      }
      else if (uVar5 < 0x494d4554) {
        if (uVar5 == 0x44525354) {
          if (lVar7 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05b17d20;
          }
          FUN_05b12238();
        }
        else if ((uVar5 == 0x494d4553) &&
                (plVar20 = (long *)thunk_FUN_02f45174(plVar20,*(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                                  ), plVar20 != (long *)0x0)) {
          if (lVar7 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05b17d20;
          }
          lVar12 = *(long *)puVar1;
          memmove(&stack0x000000e8,(void *)(lVar7 + 0x14),0x84);
          lVar7 = *plVar20;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_05b177b8;
              }
              uVar8 = uVar8 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar8 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar20,lVar12,1);
LAB_05b177b8:
          pcVar17 = (code *)*puVar14;
          memcpy(&stack0x00000170,&stack0x000000e8,0x84);
          (*pcVar17)(plVar20,&stack0x00000170,puVar14[1]);
        }
      }
      else if (uVar5 == 0x54455854) {
        lVar12 = thunk_FUN_02f45174(plVar20,*(undefined8 *)
                                             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                   );
        if (lVar12 != 0) {
          if (lVar7 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05b17d20;
          }
          uVar5 = *(uint *)(lVar7 + 0x14);
          if ((int)uVar5 < 0x10000) {
            FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,uVar5);
          }
          else {
            FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,uVar5 + 0xf0000 >> 10 & 0x3ff | 0xffffd800);
            FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar12,uVar5 & 0x3ff | 0xffffdc00);
          }
        }
      }
      else if (uVar5 == 0x53544154) goto LAB_05b1745c;
LAB_05b177e4:
      FUN_05b5335c(unaff_x19 + 0x418,0,0);
      uVar8 = FUN_05b181e0();
      dVar24 = dVar24 + dVar22;
    } while ((uVar8 & 1) == 0);
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
    ;
    dVar21 = *(double *)(unaff_x19 + 0x4d0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar19 = thunk_FUN_02f3b7c8(0);
    lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
    *(double *)(unaff_x19 + 0x4d8) = dVar24 + *(double *)(unaff_x19 + 0x4d8);
    *(double *)(unaff_x19 + 0x4d0) = dVar21 + (double)(lVar19 - lVar6) / (double)lVar7;
    FUN_05b18300();
    FUN_05b53060(unaff_x19 + 0x418,unaff_x25,0);
    if ((uStack000000000000003c & 1) != 0) {
      FUN_05b17d28();
    }
    FUN_05b17fd8();
  }
  else {
    if ((unaff_w26 & 1) != 0) {
      FUN_05b17d28();
    }
    FUN_05b17fd8();
    if (((uVar5 ^ 1) & 1) != 0) {
      FUN_05b51f60();
    }
  }
  *(undefined4 *)(unaff_x19 + 0xac) = 0;
  if (*(long *)(unaff_x24 + 0x28) == in_stack_000001f8) {
    return;
  }
LAB_05b17d20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


