/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPlane
ENTRY_POINT: 0145db40
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPlane(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 uVar10;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  long unaff_d12;
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
  
  do {
    cVar7 = *(char *)(param_1 + 0x49);
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_01457470(unaff_x23 & 0xffffffff,cVar7 != '\0',uVar10);
    if ((uVar2 & 1) != 0) {
      lVar9 = unaff_x22[2];
      if (lVar9 == 0) goto LAB_0145eaf0;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x23) goto LAB_0145eaf4;
      lVar9 = *(long *)(lVar9 + unaff_x23 * 8 + 0x20);
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        iStack000000000000001c = iStack000000000000005c;
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,(long)&stack0x00000018 + 4);
        if (((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0)) ||
           (FUN_0132138c(lVar3,unaff_x23 & 0xffffffff,&stack0x00000068,
                         *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
        goto LAB_0145eaf0;
        uVar10 = FUN_01600b5c(*(undefined8 *)StringLiteral_4207,uVar10,in_stack_00000068[2],0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
      }
      if (lVar9 == 0) goto LAB_0145eaf0;
      in_stack_00000038 = *(undefined8 *)(lVar9 + 0x48);
      uVar10 = *(undefined8 *)(lVar9 + 0x40);
      in_stack_00000048 = *(undefined8 *)(lVar9 + 0x58);
      in_stack_00000040 = *(undefined8 *)(lVar9 + 0x50);
      in_stack_00000030 = uVar10;
      fVar11 = (float)FUN_01431624(&stack0x00000030,0);
      _fStack0000000000000028 = CONCAT44((float)uVar10,fVar11);
      fVar13 = (float)uVar10;
      if (*(char *)(unaff_x27 + 0xe1e) == '\0') {
        thunk_FUN_00d48444();
        fVar11 = (float)_fStack0000000000000028;
        *(undefined1 *)(unaff_x27 + 0xe1e) = 1;
        fVar13 = fStack000000000000002c;
      }
      if ((fVar11 == *(float *)(*(long *)(*unaff_x21 + 0xb8) + 8)) &&
         (fVar13 == *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc))) {
LAB_0145dcac:
        cVar7 = '\x01';
      }
      else {
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x58), lVar3 == 0))
        goto LAB_0145eaf0;
        if ((*(int *)(lVar3 + 0x18) < 2) || (*(int *)(unaff_x19 + 0x28) < 2)) goto LAB_0145dcac;
        plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
        if (plVar4 == (long *)0x0) goto LAB_0145eaf0;
        if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
           (lVar3 = thunk_FUN_00d6225c(*(long *)Method_System_Collections_Generic_List<char>_Clear__
                                       ,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
        goto LAB_0145eaf8;
        if ((int)plVar4[3] == 0) goto LAB_0145eaf4;
        plVar4[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
        lVar3 = FUN_01444238(lVar9,0);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0145eaf8;
        uVar8 = *(uint *)(plVar4 + 3);
        if (uVar8 < 2) goto LAB_0145eaf4;
        plVar4[5] = lVar3;
        if (*(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
            != 0) {
          lVar3 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                                     ,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar3 == 0) goto LAB_0145eaf8;
          uVar8 = *(uint *)(plVar4 + 3);
        }
        if (uVar8 < 3) goto LAB_0145eaf4;
        plVar4[6] = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
        ;
        in_stack_00000038 = *(undefined8 *)(lVar9 + 0x48);
        uVar10 = *(undefined8 *)(lVar9 + 0x40);
        in_stack_00000048 = *(undefined8 *)(lVar9 + 0x58);
        in_stack_00000040 = *(undefined8 *)(lVar9 + 0x50);
        in_stack_00000030 = uVar10;
        uVar12 = FUN_01431624(&stack0x00000030,0);
        _fStack0000000000000028 = CONCAT44((int)uVar10,uVar12);
        lVar3 = FUN_0269109c(&stack0x00000028,0);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0145eaf8;
        uVar8 = *(uint *)(plVar4 + 3);
        if (uVar8 < 4) goto LAB_0145eaf4;
        plVar4[7] = lVar3;
        if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0) {
          lVar3 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                     ,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar3 == 0) goto LAB_0145eaf8;
          uVar8 = *(uint *)(plVar4 + 3);
        }
        if (uVar8 < 5) goto LAB_0145eaf4;
        plVar4[8] = *(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
        if (*unaff_x29 == 0) goto LAB_0145eaf0;
        lVar3 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0145eaf8;
        if (*(uint *)(plVar4 + 3) < 6) goto LAB_0145eaf4;
        plVar4[9] = lVar3;
        uVar10 = FUN_01600844(plVar4,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar10,0);
        cVar7 = *(char *)(unaff_x27 + 0xe1e);
      }
      fVar13 = *(float *)(unaff_x22 + 6);
      fVar11 = *(float *)((long)unaff_x22 + 0x34);
      _fStack0000000000000028 = unaff_x22[6];
      if (cVar7 == '\0') {
        thunk_FUN_00d48444();
        *(undefined1 *)(unaff_x27 + 0xe1e) = 1;
        fVar11 = fStack000000000000002c;
        fVar13 = fStack0000000000000028;
      }
      if ((fVar13 != *(float *)(*(long *)(*unaff_x21 + 0xb8) + 8)) ||
         (fVar11 != *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc))) {
        lVar3 = *unaff_x29;
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_0145eaf0;
        if (((1 < *(int *)(*(long *)(lVar3 + 0x58) + 0x18)) && (*(char *)(lVar3 + 0x27) != '\0')) &&
           (1 < *(int *)(unaff_x19 + 0x28))) {
          plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar4 == (long *)0x0) goto LAB_0145eaf0;
          if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
             (lVar3 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Collections_Generic_List<char>_Clear__,
                                         *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
          goto LAB_0145eaf8;
          if ((int)plVar4[3] == 0) goto LAB_0145eaf4;
          plVar4[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
          lVar3 = FUN_01444238(lVar9,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0145eaf8;
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 < 2) goto LAB_0145eaf4;
          plVar4[5] = lVar3;
          if (*(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)
                                        UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo
                                       ,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (uVar8 < 3) goto LAB_0145eaf4;
          plVar4[6] = *(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo;
          _fStack0000000000000028 = unaff_x22[6];
          lVar3 = FUN_0269109c(&stack0x00000028,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0145eaf8;
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 < 4) goto LAB_0145eaf4;
          plVar4[7] = lVar3;
          if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0)
          {
            lVar3 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                       ,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
          }
          if (uVar8 < 5) goto LAB_0145eaf4;
          plVar4[8] = *(long *)
                       Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
          if (*unaff_x29 == 0) goto LAB_0145eaf0;
          lVar3 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0145eaf8;
          if (*(uint *)(plVar4 + 3) < 6) goto LAB_0145eaf4;
          plVar4[9] = lVar3;
          uVar10 = FUN_01600844(plVar4,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar10,0);
        }
      }
      uVar2 = FUN_014440c0(lVar9,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = unaff_x22[5];
        fVar13 = *(float *)((long)unaff_x22 + 0x2c);
        lVar5 = unaff_x22[6];
        uVar14 = *(undefined4 *)((long)unaff_x22 + 0x34);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar12 = *(undefined4 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar11 = (float)FUN_01459ad4((int)lVar3,fVar13,(int)lVar5,uVar14,lVar9,uVar10,uVar12);
        uVar8 = unaff_w20;
        if (fVar11 * fVar13 != INFINITY) {
          uVar8 = (int)(fVar11 * fVar13);
        }
        if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar8) {
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
            if (plVar4 == (long *)0x0) {
LAB_0145eaf0:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if ((*(long *)StringLiteral_12496 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                           *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            if ((int)plVar4[3] == 0) goto LAB_0145eaf4;
            plVar4[4] = *(long *)StringLiteral_12496;
            lVar3 = FUN_01444238(lVar9,0);
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 2) goto LAB_0145eaf4;
            plVar4[5] = lVar3;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar4 + 0x40)
                                        );
              if (lVar3 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 3) goto LAB_0145eaf4;
            plVar4[6] = *(long *)StringLiteral_3287;
            _fStack0000000000000028 = CONCAT44(fVar13,fVar11);
            lVar3 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 4) goto LAB_0145eaf4;
            plVar4[7] = lVar3;
            if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
              lVar3 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo
                                         ,*(undefined8 *)(*plVar4 + 0x40));
              if (lVar3 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 5) goto LAB_0145eaf4;
            plVar4[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
            lVar3 = FUN_0176eb1c(&stack0x00000058,0);
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 6) goto LAB_0145eaf4;
            plVar4[9] = lVar3;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar4 + 0x40)
                                        );
              if (lVar3 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 7) goto LAB_0145eaf4;
            plVar4[10] = *(long *)StringLiteral_3287;
            lVar3 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar4 + 3) < 8) goto LAB_0145eaf4;
            plVar4[0xb] = lVar3;
            uVar10 = FUN_01600844(plVar4,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar10,0);
          }
          uStack0000000000000058 = unaff_w20;
          if (fVar11 != INFINITY) {
            uStack0000000000000058 = (int)fVar11;
          }
          uStack0000000000000054 = unaff_w20;
          if (fVar13 != INFINITY) {
            uStack0000000000000054 = (int)fVar13;
          }
        }
        if (4 < *(int *)(unaff_x19 + 0x28)) {
          if (((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0)) ||
             (FUN_0132138c(lVar3,unaff_x23 & 0xffffffff,&stack0x00000068,
                           *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
          goto LAB_0145eaf0;
          lVar3 = in_stack_00000068[2];
          iStack000000000000001c = iStack000000000000005c;
          uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,(long)&stack0x00000018 + 4);
          if (((unaff_x22[3] == 0) || (lVar5 = *(long *)(unaff_x22[3] + 0x10), lVar5 == 0)) ||
             (FUN_0132138c(lVar5,0,&stack0x00000068,
                           *(undefined8 *)
                            Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                          ), in_stack_00000068 == (long *)0x0)) goto LAB_0145eaf0;
          uVar6 = FUN_0144461c(in_stack_00000068,0);
          uVar10 = FUN_01600ba0(*(undefined8 *)StringLiteral_895,lVar3,uVar10,uVar6,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar10,0);
        }
      }
      uVar2 = FUN_014440c0(lVar9,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = unaff_x22[5];
        fVar13 = *(float *)((long)unaff_x22 + 0x2c);
        lVar5 = unaff_x22[6];
        uVar14 = *(undefined4 *)((long)unaff_x22 + 0x34);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar12 = *(undefined4 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar11 = (float)FUN_01459ad4((int)lVar3,fVar13,(int)lVar5,uVar14,lVar9,uVar10,uVar12);
        uVar8 = unaff_w20;
        if (fVar11 * fVar13 != INFINITY) {
          uVar8 = (int)(fVar11 * fVar13);
        }
        if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar8) {
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
            if (plVar4 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)StringLiteral_12496 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                           *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
LAB_0145eaf8:
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            if ((int)plVar4[3] == 0) goto LAB_0145eaf4;
            plVar4[4] = *(long *)StringLiteral_12496;
            lVar9 = FUN_01444238(lVar9,0);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 2) {
LAB_0145eaf4:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar4[5] = lVar9;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar9 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar4 + 0x40)
                                        );
              if (lVar9 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 3) goto LAB_0145eaf4;
            plVar4[6] = *(long *)StringLiteral_3287;
            _fStack0000000000000028 = CONCAT44(fVar13,fVar11);
            lVar9 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 4) goto LAB_0145eaf4;
            plVar4[7] = lVar9;
            if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
              lVar9 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo
                                         ,*(undefined8 *)(*plVar4 + 0x40));
              if (lVar9 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 5) goto LAB_0145eaf4;
            plVar4[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
            lVar9 = FUN_0176eb1c(&stack0x00000058,0);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            uVar8 = *(uint *)(plVar4 + 3);
            if (uVar8 < 6) goto LAB_0145eaf4;
            plVar4[9] = lVar9;
            if (*(long *)StringLiteral_3287 != 0) {
              lVar9 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar4 + 0x40)
                                        );
              if (lVar9 == 0) goto LAB_0145eaf8;
              uVar8 = *(uint *)(plVar4 + 3);
            }
            if (uVar8 < 7) goto LAB_0145eaf4;
            plVar4[10] = *(long *)StringLiteral_3287;
            lVar9 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar4 + 3) < 8) goto LAB_0145eaf4;
            plVar4[0xb] = lVar9;
            uVar10 = FUN_01600844(plVar4,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar10,0);
          }
          uStack0000000000000058 = unaff_w20;
          if (fVar11 != INFINITY) {
            uStack0000000000000058 = (int)fVar11;
          }
          uStack0000000000000054 = unaff_w20;
          if (fVar13 != INFINITY) {
            uStack0000000000000054 = (int)fVar13;
          }
        }
      }
    }
    param_1 = *unaff_x29;
    unaff_x23 = unaff_x23 + 1;
    if (param_1 == 0) goto LAB_0145eaf0;
    while( true ) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_0145eaf0;
      if ((long)unaff_x23 < (long)*(int *)(*(long *)(param_1 + 0x70) + 0x18)) break;
      if (*(char *)(param_1 + 0x26) != '\0') {
        if ((int)uStack0000000000000058 <= iStack0000000000000018) {
          uVar10 = (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
          uVar10 = FUN_015f6780(*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,uVar10,
                                0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar10,0);
        }
        if ((int)uStack0000000000000054 <= iStack0000000000000018) {
          uVar10 = (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
          uVar10 = FUN_015f6780(*(undefined8 *)StringLiteral_2854,uVar10,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar10,0);
        }
        uVar8 = uStack0000000000000058;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar1 = uStack0000000000000054;
        if ((uVar8 & uVar8 - 1) == 0) {
          uStack0000000000000058 = uStack0000000000000058 - iStack0000000000000014;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((uVar1 & uVar1 - 1) == 0) {
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
        uVar10 = FUN_0176eb1c(&stack0x00000058,0);
        uVar6 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
        uVar10 = FUN_0160073c(*(undefined8 *)
                               UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,uVar10,
                              *(undefined8 *)StringLiteral_3287,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
      }
      *(uint *)(unaff_x22 + 7) = uStack0000000000000058;
      *(uint *)((long)unaff_x22 + 0x3c) = uStack0000000000000054;
      iStack000000000000005c = iStack000000000000005c + 1;
      lVar9 = *unaff_x29;
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0)) goto LAB_0145eaf0;
      if (*(int *)(*(long *)(lVar9 + 0x58) + 0x18) <= iStack000000000000005c) {
        *(undefined4 *)(lVar9 + 0x18) = uStack0000000000000010;
        if (3 < *(int *)(unaff_x19 + 0x28)) {
          in_stack_00000020 = FUN_02040648(in_stack_00000008,0);
          if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo);
          }
          uVar10 = FUN_01789268(&stack0x00000020,0);
          uVar10 = FUN_015f5b28(*(undefined8 *)
                                 Method_Unity_Jobs_IJobExtensions_Schedule<DeferredLights_CullLightsJob>__
                                ,uVar10,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar10,0);
        }
        return 0;
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar10 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
        if ((*unaff_x29 == 0) || (lVar9 = *(long *)(*unaff_x29 + 0x58), lVar9 == 0))
        goto LAB_0145eaf0;
        uStack0000000000000050 = *(undefined4 *)(lVar9 + 0x18);
        uVar6 = FUN_0176eb1c(&stack0x00000050,0);
        uVar10 = FUN_0160073c(*(undefined8 *)PTR_DAT_033ede28,uVar10,
                              *(undefined8 *)StringLiteral_504,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
        lVar9 = *unaff_x29;
        if (lVar9 == 0) goto LAB_0145eaf0;
      }
      if ((*(long *)(lVar9 + 0x58) == 0) ||
         (FUN_0132138c(*(long *)(lVar9 + 0x58),iStack000000000000005c,&stack0x00000068,
                       *(undefined8 *)PTR_DAT_033ee2d8), in_stack_00000068 == (long *)0x0))
      goto LAB_0145eaf0;
      in_stack_00000068[7] = unaff_d12;
      uStack0000000000000054 = 1;
      uStack0000000000000058 = 1;
      param_1 = *unaff_x29;
      if (param_1 == 0) goto LAB_0145eaf0;
      unaff_x23 = 0;
      unaff_x22 = in_stack_00000068;
    }
    param_2 = *unaff_x28;
  } while( true );
}


