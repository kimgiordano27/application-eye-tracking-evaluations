/*
FUNCTION_NAME: FUN_03d49a34
ENTRY_POINT: 03d49a34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03d4a270) */

void FUN_03d49a34(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long local_88;
  
  uVar32 = param_4._4_4_;
  fVar31 = param_4._0_4_;
  uVar11 = param_3._4_4_;
  uVar10 = param_3._0_4_;
  if ((DAT_0483a1c5 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13808);
    thunk_FUN_01efb3a4(PTR_DAT_045718e8);
    thunk_FUN_01efb3a4(PTR_DAT_04574c80);
    thunk_FUN_01efb3a4(PTR_DAT_04574c88);
    thunk_FUN_01efb3a4(PTR_DAT_04574c90);
    thunk_FUN_01efb3a4(PTR_DAT_04574c98);
    thunk_FUN_01efb3a4(PTR_DAT_04574ca0);
    thunk_FUN_01efb3a4(PTR_DAT_04574ca8);
    thunk_FUN_01efb3a4(PTR_DAT_04574cb0);
    thunk_FUN_01efb3a4(PTR_DAT_04574cb8);
    thunk_FUN_01efb3a4(PTR_DAT_04574cc0);
    thunk_FUN_01efb3a4(PTR_DAT_04574cc8);
    thunk_FUN_01efb3a4(StringLiteral_1244);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04574cd0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04574cd8);
    thunk_FUN_01efb3a4(PTR_DAT_04574ce0);
    thunk_FUN_01efb3a4(PTR_DAT_04574ce8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04574cf0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04574cf8);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<uint,_int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04574d00);
    thunk_FUN_01efb3a4(PTR_DAT_04574d08);
    DAT_0483a1c5 = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  if (*(long *)(param_5 + 0x28) != 0) {
    FUN_02b6b46c(*(long *)(param_5 + 0x28),*(undefined8 *)PTR_DAT_04574c90);
    puVar8 = PTR_DAT_04574cd0;
    puVar7 = PTR_DAT_04574ca8;
    puVar6 = PTR_DAT_04574c88;
    puVar5 = PTR_DAT_04574c80;
    puVar4 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<uint,_int>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (*(long *)(param_5 + 0x38) != 0) {
      FUN_030f35d0(&local_c8,*(long *)(param_5 + 0x38),*(undefined8 *)PTR_DAT_04574ce8);
      uStack_a8 = uStack_c0;
      local_b0 = local_c8;
      local_a0 = local_b8;
      while (uVar13 = FUN_02c7ab6c(&local_b0,*(undefined8 *)puVar7), lVar21 = local_a0,
            (uVar13 & 1) != 0) {
        if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar26 = *(undefined8 *)(local_a0 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar26 = FUN_01f08b58(uVar26,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
        uVar13 = FUN_03583338(uVar26,0,0);
        if ((uVar13 & 1) != 0) {
          uVar27 = *(undefined8 *)(lVar21 + 0x18);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_04073094(uVar27,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(param_5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2e4(*(long *)(param_5 + 0x28),uVar26,*(undefined8 *)(lVar21 + 0x18),
                         *(undefined8 *)puVar6);
          }
        }
      }
      FUN_02c7ab68(&local_b0,*(undefined8 *)PTR_DAT_04574ca0);
      puVar4 = PTR_DAT_04574d08;
      puVar2 = PTR_DAT_04574cb8;
      puVar20 = (undefined8 *)PTR_DAT_04574c98;
      lVar21 = *(long *)(param_5 + 0x40);
      if (lVar21 != 0) {
        iVar12 = *(int *)(lVar21 + 0x18);
        *(undefined4 *)(lVar21 + 0x18) = 0;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (0 < iVar12) {
          FUN_0358d1e4(*(undefined8 *)(lVar21 + 0x10),0,iVar12,0);
        }
        if (*(int *)(*(long *)PTR_DAT_045718e8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar21 = FUN_03ceba30(0);
        if (lVar21 != 0) {
          uVar9 = FUN_03cf9d68(lVar21,0);
          *(undefined4 *)(param_5 + 0x20) = uVar9;
          lVar21 = FUN_03ceba30(0);
          if (lVar21 != 0) {
            lVar21 = FUN_03cf95e0(lVar21,0);
            lVar14 = FUN_022c60a8(param_5,*(undefined8 *)StringLiteral_13808);
            if (lVar14 != 0) {
              FUN_0407c270(lVar14,0);
              uVar26 = CONCAT44(uVar32,fVar31);
              if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar29 = (float)FUN_0356bd58(CONCAT44(uVar11,uVar10),uVar26,0);
              fVar33 = (float)uVar26;
              uVar10 = FUN_040469a0(0);
              uVar11 = FUN_04046978(0);
              iVar12 = FUN_0356bd30(uVar10,uVar11,0);
              fVar30 = (float)FUN_04046aa4(0);
              if (lVar21 != 0) {
                fVar29 = fVar29 / (float)iVar12;
                fVar33 = fVar29 * -fVar33;
                plVar15 = (long *)FUN_0265d924(lVar21,*(undefined8 *)PTR_DAT_04574cf8);
                lVar21 = 0;
                do {
                  lVar14 = lVar21;
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar21 = *plVar15;
                  uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar13 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)puVar3) {
                        puVar16 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_03d49ea0;
                      }
                      uVar13 = uVar13 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
LAB_03d49ea0:
                  uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                  if ((uVar13 & 1) == 0) {
                    if (plVar15 == (long *)0x0) goto LAB_03d4a200;
                    lVar21 = *plVar15;
                    uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar13 == 0) goto LAB_03d4a1d8;
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    goto LAB_03d4a1c0;
                  }
                  lVar21 = *plVar15;
                  uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
                  if (uVar13 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)puVar8) {
                        puVar16 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_03d49efc;
                      }
                      uVar13 = uVar13 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar8,0);
LAB_03d49efc:
                  lVar17 = (*(code *)*puVar16)(plVar15,puVar16[1]);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar13 = FUN_03d000b0(lVar17,0);
                  lVar21 = lVar14;
                  if ((uVar13 & 1) == 0) {
                    lVar22 = *(long *)puVar4;
                    uVar26 = *(undefined8 *)(lVar17 + 0x28);
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(lVar22);
                      lVar22 = *(long *)puVar4;
                    }
                    lVar28 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
                    if (lVar28 == 0) {
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c(lVar22);
                        lVar22 = *(long *)puVar4;
                      }
                      uVar27 = **(undefined8 **)(lVar22 + 0xb8);
                      lVar28 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                      FUN_02e6c0a0(lVar28,uVar27,*(undefined8 *)PTR_DAT_04574d00,0);
                      plVar18 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                      *plVar18 = lVar28;
                      thunk_FUN_01f51358(plVar18,lVar28);
                      puVar20 = (undefined8 *)PTR_DAT_04574c98;
                    }
                    iVar12 = FUN_022f3de4(uVar26,lVar28,*puVar20);
                    if (iVar12 != 0) {
                      uVar27 = *(undefined8 *)(param_5 + 0x30);
                      uVar26 = FUN_04070398(param_5,0);
                      if (*(int *)(*(long *)
                                    Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      lVar22 = FUN_023aa97c(uVar27,uVar26,0,*(undefined8 *)PTR_DAT_04574cf0);
                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar22 = FUN_040703d4(lVar22,0);
                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_040767ac(lVar22,*(undefined8 *)(lVar17 + 0x18),0);
                      lVar28 = FUN_023361c8(lVar22,*(undefined8 *)StringLiteral_1244);
                      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_0407c5d4(fVar30 * fVar29 + 5.0,fVar33 + 5.0,lVar28,0);
                      FUN_0407d05c(fVar31 * fVar29 + fVar33 + fVar33,lVar28,1,0);
                      lVar28 = FUN_023361c8(lVar22,*(undefined8 *)PTR_DAT_04574cc8);
                      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_03d4a450(lVar28,lVar17);
                      *(long *)(lVar28 + 0x38) = param_5;
                      thunk_FUN_01f51358((long *)(lVar28 + 0x38),param_5);
                      lVar19 = *(long *)(param_5 + 0x40);
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      lVar23 = *(long *)(lVar19 + 0x10);
                      lVar24 = *(long *)PTR_DAT_04574cd8;
                      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar1 = *(uint *)(lVar19 + 0x18);
                      if (uVar1 < *(uint *)(lVar23 + 0x18)) {
                        *(uint *)(lVar19 + 0x18) = uVar1 + 1;
                        plVar18 = (long *)(lVar23 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar18 = lVar28;
                        thunk_FUN_01f51358(plVar18,lVar28);
                      }
                      else {
                        FUN_030f2bb4(lVar19,lVar28,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar22 = FUN_023361c8(lVar22,*(undefined8 *)PTR_DAT_04574cc0);
                      local_88 = 0;
                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_03d4a498(param_5,lVar17,*(undefined8 *)(lVar22 + 0x20),0,&local_88);
                      uVar13 = FUN_04073094(local_88,0,0);
                      if ((uVar13 & 1) != 0) {
                        if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(long *)(local_88 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar21 = *(long *)(*(long *)(local_88 + 0x58) + 0x38);
                        uVar26 = FUN_03d000a8(lVar17,0);
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c(uVar26,uVar26);
                        }
                        uVar13 = FUN_03412ef4(lVar21,uVar26,0);
                        lVar21 = local_88;
                        if ((uVar13 & 1) == 0) {
                          lVar21 = lVar14;
                        }
                      }
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar25 = piVar25 + 4;
    if (uVar13 == 0) break;
LAB_03d4a1c0:
    if (*(long *)(piVar25 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar20 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_03d4a1f4;
    }
  }
LAB_03d4a1d8:
  puVar20 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03d4a1f4:
  (*(code *)*puVar20)(plVar15,puVar20[1]);
LAB_03d4a200:
  FUN_03d4a950(param_5,*(undefined4 *)(param_5 + 0x48),lVar14);
  return;
}


