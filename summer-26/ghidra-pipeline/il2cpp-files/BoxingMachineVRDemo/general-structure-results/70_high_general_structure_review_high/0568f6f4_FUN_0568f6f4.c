/*
FUNCTION_NAME: FUN_0568f6f4
ENTRY_POINT: 0568f6f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x056901c8) */

long * FUN_0568f6f4(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                   long param_6,long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  undefined *puVar9;
  
  puVar9 = System_Threading_Tasks_TaskCompletionSource<DocumentSnapshotProxy>_TypeInfo;
  if ((DAT_06b7f8d6 & 1) == 0) {
    FUN_02d6084c(System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768cc8);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_06768d08);
    FUN_02d6084c(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(System_Collections_Generic_Stack<EntryPreProcessor_AllocSize>_TypeInfo);
    FUN_02d6084c(System_Threading_Tasks_TaskCompletionSource<DocumentSnapshotProxy>_TypeInfo);
    FUN_02d6084c(System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    FUN_02d6084c(PTR_DAT_067646b8);
    DAT_06b7f8d6 = 1;
  }
  plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_056a6d20(plVar5,0);
  FUN_056908e0(param_1,plVar5,param_5,param_6,param_7,param_4);
  puVar9 = PTR_DAT_0675e258;
  if (param_7 == 0) goto LAB_05690190;
  if (*(long *)(param_7 + 0x38) != 0) {
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0501ed54(param_2,0,0);
    if ((uVar6 & 1) != 0) {
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar15 = thunk_FUN_02d9d534();
      uVar7 = thunk_FUN_02dc61f4(System_Tuple<Action<object>,_object>_TypeInfo);
      FUN_05007004(uVar15,uVar7,0);
      uVar7 = thunk_FUN_02dc61f4(
                                System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar15,uVar7);
    }
    if (*(long *)(param_7 + 0x38) == 0) goto LAB_05690190;
    lVar14 = *(long *)(*(long *)(param_7 + 0x38) + 0x10);
    if (lVar14 == 0) {
      lVar14 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8);
    }
    if (param_6 == 0) goto LAB_05690190;
    plVar20 = (long *)(param_6 + 0x60);
    *plVar20 = lVar14;
    thunk_FUN_02dd37b4(plVar20);
    if ((param_2 == (long *)0x0) ||
       (lVar14 = (**(code **)(*param_2 + 0x6f8))
                           (param_2,*plVar20,0x14,*(undefined8 *)(*param_2 + 0x700)), lVar14 == 0))
    goto LAB_05690190;
    if (*(long *)(lVar14 + 0x18) == 0) {
      lVar14 = *plVar20;
      uVar15 = thunk_FUN_02dc61f4(System_Tuple<TaskCompletionSource<int>,_byte[]>_TypeInfo);
      uVar7 = thunk_FUN_02dc61f4(System_Tuple<Guid,_string>_TypeInfo);
      uVar8 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      uVar15 = FUN_04e8e29c(uVar7,lVar14,uVar15,uVar8,0);
      goto LAB_0569027c;
    }
    if ((int)*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar20 = *(long **)(lVar14 + 0x20);
    if (plVar20 == (long *)0x0) goto LAB_05690190;
    lVar16 = *plVar20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_06768d08 + 0x130);
    if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06768d08)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06768cc8 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06768cc8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar20);
      }
      pcVar18 = *(code **)(lVar16 + 0x248);
      uVar15 = *(undefined8 *)(lVar16 + 0x250);
LAB_0568f900:
      plVar20 = (long *)(*pcVar18)(plVar20,uVar15);
      if (*(int *)(*(long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_0567f8cc(plVar20,0);
      *(undefined8 *)(param_6 + 0x70) = uVar15;
      thunk_FUN_02dd37b4();
      if (plVar20 == (long *)0x0) goto LAB_05690190;
      uVar6 = FUN_050207cc(plVar20,0);
      if ((uVar6 & 1) != 0) {
        plVar20 = (long *)(**(code **)(*plVar20 + 0x428))(plVar20,*(undefined8 *)(*plVar20 + 0x430))
        ;
      }
      lVar16 = FUN_0568a368(param_1,plVar20,0,0);
      if (lVar16 == 0) goto LAB_05690190;
      plVar21 = *(long **)(lVar16 + 0x10);
      if (plVar21 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo +
                         0x130);
        if ((bVar1 <= *(byte *)(*plVar21 + 0x130)) &&
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo))
        goto LAB_0568fa24;
      }
      plVar5 = (long *)FUN_028f96cc(lVar14,0);
      FUN_028f4e40();
      uVar15 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar7 = thunk_FUN_02dc61f4(
                                Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo
                                );
      puVar9 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>_TypeInfo;
    }
    else {
      uVar6 = (**(code **)(lVar16 + 0x288))(plVar20,*(undefined8 *)(lVar16 + 0x290));
      if (((uVar6 & 1) != 0) &&
         (uVar6 = (**(code **)(*plVar20 + 0x278))(plVar20,*(undefined8 *)(*plVar20 + 0x280)),
         (uVar6 & 1) != 0)) {
        pcVar18 = *(code **)(*plVar20 + 0x238);
        uVar15 = *(undefined8 *)(*plVar20 + 0x240);
        goto LAB_0568f900;
      }
      FUN_028f4e40(param_6);
      uVar15 = *(undefined8 *)(param_6 + 0x60);
      uVar7 = thunk_FUN_02dc61f4(System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo);
      puVar9 = System_Tuple<SendOrPostCallback,_object>_TypeInfo;
    }
    uVar8 = thunk_FUN_02dc61f4(puVar9);
    uVar15 = FUN_04e8db00(uVar7,uVar15,uVar8,0);
LAB_0569027c:
    thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
    uVar7 = thunk_FUN_02d9d534();
    FUN_05007004(uVar7,uVar15,0);
    uVar15 = thunk_FUN_02dc61f4(
                               System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar7,uVar15);
  }
  plVar20 = (long *)0x0;
  plVar21 = (long *)0x0;
LAB_0568fa24:
  if (*(long *)(param_7 + 0x48) == 0) goto LAB_05690190;
  iVar4 = FUN_04fa7da0(*(long *)(param_7 + 0x48),0);
  if (iVar4 == 0) {
    if (plVar5 == (long *)0x0) goto LAB_05690190;
    iVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    if (iVar4 == 0) {
      if (*(int *)(*(long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = FUN_0567f8cc(param_5,0);
      lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                   System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
      FUN_056a6898(lVar14,param_6,uVar15,0);
      if (lVar14 == 0) goto LAB_05690190;
      *(long *)(lVar14 + 0x10) = param_3;
      thunk_FUN_02dd37b4();
      *(long *)(lVar14 + 0x18) = param_4;
      thunk_FUN_02dd37b4((long *)(lVar14 + 0x18));
      if (*(long *)(lVar14 + 0x48) == 0) goto LAB_05690190;
      uVar6 = FUN_05680aa4(*(long *)(lVar14 + 0x48),0);
      if ((uVar6 & 1) != 0) {
        uVar15 = FUN_0568a368(param_1,param_5,0,param_4);
        *(undefined8 *)(lVar14 + 0x40) = uVar15;
        thunk_FUN_02dd37b4();
      }
      (**(code **)(*plVar5 + 0x308))(plVar5,lVar14,*(undefined8 *)(*plVar5 + 0x310));
    }
  }
  if (*(long *)(param_7 + 0x48) != 0) {
    iVar4 = FUN_04fa7da0(*(long *)(param_7 + 0x48),0);
    if (*(long *)(param_7 + 0x48) != 0) {
      plVar10 = (long *)FUN_04fa8804(*(long *)(param_7 + 0x48),0);
      puVar3 = PTR_DAT_0675f3d8;
      puVar9 = PTR_DAT_0675e258;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar16 = *plVar10;
        lVar14 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar6 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar14) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0568fba8;
            }
            uVar6 = uVar6 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar6 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,lVar14,0);
LAB_0568fba8:
        uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        puVar2 = PTR_DAT_0675f3d0;
        if ((uVar6 & 1) == 0) {
          plVar20 = (long *)thunk_FUN_02d9d438(plVar10,*(undefined8 *)PTR_DAT_0675f3d0);
          if (plVar20 == (long *)0x0) {
            return plVar5;
          }
          lVar14 = *plVar20;
          uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar6 == 0) goto LAB_0568ffdc;
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0568ffc4;
        }
        lVar16 = *plVar10;
        lVar14 = *(long *)puVar3;
        uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar6 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar14) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_0568fc08;
            }
            uVar6 = uVar6 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar6 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,lVar14,1);
LAB_0568fc08:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_Stack<EntryPreProcessor_AllocSize>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_Stack<EntryPreProcessor_AllocSize>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar12);
        }
        lVar14 = plVar12[7];
        if (*(int *)(*(long *)(puVar9 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_0501fa14(lVar14,0,0);
        lVar14 = param_5;
        if ((uVar6 & 1) != 0) {
          lVar14 = plVar12[7];
        }
        lVar16 = plVar12[2];
        if (lVar16 == 0) {
          lVar16 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8);
        }
        if (*(int *)(*(long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_05684d30(lVar14,lVar16,0,0);
                    /* try { // try from 0568fcd0 to 0578fd97 has its CatchHandler @ 0568fcd0
                       catch() { ... } // from try @ 0568fcd0 with catch @ 0568fcd0
                       catch() { ... } // from try @ 0568fe50 with catch @ 0568fcd0
                       catch() { ... } // from try @ 0568fee0 with catch @ 0568fcd0
                       catch() { ... } // from try @ 0568ff1c with catch @ 0568fcd0
                       catch() { ... } // from try @ 0568ff4c with catch @ 0568fcd0 */
        lVar16 = thunk_FUN_02d9d534(*(undefined8 *)
                                     System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
        FUN_056a6898(lVar16,param_6,uVar15,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar17 = plVar12[4];
        *(int *)(lVar16 + 0x20) = (int)lVar17;
        if ((int)lVar17 != 2) {
          lVar17 = param_4;
          if (plVar12[5] != 0) {
            lVar17 = plVar12[5];
          }
          *(long *)(lVar16 + 0x18) = lVar17;
          thunk_FUN_02dd37b4();
        }
        if ((char)plVar12[6] == '\0') {
          *(int *)(lVar16 + 0x54) = (int)plVar12[8];
          if (*(char *)(lVar16 + 0x38) != '\0') goto LAB_0568fd48;
        }
        else {
          if (*(char *)(lVar16 + 0x38) == '\0') {
            *(undefined1 *)(lVar16 + 0x38) = 1;
          }
          *(int *)(lVar16 + 0x54) = (int)plVar12[8];
LAB_0568fd48:
          if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar6 = FUN_05680b50(*(long *)(lVar16 + 0x48),0);
          if ((uVar6 & 1) == 0) {
            uVar15 = thunk_FUN_02dc61f4(PTR_DAT_0675e238);
            lVar14 = FUN_02d60934(uVar15,5);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar15 = thunk_FUN_02dc61f4(
                                       System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo
                                       );
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar14 + 0x20) = uVar15;
            thunk_FUN_02dd37b4();
            if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(*(long *)(lVar16 + 0x48) + 0x38);
            thunk_FUN_02dd37b4();
            uVar15 = thunk_FUN_02dc61f4(System_Tuple<string,_string>_TypeInfo);
            if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar14 + 0x30) = uVar15;
            thunk_FUN_02dd37b4();
            if (*(uint *)(lVar14 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(long *)(lVar14 + 0x38) = param_3;
            thunk_FUN_02dd37b4();
            uVar15 = thunk_FUN_02dc61f4(PTR_DAT_067679f0);
            if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined8 *)(lVar14 + 0x40) = uVar15;
            thunk_FUN_02dd37b4();
            uVar15 = FUN_04e8e3a4(lVar14,0);
            thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
            uVar7 = thunk_FUN_02d9d534();
            FUN_05007004(uVar7,uVar15,0);
            uVar15 = thunk_FUN_02dc61f4(
                                       System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar7,uVar15);
          }
        }
        if (*(long *)(lVar16 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar6 = FUN_05680aa4(*(long *)(lVar16 + 0x48),0);
        if ((uVar6 & 1) != 0) {
          lVar17 = plVar12[2];
          if ((lVar17 == 0) && (lVar17 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8), lVar17 == 0))
          {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(int *)(lVar17 + 0x10) != 0) {
            lVar14 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar15 = FUN_04f8e414(0);
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
            plVar5 = (long *)FUN_02d60934(uVar7,4);
            lVar14 = plVar12[2];
            if (lVar14 == 0) {
              lVar14 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8);
            }
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if ((lVar14 != 0) &&
               (lVar17 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar17 == 0)) {
              uVar15 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar15,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            plVar5[4] = lVar14;
            thunk_FUN_02dd37b4(plVar5 + 4,lVar14);
            if (param_2 != (long *)0x0) {
              lVar14 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
              if ((lVar14 != 0) &&
                 (lVar17 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar17 == 0))
              {
                uVar15 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar15,0);
              }
              if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              plVar5[5] = lVar14;
              thunk_FUN_02dd37b4(plVar5 + 5,lVar14);
              if ((param_3 != 0) &&
                 (lVar14 = thunk_FUN_02d9d438(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0)
                 ) {
                uVar15 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar15,0);
              }
              if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              plVar5[6] = param_3;
              thunk_FUN_02dd37b4();
              if (*(long *)(lVar16 + 0x48) != 0) {
                lVar14 = *(long *)(*(long *)(lVar16 + 0x48) + 0x38);
                if ((lVar14 != 0) &&
                   (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0
                   )) {
                  uVar15 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                  FUN_02d609b4(uVar15,0);
                }
                if (*(uint *)(plVar5 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                plVar5[7] = lVar14;
                thunk_FUN_02dd37b4(plVar5 + 7,lVar14);
                uVar7 = thunk_FUN_02dc61f4(System_Tuple<TextReader,_Memory<char>>_TypeInfo);
                uVar15 = FUN_04e8e8dc(uVar15,uVar7,plVar5,0);
                thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
                uVar7 = thunk_FUN_02d9d534();
                FUN_05007004(uVar7,uVar15,0);
                uVar15 = thunk_FUN_02dc61f4(
                                           System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar7,uVar15);
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
                    /* try { // try from 0568fd98 to 0578fd9f has its CatchHandler @ 0568ff00 */
          uVar15 = FUN_0568a368(param_1,lVar14,0,*(undefined8 *)(lVar16 + 0x18));
          *(undefined8 *)(lVar16 + 0x40) = uVar15;
          thunk_FUN_02dd37b4();
        }
        lVar17 = plVar12[3];
        if (lVar17 == 0) {
          if (**(long **)(*(long *)(puVar9 + 0x90) + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(int *)(**(long **)(*(long *)(puVar9 + 0x90) + 0xb8) + 0x10) == 0) goto LAB_0568fe24;
          lVar17 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8);
LAB_0568fdec:
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
                    /* try { // try from 0568fe04 to 0578fe4f has its CatchHandler @ 0568fef0 */
          uVar15 = FUN_0566e328(lVar17,0);
          *(undefined8 *)(lVar16 + 0x10) = uVar15;
          thunk_FUN_02dd37b4();
        }
        else {
                    /* try { // try from 0568fdc0 to 0578fdc7 has its CatchHandler @ 0568fefc */
          if (*(int *)(lVar17 + 0x10) != 0) goto LAB_0568fdec;
LAB_0568fe24:
          if (iVar4 < 2) {
                    /* try { // try from 0568fe50 to 0578fe6f has its CatchHandler @ 0568fcd0 */
            *(long *)(lVar16 + 0x10) = param_3;
            thunk_FUN_02dd37b4();
          }
          else if (*(long *)(lVar16 + 0x40) == 0) {
                    /* try { // try from 0568fe70 to 0578fe73 has its CatchHandler @ 0568fef8 */
            if (*(int *)(*(long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo + 0xe4) == 0)
            {
                    /* try { // try from 0568fe74 to 0578fe77 has its CatchHandler @ 0568fef4 */
              thunk_FUN_02dbd7b4();
            }
                    /* try { // try from 0568fe80 to 0578fe83 has its CatchHandler @ 0568feec */
            lVar14 = FUN_0567f8cc(lVar14,0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
                    /* try { // try from 0568fe8c to 0578fe8f has its CatchHandler @ 0568fee8 */
            *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
                    /* try { // try from 0568fe94 to 0578fedf has its CatchHandler @ 0568fee4 */
            thunk_FUN_02dd37b4();
          }
          else {
            *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(*(long *)(lVar16 + 0x40) + 0x30);
            thunk_FUN_02dd37b4();
          }
        }
        if (plVar21 != (long *)0x0) {
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar15 = (**(code **)(*plVar20 + 0x2d8))(plVar20,*(undefined8 *)(*plVar20 + 0x2e0));
          lVar14 = FUN_056aaf58(plVar21,uVar15,*(undefined8 *)(lVar16 + 0x10),0);
          if (lVar14 == 0) {
            if (*(long *)(lVar16 + 0x18) == 0) {
LAB_05690100:
              lVar14 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar8 = FUN_04f8e414(0);
              uVar15 = *(undefined8 *)(lVar16 + 0x10);
              uVar7 = *(undefined8 *)(lVar16 + 0x18);
              uVar13 = thunk_FUN_02dc61f4(
                                         Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo
                                         );
              uVar15 = FUN_04e8e880(uVar8,uVar13,plVar20,uVar15,uVar7,0);
              thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
              uVar7 = thunk_FUN_02d9d534();
              FUN_05007004(uVar7,uVar15,0);
              uVar15 = thunk_FUN_02dc61f4(
                                         System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar7,uVar15);
            }
                    /* try { // try from 0568fee0 to 0578ff17 has its CatchHandler @ 0568fcd0 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe94 with catch @ 0568fee4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe8c with catch @ 0568fee8
                        */
            uVar15 = (**(code **)(*plVar20 + 0x2d8))(plVar20,*(undefined8 *)(*plVar20 + 0x2e0));
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe80 with catch @ 0568feec
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe04 with catch @ 0568fef0
                        */
            plVar12 = *(long **)(lVar16 + 0x18);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe74 with catch @ 0568fef4
                        */
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fe70 with catch @ 0568fef8
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fdc0 with catch @ 0568fefc
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0568fd98 with catch @ 0568ff00
                        */
            uVar7 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    /* try { // try from 0568ff18 to 0578ff1b has its CatchHandler @ 0568ff3c */
            uVar7 = FUN_04e8db00(uVar7,*(undefined8 *)PTR_DAT_067646b8,
                                 *(undefined8 *)(lVar16 + 0x10),0);
                    /* try { // try from 0568ff1c to 0578ff43 has its CatchHandler @ 0568fcd0 */
            lVar14 = FUN_056aaf58(plVar21,uVar15,uVar7,0);
            if (lVar14 == 0) goto LAB_05690100;
          }
                    /* catch() { ... } // from try @ 0568ff18 with catch @ 0568ff3c */
          if (*(int *)(*(long *)(puVar9 + 0x98) + 0xe4) == 0) {
                    /* try { // try from 0568ff44 to 0578ff4b has its CatchHandler @ 0568ff60 */
            thunk_FUN_02dbd7b4();
          }
                    /* try { // try from 0568ff4c to 0578ff57 has its CatchHandler @ 0568fcd0 */
                    /* try { // try from 0568ff58 to 0578ff5f has its CatchHandler @ 0568ff60 */
          uVar15 = FUN_0503a224(plVar20,lVar14,0,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0568ff44 with catch @ 0568ff60
                       catch(type#2 @ 00000000) { ... } // from try @ 0568ff58 with catch @ 0568ff60
                        */
          *(undefined8 *)(lVar16 + 0x30) = uVar15;
          thunk_FUN_02dd37b4();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        (**(code **)(*plVar5 + 0x308))(plVar5,lVar16,*(undefined8 *)(*plVar5 + 0x310));
      } while( true );
    }
  }
LAB_05690190:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar19 = piVar19 + 4;
    if (uVar6 == 0) break;
LAB_0568ffc4:
    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0568fff8;
    }
  }
LAB_0568ffdc:
  puVar11 = (undefined8 *)FUN_02d9a5d4(plVar20,*(long *)puVar2,0);
LAB_0568fff8:
  (*(code *)*puVar11)(plVar20,puVar11[1]);
  return plVar5;
}


