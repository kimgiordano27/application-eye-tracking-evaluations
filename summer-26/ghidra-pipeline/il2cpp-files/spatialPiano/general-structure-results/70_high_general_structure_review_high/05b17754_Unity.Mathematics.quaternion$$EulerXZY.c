/*
FUNCTION_NAME: Unity.Mathematics.quaternion$$EulerXZY
ENTRY_POINT: 05b17754
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_8
*/


void Unity_Mathematics_quaternion__EulerXZY(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  int unaff_w20;
  code *pcVar15;
  undefined8 uVar16;
  long unaff_x26;
  long *unaff_x27;
  double dVar17;
  long lVar18;
  double unaff_d8;
  double dVar19;
  double unaff_d10;
  double unaff_d11;
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
  
code_r0x05b17754:
  (**(code **)(*unaff_x27 + 0x248))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x250));
LAB_05b177e4:
  FUN_05b5335c(unaff_x19 + 0x418,0,0);
  uVar11 = FUN_05b181e0();
  unaff_d10 = unaff_d10 + unaff_d11;
  if ((uVar11 & 1) != 0) {
LAB_05b1780c:
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
    ;
    dVar19 = *(double *)(unaff_x19 + 0x4d0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<ActivateEventArgs>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar12 = thunk_FUN_02f3b7c8(0);
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    *(double *)(unaff_x19 + 0x4d8) = unaff_d10 + *(double *)(unaff_x19 + 0x4d8);
    *(double *)(unaff_x19 + 0x4d0) = dVar19 + (double)(lVar12 - in_stack_00000028) / (double)lVar18;
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
    goto LAB_05b17d20;
  }
LAB_05b16dd4:
  iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
  if (iVar3 < 1) goto LAB_05b1780c;
  lVar12 = FUN_05b52f4c(unaff_x19 + 0x418,0);
  if (unaff_w20 == 4) {
    unaff_x27 = (long *)0x0;
    while (iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0), 0 < iVar3) {
      FUN_05b5138c(lVar12,0);
      unaff_x27 = (long *)FUN_05b07514();
      if (((unaff_x27 != (long *)0x0) && (uVar11 = FUN_05ac43a4(unaff_x27,0), (uVar11 & 1) != 0)) &&
         ((iVar3 = FUN_05b512b8(lVar12,0), iVar3 == 0x53544154 ||
          (iVar3 = FUN_05b512b8(lVar12,0), iVar3 == 0x444c5441)))) break;
      lVar12 = FUN_05b5335c(unaff_x19 + 0x418,1,0);
    }
  }
  else {
    unaff_x27 = (long *)0x0;
  }
  iVar3 = FUN_05b52f34(unaff_x19 + 0x418,0);
  if (iVar3 == 0) goto LAB_05b1780c;
  dVar19 = (double)FUN_05b51450(lVar12,0);
  uVar4 = FUN_05b512b8(lVar12,0);
  if ((in_stack_00000048._4_4_ != 0) && (unaff_d8 <= dVar19)) {
    FUN_05b5335c(unaff_x19 + 0x418,1,0);
    goto LAB_05b16dd4;
  }
  if (unaff_x27 == (long *)0x0) {
    FUN_05b5138c(lVar12,0);
    unaff_x27 = (long *)FUN_05b07514();
    if (unaff_x27 == (long *)0x0) {
      FUN_05b5335c(unaff_x19 + 0x418,0,0);
      goto LAB_05b16dd4;
    }
  }
  uVar11 = FUN_05ac420c(unaff_x27,0);
  if (((((uVar11 & 1) == 0) && (uVar4 != 0x44434647)) && (uVar4 != 0x4452454d)) &&
     ((*(ushort *)((long)unaff_x27 + 0xdc) & 0x180) != 0)) {
    FUN_05b5335c(unaff_x19 + 0x418,0,0);
    goto LAB_05b16dd4;
  }
  if (*(long *)(unaff_x19 + 0x4e0) == 0) {
    if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_05b17d20;
  }
  lVar18 = unaff_x26;
  if (((*(char *)(*(long *)(unaff_x19 + 0x4e0) + 100) == '\0') &&
      (bVar2 = FUN_05ac4b84(unaff_x27,0), (bVar2 & lVar12 != unaff_x26) != 0)) &&
     (lVar6 = FUN_05b533fc(unaff_x19 + 0x418,0), lVar6 != 0)) {
    iVar3 = FUN_05b5138c(lVar12,0);
    iVar5 = FUN_05b5138c(lVar6,0);
    if ((iVar3 == iVar5) &&
       ((in_stack_00000048._4_4_ == 0 || (dVar17 = (double)FUN_05b51450(lVar6,0), dVar17 < unaff_d8)
        ))) {
      uVar7 = FUN_05b4e2dc(lVar12,0);
      uVar8 = FUN_05b4e2dc(lVar6,0);
      uVar16 = *(undefined8 *)Method_System_IO_BinaryReader__ctor__;
      lVar18 = thunk_FUN_02f45174(unaff_x27,uVar16);
      if (lVar18 == 0) {
        if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x27,uVar16);
        }
        goto LAB_05b17d20;
      }
      lVar18 = *(long *)Method_System_IO_BinaryReader__ctor__;
      plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar18);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x27,lVar18);
        }
        goto LAB_05b17d20;
      }
      lVar13 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar18) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05b1708c;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar18,0);
LAB_05b1708c:
      uVar11 = (*(code *)*puVar10)(plVar9,uVar7,uVar8,puVar10[1]);
      lVar18 = lVar6;
      if ((uVar11 & 1) != 0) {
        FUN_05b5335c(unaff_x19 + 0x418,0,0);
        goto LAB_05b16dd4;
      }
    }
  }
  unaff_x26 = lVar18;
  uVar11 = FUN_05ac4bb0(unaff_x27,0);
  if ((uVar11 & 1) != 0) {
    uVar7 = FUN_05b4e2dc(lVar12,0);
    uVar8 = *(undefined8 *)Method_System_IO_BinaryReader_FillBuffer__;
    lVar18 = thunk_FUN_02f45174(unaff_x27,uVar8);
    if (lVar18 == 0) {
      if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(unaff_x27,uVar8);
      }
      goto LAB_05b17d20;
    }
    lVar18 = *(long *)Method_System_IO_BinaryReader_FillBuffer__;
    plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar18);
    if (plVar9 == (long *)0x0) {
      if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(unaff_x27,lVar18);
      }
      goto LAB_05b17d20;
    }
    lVar6 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar18) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05b17178;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar18,0);
LAB_05b17178:
    uVar11 = (*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
    if ((uVar11 & 1) == 0) {
      FUN_05b5335c(unaff_x19 + 0x418,0,0);
      goto LAB_05b16dd4;
    }
  }
  iVar3 = FUN_0441cf88(unaff_x19 + 0x280,
                       *(undefined8 *)
                        Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034C_PostfixBurstDelegate>__
                      );
  if (0 < iVar3) {
    lVar18 = *(long *)Method_System_Array_GetValue__;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar18 = *(long *)Method_System_Array_GetValue__;
    }
    FUN_03380f78(unaff_x19 + 0x280,lVar12,unaff_x27,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x48)
                 ,*(undefined8 *)
                   Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_Angle_0000035A_PostfixBurstDelegate>__
                 ,0,*(undefined8 *)
                     Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate>__
                );
    uVar11 = FUN_05b51460(lVar12,0);
    if ((uVar11 & 1) == 0) goto LAB_05b17240;
    FUN_05b5335c(unaff_x19 + 0x418,0,0);
    goto LAB_05b16dd4;
  }
LAB_05b17240:
  iVar3 = *(int *)(unaff_x19 + 0x4c0);
  unaff_d11 = -0.0;
  if (dVar19 <= unaff_d8) {
    unaff_d11 = unaff_d8 - dVar19;
  }
  *(int *)(unaff_x19 + 0x4c4) = *(int *)(unaff_x19 + 0x4c4) + 1;
  iVar5 = FUN_05b50518(lVar12,0);
  *(int *)(unaff_x19 + 0x4c0) = iVar5 + iVar3;
  puVar1 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
  ;
  if ((int)uVar4 < 0x4452454e) {
    if (uVar4 == 0x44434647) {
      FUN_05ac4958(unaff_x27,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_UxmlFactory<Label,_Label_UxmlTraits>__ctor__ +
                  0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a99e04(unaff_x27,7,0);
      lVar12 = *(long *)Method_System_Array_GetValue__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)Method_System_Array_GetValue__;
      }
      FUN_033814f0(unaff_x19 + 0xf0,unaff_x27,7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58),
                   *(undefined8 *)Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__,0,
                   *(undefined8 *)
                    Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                  );
      goto LAB_05b177e4;
    }
    if (uVar4 != 0x444c5441) {
      if (uVar4 == 0x4452454d) {
        FUN_05b07690();
        uVar11 = FUN_05ac4398(unaff_x27,0);
        if ((uVar11 & 1) != 0) {
          in_stack_000000a8 = unaff_x27[0x1f];
          in_stack_000000a0 = unaff_x27[0x1e];
          in_stack_000000b8 = unaff_x27[0x21];
          in_stack_000000b0 = unaff_x27[0x20];
          in_stack_000000c8 = unaff_x27[0x23];
          in_stack_000000c0 = unaff_x27[0x22];
          in_stack_000000d0 = unaff_x27[0x24];
          uVar11 = FUN_05a9c2fc(&stack0x000000a0,0);
          if ((uVar11 & 1) == 0) {
            FUN_032eac64(unaff_x19 + 0xa0,unaff_x19 + 0x98,unaff_x27,10,
                         *(undefined8 *)Method_System_Data_BinaryNode_ResultSqlType__);
            lVar12 = *(long *)Method_System_Array_GetValue__;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar12 = *(long *)Method_System_Array_GetValue__;
            }
            FUN_033814f0(unaff_x19 + 0xf0,unaff_x27,2,
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x58),
                         *(undefined8 *)Method_Unity_AppUI_UI_AvatarGroup_GetDefaultSurplusElement__
                         ,0,*(undefined8 *)
                             Method_Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_OnAnchorShareRequestReceived__
                        );
          }
        }
      }
      goto LAB_05b177e4;
    }
  }
  else {
    if (uVar4 < 0x494d4554) {
      if (uVar4 == 0x44525354) {
        if (lVar12 == 0) {
          if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05b17d20;
        }
        FUN_05b12238();
        goto LAB_05b177e4;
      }
      if ((uVar4 != 0x494d4553) ||
         (plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,
                                              *(undefined8 *)
                                               Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                             ), plVar9 == (long *)0x0)) goto LAB_05b177e4;
      if (lVar12 != 0) {
        lVar18 = *(long *)puVar1;
        memmove(&stack0x000000e8,(void *)(lVar12 + 0x14),0x84);
        lVar12 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar18) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_05b177b8;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar18,1);
LAB_05b177b8:
        pcVar15 = (code *)*puVar10;
        memcpy(&stack0x00000170,&stack0x000000e8,0x84);
        (*pcVar15)(plVar9,&stack0x00000170,puVar10[1]);
        goto LAB_05b177e4;
      }
      if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_05b17d20;
    }
    if (uVar4 == 0x54455854) {
      lVar18 = thunk_FUN_02f45174(unaff_x27,
                                  *(undefined8 *)
                                   Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate>__
                                 );
      if (lVar18 != 0) {
        if (lVar12 == 0) {
          if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05b17d20;
        }
        uVar4 = *(uint *)(lVar12 + 0x14);
        if ((int)uVar4 < 0x10000) {
          FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar18,uVar4);
        }
        else {
          FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar18,uVar4 + 0xf0000 >> 10 & 0x3ff | 0xffffd800);
          FUN_02b1fc08(0,*(undefined8 *)puVar1,lVar18,uVar4 & 0x3ff | 0xffffdc00);
        }
      }
      goto LAB_05b177e4;
    }
    if (uVar4 != 0x53544154) goto LAB_05b177e4;
  }
  in_stack_000000e0 = lVar12;
  uVar11 = FUN_05abe1cc(unaff_x27,0);
  if ((double)unaff_x27[0x25] <= dVar19) {
LAB_05b174e8:
    if ((uVar11 & 1) != 0) goto LAB_05b174ec;
    lVar12 = unaff_x27[2];
    if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar3 = FUN_05b529d8(&stack0x000000e0,0);
    if (iVar3 != (int)lVar12) goto LAB_05b177e4;
    FUN_05b52284(in_stack_000000e0,0);
    bVar2 = FUN_05b18070();
LAB_05b176f0:
    FUN_05b52824(&stack0x000000e0,0);
    iVar3 = *(int *)((long)unaff_x27 + 0xec);
    iVar5 = FUN_05b52824(&stack0x000000e0,0);
    dVar17 = (double)unaff_x27[0x25];
    *(int *)((long)unaff_x27 + 0xec) = iVar5 + iVar3;
    dVar19 = (double)FUN_05b5295c(&stack0x000000e0,0);
    if (dVar17 <= dVar19) {
      lVar12 = FUN_05b5295c(&stack0x000000e0,0);
      unaff_x27[0x25] = lVar12;
    }
    if ((bVar2 & 1) != 0) goto code_r0x05b17754;
    goto LAB_05b177e4;
  }
  if ((uVar11 & 1) == 0) {
LAB_05b174b4:
    bVar2 = *(byte *)(*(long *)
                       Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
                     + 0x130);
    if ((bVar2 <= *(byte *)(*unaff_x27 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)
         Method_Oculus_Interaction_ValueToValueDecorator<ulong,_LocomotionActionsBroadcaster_LocomotionAction>_TryGetDecoration__
       )) goto LAB_05b174e8;
    goto LAB_05b177e4;
  }
  lVar12 = unaff_x27[2];
  if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar3 = FUN_05b529d8(&stack0x000000e0,0);
  if (iVar3 == (int)lVar12) goto LAB_05b174b4;
LAB_05b174ec:
  lVar12 = in_stack_000000e0;
  lVar6 = *(long *)
           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
  ;
  *(undefined1 *)(unaff_x19 + 0x4f8) = 1;
  lVar18 = thunk_FUN_02f45174(unaff_x27,lVar6);
  if (lVar18 != 0) {
    lVar6 = *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<KeyValuePair<InternedString,_object>>__
    ;
    plVar9 = (long *)thunk_FUN_02f45174(unaff_x27,lVar6);
    if (plVar9 != (long *)0x0) {
      lVar18 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05b176d4;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,lVar6,1);
LAB_05b176d4:
      (*(code *)*puVar10)(plVar9,lVar12,puVar10[1]);
      bVar2 = *(char *)(unaff_x19 + 0x4f8) != '\0';
      goto LAB_05b176f0;
    }
  }
  if (*(long *)(in_stack_00000040 + 0x28) == in_stack_000001f8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(unaff_x27,lVar6);
  }
LAB_05b17d20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


