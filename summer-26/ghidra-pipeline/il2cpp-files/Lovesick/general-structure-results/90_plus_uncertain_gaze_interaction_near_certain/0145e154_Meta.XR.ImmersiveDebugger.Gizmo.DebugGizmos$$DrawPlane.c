/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPlane
ENTRY_POINT: 0145e154
PROGRAM: Lovesick-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_9;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_9
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPlane(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char cVar8;
  uint uVar9;
  uint in_w8;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar10;
  undefined4 uVar11;
  ulong unaff_d8;
  float unaff_s9;
  float fVar12;
  undefined4 uVar13;
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
  
  while (7 < in_w8) {
    unaff_x25[0xb] = unaff_x26;
    uVar2 = FUN_01600844(unaff_x25,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar2,0);
    do {
      uStack0000000000000058 = unaff_w20;
      if (unaff_s9 != INFINITY) {
        uStack0000000000000058 = (int)unaff_s9;
      }
      uStack0000000000000054 = unaff_w20;
      if ((float)unaff_d8 != INFINITY) {
        uStack0000000000000054 = (int)(float)unaff_d8;
      }
      do {
        if (4 < *(int *)(unaff_x19 + 0x28)) {
          if (((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0)) ||
             (FUN_0132138c(lVar3,unaff_x23 & 0xffffffff,&stack0x00000068,
                           *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
          goto LAB_0145eaf0;
          lVar3 = in_stack_00000068[2];
          iStack000000000000001c = iStack000000000000005c;
          uVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,(long)&stack0x00000018 + 4);
          if (((unaff_x22[3] == 0) || (lVar4 = *(long *)(unaff_x22[3] + 0x10), lVar4 == 0)) ||
             (FUN_0132138c(lVar4,0,&stack0x00000068,
                           *(undefined8 *)
                            Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                          ), in_stack_00000068 == (long *)0x0)) goto LAB_0145eaf0;
          uVar5 = FUN_0144461c(in_stack_00000068,0);
          uVar2 = FUN_01600ba0(*(undefined8 *)StringLiteral_895,lVar3,uVar2,uVar5,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar2,0);
        }
        do {
          uVar6 = FUN_014440c0(unaff_x24,0);
          if ((uVar6 & 1) == 0) {
            lVar3 = unaff_x22[5];
            fVar12 = *(float *)((long)unaff_x22 + 0x2c);
            lVar4 = unaff_x22[6];
            uVar13 = *(undefined4 *)((long)unaff_x22 + 0x34);
            uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x28);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar10 = (float)FUN_01459ad4((int)lVar3,fVar12,(int)lVar4,uVar13,unaff_x24,uVar2,uVar11)
            ;
            uVar9 = unaff_w20;
            if (fVar10 * fVar12 != INFINITY) {
              uVar9 = (int)(fVar10 * fVar12);
            }
            if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar9) {
              if (4 < *(int *)(unaff_x19 + 0x28)) {
                plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
                if ((*(long *)StringLiteral_12496 != 0) &&
                   (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                               *(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
                goto LAB_0145eaf8;
                if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
                plVar7[4] = *(long *)StringLiteral_12496;
                lVar3 = FUN_01444238(unaff_x24,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_0145eaf8;
                uVar9 = *(uint *)(plVar7 + 3);
                if (uVar9 < 2) goto LAB_0145eaf4;
                plVar7[5] = lVar3;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                             *(undefined8 *)(*plVar7 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar9 = *(uint *)(plVar7 + 3);
                }
                if (uVar9 < 3) goto LAB_0145eaf4;
                plVar7[6] = *(long *)StringLiteral_3287;
                _fStack0000000000000028 = CONCAT44(fVar12,fVar10);
                lVar3 = FUN_0269109c(&stack0x00000028,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_0145eaf8;
                uVar9 = *(uint *)(plVar7 + 3);
                if (uVar9 < 4) goto LAB_0145eaf4;
                plVar7[7] = lVar3;
                if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)
                                              System_Collections_Generic_IList<Vector3>_TypeInfo,
                                             *(undefined8 *)(*plVar7 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar9 = *(uint *)(plVar7 + 3);
                }
                if (uVar9 < 5) goto LAB_0145eaf4;
                plVar7[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
                lVar3 = FUN_0176eb1c(&stack0x00000058,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_0145eaf8;
                uVar9 = *(uint *)(plVar7 + 3);
                if (uVar9 < 6) goto LAB_0145eaf4;
                plVar7[9] = lVar3;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                             *(undefined8 *)(*plVar7 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar9 = *(uint *)(plVar7 + 3);
                }
                if (uVar9 < 7) goto LAB_0145eaf4;
                plVar7[10] = *(long *)StringLiteral_3287;
                lVar3 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_0145eaf8;
                if (*(uint *)(plVar7 + 3) < 8) goto LAB_0145eaf4;
                plVar7[0xb] = lVar3;
                uVar2 = FUN_01600844(plVar7,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar2,0);
              }
              uStack0000000000000058 = unaff_w20;
              if (fVar10 != INFINITY) {
                uStack0000000000000058 = (int)fVar10;
              }
              uStack0000000000000054 = unaff_w20;
              if (fVar12 != INFINITY) {
                uStack0000000000000054 = (int)fVar12;
              }
            }
          }
          do {
            lVar3 = *unaff_x29;
            unaff_x23 = unaff_x23 + 1;
            if (lVar3 == 0) goto LAB_0145eaf0;
            while( true ) {
              if (*(long *)(lVar3 + 0x70) == 0) goto LAB_0145eaf0;
              if ((long)unaff_x23 < (long)*(int *)(*(long *)(lVar3 + 0x70) + 0x18)) break;
              if (*(char *)(lVar3 + 0x26) != '\0') {
                if ((int)uStack0000000000000058 <= iStack0000000000000018) {
                  uVar2 = (**(code **)(*unaff_x22 + 0x168))
                                    (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
                  uVar2 = FUN_015f6780(*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,
                                       uVar2,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02661754(uVar2,0);
                }
                if ((int)uStack0000000000000054 <= iStack0000000000000018) {
                  uVar2 = (**(code **)(*unaff_x22 + 0x168))
                                    (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
                  uVar2 = FUN_015f6780(*(undefined8 *)StringLiteral_2854,uVar2,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02661754(uVar2,0);
                }
                uVar9 = uStack0000000000000058;
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar1 = uStack0000000000000054;
                if ((uVar9 & uVar9 - 1) == 0) {
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
                uVar2 = FUN_0176eb1c(&stack0x00000058,0);
                uVar5 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
                uVar2 = FUN_0160073c(*(undefined8 *)
                                      UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,
                                     uVar2,*(undefined8 *)StringLiteral_3287,uVar5,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar2,0);
              }
              *(uint *)(unaff_x22 + 7) = uStack0000000000000058;
              *(uint *)((long)unaff_x22 + 0x3c) = uStack0000000000000054;
              iStack000000000000005c = iStack000000000000005c + 1;
              lVar3 = *unaff_x29;
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_0145eaf0;
              if (*(int *)(*(long *)(lVar3 + 0x58) + 0x18) <= iStack000000000000005c) {
                *(undefined4 *)(lVar3 + 0x18) = uStack0000000000000010;
                if (3 < *(int *)(unaff_x19 + 0x28)) {
                  in_stack_00000020 = FUN_02040648(in_stack_00000008,0);
                  if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo);
                  }
                  uVar2 = FUN_01789268(&stack0x00000020,0);
                  uVar2 = FUN_015f5b28(*(undefined8 *)
                                        Method_Unity_Jobs_IJobExtensions_Schedule<DeferredLights_CullLightsJob>__
                                       ,uVar2,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02660dac(uVar2,0);
                }
                return 0;
              }
              if (3 < *(int *)(unaff_x19 + 0x28)) {
                uVar2 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
                if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x58), lVar3 == 0))
                goto LAB_0145eaf0;
                uStack0000000000000050 = *(undefined4 *)(lVar3 + 0x18);
                uVar5 = FUN_0176eb1c(&stack0x00000050,0);
                uVar2 = FUN_0160073c(*(undefined8 *)PTR_DAT_033ede28,uVar2,
                                     *(undefined8 *)StringLiteral_504,uVar5,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar2,0);
                lVar3 = *unaff_x29;
                if (lVar3 == 0) goto LAB_0145eaf0;
              }
              if ((*(long *)(lVar3 + 0x58) == 0) ||
                 (FUN_0132138c(*(long *)(lVar3 + 0x58),iStack000000000000005c,&stack0x00000068,
                               *(undefined8 *)PTR_DAT_033ee2d8), in_stack_00000068 == (long *)0x0))
              goto LAB_0145eaf0;
              in_stack_00000068[7] = unaff_d12;
              uStack0000000000000054 = 1;
              uStack0000000000000058 = 1;
              lVar3 = *unaff_x29;
              if (lVar3 == 0) goto LAB_0145eaf0;
              unaff_x23 = 0;
              unaff_x22 = in_stack_00000068;
            }
            cVar8 = *(char *)(lVar3 + 0x49);
            uVar2 = *(undefined8 *)(lVar3 + 0x80);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01457470(unaff_x23 & 0xffffffff,cVar8 != '\0',uVar2);
          } while ((uVar6 & 1) == 0);
          lVar3 = unaff_x22[2];
          if (lVar3 == 0) goto LAB_0145eaf0;
          if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_0145eaf4;
          unaff_x24 = *(long *)(lVar3 + unaff_x23 * 8 + 0x20);
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            iStack000000000000001c = iStack000000000000005c;
            uVar2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000018 + 4);
            if (((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0)) ||
               (FUN_0132138c(lVar3,unaff_x23 & 0xffffffff,&stack0x00000068,
                             *(undefined8 *)StringLiteral_11624), in_stack_00000068 == (long *)0x0))
            goto LAB_0145eaf0;
            uVar2 = FUN_01600b5c(*(undefined8 *)StringLiteral_4207,uVar2,in_stack_00000068[2],0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar2,0);
          }
          if (unaff_x24 == 0) goto LAB_0145eaf0;
          in_stack_00000038 = *(undefined8 *)(unaff_x24 + 0x48);
          uVar2 = *(undefined8 *)(unaff_x24 + 0x40);
          in_stack_00000048 = *(undefined8 *)(unaff_x24 + 0x58);
          in_stack_00000040 = *(undefined8 *)(unaff_x24 + 0x50);
          in_stack_00000030 = uVar2;
          fVar10 = (float)FUN_01431624(&stack0x00000030,0);
          _fStack0000000000000028 = CONCAT44((float)uVar2,fVar10);
          fVar12 = (float)uVar2;
          if (*(char *)(unaff_x27 + 0xe1e) == '\0') {
            thunk_FUN_00d48444();
            fVar10 = (float)_fStack0000000000000028;
            *(undefined1 *)(unaff_x27 + 0xe1e) = 1;
            fVar12 = fStack000000000000002c;
          }
          if ((fVar10 == *(float *)(*(long *)(*unaff_x21 + 0xb8) + 8)) &&
             (fVar12 == *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc))) {
LAB_0145dcac:
            cVar8 = '\x01';
          }
          else {
            if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x58), lVar3 == 0))
            goto LAB_0145eaf0;
            if ((*(int *)(lVar3 + 0x18) < 2) || (*(int *)(unaff_x19 + 0x28) < 2)) goto LAB_0145dcac;
            plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
            if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
               (lVar3 = thunk_FUN_00d6225c(*(long *)
                                            Method_System_Collections_Generic_List<char>_Clear__,
                                           *(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
            goto LAB_0145eaf8;
            if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
            plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
            lVar3 = FUN_01444238(unaff_x24,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_0145eaf8;
            uVar9 = *(uint *)(plVar7 + 3);
            if (uVar9 < 2) goto LAB_0145eaf4;
            plVar7[5] = lVar3;
            if (*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                != 0) {
              lVar3 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                                         ,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar3 == 0) goto LAB_0145eaf8;
              uVar9 = *(uint *)(plVar7 + 3);
            }
            if (uVar9 < 3) goto LAB_0145eaf4;
            plVar7[6] = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
            ;
            in_stack_00000038 = *(undefined8 *)(unaff_x24 + 0x48);
            uVar2 = *(undefined8 *)(unaff_x24 + 0x40);
            in_stack_00000048 = *(undefined8 *)(unaff_x24 + 0x58);
            in_stack_00000040 = *(undefined8 *)(unaff_x24 + 0x50);
            in_stack_00000030 = uVar2;
            uVar11 = FUN_01431624(&stack0x00000030,0);
            _fStack0000000000000028 = CONCAT44((int)uVar2,uVar11);
            lVar3 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_0145eaf8;
            uVar9 = *(uint *)(plVar7 + 3);
            if (uVar9 < 4) goto LAB_0145eaf4;
            plVar7[7] = lVar3;
            if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0
               ) {
              lVar3 = thunk_FUN_00d6225c(*(long *)
                                          Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                         ,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar3 == 0) goto LAB_0145eaf8;
              uVar9 = *(uint *)(plVar7 + 3);
            }
            if (uVar9 < 5) goto LAB_0145eaf4;
            plVar7[8] = *(long *)
                         Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
            if (*unaff_x29 == 0) goto LAB_0145eaf0;
            lVar3 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar7 + 3) < 6) goto LAB_0145eaf4;
            plVar7[9] = lVar3;
            uVar2 = FUN_01600844(plVar7,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar2,0);
            cVar8 = *(char *)(unaff_x27 + 0xe1e);
          }
          fVar12 = *(float *)(unaff_x22 + 6);
          fVar10 = *(float *)((long)unaff_x22 + 0x34);
          _fStack0000000000000028 = unaff_x22[6];
          if (cVar8 == '\0') {
            thunk_FUN_00d48444();
            *(undefined1 *)(unaff_x27 + 0xe1e) = 1;
            fVar10 = fStack000000000000002c;
            fVar12 = fStack0000000000000028;
          }
          if ((fVar12 != *(float *)(*(long *)(*unaff_x21 + 0xb8) + 8)) ||
             (fVar10 != *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc))) {
            lVar3 = *unaff_x29;
            if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_0145eaf0;
            if (((1 < *(int *)(*(long *)(lVar3 + 0x58) + 0x18)) && (*(char *)(lVar3 + 0x27) != '\0')
                ) && (1 < *(int *)(unaff_x19 + 0x28))) {
              plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
              if (plVar7 == (long *)0x0) goto LAB_0145eaf0;
              if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
                 (lVar3 = thunk_FUN_00d6225c(*(long *)
                                              Method_System_Collections_Generic_List<char>_Clear__,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
              goto LAB_0145eaf8;
              if ((int)plVar7[3] == 0) goto LAB_0145eaf4;
              plVar7[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
              lVar3 = FUN_01444238(unaff_x24,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_0145eaf8;
              uVar9 = *(uint *)(plVar7 + 3);
              if (uVar9 < 2) goto LAB_0145eaf4;
              plVar7[5] = lVar3;
              if (*(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo != 0) {
                lVar3 = thunk_FUN_00d6225c(*(long *)
                                            UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo
                                           ,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar3 == 0) goto LAB_0145eaf8;
                uVar9 = *(uint *)(plVar7 + 3);
              }
              if (uVar9 < 3) goto LAB_0145eaf4;
              plVar7[6] = *(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo;
              _fStack0000000000000028 = unaff_x22[6];
              lVar3 = FUN_0269109c(&stack0x00000028,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_0145eaf8;
              uVar9 = *(uint *)(plVar7 + 3);
              if (uVar9 < 4) goto LAB_0145eaf4;
              plVar7[7] = lVar3;
              if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ !=
                  0) {
                lVar3 = thunk_FUN_00d6225c(*(long *)
                                            Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                           ,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar3 == 0) goto LAB_0145eaf8;
                uVar9 = *(uint *)(plVar7 + 3);
              }
              if (uVar9 < 5) goto LAB_0145eaf4;
              plVar7[8] = *(long *)
                           Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
              if (*unaff_x29 == 0) goto LAB_0145eaf0;
              lVar3 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_0145eaf8;
              if (*(uint *)(plVar7 + 3) < 6) goto LAB_0145eaf4;
              plVar7[9] = lVar3;
              uVar2 = FUN_01600844(plVar7,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar2,0);
            }
          }
          uVar6 = FUN_014440c0(unaff_x24,0);
        } while ((uVar6 & 1) == 0);
        lVar3 = unaff_x22[5];
        unaff_d8 = (ulong)*(uint *)((long)unaff_x22 + 0x2c);
        lVar4 = unaff_x22[6];
        uVar13 = *(undefined4 *)((long)unaff_x22 + 0x34);
        uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar11 = *(undefined4 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        unaff_s9 = (float)FUN_01459ad4((int)lVar3,unaff_d8,(int)lVar4,uVar13,unaff_x24,uVar2,uVar11)
        ;
        fVar12 = unaff_s9 * (float)unaff_d8;
        uVar9 = unaff_w20;
        if (fVar12 != INFINITY) {
          uVar9 = (int)fVar12;
        }
      } while ((int)uVar9 <= (int)(uStack0000000000000054 * uStack0000000000000058));
    } while (*(int *)(unaff_x19 + 0x28) < 5);
    unaff_x25 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
    if (unaff_x25 == (long *)0x0) {
LAB_0145eaf0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)StringLiteral_12496 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,*(undefined8 *)(*unaff_x25 + 0x40)),
       lVar3 == 0)) {
LAB_0145eaf8:
      uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,0);
    }
    if ((int)unaff_x25[3] == 0) break;
    unaff_x25[4] = *(long *)StringLiteral_12496;
    lVar3 = FUN_01444238(unaff_x24,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x25 + 0x40)), lVar4 == 0))
    goto LAB_0145eaf8;
    uVar9 = *(uint *)(unaff_x25 + 3);
    if (uVar9 < 2) break;
    unaff_x25[5] = lVar3;
    if (*(long *)StringLiteral_3287 != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*unaff_x25 + 0x40));
      if (lVar3 == 0) goto LAB_0145eaf8;
      uVar9 = *(uint *)(unaff_x25 + 3);
    }
    if (uVar9 < 3) break;
    unaff_x25[6] = *(long *)StringLiteral_3287;
    _fStack0000000000000028 = CONCAT44((float)unaff_d8,unaff_s9);
    lVar3 = FUN_0269109c(&stack0x00000028,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x25 + 0x40)), lVar4 == 0))
    goto LAB_0145eaf8;
    uVar9 = *(uint *)(unaff_x25 + 3);
    if (uVar9 < 4) break;
    unaff_x25[7] = lVar3;
    if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo,
                                 *(undefined8 *)(*unaff_x25 + 0x40));
      if (lVar3 == 0) goto LAB_0145eaf8;
      uVar9 = *(uint *)(unaff_x25 + 3);
    }
    if (uVar9 < 5) break;
    unaff_x25[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
    lVar3 = FUN_0176eb1c(&stack0x00000058,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x25 + 0x40)), lVar4 == 0))
    goto LAB_0145eaf8;
    uVar9 = *(uint *)(unaff_x25 + 3);
    if (uVar9 < 6) break;
    unaff_x25[9] = lVar3;
    if (*(long *)StringLiteral_3287 != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*unaff_x25 + 0x40));
      if (lVar3 == 0) goto LAB_0145eaf8;
      uVar9 = *(uint *)(unaff_x25 + 3);
    }
    if (uVar9 < 7) break;
    unaff_x25[10] = *(long *)StringLiteral_3287;
    unaff_x26 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
    if ((unaff_x26 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(unaff_x26,*(undefined8 *)(*unaff_x25 + 0x40)), lVar3 == 0))
    goto LAB_0145eaf8;
    in_w8 = *(uint *)(unaff_x25 + 3);
  }
LAB_0145eaf4:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


