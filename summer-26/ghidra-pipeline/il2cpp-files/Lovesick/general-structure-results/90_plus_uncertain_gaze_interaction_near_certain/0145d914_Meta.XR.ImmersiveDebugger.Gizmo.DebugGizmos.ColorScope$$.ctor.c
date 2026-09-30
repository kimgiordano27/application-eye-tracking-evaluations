/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$.ctor
ENTRY_POINT: 0145d914
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_9;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_9
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope___ctor(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  long unaff_x19;
  uint uVar13;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar14;
  undefined1 unaff_w24;
  long lVar15;
  long unaff_x25;
  long *unaff_x28;
  long *unaff_x29;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  while (FUN_0132138c(), unaff_x25 != 0) {
    if (*(uint *)(unaff_x25 + 0x18) <= uStack0000000000000068) {
LAB_0145eaf4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(unaff_x25 + (long)(int)uStack0000000000000068 * 4 + 0x22) = unaff_w24;
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x23 + 0x18) <= unaff_w21) {
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        uVar3 = FUN_01325140();
        uVar3 = FUN_01600f98(*(undefined8 *)
                              Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__
                             ,uVar3,0);
        uVar3 = FUN_015f5b28(*(undefined8 *)System_Action<List<XRTargetEvaluator>>_TypeInfo,uVar3,0)
        ;
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_026610e4(uVar3,0);
      }
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__;
      lVar15 = *unaff_x29;
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x58) == 0)) break;
      iVar12 = *(int *)(lVar15 + 0x18);
      if ((*(int *)(*(long *)(lVar15 + 0x58) + 0x18) == 1) &&
         ((*(char *)(lVar15 + 0x27) == '\0' && (*(char *)(lVar15 + 0x49) == '\0')))) {
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)puVar2,0);
          lVar15 = *unaff_x29;
          if (lVar15 == 0) break;
        }
        if (*(long *)(lVar15 + 0x58) == 0) break;
        FUN_0132138c(*(long *)(lVar15 + 0x58),0,&stack0x00000068,*(undefined8 *)PTR_DAT_033ee2d8);
        if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) break;
        FUN_01444f94(CONCAT44(uStack000000000000006c,uStack0000000000000068),0);
        if ((*unaff_x29 == 0) || (lVar15 = *(long *)(*unaff_x29 + 0x58), lVar15 == 0)) break;
        FUN_0132138c(lVar15,0,&stack0x00000068,*(undefined8 *)PTR_DAT_033ee2d8);
        if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) break;
        FUN_014450f0(CONCAT44(uStack000000000000006c,uStack0000000000000068),4,0);
        lVar15 = *unaff_x29;
        iStack000000000000005c = 0;
        if (lVar15 == 0) break;
        iVar12 = 0;
      }
      puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
      iStack000000000000005c = 0;
      goto LAB_0145da34;
    }
    if (*unaff_x29 == 0) break;
    lVar15 = *(long *)(*unaff_x29 + 0x80);
    FUN_0132138c();
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uStack0000000000000068) goto LAB_0145eaf4;
    *(undefined1 *)(lVar15 + (long)(int)uStack0000000000000068 * 4 + 0x20) = unaff_w24;
    if (*unaff_x29 == 0) break;
    lVar15 = *(long *)(*unaff_x29 + 0x80);
    FUN_0132138c();
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uStack0000000000000068) goto LAB_0145eaf4;
    *(undefined1 *)(lVar15 + (long)(int)uStack0000000000000068 * 4 + 0x21) = unaff_w24;
    if (*unaff_x29 == 0) break;
    unaff_x25 = *(long *)(*unaff_x29 + 0x80);
  }
LAB_0145eaf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0145da34:
  if (*(long *)(lVar15 + 0x58) == 0) goto LAB_0145eaf0;
  if (*(int *)(*(long *)(lVar15 + 0x58) + 0x18) <= iStack000000000000005c) {
    *(int *)(lVar15 + 0x18) = iVar12;
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      in_stack_00000020 = FUN_02040648(in_stack_00000008,0);
      if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo);
      }
      uVar3 = FUN_01789268(&stack0x00000020,0);
      uVar3 = FUN_015f5b28(*(undefined8 *)
                            Method_Unity_Jobs_IJobExtensions_Schedule<DeferredLights_CullLightsJob>__
                           ,uVar3,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar3,0);
    }
    return 0;
  }
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    uVar3 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
    if ((*unaff_x29 == 0) || (lVar15 = *(long *)(*unaff_x29 + 0x58), lVar15 == 0))
    goto LAB_0145eaf0;
    uStack0000000000000050 = *(undefined4 *)(lVar15 + 0x18);
    uVar4 = FUN_0176eb1c(&stack0x00000050,0);
    uVar3 = FUN_0160073c(*(undefined8 *)PTR_DAT_033ede28,uVar3,*(undefined8 *)StringLiteral_504,
                         uVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar3,0);
    lVar15 = *unaff_x29;
    if (lVar15 == 0) goto LAB_0145eaf0;
  }
  if (*(long *)(lVar15 + 0x58) == 0) goto LAB_0145eaf0;
  FUN_0132138c(*(long *)(lVar15 + 0x58),iStack000000000000005c,&stack0x00000068,
               *(undefined8 *)PTR_DAT_033ee2d8);
  plVar1 = (long *)CONCAT44(uStack000000000000006c,uStack0000000000000068);
  if (plVar1 == (long *)0x0) goto LAB_0145eaf0;
  plVar1[7] = 0x100000001;
  uStack0000000000000054 = 1;
  uStack0000000000000058 = 1;
  lVar15 = *unaff_x29;
  if (lVar15 == 0) goto LAB_0145eaf0;
  uVar14 = 0;
  while( true ) {
    if (*(long *)(lVar15 + 0x70) == 0) goto LAB_0145eaf0;
    if ((long)*(int *)(*(long *)(lVar15 + 0x70) + 0x18) <= (long)uVar14) break;
    cVar10 = *(char *)(lVar15 + 0x49);
    uVar3 = *(undefined8 *)(lVar15 + 0x80);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01457470(uVar14 & 0xffffffff,cVar10 != '\0',uVar3);
    if ((uVar5 & 1) != 0) {
      lVar15 = plVar1[2];
      if (lVar15 == 0) goto LAB_0145eaf0;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0145eaf4;
      lVar15 = *(long *)(lVar15 + uVar14 * 8 + 0x20);
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        in_stack_00000018._4_4_ = iStack000000000000005c;
        uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,(long)&stack0x00000018 + 4);
        if ((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x70), lVar6 == 0))
        goto LAB_0145eaf0;
        FUN_0132138c(lVar6,uVar14 & 0xffffffff,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
        if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
        uVar3 = FUN_01600b5c(*(undefined8 *)StringLiteral_4207,uVar3,
                             *(undefined8 *)
                              (CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar3,0);
      }
      if (lVar15 == 0) goto LAB_0145eaf0;
      in_stack_00000038 = *(undefined8 *)(lVar15 + 0x48);
      uVar3 = *(undefined8 *)(lVar15 + 0x40);
      in_stack_00000048 = *(undefined8 *)(lVar15 + 0x58);
      in_stack_00000040 = *(undefined8 *)(lVar15 + 0x50);
      in_stack_00000030 = uVar3;
      fVar16 = (float)FUN_01431624(&stack0x00000030,0);
      _fStack0000000000000028 = CONCAT44((float)uVar3,fVar16);
      fVar18 = (float)uVar3;
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444(puVar2);
        fVar16 = (float)_fStack0000000000000028;
        DAT_03774e1e = '\x01';
        fVar18 = fStack000000000000002c;
      }
      if ((fVar16 == *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 8)) &&
         (fVar18 == *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc))) {
LAB_0145dcac:
        cVar10 = '\x01';
      }
      else {
        if ((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x58), lVar6 == 0))
        goto LAB_0145eaf0;
        if ((*(int *)(lVar6 + 0x18) < 2) || (*(int *)(unaff_x19 + 0x28) < 2)) goto LAB_0145dcac;
        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
        if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
        if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
           (lVar6 = thunk_FUN_00d6225c(*(long *)Method_System_Collections_Generic_List<char>_Clear__
                                       ,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
        goto LAB_0145eaf8;
        if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
        plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
        lVar6 = FUN_01444238(lVar15,0);
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0145eaf8;
        uVar13 = *(uint *)(plVar7 + 3);
        if (uVar13 < 2) goto LAB_0145eaf4;
        plVar7[5] = lVar6;
        if (*(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
            != 0) {
          lVar6 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                                     ,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar6 == 0) goto LAB_0145eaf8;
          uVar13 = *(uint *)(plVar7 + 3);
        }
        if (uVar13 < 3) goto LAB_0145eaf4;
        plVar7[6] = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
        ;
        in_stack_00000038 = *(undefined8 *)(lVar15 + 0x48);
        uVar3 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_00000048 = *(undefined8 *)(lVar15 + 0x58);
        in_stack_00000040 = *(undefined8 *)(lVar15 + 0x50);
        in_stack_00000030 = uVar3;
        uVar17 = FUN_01431624(&stack0x00000030,0);
        _fStack0000000000000028 = CONCAT44((int)uVar3,uVar17);
        lVar6 = FUN_0269109c(&stack0x00000028,0);
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0145eaf8;
        uVar13 = *(uint *)(plVar7 + 3);
        if (uVar13 < 4) goto LAB_0145eaf4;
        plVar7[7] = lVar6;
        if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0) {
          lVar6 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                     ,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar6 == 0) goto LAB_0145eaf8;
          uVar13 = *(uint *)(plVar7 + 3);
        }
        if (uVar13 < 5) goto LAB_0145eaf4;
        plVar7[8] = *(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
        if (*unaff_x29 == 0) goto LAB_0145eaf0;
        lVar6 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_0145eaf8;
        if (*(uint *)(plVar7 + 3) < 6) goto LAB_0145eaf4;
        plVar7[9] = lVar6;
        uVar3 = FUN_01600844(plVar7,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar3,0);
        cVar10 = DAT_03774e1e;
      }
      fVar18 = *(float *)(plVar1 + 6);
      fVar16 = *(float *)((long)plVar1 + 0x34);
      _fStack0000000000000028 = plVar1[6];
      if (cVar10 == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03774e1e = '\x01';
        fVar16 = fStack000000000000002c;
        fVar18 = fStack0000000000000028;
      }
      if ((fVar18 != *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 8)) ||
         (fVar16 != *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc))) {
        lVar6 = *unaff_x29;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_0145eaf0;
        if (((1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x18)) && (*(char *)(lVar6 + 0x27) != '\0')) &&
           (1 < *(int *)(unaff_x19 + 0x28))) {
          plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
          if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
             (lVar6 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Collections_Generic_List<char>_Clear__,
                                         *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
          goto LAB_0145eaf8;
          if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
          plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
          lVar6 = FUN_01444238(lVar15,0);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_0145eaf8;
          uVar13 = *(uint *)(plVar7 + 3);
          if (uVar13 < 2) goto LAB_0145eaf4;
          plVar7[5] = lVar6;
          if (*(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo != 0) {
            lVar6 = thunk_FUN_00d6225c(*(long *)
                                        UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo
                                       ,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar6 == 0) goto LAB_0145eaf8;
            uVar13 = *(uint *)(plVar7 + 3);
          }
          if (uVar13 < 3) goto LAB_0145eaf4;
          plVar7[6] = *(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo;
          _fStack0000000000000028 = plVar1[6];
          lVar6 = FUN_0269109c(&stack0x00000028,0);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_0145eaf8;
          uVar13 = *(uint *)(plVar7 + 3);
          if (uVar13 < 4) goto LAB_0145eaf4;
          plVar7[7] = lVar6;
          if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0)
          {
            lVar6 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                       ,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar6 == 0) goto LAB_0145eaf8;
            uVar13 = *(uint *)(plVar7 + 3);
          }
          if (uVar13 < 5) goto LAB_0145eaf4;
          plVar7[8] = *(long *)
                       Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
          if (*unaff_x29 == 0) goto LAB_0145eaf0;
          lVar6 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_0145eaf8;
          if (*(uint *)(plVar7 + 3) < 6) goto LAB_0145eaf4;
          plVar7[9] = lVar6;
          uVar3 = FUN_01600844(plVar7,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar3,0);
        }
      }
      uVar5 = FUN_014440c0(lVar15,0);
      uVar13 = 0x80000000;
      if ((uVar5 & 1) != 0) {
        lVar6 = plVar1[5];
        fVar18 = *(float *)((long)plVar1 + 0x2c);
        lVar8 = plVar1[6];
        uVar19 = *(undefined4 *)((long)plVar1 + 0x34);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar17 = *(undefined4 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar16 = (float)FUN_01459ad4((int)lVar6,fVar18,(int)lVar8,uVar19,lVar15,uVar3,uVar17);
        uVar11 = 0x80000000;
        if (fVar16 * fVar18 != INFINITY) {
          uVar11 = (int)(fVar16 * fVar18);
        }
        if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar11) {
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
            if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)StringLiteral_12496 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                           *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
            plVar7[4] = *(long *)StringLiteral_12496;
            lVar6 = FUN_01444238(lVar15,0);
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 2) goto LAB_0145eaf4;
            plVar7[5] = lVar6;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar7 + 0x40)
                                        );
              if (lVar6 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 3) goto LAB_0145eaf4;
            plVar7[6] = *(long *)StringLiteral_3287;
            _fStack0000000000000028 = CONCAT44(fVar18,fVar16);
            lVar6 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 4) goto LAB_0145eaf4;
            plVar7[7] = lVar6;
            if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
              lVar6 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo
                                         ,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar6 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 5) goto LAB_0145eaf4;
            plVar7[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
            lVar6 = FUN_0176eb1c(&stack0x00000058,0);
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 6) goto LAB_0145eaf4;
            plVar7[9] = lVar6;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar7 + 0x40)
                                        );
              if (lVar6 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 7) goto LAB_0145eaf4;
            plVar7[10] = *(long *)StringLiteral_3287;
            lVar6 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar7 + 3) < 8) goto LAB_0145eaf4;
            plVar7[0xb] = lVar6;
            uVar3 = FUN_01600844(plVar7,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar3,0);
          }
          uStack0000000000000058 = 0x80000000;
          if (fVar16 != INFINITY) {
            uStack0000000000000058 = (int)fVar16;
          }
          uStack0000000000000054 = uVar13;
          if (fVar18 != INFINITY) {
            uStack0000000000000054 = (int)fVar18;
          }
        }
        if (4 < *(int *)(unaff_x19 + 0x28)) {
          if ((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x70), lVar6 == 0))
          goto LAB_0145eaf0;
          FUN_0132138c(lVar6,uVar14 & 0xffffffff,&stack0x00000068,*(undefined8 *)StringLiteral_11624
                      );
          if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
          uVar4 = *(undefined8 *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10);
          in_stack_00000018._4_4_ = iStack000000000000005c;
          uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000018 + 4);
          if ((plVar1[3] == 0) || (lVar6 = *(long *)(plVar1[3] + 0x10), lVar6 == 0))
          goto LAB_0145eaf0;
          FUN_0132138c(lVar6,0,&stack0x00000068,
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                      );
          if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
          uVar9 = FUN_0144461c(CONCAT44(uStack000000000000006c,uStack0000000000000068),0);
          uVar3 = FUN_01600ba0(*(undefined8 *)StringLiteral_895,uVar4,uVar3,uVar9,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar3,0);
        }
      }
      uVar5 = FUN_014440c0(lVar15,0);
      if ((uVar5 & 1) == 0) {
        lVar6 = plVar1[5];
        fVar18 = *(float *)((long)plVar1 + 0x2c);
        lVar8 = plVar1[6];
        uVar19 = *(undefined4 *)((long)plVar1 + 0x34);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar17 = *(undefined4 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar16 = (float)FUN_01459ad4((int)lVar6,fVar18,(int)lVar8,uVar19,lVar15,uVar3,uVar17);
        uVar11 = uVar13;
        if (fVar16 * fVar18 != INFINITY) {
          uVar11 = (int)(fVar16 * fVar18);
        }
        if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar11) {
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
            if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)StringLiteral_12496 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                           *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_0145eaf8:
              uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar3,0);
            }
            if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
            plVar7[4] = *(long *)StringLiteral_12496;
            lVar15 = FUN_01444238(lVar15,0);
            if ((lVar15 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 2) goto LAB_0145eaf4;
            plVar7[5] = lVar15;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                          *(undefined8 *)(*plVar7 + 0x40));
              if (lVar15 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 3) goto LAB_0145eaf4;
            plVar7[6] = *(long *)StringLiteral_3287;
            _fStack0000000000000028 = CONCAT44(fVar18,fVar16);
            lVar15 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar15 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 4) goto LAB_0145eaf4;
            plVar7[7] = lVar15;
            if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
              lVar15 = thunk_FUN_00d6225c(*(long *)
                                           System_Collections_Generic_IList<Vector3>_TypeInfo,
                                          *(undefined8 *)(*plVar7 + 0x40));
              if (lVar15 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 5) goto LAB_0145eaf4;
            plVar7[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
            lVar15 = FUN_0176eb1c(&stack0x00000058,0);
            if ((lVar15 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            uVar11 = *(uint *)(plVar7 + 3);
            if (uVar11 < 6) goto LAB_0145eaf4;
            plVar7[9] = lVar15;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                          *(undefined8 *)(*plVar7 + 0x40));
              if (lVar15 == 0) goto LAB_0145eaf8;
              uVar11 = *(uint *)(plVar7 + 3);
            }
            if (uVar11 < 7) goto LAB_0145eaf4;
            plVar7[10] = *(long *)StringLiteral_3287;
            lVar15 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
            if ((lVar15 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar7 + 3) < 8) goto LAB_0145eaf4;
            plVar7[0xb] = lVar15;
            uVar3 = FUN_01600844(plVar7,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar3,0);
          }
          uStack0000000000000058 = uVar13;
          if (fVar16 != INFINITY) {
            uStack0000000000000058 = (int)fVar16;
          }
          uStack0000000000000054 = uVar13;
          if (fVar18 != INFINITY) {
            uStack0000000000000054 = (int)fVar18;
          }
        }
      }
    }
    lVar15 = *unaff_x29;
    uVar14 = uVar14 + 1;
    if (lVar15 == 0) goto LAB_0145eaf0;
  }
  if (*(char *)(lVar15 + 0x26) != '\0') {
    if ((int)uStack0000000000000058 <= iVar12 * 5) {
      uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
      uVar3 = FUN_015f6780(*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,uVar3,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar3,0);
    }
    if ((int)uStack0000000000000054 <= iVar12 * 5) {
      uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
      uVar3 = FUN_015f6780(*(undefined8 *)StringLiteral_2854,uVar3,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar3,0);
    }
    uVar13 = uStack0000000000000058;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = uStack0000000000000054;
    if ((uVar13 & uVar13 - 1) == 0) {
      uStack0000000000000058 = uStack0000000000000058 + iVar12 * -2;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      uStack0000000000000054 = uStack0000000000000054 + iVar12 * -2;
    }
    if ((int)uStack0000000000000058 < 1) {
      uStack0000000000000058 = 1;
    }
    if ((int)uStack0000000000000054 < 1) {
      uStack0000000000000054 = 1;
    }
  }
  if (4 < *(int *)(unaff_x19 + 0x28)) {
    uVar3 = FUN_0176eb1c(&stack0x00000058,0);
    uVar4 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
    uVar3 = FUN_0160073c(*(undefined8 *)
                          UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,uVar3,
                         *(undefined8 *)StringLiteral_3287,uVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar3,0);
  }
  *(uint *)(plVar1 + 7) = uStack0000000000000058;
  *(uint *)((long)plVar1 + 0x3c) = uStack0000000000000054;
  iStack000000000000005c = iStack000000000000005c + 1;
  lVar15 = *unaff_x29;
  if (lVar15 == 0) goto LAB_0145eaf0;
  goto LAB_0145da34;
}


