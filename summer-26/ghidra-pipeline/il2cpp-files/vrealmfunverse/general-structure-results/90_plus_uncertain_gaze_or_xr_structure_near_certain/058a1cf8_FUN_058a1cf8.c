/*
FUNCTION_NAME: FUN_058a1cf8
ENTRY_POINT: 058a1cf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_058a1cf8(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong unaff_x25;
  ulong unaff_x26;
  int iVar24;
  undefined1 auVar25 [16];
  ulong local_180;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_64 [4];
  
  if ((DAT_066d31a2 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    FUN_02b3c81c(PTR_DAT_0631ffe8);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_get_Task__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__);
    FUN_02b3c81c(PTR_DAT_06322b80);
    FUN_02b3c81c(Method_System_Nullable<Guid>_get_HasValue__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    DAT_066d31a2 = 1;
  }
  puVar7 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__;
  lVar19 = *(long *)(param_1 + 0x30);
  local_64[0] = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  if ((lVar19 == 0) || (lVar20 = *(long *)(param_1 + 0x18), lVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_03ab2738(lVar19 + 0x18,*(undefined4 *)(lVar20 + 0x18),
               *(undefined8 *)Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_get_Task__);
  uVar8 = FUN_032b1148(2,*(undefined8 *)puVar7);
  FUN_05814cc8(local_64,uVar8,0);
  if (0 < *(int *)(lVar20 + 0x18)) {
    iVar24 = 0;
    do {
      puVar7 = Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__;
      lVar9 = FUN_037a6268(lVar20,iVar24,
                           *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
      local_70 = lVar9;
      lVar10 = FUN_03ab2128(lVar19 + 0x18,iVar24,
                            *(undefined8 *)
                             Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
      FUN_058a4340(lVar10,&local_70,iVar24);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar21 = *(long *)(lVar19 + 0x28);
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_058a0134(&local_b0,*(undefined8 *)(lVar9 + 0x10),1);
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0463c200(lVar21,&local_80,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
      if (*(char *)(lVar10 + 0x79) != '\0') {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_03f08354(*(long *)(param_1 + 0x48),iVar24,
                     *(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__);
      }
      if (*(int *)(lVar10 + 4) == 2) {
        lVar21 = *(long *)(lVar19 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        puVar6 = PTR_DAT_06322b80;
        *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar21 + 8);
        uVar3 = *(uint *)(lVar9 + 0x2c);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d2bb1 == '\0') {
          FUN_02b3c81c(PTR_DAT_06322b80);
          DAT_066d2bb1 = '\x01';
        }
        uVar3 = uVar3 & 0xffff0000;
        if (uVar3 != 0) {
          lVar21 = *(long *)PTR_DAT_06322b80;
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar21 = *(long *)PTR_DAT_06322b80;
          }
          puVar17 = *(uint **)(lVar21 + 0xb8);
          if (uVar3 != *puVar17) {
            if (*(int *)(lVar21 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              puVar17 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
            }
            if (uVar3 != puVar17[1]) goto LAB_058a2058;
          }
          *(undefined1 *)(lVar10 + 0x7d) = 1;
          local_d0 = *(undefined8 *)(lVar9 + 0x2c);
          uStack_bc = *(undefined8 *)(lVar9 + 0x40);
          uStack_c8 = (undefined4)*(undefined8 *)(lVar9 + 0x34);
          uStack_c4 = (undefined4)*(undefined8 *)(lVar9 + 0x38);
          uStack_c0 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20);
          uVar11 = FUN_058a0b8c(lVar19,&local_d0,*(undefined4 *)(lVar10 + 0x38),
                                *(undefined4 *)(lVar10 + 0x3c));
          if ((uVar11 & 1) != 0) {
            FUN_058aaa80(lVar10,*(undefined8 *)(lVar9 + 0x2c),*(undefined4 *)(lVar9 + 0x34),lVar19);
            *(int *)(lVar10 + 0x3c) = *(int *)(lVar10 + 0x3c) + 1;
          }
        }
LAB_058a2058:
        if (*(uint *)(lVar9 + 0x50) < 0x7fffffff) {
          uVar11 = 0;
          lVar21 = 0x20;
          do {
            lVar23 = *(long *)(lVar9 + 0x48);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066d2bb1 == '\0') {
              FUN_02b3c81c(PTR_DAT_06322b80);
              DAT_066d2bb1 = '\x01';
            }
            uVar4 = *(ushort *)(lVar23 + lVar21 + 2);
            iVar5 = (uint)uVar4 << 0x10;
            if (uVar4 != 0) {
              lVar23 = *(long *)PTR_DAT_06322b80;
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar23 = *(long *)PTR_DAT_06322b80;
              }
              piVar18 = *(int **)(lVar23 + 0xb8);
              if (iVar5 != *piVar18) {
                if (*(int *)(lVar23 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  piVar18 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
                }
                if (iVar5 != piVar18[1]) goto LAB_058a21a0;
              }
              lVar23 = *(long *)(lVar9 + 0x48);
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              puVar1 = (undefined8 *)(lVar23 + lVar21);
              local_f0 = *puVar1;
              uStack_dc = *(undefined8 *)((long)puVar1 + 0x14);
              uStack_e8 = (undefined4)puVar1[1];
              uStack_e4 = (undefined4)*(undefined8 *)((long)puVar1 + 0xc);
              uStack_e0 = (undefined4)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
              uVar12 = FUN_058a0b8c(lVar19,&local_f0,*(undefined4 *)(lVar10 + 0x38),
                                    *(undefined4 *)(lVar10 + 0x3c));
              if ((uVar12 & 1) != 0) {
                lVar23 = *(long *)(lVar9 + 0x48);
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                FUN_058aaa80(lVar10,*(undefined8 *)(lVar23 + lVar21),
                             *(undefined4 *)((undefined8 *)(lVar23 + lVar21) + 1),lVar19);
                *(int *)(lVar10 + 0x3c) = *(int *)(lVar10 + 0x3c) + 1;
              }
            }
LAB_058a21a0:
            uVar11 = uVar11 + 1;
            lVar21 = lVar21 + 0x1c;
          } while ((long)uVar11 < (long)(*(int *)(lVar9 + 0x50) + 1));
        }
        if (*(char *)(lVar9 + 0x54) != '\0') {
          uVar3 = *(uint *)(lVar9 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb1 == '\0') {
            FUN_02b3c81c(PTR_DAT_06322b80);
            DAT_066d2bb1 = '\x01';
          }
          uVar3 = uVar3 & 0xffff0000;
          if (uVar3 != 0) {
            lVar21 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar21 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar21 = *(long *)PTR_DAT_06322b80;
            }
            puVar17 = *(uint **)(lVar21 + 0xb8);
            if (uVar3 != *puVar17) {
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                puVar17 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (uVar3 != puVar17[1]) goto LAB_058a22b4;
            }
            lVar21 = *(long *)(lVar19 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02b76218();
            }
            uVar2 = *(undefined4 *)(lVar21 + 8);
            *(undefined4 *)(lVar10 + 0x60) = uVar2;
            local_110 = *(undefined8 *)(lVar9 + 0x58);
            uStack_fc = *(undefined8 *)(lVar9 + 0x6c);
            uStack_108 = (undefined4)*(undefined8 *)(lVar9 + 0x60);
            uStack_104 = (undefined4)*(undefined8 *)(lVar9 + 100);
            uStack_100 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 100) >> 0x20);
            FUN_058a0b8c(lVar19,&local_110,uVar2,0);
          }
        }
LAB_058a22b4:
        lVar21 = *(long *)(lVar19 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        uVar3 = *(uint *)(lVar9 + 0x90);
        *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(lVar21 + 8);
        if (uVar3 < 0x7fffffff) {
          uVar11 = 0;
          lVar21 = 0x20;
          do {
            lVar23 = *(long *)(lVar9 + 0x88);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar3 = *(uint *)(lVar23 + lVar21);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0
               ) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066d2bb0 == '\0') {
              FUN_02b3c81c(PTR_DAT_06322b80);
              DAT_066d2bb0 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066d2bb1 == '\0') {
              FUN_02b3c81c(PTR_DAT_06322b80);
              DAT_066d2bb1 = '\x01';
            }
            uVar3 = uVar3 & 0xffff0000;
            if (uVar3 != 0) {
              lVar23 = *(long *)PTR_DAT_06322b80;
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar23 = *(long *)PTR_DAT_06322b80;
              }
              puVar17 = *(uint **)(lVar23 + 0xb8);
              if (uVar3 != *puVar17) {
                if (*(int *)(lVar23 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar17 = *(uint **)(*(long *)PTR_DAT_06322b80 + 0xb8);
                }
                if (uVar3 != puVar17[1]) goto LAB_058a2460;
              }
              lVar23 = *(long *)(lVar9 + 0x88);
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              puVar1 = (undefined8 *)(lVar23 + lVar21);
              local_130 = *puVar1;
              uStack_11c = *(undefined8 *)((long)puVar1 + 0x14);
              uStack_128 = (undefined4)puVar1[1];
              uStack_124 = (undefined4)*(undefined8 *)((long)puVar1 + 0xc);
              uStack_120 = (undefined4)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
              uVar12 = FUN_058a0b8c(lVar19,&local_130,*(undefined4 *)(lVar10 + 0x40),
                                    *(undefined4 *)(lVar10 + 0x44));
              if ((uVar12 & 1) != 0) {
                lVar23 = *(long *)(lVar9 + 0x88);
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                FUN_058aaa80(lVar10,*(undefined8 *)(lVar23 + lVar21),
                             *(undefined4 *)((undefined8 *)(lVar23 + lVar21) + 1),lVar19);
                *(int *)(lVar10 + 0x44) = *(int *)(lVar10 + 0x44) + 1;
              }
            }
LAB_058a2460:
            uVar11 = uVar11 + 1;
            lVar21 = lVar21 + 0x1c;
          } while ((long)uVar11 < (long)(*(int *)(lVar9 + 0x90) + 1));
        }
        lVar21 = *(long *)(lVar19 + 0x58);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        lVar23 = 0;
        uVar11 = 0;
        *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar21 + 8);
        while( true ) {
          lVar21 = FUN_037a6268(lVar20,iVar24,*(undefined8 *)puVar7);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((long)(*(int *)(lVar21 + 0xa0) + 1) <= (long)uVar11) break;
          lVar21 = FUN_037a6268(lVar20,iVar24,*(undefined8 *)puVar7);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar21 = *(long *)(lVar21 + 0x98);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb1 == '\0') {
            FUN_02b3c81c(PTR_DAT_06322b80);
            DAT_066d2bb1 = '\x01';
          }
          uVar4 = *(ushort *)(lVar21 + lVar23 + 0x22);
          iVar5 = (uint)uVar4 << 0x10;
          if (uVar4 != 0) {
            lVar13 = *(long *)PTR_DAT_06322b80;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar13 = *(long *)PTR_DAT_06322b80;
            }
            piVar18 = *(int **)(lVar13 + 0xb8);
            if (iVar5 != *piVar18) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                piVar18 = *(int **)(*(long *)PTR_DAT_06322b80 + 0xb8);
              }
              if (iVar5 != piVar18[1]) goto LAB_058a25f0;
            }
            local_180 = local_180 & 0xffffffff00000000 | (ulong)*(uint *)(lVar21 + lVar23 + 0x28);
            uVar12 = FUN_058a0f38(lVar19,*(undefined8 *)(lVar21 + lVar23 + 0x20),local_180,
                                  uVar11 & 0xffffffff,*(undefined1 *)(lVar21 + lVar23 + 0x2c),
                                  *(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x4c));
            if ((uVar12 & 1) != 0) {
              *(int *)(lVar10 + 0x4c) = *(int *)(lVar10 + 0x4c) + 1;
            }
          }
LAB_058a25f0:
          uVar11 = uVar11 + 1;
          lVar23 = lVar23 + 0x10;
        }
      }
      lVar21 = *(long *)(lVar19 + 0x30);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar13 = *(long *)(lVar19 + 0x38);
      lVar23 = *(long *)
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
      ;
      *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(lVar21 + 8);
      if ((*(ushort *)(*(long *)(lVar23 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar11 = 0;
      *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar13 + 8);
      do {
        lVar21 = *(long *)(lVar9 + 0xb0);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar21 = *(long *)(lVar21 + uVar11 * 8 + 0x20);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar5 = *(int *)(lVar21 + 0x18);
        if (0 < iVar5) {
          iVar22 = 0;
          do {
            auVar25 = FUN_0381617c(lVar21,iVar22,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                  );
            uVar8 = auVar25._0_8_;
            unaff_x26 = unaff_x26 & 0xffffffff00000000 | auVar25._8_8_ & 0xffffffff;
            pcVar14 = (char *)FUN_058ab2a4(lVar19,uVar8,unaff_x26,0);
            if ((*pcVar14 != '\0') && (*(char *)(lVar10 + 0x79) == '\0')) {
              lVar23 = *(long *)(param_1 + 0x48);
              *(undefined1 *)(lVar10 + 0x79) = 1;
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03f08354(lVar23,iVar24,*(undefined8 *)Method_System_Nullable<Guid>_get_HasValue__)
              ;
            }
            if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            local_138 = auVar25._8_8_ & 0xffffffff | local_138 & 0xffffffff00000000;
            puVar15 = (undefined1 *)
                      UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                (*(long *)(lVar19 + 0x10),uVar8,local_138,0);
            *(int *)(puVar15 + 4) = iVar24;
            *puVar15 = 1;
            local_88 = auVar25._8_4_;
            local_90 = uVar8;
            FUN_03ab3ac4(lVar19 + 0x38,&local_90,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
            iVar22 = iVar22 + 1;
            *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
          } while (iVar5 != iVar22);
        }
        lVar21 = *(long *)(lVar9 + 0xa8);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar21 = *(long *)(lVar21 + uVar11 * 8 + 0x20);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar5 = *(int *)(lVar21 + 0x18);
        if (0 < iVar5) {
          iVar22 = 0;
          do {
            auVar25 = FUN_0381617c(lVar21,iVar22,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                  );
            uVar8 = auVar25._0_8_;
            if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar12 = auVar25._8_8_ & 0xffffffff;
            local_140 = uVar12 | local_140 & 0xffffffff00000000;
            uVar16 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                               (*(long *)(lVar19 + 0x10),uVar8,local_140,0);
            local_148 = uVar12 | local_148 & 0xffffffff00000000;
            FUN_058ab37c(uVar16,lVar19,uVar8,local_148,iVar24,*(undefined4 *)(lVar10 + 0x2c),0);
            local_98 = auVar25._8_4_;
            local_a0 = uVar8;
            FUN_03ab32a0(lVar19 + 0x30,&local_a0,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__)
            ;
            iVar22 = iVar22 + 1;
            *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
          } while (iVar5 != iVar22);
        }
        lVar21 = *(long *)(lVar9 + 0xb8);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar21 = *(long *)(lVar21 + uVar11 * 8 + 0x20);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar5 = *(int *)(lVar21 + 0x18);
        if (0 < iVar5) {
          iVar22 = 0;
          do {
            auVar25 = FUN_0381617c(lVar21,iVar22,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                  );
            uVar8 = auVar25._0_8_;
            if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar12 = auVar25._8_8_ & 0xffffffff;
            local_150 = uVar12 | local_150 & 0xffffffff00000000;
            uVar16 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                               (*(long *)(lVar19 + 0x10),uVar8,local_150,0);
            unaff_x25 = uVar12 | unaff_x25 & 0xffffffff00000000;
            FUN_058ab37c(uVar16,lVar19,uVar8,unaff_x25,iVar24,*(undefined4 *)(lVar10 + 0x2c),0);
            local_a0 = uVar8;
            local_98 = auVar25._8_4_;
            FUN_03ab32a0(lVar19 + 0x30,&local_a0,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__)
            ;
            lVar23 = *(long *)(lVar19 + 0x10);
            *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            local_158 = uVar12 | local_158 & 0xffffffff00000000;
            puVar15 = (undefined1 *)
                      UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                (lVar23,uVar8,local_158,0);
            *(int *)(puVar15 + 4) = iVar24;
            *puVar15 = 1;
            local_90 = uVar8;
            local_88 = auVar25._8_4_;
            FUN_03ab3ac4(lVar19 + 0x38,&local_90,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetResult__);
            iVar22 = iVar22 + 1;
            *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
          } while (iVar5 != iVar22);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 3);
      iVar24 = iVar24 + 1;
    } while (iVar24 < *(int *)(lVar20 + 0x18));
  }
  FUN_05814cd4(local_64,0);
  return;
}


