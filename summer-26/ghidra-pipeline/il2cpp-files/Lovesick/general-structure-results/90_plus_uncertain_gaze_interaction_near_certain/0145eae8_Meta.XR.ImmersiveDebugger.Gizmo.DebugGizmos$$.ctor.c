/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$.ctor
ENTRY_POINT: 0145eae8
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  uint uVar13;
  ulong uVar14;
  long *unaff_x28;
  long *unaff_x29;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
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
  long *in_stack_00000068;
  
  puVar1 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
  uStack0000000000000010 = 0;
  iStack0000000000000014 = 0;
  iStack0000000000000018 = 0;
  iVar12 = 0;
  while (*(long *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x18) <= iVar12) {
      *(undefined4 *)(param_1 + 0x18) = uStack0000000000000010;
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
      if ((*unaff_x29 == 0) || (lVar11 = *(long *)(*unaff_x29 + 0x58), lVar11 == 0)) break;
      uStack0000000000000050 = *(undefined4 *)(lVar11 + 0x18);
      uVar4 = FUN_0176eb1c(&stack0x00000050,0);
      uVar3 = FUN_0160073c(*(undefined8 *)PTR_DAT_033ede28,uVar3,*(undefined8 *)StringLiteral_504,
                           uVar4,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar3,0);
      param_1 = *unaff_x29;
      if (param_1 == 0) break;
    }
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (FUN_0132138c(*(long *)(param_1 + 0x58),iStack000000000000005c,&stack0x00000068,
                     *(undefined8 *)PTR_DAT_033ee2d8), plVar2 = in_stack_00000068,
       in_stack_00000068 == (long *)0x0)) break;
    in_stack_00000068[7] = 0x100000001;
    uStack0000000000000054 = 1;
    uStack0000000000000058 = 1;
    lVar11 = *unaff_x29;
    if (lVar11 == 0) break;
    uVar14 = 0;
    while( true ) {
      if (*(long *)(lVar11 + 0x70) == 0) goto LAB_0145eaf0;
      if ((long)*(int *)(*(long *)(lVar11 + 0x70) + 0x18) <= (long)uVar14) break;
      cVar9 = *(char *)(lVar11 + 0x49);
      uVar3 = *(undefined8 *)(lVar11 + 0x80);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01457470(uVar14 & 0xffffffff,cVar9 != '\0',uVar3);
      if ((uVar5 & 1) != 0) {
        lVar11 = plVar2[2];
        if (lVar11 == 0) goto LAB_0145eaf0;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_0145eaf4;
        lVar11 = *(long *)(lVar11 + uVar14 * 8 + 0x20);
        if (4 < *(int *)(unaff_x19 + 0x28)) {
          iStack000000000000001c = iStack000000000000005c;
          uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000018 + 4);
          if (((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x70), lVar6 == 0)) ||
             (FUN_0132138c(lVar6,uVar14 & 0xffffffff,&stack0x00000068,
                           *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
          goto LAB_0145eaf0;
          uVar3 = FUN_01600b5c(*(undefined8 *)StringLiteral_4207,uVar3,in_stack_00000068[2],0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar3,0);
        }
        if (lVar11 == 0) goto LAB_0145eaf0;
        in_stack_00000038 = *(undefined8 *)(lVar11 + 0x48);
        uVar3 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_00000048 = *(undefined8 *)(lVar11 + 0x58);
        in_stack_00000040 = *(undefined8 *)(lVar11 + 0x50);
        in_stack_00000030 = uVar3;
        fVar15 = (float)FUN_01431624(&stack0x00000030,0);
        _fStack0000000000000028 = CONCAT44((float)uVar3,fVar15);
        fVar17 = (float)uVar3;
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444(puVar1);
          fVar15 = (float)_fStack0000000000000028;
          DAT_03774e1e = '\x01';
          fVar17 = fStack000000000000002c;
        }
        if ((fVar15 == *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 8)) &&
           (fVar17 == *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc))) {
LAB_0145dcac:
          cVar9 = '\x01';
        }
        else {
          if ((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x58), lVar6 == 0))
          goto LAB_0145eaf0;
          if ((*(int *)(lVar6 + 0x18) < 2) || (*(int *)(unaff_x19 + 0x28) < 2)) goto LAB_0145dcac;
          plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
          if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
             (lVar6 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Collections_Generic_List<char>_Clear__,
                                         *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
          goto LAB_0145eaf8;
          if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
          plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
          lVar6 = FUN_01444238(lVar11,0);
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
          in_stack_00000038 = *(undefined8 *)(lVar11 + 0x48);
          uVar3 = *(undefined8 *)(lVar11 + 0x40);
          in_stack_00000048 = *(undefined8 *)(lVar11 + 0x58);
          in_stack_00000040 = *(undefined8 *)(lVar11 + 0x50);
          in_stack_00000030 = uVar3;
          uVar16 = FUN_01431624(&stack0x00000030,0);
          _fStack0000000000000028 = CONCAT44((int)uVar3,uVar16);
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
          cVar9 = DAT_03774e1e;
        }
        fVar17 = *(float *)(plVar2 + 6);
        fVar15 = *(float *)((long)plVar2 + 0x34);
        _fStack0000000000000028 = plVar2[6];
        if (cVar9 == '\0') {
          thunk_FUN_00d48444(puVar1);
          DAT_03774e1e = '\x01';
          fVar15 = fStack000000000000002c;
          fVar17 = fStack0000000000000028;
        }
        if ((fVar17 != *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 8)) ||
           (fVar15 != *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc))) {
          lVar6 = *unaff_x29;
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_0145eaf0;
          if (((1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x18)) && (*(char *)(lVar6 + 0x27) != '\0'))
             && (1 < *(int *)(unaff_x19 + 0x28))) {
            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
            if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
               (lVar6 = thunk_FUN_00d6225c(*(long *)
                                            Method_System_Collections_Generic_List<char>_Clear__,
                                           *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_0145eaf8;
            if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
            plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
            lVar6 = FUN_01444238(lVar11,0);
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
            _fStack0000000000000028 = plVar2[6];
            lVar6 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0145eaf8;
            uVar13 = *(uint *)(plVar7 + 3);
            if (uVar13 < 4) goto LAB_0145eaf4;
            plVar7[7] = lVar6;
            if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0
               ) {
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
        uVar5 = FUN_014440c0(lVar11,0);
        uVar13 = 0x80000000;
        if ((uVar5 & 1) != 0) {
          lVar6 = plVar2[5];
          fVar17 = *(float *)((long)plVar2 + 0x2c);
          lVar8 = plVar2[6];
          uVar18 = *(undefined4 *)((long)plVar2 + 0x34);
          uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
          uVar16 = *(undefined4 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar15 = (float)FUN_01459ad4((int)lVar6,fVar17,(int)lVar8,uVar18,lVar11,uVar3,uVar16);
          uVar10 = 0x80000000;
          if (fVar15 * fVar17 != INFINITY) {
            uVar10 = (int)(fVar15 * fVar17);
          }
          if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar10) {
            if (4 < *(int *)(unaff_x19 + 0x28)) {
              plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
              if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
              if ((*(long *)StringLiteral_12496 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
              goto LAB_0145eaf8;
              if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
              plVar7[4] = *(long *)StringLiteral_12496;
              lVar6 = FUN_01444238(lVar11,0);
              if ((lVar6 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 2) goto LAB_0145eaf4;
              plVar7[5] = lVar6;
              if (*(long *)StringLiteral_3287 != 0) {
                lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                           *(undefined8 *)(*plVar7 + 0x40));
                if (lVar6 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 3) goto LAB_0145eaf4;
              plVar7[6] = *(long *)StringLiteral_3287;
              _fStack0000000000000028 = CONCAT44(fVar17,fVar15);
              lVar6 = FUN_0269109c(&stack0x00000028,0);
              if ((lVar6 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 4) goto LAB_0145eaf4;
              plVar7[7] = lVar6;
              if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
                lVar6 = thunk_FUN_00d6225c(*(long *)
                                            System_Collections_Generic_IList<Vector3>_TypeInfo,
                                           *(undefined8 *)(*plVar7 + 0x40));
                if (lVar6 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 5) goto LAB_0145eaf4;
              plVar7[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
              lVar6 = FUN_0176eb1c(&stack0x00000058,0);
              if ((lVar6 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 6) goto LAB_0145eaf4;
              plVar7[9] = lVar6;
              if (*(long *)StringLiteral_3287 != 0) {
                lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                           *(undefined8 *)(*plVar7 + 0x40));
                if (lVar6 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 7) goto LAB_0145eaf4;
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
            if (fVar15 != INFINITY) {
              uStack0000000000000058 = (int)fVar15;
            }
            uStack0000000000000054 = uVar13;
            if (fVar17 != INFINITY) {
              uStack0000000000000054 = (int)fVar17;
            }
          }
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            if (((*unaff_x29 == 0) || (lVar6 = *(long *)(*unaff_x29 + 0x70), lVar6 == 0)) ||
               (FUN_0132138c(lVar6,uVar14 & 0xffffffff,&stack0x00000068,
                             *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
            goto LAB_0145eaf0;
            lVar6 = in_stack_00000068[2];
            iStack000000000000001c = iStack000000000000005c;
            uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000018 + 4);
            if (((plVar2[3] == 0) || (lVar8 = *(long *)(plVar2[3] + 0x10), lVar8 == 0)) ||
               (FUN_0132138c(lVar8,0,&stack0x00000068,
                             *(undefined8 *)
                              Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                            ), in_stack_00000068 == (long *)0x0)) goto LAB_0145eaf0;
            uVar4 = FUN_0144461c(in_stack_00000068,0);
            uVar3 = FUN_01600ba0(*(undefined8 *)StringLiteral_895,lVar6,uVar3,uVar4,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar3,0);
          }
        }
        uVar5 = FUN_014440c0(lVar11,0);
        if ((uVar5 & 1) == 0) {
          lVar6 = plVar2[5];
          fVar17 = *(float *)((long)plVar2 + 0x2c);
          lVar8 = plVar2[6];
          uVar18 = *(undefined4 *)((long)plVar2 + 0x34);
          uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
          uVar16 = *(undefined4 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar15 = (float)FUN_01459ad4((int)lVar6,fVar17,(int)lVar8,uVar18,lVar11,uVar3,uVar16);
          uVar10 = uVar13;
          if (fVar15 * fVar17 != INFINITY) {
            uVar10 = (int)(fVar15 * fVar17);
          }
          if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar10) {
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
              lVar11 = FUN_01444238(lVar11,0);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 2) {
LAB_0145eaf4:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[5] = lVar11;
              if (*(long *)StringLiteral_3287 != 0) {
                lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                            *(undefined8 *)(*plVar7 + 0x40));
                if (lVar11 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 3) goto LAB_0145eaf4;
              plVar7[6] = *(long *)StringLiteral_3287;
              _fStack0000000000000028 = CONCAT44(fVar17,fVar15);
              lVar11 = FUN_0269109c(&stack0x00000028,0);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 4) goto LAB_0145eaf4;
              plVar7[7] = lVar11;
              if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
                lVar11 = thunk_FUN_00d6225c(*(long *)
                                             System_Collections_Generic_IList<Vector3>_TypeInfo,
                                            *(undefined8 *)(*plVar7 + 0x40));
                if (lVar11 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 5) goto LAB_0145eaf4;
              plVar7[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
              lVar11 = FUN_0176eb1c(&stack0x00000058,0);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
              goto LAB_0145eaf8;
              uVar10 = *(uint *)(plVar7 + 3);
              if (uVar10 < 6) goto LAB_0145eaf4;
              plVar7[9] = lVar11;
              if (*(long *)StringLiteral_3287 != 0) {
                lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                            *(undefined8 *)(*plVar7 + 0x40));
                if (lVar11 == 0) goto LAB_0145eaf8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              if (uVar10 < 7) goto LAB_0145eaf4;
              plVar7[10] = *(long *)StringLiteral_3287;
              lVar11 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
              if ((lVar11 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
              goto LAB_0145eaf8;
              if (*(uint *)(plVar7 + 3) < 8) goto LAB_0145eaf4;
              plVar7[0xb] = lVar11;
              uVar3 = FUN_01600844(plVar7,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar3,0);
            }
            uStack0000000000000058 = uVar13;
            if (fVar15 != INFINITY) {
              uStack0000000000000058 = (int)fVar15;
            }
            uStack0000000000000054 = uVar13;
            if (fVar17 != INFINITY) {
              uStack0000000000000054 = (int)fVar17;
            }
          }
        }
      }
      lVar11 = *unaff_x29;
      uVar14 = uVar14 + 1;
      if (lVar11 == 0) goto LAB_0145eaf0;
    }
    if (*(char *)(lVar11 + 0x26) != '\0') {
      if ((int)uStack0000000000000058 <= iStack0000000000000018) {
        uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        uVar3 = FUN_015f6780(*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,uVar3,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar3,0);
      }
      if ((int)uStack0000000000000054 <= iStack0000000000000018) {
        uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
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
      uVar10 = uStack0000000000000054;
      if ((uVar13 & uVar13 - 1) == 0) {
        uStack0000000000000058 = uStack0000000000000058 - iStack0000000000000014;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar10 & uVar10 - 1) == 0) {
        uStack0000000000000054 = uStack0000000000000054 - iStack0000000000000014;
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
    *(uint *)(plVar2 + 7) = uStack0000000000000058;
    *(uint *)((long)plVar2 + 0x3c) = uStack0000000000000054;
    iVar12 = iStack000000000000005c + 1;
    param_1 = *unaff_x29;
    iStack000000000000005c = iVar12;
    if (param_1 == 0) break;
  }
LAB_0145eaf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


