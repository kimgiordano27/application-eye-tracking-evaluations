/*
FUNCTION_NAME: Pico.Platform.UserService$$RequestUserPermissions
ENTRY_POINT: 050324d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_13;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 Pico_Platform_UserService__RequestUserPermissions(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  float *pfVar16;
  long in_x9;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar18;
  long *unaff_x23;
  undefined8 *unaff_x25;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000001a8;
  
  plVar7 = (long *)(**(code **)(in_x9 + 0x1a8))(param_1,param_2,*(undefined8 *)(in_x9 + 0x1b0));
  if (plVar7 == (long *)0x0) goto LAB_05032f90;
  uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
  puVar18 = (undefined8 *)(unaff_x19 + 0x60);
  *puVar18 = uVar8;
  thunk_FUN_02bb0e9c(puVar18,uVar8);
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05032f90;
  thunk_FUN_05c9238c(*(long *)(unaff_x19 + 0x58),*puVar18,0);
  if (*unaff_x21 == 0) goto LAB_05032f90;
  FUN_05c9caa4(*unaff_x21,*(undefined8 *)(unaff_x19 + 0x38),0,0);
  plVar7 = *(long **)(unaff_x19 + 0x48);
  if (((plVar7 == (long *)0x0) ||
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                  (plVar7,*(undefined8 *)
                                           Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,
                                   *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 == (long *)0x0)) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x408))(plVar7,*(undefined8 *)(*plVar7 + 0x410)),
     plVar7 == (long *)0x0)) goto LAB_05032f90;
  iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
  if (0 < iVar5) {
    FUN_050f17a0(&stack0x00000098,plVar7,0);
    memcpy(&stack0x00000110,&stack0x00000098,0x48);
    FUN_050f59d4(&stack0x00000050,&stack0x00000110,0);
    memcpy((void *)(unaff_x19 + 0x68),&stack0x00000050,0x48);
    puVar18 = (undefined8 *)(unaff_x19 + 0x70);
    while( true ) {
      thunk_FUN_02bb0e9c(puVar18,0);
      uVar10 = thunk_FUN_050f57f0(unaff_x19 + 0x68,0);
      if ((uVar10 & 1) == 0) break;
      plVar7 = (long *)FUN_050f598c(unaff_x19 + 0x68,0);
      if ((plVar7 == (long *)0x0) ||
         ((**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370)), unaff_x20 == 0))
      goto LAB_05032f90;
      uVar8 = FUN_0502e8c0();
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar8;
      thunk_FUN_02bb0e9c();
      puVar18 = (undefined8 *)(unaff_x19 + 0xb0);
      plVar7 = (long *)*puVar18;
      if (plVar7 == (long *)0x0) goto LAB_05032f90;
      lVar13 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x23) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0503267c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x23,0);
LAB_0503267c:
      uVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      if ((uVar10 & 1) != 0) {
        plVar7 = (long *)*puVar18;
        if (plVar7 == (long *)0x0) goto LAB_05032f90;
        lVar13 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 == 0) goto LAB_05032734;
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0503271c;
      }
      *puVar18 = 0;
    }
    *(undefined8 *)(unaff_x19 + 0xa8) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    *(undefined8 *)(unaff_x19 + 0x88) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05032f90;
  uVar10 = FUN_04c08bbc(*(long *)(unaff_x19 + 0x60),
                        *(undefined8 *)Oculus_Platform_Request<bool>_TypeInfo,0);
  puVar1 = Oculus_Platform_Request<ChallengeEntryList>_TypeInfo;
  if ((uVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_05c8cb28(*(long *)(unaff_x19 + 0x50),0,0);
      return 0;
    }
    goto LAB_05032f90;
  }
  plVar7 = *(long **)(unaff_x19 + 0x48);
  if (plVar7 == (long *)0x0) goto LAB_05032f90;
  uVar8 = (**(code **)(*plVar7 + 0x1a8))
                    (plVar7,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,
                     *(undefined8 *)(*plVar7 + 0x1b0));
  puVar2 = System_Collections_Generic_List<TrackSlot>_TypeInfo;
  if (*(int *)(*(long *)System_Collections_Generic_List<TrackSlot>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)System_Collections_Generic_List<TrackSlot>_TypeInfo);
  }
  uVar10 = FUN_050ecfcc(uVar8,0,0);
  if ((uVar10 & 1) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x48);
    if (((plVar7 == (long *)0x0) ||
        (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                    (plVar7,*(undefined8 *)puVar1,*(undefined8 *)(*plVar7 + 0x1b0)),
        plVar7 == (long *)0x0)) ||
       ((uVar6 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370)),
        unaff_x20 == 0 ||
        ((plVar7 = *(long **)(unaff_x20 + 0x18), plVar7 == (long *)0x0 ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                     (plVar7,*(undefined8 *)
                                              Oculus_Platform_Request<ChallengeList>_TypeInfo,
                                      *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 == (long *)0x0))))))
    goto LAB_05032f90;
    (**(code **)(*plVar7 + 0x188))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 400));
    FUN_0502e9a0(&stack0x00000098);
    lVar13 = in_stack_000000d8;
    uVar4 = in_stack_000000a0;
    uVar8 = in_stack_00000098;
    plVar7 = *(long **)(unaff_x19 + 0x48);
    unaff_x25[1] = in_stack_000000b0;
    *unaff_x25 = in_stack_000000a8;
    unaff_x25[3] = in_stack_000000c0;
    unaff_x25[2] = in_stack_000000b8;
    unaff_x25[5] = in_stack_000000d0;
    unaff_x25[4] = in_stack_000000c8;
    puVar1 = Oculus_Platform_Request<Challenge>_TypeInfo;
    if (plVar7 == (long *)0x0) goto LAB_05032f90;
    uVar11 = (**(code **)(*plVar7 + 0x1a8))
                       (plVar7,*(undefined8 *)Oculus_Platform_Request<Challenge>_TypeInfo,
                        *(undefined8 *)(*plVar7 + 0x1b0));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar10 = FUN_050ecfcc(uVar11,0,0);
    lVar12 = *(long *)(unaff_x19 + 0x50);
    if ((uVar10 & 1) == 0) {
      if ((lVar12 == 0) ||
         (lVar12 = FUN_031d8020(lVar12,*(undefined8 *)PTR_DAT_06316840), lVar12 == 0))
      goto LAB_05032f90;
      FUN_05c5fa10(lVar12,uVar8,0);
      if ((*(long *)(unaff_x19 + 0x50) == 0) ||
         (lVar12 = FUN_031d8020(*(long *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_06316848),
         lVar12 == 0)) goto LAB_05032f90;
      thunk_FUN_05c56684(lVar12,uVar4,0);
    }
    else {
      if ((lVar12 == 0) ||
         (lVar12 = FUN_031d8020(lVar12,*(undefined8 *)
                                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo
                               ), lVar12 == 0)) goto LAB_05032f90;
      FUN_05c601ac(lVar12,uVar8,0);
      thunk_FUN_05c56684(lVar12,uVar4,0);
      plVar7 = *(long **)(unaff_x19 + 0x48);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                     (plVar7,*(undefined8 *)puVar1,*(undefined8 *)(*plVar7 + 0x1b0))
         , plVar7 == (long *)0x0)) goto LAB_05032f90;
      uVar6 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370));
      plVar7 = *(long **)(unaff_x20 + 0x18);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                     (plVar7,*(undefined8 *)
                                              Oculus_Platform_Request<BlockedUserList>_TypeInfo,
                                      *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 == (long *)0x0))
      goto LAB_05032f90;
      (**(code **)(*plVar7 + 0x188))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 400));
      FUN_05030420();
    }
    if (lVar13 != 0) {
      in_stack_00000020 = unaff_x25[1];
      in_stack_00000018 = *unaff_x25;
      in_stack_00000030 = unaff_x25[3];
      in_stack_00000028 = unaff_x25[2];
      in_stack_00000040 = unaff_x25[5];
      in_stack_00000038 = unaff_x25[4];
      lVar12 = *(long *)(unaff_x20 + 0x40);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x30);
      uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                   Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
      in_stack_00000008 = uVar8;
      in_stack_00000010 = uVar4;
      in_stack_00000048 = lVar13;
      FUN_0502d9b8(uVar11,&stack0x00000008);
      if (lVar12 == 0) goto LAB_05032f90;
      FUN_04458d1c(lVar12,uVar6,uVar11,
                   *(undefined8 *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo);
    }
  }
  plVar7 = *(long **)(unaff_x19 + 0x48);
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                 (plVar7,*(undefined8 *)
                                          System_Collections_Generic_List<TimeValue>_TypeInfo,
                                  *(undefined8 *)(*plVar7 + 0x1b0)), plVar7 == (long *)0x0))
  goto LAB_05032f90;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x408))(plVar7,*(undefined8 *)(*plVar7 + 0x410));
  plVar14 = *(long **)(unaff_x19 + 0x48);
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x1a8))
                                  (plVar14,*(undefined8 *)
                                            System_Collections_Generic_List<Toggle>_TypeInfo,
                                   *(undefined8 *)(*plVar14 + 0x1b0)), plVar14 == (long *)0x0))
  goto LAB_05032f90;
  plVar14 = (long *)(**(code **)(*plVar14 + 0x408))(plVar14,*(undefined8 *)(*plVar14 + 0x410));
  plVar15 = *(long **)(unaff_x19 + 0x48);
  if (((plVar15 == (long *)0x0) ||
      (plVar15 = (long *)(**(code **)(*plVar15 + 0x1a8))
                                   (plVar15,*(undefined8 *)PTR_DAT_063354c8,
                                    *(undefined8 *)(*plVar15 + 0x1b0)), plVar15 == (long *)0x0)) ||
     (plVar15 = (long *)(**(code **)(*plVar15 + 0x408))(plVar15,*(undefined8 *)(*plVar15 + 0x410)),
     plVar7 == (long *)0x0)) goto LAB_05032f90;
  iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
  puVar1 = PTR_DAT_06312438;
  if (iVar5 < 1) {
    if (plVar14 == (long *)0x0) goto LAB_05032f90;
    iVar5 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    if (0 < iVar5) goto LAB_05032b1c;
  }
  else {
LAB_05032b1c:
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar16 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar19 = *pfVar16;
    fVar20 = pfVar16[1];
    fVar21 = pfVar16[2];
    if (DAT_066c1d9a == '\0') {
      FUN_02b3c81c(PTR_DAT_06312cd8);
      DAT_066c1d9a = '\x01';
    }
    pfVar16 = *(float **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
    fVar23 = *pfVar16;
    fVar24 = pfVar16[1];
    fVar25 = pfVar16[2];
    fVar26 = pfVar16[3];
    iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    if (0 < iVar5) {
      uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,0,*(undefined8 *)(*plVar7 + 400));
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      fVar19 = (float)FUN_050f2128(uVar8,0);
      puVar3 = System_Collections_Generic_List<Triangle>_TypeInfo;
      lVar13 = *(long *)System_Collections_Generic_List<Triangle>_TypeInfo;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar3;
      }
      fVar22 = **(float **)(lVar13 + 0xb8);
      uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,1,*(undefined8 *)(*plVar7 + 400));
      fVar20 = (float)FUN_050f2128(uVar8,0);
      fVar27 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
      uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,2,*(undefined8 *)(*plVar7 + 400));
      fVar21 = (float)FUN_050f2128(uVar8,0);
      fVar19 = fVar19 * fVar22;
      fVar20 = fVar20 * fVar27;
      fVar21 = fVar21 * *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    }
    if (plVar14 == (long *)0x0) goto LAB_05032f90;
    iVar5 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    if (0 < iVar5) {
      uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,0,*(undefined8 *)(*plVar14 + 400));
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      in_stack_000001a8._4_4_ = fVar20;
      fVar20 = (float)FUN_050f2128(uVar8,0);
      puVar3 = System_Collections_Generic_List<Triangle>_TypeInfo;
      lVar13 = *(long *)System_Collections_Generic_List<Triangle>_TypeInfo;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar3;
      }
      fVar23 = **(float **)(lVar13 + 0xb8);
      uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,1,*(undefined8 *)(*plVar14 + 400));
      fVar24 = (float)FUN_050f2128(uVar8,0);
      fVar27 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
      uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,2,*(undefined8 *)(*plVar14 + 400));
      fVar25 = (float)FUN_050f2128(uVar8,0);
      fVar22 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      uVar8 = (**(code **)(*plVar14 + 0x188))(plVar14,3,*(undefined8 *)(*plVar14 + 400));
      fVar26 = (float)FUN_050f2128(uVar8,0);
      fVar23 = -(fVar20 * fVar23);
      fVar24 = -(fVar24 * fVar27);
      fVar25 = -(fVar25 * fVar22);
      fVar20 = in_stack_000001a8._4_4_;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05032f90;
    FUN_05c9cce4(fVar19,fVar20,fVar21,fVar23,fVar24,fVar25,fVar26,*(long *)(unaff_x19 + 0x58),0);
  }
  if (plVar15 == (long *)0x0) goto LAB_05032f90;
  iVar5 = (**(code **)(*plVar15 + 0x1e8))(plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
  if (0 < iVar5) {
    lVar13 = *(long *)(unaff_x19 + 0x58);
    uVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,0,*(undefined8 *)(*plVar15 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar2);
    }
    uVar6 = FUN_050f2128(uVar8,0);
    uVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,1,*(undefined8 *)(*plVar15 + 400));
    fVar20 = (float)FUN_050f2128(uVar8,0);
    uVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,2,*(undefined8 *)(*plVar15 + 400));
    fVar19 = (float)FUN_050f2128(uVar8,0);
    if (lVar13 == 0) goto LAB_05032f90;
    FUN_05c9c840(uVar6,lVar13,0);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05032f90;
    lVar13 = FUN_05c89410(*(long *)(unaff_x19 + 0x58),0);
    if (((*(long *)(unaff_x19 + 0x58) == 0) ||
        (lVar12 = FUN_05c89410(*(long *)(unaff_x19 + 0x58),0), lVar12 == 0)) ||
       (lVar12 = FUN_05c8c8e0(lVar12,0), lVar12 == 0)) goto LAB_05032f90;
    fVar21 = (float)UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty__get_IsReadOnly
                              (lVar12,0);
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    if (lVar13 == 0) goto LAB_05032f90;
    pfVar16 = *(float **)(*(long *)puVar1 + 0xb8);
    FUN_05c8cb28(lVar13,DAT_01031cf4 <=
                        (fVar19 - pfVar16[2]) * (fVar19 - pfVar16[2]) +
                        (fVar21 - *pfVar16) * (fVar21 - *pfVar16) +
                        (fVar20 - pfVar16[1]) * (fVar20 - pfVar16[1]),0);
  }
  FUN_05c94d9c(0);
  if (unaff_x20 != 0) {
    if ((*(char *)(unaff_x19 + 0x41) != '\0') ||
       (fVar20 = (float)FUN_05c94d9c(0), fVar20 - *(float *)(unaff_x20 + 0x98) <= DAT_01032418)) {
      return 0;
    }
    uVar6 = FUN_05c94d9c(0);
    *(undefined4 *)(unaff_x20 + 0x98) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
    uVar6 = 3;
LAB_0503296c:
    *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
    return 1;
  }
LAB_05032f90:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_0503271c:
    if (*(long *)(piVar17 + -2) == *unaff_x23) {
      puVar18 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
      goto LAB_0503294c;
    }
  }
LAB_05032734:
  puVar18 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x23,1);
LAB_0503294c:
  uVar8 = (*(code *)*puVar18)(plVar7,puVar18[1]);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),uVar8);
  uVar6 = 2;
  goto LAB_0503296c;
}


