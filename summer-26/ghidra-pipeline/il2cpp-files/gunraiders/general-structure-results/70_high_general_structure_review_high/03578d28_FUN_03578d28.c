/*
FUNCTION_NAME: FUN_03578d28
ENTRY_POINT: 03578d28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void FUN_03578d28(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  long *plVar29;
  int iVar30;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  int local_80;
  uint local_7c;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  uint local_64;
  
  if ((DAT_045379b3 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<ApplicationVersion>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<AssetDetails>__ctor__);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_04232bd8);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(Method_System_ReadOnlySpan<Vector3>__ctor__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_Oculus_Platform_Request<AssetDetailsList>__ctor__);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<int>_Clear__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<int>_Dequeue__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<int>_Enqueue__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<int>_ToArray__);
    FUN_01c5d288(Method_Oculus_Platform_Request<AssetFileDeleteResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<AssetFileDownloadCancelResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<AssetFileDownloadResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<AvatarEditorResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<BlockedUserList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<bool>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Matrix4x4[]>_get_Item__);
    FUN_01c5d288(Method_Oculus_Platform_Request<Challenge>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<CloudStorageConflictMetadata>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<CloudStorageData>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<CloudStorageMetadata>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<CloudStorageMetadataList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<CloudStorageUpdateResponse>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<DestinationList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<LaunchBlockFlowResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<LaunchFriendRequestFlowResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<LaunchUnblockFlowResult>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>__ctor__);
    DAT_045379b3 = 1;
  }
  puVar8 = PTR_DAT_04237a90;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_7c = 0;
  local_a0._8_8_ = 0;
  local_90._0_8_ = 0;
  local_a0._0_8_ = 0;
  if (param_1 == 0) goto LAB_0357a3f0;
  uVar10 = FUN_03521200(param_1,0);
  local_64 = uVar10;
  if ((int)uVar10 < 1) {
LAB_03578fe0:
    plVar12 = (long *)0x0;
  }
  else {
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar8;
    }
    lVar21 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar21 == 0) goto LAB_0357a3f0;
    if (*(long *)(lVar21 + 0x110) == 0) goto LAB_03578fe0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar21 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
      if (lVar21 == 0) goto LAB_0357a3f0;
    }
    plVar12 = *(long **)(lVar21 + 0x110);
    if (plVar12 == (long *)0x0) goto LAB_0357a3f0;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))
                                (plVar12,uVar10,0,*(undefined8 *)(*plVar12 + 0x1e0));
  }
  cVar2 = *(char *)(param_1 + 0x10);
  switch(cVar2) {
  case -0x38:
    plVar19 = (long *)FUN_03521284(param_1,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar8);
    }
    if (plVar19 == (long *)0x0) {
LAB_03579408:
      plVar19 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
      if (*(byte *)(*plVar19 + 0x130) < bVar3) goto LAB_03579408;
      if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Data_NameNode_var) {
        plVar19 = (long *)0x0;
      }
    }
    FUN_03573e40(plVar19,plVar12);
    break;
  case -0x37:
  case -0x32:
    lVar11 = FUN_035211b8(param_1,0xf5,0);
    puVar6 = PTR_DAT_042305b8;
    if (lVar11 != 0) {
      uVar27 = *(undefined8 *)PTR_DAT_042305b8;
      lVar21 = thunk_FUN_01c495e4(lVar11,uVar27);
      if (lVar21 == 0) {
LAB_0357a434:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar11,uVar27);
      }
      if (*(int *)(lVar21 + 0x18) != 0) {
        if (*(long **)(lVar21 + 0x20) == (long *)0x0) goto LAB_0357a3f0;
        if (*(long *)(**(long **)(lVar21 + 0x20) + 0x40) !=
            *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
LAB_0357a408:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
        puVar13 = (undefined4 *)thunk_FUN_01c49834();
        uVar23 = *(ulong *)(lVar21 + 0x18);
        if (1 < (uint)uVar23) {
          uVar26 = *puVar13;
          if (*(long **)(lVar21 + 0x28) == (long *)0x0) {
            uVar28 = 0;
          }
          else {
            if (*(long *)(**(long **)(lVar21 + 0x28) + 0x40) !=
                *(long *)(*(long *)PTR_DAT_042303a0 + 0x40)) goto LAB_0357a408;
            puVar14 = (undefined1 *)thunk_FUN_01c49834();
            uVar23 = *(ulong *)(lVar21 + 0x18);
            uVar28 = *puVar14;
          }
          uVar22 = uVar23 & 0xffffffff;
          if ((int)uVar23 < 3) {
            return;
          }
          lVar11 = 6;
          while (lVar11 - 4U < uVar22) {
            lVar16 = thunk_FUN_01c495e4(*(undefined8 *)(lVar21 + lVar11 * 8),*(undefined8 *)puVar6);
            if (lVar16 == 0) {
              return;
            }
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03577fd8(lVar16,plVar12,uVar26,uVar28);
            uVar22 = (ulong)*(uint *)(lVar21 + 0x18);
            lVar16 = lVar11 + -3;
            lVar11 = lVar11 + 1;
            if ((int)*(uint *)(lVar21 + 0x18) <= lVar16) {
              return;
            }
          }
        }
      }
      goto LAB_03579a60;
    }
    goto LAB_0357a3f0;
  case -0x36:
    plVar19 = (long *)FUN_03521284(param_1,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar8);
    }
    if (plVar19 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Data_NameNode_var)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar19);
      }
    }
    FUN_0356fba4(plVar19,plVar12);
    break;
  case -0x35:
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar8;
    }
    if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x28) == '\0') {
      uVar25 = *(undefined8 *)Method_Oculus_Platform_Request<CloudStorageUpdateResponse>__ctor__;
      if (plVar12 == (long *)0x0) {
        uVar27 = 0;
      }
      else {
        uVar27 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      uVar20 = *(undefined8 *)Method_Oculus_Platform_Request<LaunchFriendRequestFlowResult>__ctor__;
LAB_0357a2b0:
      uVar27 = FUN_03152fb8(uVar25,uVar27,uVar20,0);
    }
    else {
      if ((plVar12 != (long *)0x0) && (uVar23 = FUN_0355ab4c(plVar12,0), (uVar23 & 1) != 0)) {
        lVar11 = *(long *)puVar8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar11 = *(long *)puVar8;
        }
        if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x28) == '\0') {
          return;
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_0356dd38(0);
        return;
      }
      lVar11 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
      if (lVar11 == 0) goto LAB_0357a3f0;
      uVar10 = (uint)*(undefined8 *)(lVar11 + 0x18);
      if (uVar10 == 0) goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x20) =
           *(undefined8 *)Method_Oculus_Platform_Request<CloudStorageUpdateResponse>__ctor__;
      if (plVar12 == (long *)0x0) {
        uVar27 = 0;
      }
      else {
        uVar27 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        uVar10 = (uint)*(undefined8 *)(lVar11 + 0x18);
      }
      if ((uVar10 < 2) || (*(undefined8 *)(lVar11 + 0x28) = uVar27, uVar10 == 2)) goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x30) =
           *(undefined8 *)Method_Oculus_Platform_Request<DestinationList>__ctor__;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar12 = (long *)FUN_035664d4();
      uVar27 = 0;
      if (plVar12 != (long *)0x0) {
        uVar27 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      if ((*(uint *)(lVar11 + 0x18) < 4) ||
         (*(undefined8 *)(lVar11 + 0x38) = uVar27, *(uint *)(lVar11 + 0x18) == 4))
      goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x40) =
           *(undefined8 *)Method_Oculus_Platform_Request<CloudStorageMetadata>__ctor__;
      uVar27 = FUN_031533cc(lVar11,0);
    }
LAB_0357a2b8:
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
    }
    FUN_03d046d0(uVar27,0);
    break;
  case -0x34:
    plVar12 = (long *)FUN_03521284(param_1,0);
    if (plVar12 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Data_NameNode_var)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar12);
      }
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if ((plVar12 != (long *)0x0) &&
       (plVar12 = (long *)FUN_035097bc(plVar12,*(undefined8 *)
                                                (*(long *)(*(long *)puVar8 + 0xb8) + 0x120),0),
       plVar12 != (long *)0x0)) {
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40))
      goto LAB_0357a408;
      puVar13 = (undefined4 *)thunk_FUN_01c49834();
      local_68 = *puVar13;
      local_70 = 0;
      lVar11 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xb0);
      if (lVar11 != 0) {
        uVar23 = FUN_02f17220(lVar11,local_68,&local_70,
                              *(undefined8 *)Method_System_ReadOnlySpan<Vector3>__ctor__);
        if ((uVar23 & 1) == 0) {
          uVar27 = FUN_032cf308(&local_68,0);
          uVar25 = FUN_032cf308(&local_64,0);
          uVar27 = FUN_031532c4(*(undefined8 *)
                                 Method_Oculus_Platform_Request<AvatarEditorResult>__ctor__,uVar27,
                                *(undefined8 *)
                                 Method_Oculus_Platform_Request<AssetFileDeleteResult>__ctor__,
                                uVar25,0);
          if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
          }
          FUN_03d04168(uVar27,0);
          return;
        }
        if (local_70 != 0) {
          uVar27 = FUN_03d468e8(local_70,0);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar8);
          }
          FUN_035707d0(uVar27,1);
          return;
        }
      }
    }
    goto LAB_0357a3f0;
  case -0x33:
  case -0x30:
  case -0x2d:
    break;
  case -0x31:
    plVar12 = (long *)FUN_03521284(param_1,0);
    if (plVar12 == (long *)0x0) {
      return;
    }
    bVar3 = *(byte *)(*(long *)System_Data_NameNode_var + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar3) {
      return;
    }
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)System_Data_NameNode_var) {
      return;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if ((plVar12 == (long *)0x0) ||
       (plVar12 = (long *)FUN_035097bc(plVar12,*(undefined8 *)
                                                (*(long *)(*(long *)puVar8 + 0xb8) + 0x120),0),
       plVar12 == (long *)0x0)) goto LAB_0357a3f0;
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40))
    goto LAB_0357a408;
    puVar15 = (uint *)thunk_FUN_01c49834();
    uVar10 = *puVar15;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if ((int)uVar10 < 0) {
      FUN_035715b8(1);
      return;
    }
    goto LAB_03579b88;
  case -0x2f:
    lVar11 = FUN_03521284(param_1,0);
    if (lVar11 == 0) goto LAB_0357a3f0;
    uVar27 = *(undefined8 *)PTR_DAT_04232bd8;
    lVar21 = thunk_FUN_01c495e4(lVar11,uVar27);
    if (lVar21 == 0) goto LAB_0357a434;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_03579a60;
    uVar26 = *(undefined4 *)(lVar21 + 0x20);
    local_78 = CONCAT44(uVar26,(undefined4)local_78);
    if (*(int *)(lVar21 + 0x18) == 1) goto LAB_03579a60;
    uVar1 = *(uint *)(lVar21 + 0x24);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar8);
    }
    lVar11 = FUN_03575480(uVar26);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar23 = FUN_03d4dc54(lVar11,0,0);
    if ((uVar23 & 1) != 0) {
      uVar27 = FUN_032cf308((long)&local_78 + 4,0);
      uVar27 = FUN_03146988(*(undefined8 *)
                             Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__,uVar27,0);
      goto LAB_0357a2b8;
    }
    lVar21 = *(long *)puVar8;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar21 = *(long *)puVar8;
    }
    if (*(int *)(*(long *)(lVar21 + 0xb8) + 0x24) == 1) {
      plVar19 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,7);
      puVar6 = PTR_DAT_0422fd80;
      local_c8 = CONCAT44(local_c8._4_4_,uVar10);
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_c8);
      if (plVar19 == (long *)0x0) goto LAB_0357a3f0;
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if ((int)plVar19[3] == 0) goto LAB_03579a60;
      plVar19[4] = lVar21;
      local_a4 = local_78._4_4_;
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_a4);
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if (*(uint *)(plVar19 + 3) < 2) goto LAB_03579a60;
      plVar19[5] = lVar21;
      local_a8 = uVar1;
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_a8);
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if (*(uint *)(plVar19 + 3) < 3) goto LAB_03579a60;
      plVar19[6] = lVar21;
      if (lVar11 == 0) goto LAB_0357a3f0;
      local_ac = *(undefined4 *)(lVar11 + 0x88);
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_ac);
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if (*(uint *)(plVar19 + 3) < 4) goto LAB_03579a60;
      plVar19[7] = lVar21;
      if (*(long *)(lVar11 + 0x80) == 0) {
        uVar27 = *(undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
LAB_0357a078:
        bVar4 = false;
        uVar25 = uVar27;
        plVar29 = plVar19;
      }
      else {
        uVar27 = *(undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
        if (*(char *)(*(long *)(lVar11 + 0x80) + 0x30) != '\0') goto LAB_0357a078;
        uVar27 = 0;
        bVar4 = true;
        uVar25 = *(undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
        plVar29 = (long *)0x0;
      }
      plVar24 = (long *)Method_Oculus_Platform_Request<CloudStorageConflictMetadata>__ctor__;
      if ((!bVar4) &&
         (plVar24 = (long *)Method_Oculus_Platform_Request<CloudStorageMetadataList>__ctor__,
         uVar25 = uVar27, plVar19 = plVar29, plVar29 == (long *)0x0)) goto LAB_0357a3f0;
      lVar21 = *plVar24;
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if (*(uint *)(plVar19 + 3) < 5) goto LAB_03579a60;
      plVar19[8] = lVar21;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar21 = FUN_035664d4();
      if (lVar21 == 0) goto LAB_0357a3f0;
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar21 + 0x18));
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar6,&local_c8);
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0)) {
LAB_0357a3fc:
        uVar27 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar27,0);
      }
      if (*(uint *)(plVar19 + 3) < 6) {
LAB_03579a60:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar19[9] = lVar21;
      local_a4 = CONCAT31(local_a4._1_3_,*(undefined1 *)(lVar11 + 0x68));
      lVar21 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&local_a4);
      if ((lVar21 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar21,*(undefined8 *)(*plVar19 + 0x40)), lVar16 == 0))
      goto LAB_0357a3fc;
      if (*(uint *)(plVar19 + 3) < 7) goto LAB_03579a60;
      plVar19[10] = lVar21;
      uVar27 = FUN_0315375c(uVar25,plVar19,0);
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
      }
      FUN_03d03d14(uVar27,0);
    }
    else if (lVar11 == 0) goto LAB_0357a3f0;
    local_b8 = *(int *)(lVar11 + 0x50);
    if (local_b8 != 2) {
      if (local_b8 != 1) {
        local_c8 = *(undefined8 *)Method_Oculus_Platform_Request<AssetDetailsList>__ctor__;
        uStack_c0 = 0xffffffffffffffff;
        uVar27 = FUN_03307544(&local_c8,0);
        uVar25 = *(undefined8 *)Method_Oculus_Platform_Request<bool>__ctor__;
        uVar20 = *(undefined8 *)Method_Oculus_Platform_Request<Challenge>__ctor__;
        goto LAB_0357a2b0;
      }
      uVar10 = *(uint *)(lVar11 + 0x88);
      if (uVar1 != uVar10) {
        if (uVar1 == 0) {
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar21 = FUN_035664d4();
          if (lVar21 == 0) goto LAB_0357a3f0;
          if ((uVar10 != 0) && (uVar10 != *(uint *)(lVar21 + 0x18))) goto LAB_0357a37c;
        }
        else if (uVar10 != 0) {
LAB_0357a37c:
          lVar21 = *(long *)puVar8;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar21 = *(long *)puVar8;
          }
          lVar16 = *(long *)(*(long *)(lVar21 + 0xb8) + 200);
          if (lVar16 == 0) {
            return;
          }
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar16 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 200);
            goto joined_r0x0357a3b4;
          }
          goto LAB_0357a3b8;
        }
      }
      plVar12 = *(long **)(lVar11 + 0x80);
      FUN_03565054(lVar11,local_64);
      uVar10 = local_64;
      goto LAB_0357a1e4;
    }
    lVar21 = *(long *)puVar8;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar21 = *(long *)puVar8;
    }
    lVar16 = *(long *)(*(long *)(lVar21 + 0xb8) + 0xb8);
    if (lVar16 == 0) {
      return;
    }
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar16 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xb8);
      goto joined_r0x0357a3b4;
    }
    goto LAB_0357a3b8;
  case -0x2e:
    lVar11 = FUN_03521284(param_1,0);
    if (lVar11 == 0) goto LAB_0357a3f0;
    uVar27 = *(undefined8 *)PTR_DAT_04232bd8;
    lVar21 = thunk_FUN_01c495e4(lVar11,uVar27);
    if (lVar21 == 0) {
LAB_0357a414:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar11,uVar27);
    }
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_03579a60;
    uVar26 = *(undefined4 *)(lVar21 + 0x20);
    local_78 = CONCAT44(local_78._4_4_,uVar26);
    if (*(int *)(lVar21 + 0x18) == 1) goto LAB_03579a60;
    local_7c = *(uint *)(lVar21 + 0x24);
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar8;
    }
    if (0 < *(int *)(*(long *)(lVar11 + 0xb8) + 0x24)) {
      lVar11 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,6);
      if (lVar11 == 0) goto LAB_0357a3f0;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x20) =
           *(undefined8 *)Method_Oculus_Platform_Request<AssetFileDownloadResult>__ctor__;
      uVar27 = FUN_032cf308(&local_78,0);
      if ((*(uint *)(lVar11 + 0x18) < 2) ||
         (*(undefined8 *)(lVar11 + 0x28) = uVar27, *(uint *)(lVar11 + 0x18) == 2))
      goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x30) =
           *(undefined8 *)Method_Oculus_Platform_Request<LaunchUnblockFlowResult>__ctor__;
      uVar27 = FUN_032cf308(&local_7c,0);
      if ((*(uint *)(lVar11 + 0x18) < 4) ||
         (*(undefined8 *)(lVar11 + 0x38) = uVar27, *(uint *)(lVar11 + 0x18) == 4))
      goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x40) =
           *(undefined8 *)Method_System_Collections_Generic_List<Matrix4x4[]>_get_Item__;
      local_80 = thunk_FUN_01bfadec(0);
      local_80 = local_80 % 1000;
      uVar27 = FUN_032cf308(&local_80,0);
      if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_03579a60;
      *(undefined8 *)(lVar11 + 0x48) = uVar27;
      uVar27 = FUN_031533cc(lVar11,0);
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
      }
      FUN_03d03d14(uVar27,0);
      lVar11 = *(long *)puVar8;
      uVar26 = (undefined4)local_78;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = FUN_03575480(uVar26);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar23 = FUN_03d4f3bc(lVar11,0,0);
    if ((uVar23 & 1) == 0) {
      lVar11 = *(long *)puVar8;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *(long *)puVar8;
      }
      if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x24) < 0) {
        return;
      }
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
      puVar8 = PTR_DAT_0422fd80;
      local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_78);
      lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_c8);
      if (plVar12 == (long *)0x0) goto LAB_0357a3f0;
      if ((lVar11 == 0) ||
         (lVar21 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar21 != 0)) {
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar11;
          local_a4 = local_7c;
          lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar8,&local_a4);
          if ((lVar11 != 0) &&
             (lVar21 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
          goto LAB_0357a3fc;
          if (1 < *(uint *)(plVar12 + 3)) {
            plVar12[5] = lVar11;
            local_a8 = local_64;
            lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar8,&local_a8);
            if ((lVar11 != 0) &&
               (lVar21 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
            goto LAB_0357a3fc;
            if (2 < *(uint *)(plVar12 + 3)) {
              plVar12[6] = lVar11;
              if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_03d04388(*(undefined8 *)
                            Method_Oculus_Platform_Request<AssetFileDownloadCancelResult>__ctor__,
                           plVar12,0);
              return;
            }
          }
        }
        goto LAB_03579a60;
      }
      goto LAB_0357a3fc;
    }
    if (lVar11 == 0) goto LAB_0357a3f0;
    if ((*(int *)(lVar11 + 0x50) != 1) &&
       ((*(int *)(lVar11 + 0x50) != 2 ||
        ((plVar12 != *(long **)(lVar11 + 0x70) && (plVar12 != *(long **)(lVar11 + 0x80))))))) {
      lVar21 = *(long *)puVar8;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar21 = *(long *)puVar8;
      }
      if (*(int *)(*(long *)(lVar21 + 0xb8) + 0x24) < 1) {
        return;
      }
      iVar30 = *(int *)(lVar11 + 0x50);
      lVar21 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
      if (lVar21 != 0) {
        if (*(int *)(lVar21 + 0x18) != 0) {
          *(undefined8 *)(lVar21 + 0x20) =
               *(undefined8 *)Method_Oculus_Platform_Request<CloudStorageData>__ctor__;
          uVar27 = FUN_03d4ded0(lVar11,0);
          if ((1 < *(uint *)(lVar21 + 0x18)) &&
             (*(undefined8 *)(lVar21 + 0x28) = uVar27, *(uint *)(lVar21 + 0x18) != 2)) {
            *(undefined8 *)(lVar21 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UIR_NativePagedList<NudgeJobData>__ctor__;
            uVar27 = FUN_032cf308(&local_78,0);
            if (3 < *(uint *)(lVar21 + 0x18)) {
              *(undefined8 *)(lVar21 + 0x38) = uVar27;
              puVar5 = (undefined8 *)Method_Oculus_Platform_Request<BlockedUserList>__ctor__;
              if (iVar30 == 2) {
                puVar5 = (undefined8 *)Method_Oculus_Platform_Request<LaunchBlockFlowResult>__ctor__
                ;
              }
              if (*(uint *)(lVar21 + 0x18) != 4) {
                *(undefined8 *)(lVar21 + 0x40) = *puVar5;
                uVar27 = FUN_031533cc(lVar21,0);
                if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
                }
                FUN_03d03d14(uVar27,0);
                return;
              }
            }
          }
        }
        goto LAB_03579a60;
      }
      goto LAB_0357a3f0;
    }
    plVar12 = *(long **)(lVar11 + 0x80);
    FUN_03565054(lVar11,local_7c);
    uVar10 = local_7c;
LAB_0357a1e4:
    FUN_03565250(lVar11,uVar10);
    lVar21 = *(long *)puVar8;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar21 = *(long *)puVar8;
    }
    lVar16 = *(long *)(*(long *)(lVar21 + 0xb8) + 0xc0);
    if (lVar16 == 0) {
      return;
    }
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar16 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xc0);
joined_r0x0357a3b4:
      if (lVar16 == 0) goto LAB_0357a3f0;
    }
LAB_0357a3b8:
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),lVar11,plVar12,*(undefined8 *)(lVar16 + 0x28));
    break;
  case -0x2c:
    lVar11 = *(long *)puVar8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar8;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa8);
    if (lVar11 != 0) {
      FUN_02b9b09c(lVar11,*(undefined8 *)Method_Oculus_Platform_Request<ApplicationVersion>__ctor__)
      ;
      lVar11 = FUN_03521284(param_1,0);
      if (lVar11 != 0) {
        uVar27 = *(undefined8 *)PTR_DAT_04232bd8;
        lVar21 = thunk_FUN_01c495e4(lVar11,uVar27);
        puVar9 = Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
        puVar7 = PTR_DAT_0422fd80;
        puVar6 = PTR_DAT_0422f9e8;
        if (lVar21 != 0) {
          iVar30 = (int)*(ulong *)(lVar21 + 0x18);
          if (iVar30 < 1) {
LAB_03579a64:
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            local_a0 = FUN_03564fcc();
            local_90 = FUN_02657a7c(local_a0,*(undefined8 *)
                                              Method_System_Collections_Generic_Queue<int>_Dequeue__
                                   );
            puVar9 = Method_Oculus_Platform_Request<AssetDetails>__ctor__;
            puVar7 = Method_System_Collections_Generic_Queue<int>_ToArray__;
            puVar6 = Method_System_Collections_Generic_Queue<int>_Enqueue__;
            while( true ) {
              uVar23 = FUN_02657b54(local_90,*(undefined8 *)puVar6);
              if ((uVar23 & 1) == 0) {
                FUN_02657be0(local_90,*(undefined8 *)
                                       Method_System_Collections_Generic_Queue<int>_Clear__);
                return;
              }
              lVar11 = FUN_02657a90(local_90,*(undefined8 *)puVar7);
              lVar21 = *(long *)puVar8;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar21 = *(long *)puVar8;
              }
              lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0xa8);
              if (lVar21 == 0) break;
              uVar23 = FUN_02b9b0fc(lVar21,lVar11,*(undefined8 *)puVar9);
              if ((uVar23 & 1) == 0) {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                FUN_03565964(lVar11,0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (iVar30 != 0) {
            uVar23 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
            uVar10 = 1;
            do {
              if ((uint)uVar23 <= uVar10) break;
              uVar26 = *(undefined4 *)(lVar21 + (long)(int)(uVar10 - 1) * 4 + 0x20);
              uVar1 = *(uint *)(lVar21 + (long)(int)uVar10 * 4 + 0x20);
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar11 = FUN_03575480(uVar26);
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar6);
              }
              uVar23 = FUN_03d4dc54(lVar11,0,0);
              if ((uVar23 & 1) == 0) {
                if (lVar11 == 0) goto LAB_0357a3f0;
                lVar16 = *(long *)(lVar11 + 0x80);
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                plVar12 = (long *)FUN_03562cf4();
                if (plVar12 == (long *)0x0) goto LAB_0357a3f0;
                lVar17 = (**(code **)(*plVar12 + 0x1d8))
                                   (plVar12,uVar1,1,*(undefined8 *)(*plVar12 + 0x1e0));
                FUN_03565054(lVar11,uVar1);
                FUN_03565250(lVar11,uVar1);
                lVar18 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xa8);
                if (lVar18 == 0) goto LAB_0357a3f0;
                FUN_02b9bb7c(lVar18,lVar11,*(undefined8 *)puVar9);
                if (lVar17 != lVar16) {
                  lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xc0);
                  if (lVar17 != 0) {
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                      lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xc0);
                      if (lVar17 == 0) goto LAB_0357a3f0;
                    }
                    (**(code **)(lVar17 + 0x18))
                              (*(undefined8 *)(lVar17 + 0x40),lVar11,lVar16,
                               *(undefined8 *)(lVar17 + 0x28));
                  }
                }
              }
              else {
                lVar11 = *(long *)puVar8;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                  lVar11 = *(long *)puVar8;
                }
                if (-1 < *(int *)(*(long *)(lVar11 + 0xb8) + 0x24)) {
                  plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
                  local_c8 = CONCAT44(local_c8._4_4_,uVar26);
                  lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar7,&local_c8);
                  if (plVar12 == (long *)0x0) goto LAB_0357a3f0;
                  if ((lVar11 != 0) &&
                     (lVar16 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar16 == 0)) goto LAB_0357a3fc;
                  if ((int)plVar12[3] == 0) break;
                  plVar12[4] = lVar11;
                  local_a4 = uVar1;
                  lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar7,&local_a4);
                  if ((lVar11 != 0) &&
                     (lVar16 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar16 == 0)) goto LAB_0357a3fc;
                  if (*(uint *)(plVar12 + 3) < 2) break;
                  plVar12[5] = lVar11;
                  local_a8 = local_64;
                  lVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar7,&local_a8);
                  if ((lVar11 != 0) &&
                     (lVar16 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar16 == 0)) goto LAB_0357a3fc;
                  if (*(uint *)(plVar12 + 3) < 3) break;
                  plVar12[6] = lVar11;
                  if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  FUN_03d04388(*(undefined8 *)Method_Oculus_Platform_Request<ChallengeList>__ctor__,
                               plVar12,0);
                }
              }
              uVar1 = uVar10 + 1;
              if (iVar30 <= (int)uVar1) goto LAB_03579a64;
              uVar23 = (ulong)*(uint *)(lVar21 + 0x18);
              uVar10 = uVar10 + 2;
            } while (uVar1 < *(uint *)(lVar21 + 0x18));
          }
          goto LAB_03579a60;
        }
        goto LAB_0357a414;
      }
    }
LAB_0357a3f0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  default:
    if (cVar2 != -2) {
      if (cVar2 != -1) {
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03573c94();
      return;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = FUN_03562cf4();
    if (lVar11 == 0) {
      return;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = FUN_03562cf4();
    if (lVar11 == 0) goto LAB_0357a3f0;
    if (*(char *)(lVar11 + 0x3a) == '\0') {
      return;
    }
    if ((plVar12 != (long *)0x0) && ((char)plVar12[6] != '\0')) {
      return;
    }
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
LAB_03579b88:
    FUN_03570fdc(uVar10,1);
  }
  return;
}


