/*
FUNCTION_NAME: DinoFracture.LogHandler$$Invoke
ENTRY_POINT: 01c0bdf8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void DinoFracture_LogHandler__Invoke
               (undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 param_4,
               undefined8 param_5)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  int unaff_w21;
  long *plVar8;
  long *unaff_x22;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float in_stack_00000008;
  
  if (unaff_w21 == 0) {
    uVar4 = FUN_0391f968(param_4,param_5,0);
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) goto LAB_01c0c838;
    if ((uVar4 & 1) == 0) {
      FUN_0391fb70(lVar5,0,0);
    }
    else {
      FUN_0391fb70(lVar5,1,0);
      puVar3 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
      plVar8 = *(long **)(unaff_x19 + 0x140);
      uVar7 = FUN_03052740(unaff_x19 + 0x110,
                           *(undefined8 *)
                            Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
      uVar7 = FUN_02edd6e8(uVar7,*(undefined8 *)
                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__,0);
      if (plVar8 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar8 = *(long **)(unaff_x19 + 0x148);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_2;
      in_stack_00000008 = param_3;
      uVar7 = FUN_03052740();
      uVar7 = FUN_02edd6e8(*(undefined8 *)
                            Method_Oculus_Interaction_VirtualPointable_<>c_<_ctor>b__10_0__,uVar7,0)
      ;
      if (plVar8 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar8 = *(long **)(unaff_x19 + 0x150);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_2;
      in_stack_00000008 = param_3;
      uVar7 = FUN_03052740();
      uVar7 = FUN_02edd6e8(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_<>c__DisplayClass492_0_<UnityEngine_UIElements_Experimental_ITransitionAnimations_Start>b__0__
                           ,uVar7,0);
      if (plVar8 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar8 = *(long **)(unaff_x19 + 0x158);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_2;
      in_stack_00000008 = param_3;
      uVar7 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar3,0);
      uVar7 = FUN_02edd6e8(*(undefined8 *)
                            Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_1__,uVar7,0);
      if (plVar8 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
      if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_01c0c838;
      FUN_03b1de40(*(long *)(unaff_x19 + 0x160),*(undefined1 *)(unaff_x19 + 0x130),0);
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_01c0c838;
      FUN_03b1de40(*(long *)(unaff_x19 + 0x168),*(undefined1 *)(unaff_x19 + 0x131),0);
      plVar8 = *(long **)(unaff_x19 + 0x170);
      uVar7 = FUN_03052740(unaff_x19 + 0x134,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__,0);
      if (plVar8 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
       (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0),
       puVar3 = 
       Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__,
       lVar5 != 0)) {
      fVar9 = (float)FUN_01ee1390(lVar5,*(undefined8 *)
                                         Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                 );
      if (fVar9 != 0.0) {
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) goto LAB_01c0c838;
        *(undefined4 *)(lVar5 + 0x50) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined4 *)(lVar5 + 0x40) = 0;
        FUN_01c0c9fc();
      }
      if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
         (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar5 != 0)) {
        fVar9 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
        if (fVar9 == 0.0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (lVar5 == 0) goto LAB_01c0c838;
          lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          uVar4 = (ulong)*(uint *)(lVar6 + 0x1c);
          FUN_03929e04(*(undefined4 *)(lVar6 + 0x18),uVar4,*(undefined4 *)(lVar6 + 0x20),
                       -*(float *)(unaff_x19 + 0x1d0),lVar5,0,0);
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_01c0c838;
          FUN_03928ef4(lVar5,0);
          *(int *)(unaff_x19 + 0x1d0) = (int)uVar4;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c0c838;
          lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
          uVar15 = *(undefined4 *)(lVar6 + 0x18);
          uVar16 = *(undefined4 *)(lVar6 + 0x1c);
          param_3 = *(float *)(lVar6 + 0x20);
          lVar6 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0);
          if ((lVar6 == 0) || (FUN_03928ef4(lVar6,0), lVar5 == 0)) goto LAB_01c0c838;
          FUN_03929e04(uVar15,uVar16,param_3,uVar4,lVar5,0,0);
        }
        if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
           (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar5 != 0)) {
          fVar10 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
          fVar9 = DAT_00b55290;
          if (fVar10 < DAT_00b55290) {
            lVar5 = *(long *)(unaff_x19 + 0x30);
            if (lVar5 == 0) goto LAB_01c0c838;
            *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(unaff_x19 + 0x9c);
            *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(unaff_x19 + 0x98);
            *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(unaff_x19 + 0xa0);
            *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(unaff_x19 + 0xa4);
          }
          if ((*(long *)(unaff_x19 + 200) != 0) &&
             (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar5 != 0)) {
            fVar10 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
            if (0.5 < fVar10) {
              if (*(char *)(unaff_x19 + 0x208) == '\0') {
                uVar15 = FUN_039198f8(*(undefined8 *)
                                       Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                                      ,0,0);
                *(undefined4 *)(unaff_x19 + 0xa8) = uVar15;
                *(undefined1 *)(unaff_x19 + 0x208) = 1;
              }
              FUN_03919868(*(undefined8 *)
                            Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                           ,2,0);
              FUN_01c0ce20();
            }
            if ((*(long *)(unaff_x19 + 200) != 0) &&
               (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar5 != 0)) {
              fVar10 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
              if ((fVar10 < fVar9) && (*(char *)(unaff_x19 + 0x208) != '\0')) {
                FUN_03919868(*(undefined8 *)
                              Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                             ,*(undefined4 *)(unaff_x19 + 0xa8),0);
                *(undefined1 *)(unaff_x19 + 0x208) = 0;
              }
              if ((*(long *)(unaff_x19 + 0xf0) != 0) &&
                 (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xf0),0), lVar5 != 0)) {
                uVar4 = FUN_0344193c(lVar5,0);
                if ((uVar4 & 1) != 0) {
                  *(byte *)(unaff_x19 + 0x131) = *(byte *)(unaff_x19 + 0x131) ^ 1;
                }
                if ((*(long *)(unaff_x19 + 0xf8) != 0) &&
                   (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xf8),0), lVar5 != 0)) {
                  uVar4 = FUN_0344193c(lVar5,0);
                  if ((uVar4 & 1) != 0) {
                    *(byte *)(unaff_x19 + 0x130) = *(byte *)(unaff_x19 + 0x130) ^ 1;
                  }
                  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
                     (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xe0),0), lVar5 != 0)) {
                    fVar9 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
                    if (0.5 < fVar9) {
                      uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar4 = FUN_0391f968(uVar7,0,0);
                      if ((uVar4 & 1) != 0) {
                        Meta_WitAi_Dictation_MultiRequestTranscription__OnFullTranscription();
                      }
                    }
                    if ((*(long *)(unaff_x19 + 0xe8) != 0) &&
                       (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xe8),0), lVar5 != 0)) {
                      fVar10 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar3);
                      fVar9 = 0.5;
                      if (0.5 < fVar10) {
                        uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
                        fVar9 = 0.5;
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          fVar9 = 0.5;
                          thunk_FUN_01ac7298();
                        }
                        uVar4 = FUN_0391f968(uVar7,0,0);
                        if ((uVar4 & 1) != 0) {
                          FUN_01c0e0d8();
                          if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_01c0c838;
                          FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
                        }
                      }
                      uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar4 = FUN_0391f968(uVar7,0,0);
                      if ((uVar4 & 1) == 0) {
                        return;
                      }
                      if (*(long *)(unaff_x19 + 0x38) != 0) {
                        lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                           (lVar6 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar6 != 0)) {
                          fVar10 = (float)FUN_03928d34(lVar6,0);
                          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                             ((fVar13 = param_3, fVar12 = fVar9,
                              lVar6 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar6 != 0 &&
                              (fVar11 = (float)FUN_039291ac(lVar6,0), lVar5 != 0)))) {
                            fVar14 = *(float *)(unaff_x19 + 0x100) * 0.5;
                            FUN_03928dd4(fVar10 + fVar11 * fVar14,fVar9 + fVar12 * fVar14,
                                         param_3 + fVar13 * fVar14,lVar5,0);
                            if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0)) {
                              uVar7 = FUN_0391c74c(lVar5,0);
                              puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
                              uVar4 = FUN_02ee6670(uVar7,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__
                                                  ,0);
                              if ((uVar4 & 1) != 0) {
                                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                                   (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)
                                   ) goto LAB_01c0c838;
                                uVar15 = *(undefined4 *)(unaff_x19 + 0x110);
                                FUN_039293f4(uVar15,uVar15,uVar15,lVar5,0);
                              }
                              if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                 (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0))
                              {
                                uVar7 = FUN_0391c74c(lVar5,0);
                                uVar4 = thunk_FUN_02ee6388(uVar7,*(undefined8 *)puVar3,0);
                                if ((uVar4 & 1) == 0) {
                                  return;
                                }
                                if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                   (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0)
                                   ) {
                                  fVar9 = *(float *)(unaff_x19 + 0x110);
                                  goto FUN_01c0c7f8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar4 = FUN_03922f24();
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_01c0c838;
      FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),0,0);
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
      FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),1,0);
      if (*(long *)(unaff_x19 + 0x178) != 0) {
        FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
        puVar3 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
        plVar8 = *(long **)(unaff_x19 + 0x180);
        pfVar1 = (float *)(unaff_x19 + 0x110);
        uVar7 = FUN_03052740(pfVar1,*(undefined8 *)
                                     Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,
                             0);
        uVar7 = FUN_02edd6e8(uVar7,*(undefined8 *)
                                    Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__,0
                            );
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            plVar8 = *(long **)(unaff_x19 + 0x188);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_2;
            in_stack_00000008 = param_3;
            uVar7 = FUN_03052740();
            if (plVar8 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
            if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
            plVar8 = *(long **)(unaff_x19 + 400);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_2;
            in_stack_00000008 = param_3;
            uVar7 = FUN_03052740((ulong)&stack0x00000000 | 4,*(undefined8 *)puVar3,0);
            if (plVar8 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
            if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
            plVar8 = *(long **)(unaff_x19 + 0x198);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_2;
            in_stack_00000008 = param_3;
            uVar7 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar3,0);
            if (plVar8 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
            plVar8 = *(long **)(unaff_x19 + 0x1b0);
            uVar7 = FUN_03052740(unaff_x19 + 0x134,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__,0);
            if (plVar8 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            uVar7 = FUN_0391c74c(lVar5,0);
            puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
            uVar4 = FUN_02ee6670(uVar7,*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__,
                                 0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                 (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0))
              goto LAB_01c0c838;
              fVar9 = *pfVar1;
              FUN_039293f4(fVar9,fVar9,fVar9,lVar5,0);
            }
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            uVar7 = FUN_0391c74c(lVar5,0);
            uVar4 = thunk_FUN_02ee6388(uVar7,*(undefined8 *)puVar3,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            fVar9 = *pfVar1;
FUN_01c0c7f8:
            FUN_039293f4(fVar9 * 5.0,fVar9 * 2.5,DAT_00b55088,lVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_01c0c838:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


