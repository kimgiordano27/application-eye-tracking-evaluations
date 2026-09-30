/*
FUNCTION_NAME: DinoFracture.LogHandler$$.ctor
ENTRY_POINT: 01c0bd58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void DinoFracture_LogHandler___ctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,float param_4)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  char cVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float in_stack_00000008;
  
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(unaff_x19 + 0x51) == '\0')) {
    if (*(long *)(unaff_x19 + 0x1e0) == 0) goto LAB_01c0c838;
    FUN_0391fb70(*(long *)(unaff_x19 + 0x1e0),0,0);
    if ((*(long *)(unaff_x19 + 0x1e0) == 0) ||
       (lVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x1e0),
                             *(undefined8 *)
                              Method_TMPro_Examples_VertexZoom_<AnimateVertexColors>d__10_System_Collections_IEnumerator_Reset__
                            ), lVar5 == 0)) goto LAB_01c0c838;
    FUN_01c0c840();
    param_1 = *(long *)(unaff_x19 + 0x1c0);
    if (param_1 == 0) goto LAB_01c0c838;
  }
  if ((*(char *)(param_1 + 0x2c) == '\0') || (*(char *)(unaff_x19 + 0x51) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1e0) == 0) goto LAB_01c0c838;
    FUN_0391fb70(*(long *)(unaff_x19 + 0x1e0),1,0);
    cVar9 = *(char *)(unaff_x19 + 0x51);
  }
  else {
    cVar9 = '\0';
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (cVar9 == '\0') {
    uVar6 = FUN_0391f968(uVar8,0,0);
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) goto LAB_01c0c838;
    if ((uVar6 & 1) == 0) {
      FUN_0391fb70(lVar5,0,0);
    }
    else {
      FUN_0391fb70(lVar5,1,0);
      puVar4 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
      plVar10 = *(long **)(unaff_x19 + 0x140);
      uVar8 = FUN_03052740(unaff_x19 + 0x110,
                           *(undefined8 *)
                            Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
      uVar8 = FUN_02edd6e8(uVar8,*(undefined8 *)
                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__,0);
      if (plVar10 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar10 = *(long **)(unaff_x19 + 0x148);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_3;
      in_stack_00000008 = param_4;
      uVar8 = FUN_03052740();
      uVar8 = FUN_02edd6e8(*(undefined8 *)
                            Method_Oculus_Interaction_VirtualPointable_<>c_<_ctor>b__10_0__,uVar8,0)
      ;
      if (plVar10 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar10 = *(long **)(unaff_x19 + 0x150);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_3;
      in_stack_00000008 = param_4;
      uVar8 = FUN_03052740();
      uVar8 = FUN_02edd6e8(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_<>c__DisplayClass492_0_<UnityEngine_UIElements_Experimental_ITransitionAnimations_Start>b__0__
                           ,uVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
      plVar10 = *(long **)(unaff_x19 + 0x158);
      lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
      if (lVar5 == 0) goto LAB_01c0c838;
      uStack0000000000000000 = FUN_03928ef4(lVar5,0);
      uStack0000000000000004 = param_3;
      in_stack_00000008 = param_4;
      uVar8 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar4,0);
      uVar8 = FUN_02edd6e8(*(undefined8 *)
                            Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_1__,uVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
      if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_01c0c838;
      FUN_03b1de40(*(long *)(unaff_x19 + 0x160),*(undefined1 *)(unaff_x19 + 0x130),0);
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_01c0c838;
      FUN_03b1de40(*(long *)(unaff_x19 + 0x168),*(undefined1 *)(unaff_x19 + 0x131),0);
      plVar10 = *(long **)(unaff_x19 + 0x170);
      uVar8 = FUN_03052740(unaff_x19 + 0x134,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__,0);
      if (plVar10 == (long *)0x0) goto LAB_01c0c838;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(uVar8,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
       (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0),
       puVar4 = 
       Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__,
       lVar5 != 0)) {
      fVar11 = (float)FUN_01ee1390(lVar5,*(undefined8 *)
                                          Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                  );
      if (fVar11 != 0.0) {
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) goto LAB_01c0c838;
        *(undefined4 *)(lVar5 + 0x50) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined4 *)(lVar5 + 0x40) = 0;
        FUN_01c0c9fc();
      }
      if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
         (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar5 != 0)) {
        fVar11 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
        if (fVar11 == 0.0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (lVar5 == 0) goto LAB_01c0c838;
          lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          uVar6 = (ulong)*(uint *)(lVar7 + 0x1c);
          FUN_03929e04(*(undefined4 *)(lVar7 + 0x18),uVar6,*(undefined4 *)(lVar7 + 0x20),
                       -*(float *)(unaff_x19 + 0x1d0),lVar5,0,0);
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar5 == 0)) goto LAB_01c0c838;
          FUN_03928ef4(lVar5,0);
          *(int *)(unaff_x19 + 0x1d0) = (int)uVar6;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c0c838;
          lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar17 = *(undefined4 *)(lVar7 + 0x18);
          uVar18 = *(undefined4 *)(lVar7 + 0x1c);
          param_4 = *(float *)(lVar7 + 0x20);
          lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0);
          if ((lVar7 == 0) || (FUN_03928ef4(lVar7,0), lVar5 == 0)) goto LAB_01c0c838;
          FUN_03929e04(uVar17,uVar18,param_4,uVar6,lVar5,0,0);
        }
        if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
           (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar5 != 0)) {
          fVar12 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
          fVar11 = DAT_00b55290;
          if (fVar12 < DAT_00b55290) {
            lVar5 = *(long *)(unaff_x19 + 0x30);
            if (lVar5 == 0) goto LAB_01c0c838;
            *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(unaff_x19 + 0x9c);
            *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(unaff_x19 + 0x98);
            *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(unaff_x19 + 0xa0);
            *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(unaff_x19 + 0xa4);
          }
          if ((*(long *)(unaff_x19 + 200) != 0) &&
             (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar5 != 0)) {
            fVar12 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
            if (0.5 < fVar12) {
              if (*(char *)(unaff_x19 + 0x208) == '\0') {
                uVar17 = FUN_039198f8(*(undefined8 *)
                                       Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                                      ,0,0);
                *(undefined4 *)(unaff_x19 + 0xa8) = uVar17;
                *(undefined1 *)(unaff_x19 + 0x208) = 1;
              }
              FUN_03919868(*(undefined8 *)
                            Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                           ,2,0);
              FUN_01c0ce20();
            }
            if ((*(long *)(unaff_x19 + 200) != 0) &&
               (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar5 != 0)) {
              fVar12 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
              if ((fVar12 < fVar11) && (*(char *)(unaff_x19 + 0x208) != '\0')) {
                FUN_03919868(*(undefined8 *)
                              Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                             ,*(undefined4 *)(unaff_x19 + 0xa8),0);
                *(undefined1 *)(unaff_x19 + 0x208) = 0;
              }
              if ((*(long *)(unaff_x19 + 0xf0) != 0) &&
                 (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xf0),0), lVar5 != 0)) {
                uVar6 = FUN_0344193c(lVar5,0);
                if ((uVar6 & 1) != 0) {
                  *(byte *)(unaff_x19 + 0x131) = *(byte *)(unaff_x19 + 0x131) ^ 1;
                }
                if ((*(long *)(unaff_x19 + 0xf8) != 0) &&
                   (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xf8),0), lVar5 != 0)) {
                  uVar6 = FUN_0344193c(lVar5,0);
                  if ((uVar6 & 1) != 0) {
                    *(byte *)(unaff_x19 + 0x130) = *(byte *)(unaff_x19 + 0x130) ^ 1;
                  }
                  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
                     (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xe0),0), lVar5 != 0)) {
                    fVar11 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
                    if (0.5 < fVar11) {
                      uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar6 = FUN_0391f968(uVar8,0,0);
                      if ((uVar6 & 1) != 0) {
                        Meta_WitAi_Dictation_MultiRequestTranscription__OnFullTranscription();
                      }
                    }
                    if ((*(long *)(unaff_x19 + 0xe8) != 0) &&
                       (lVar5 = FUN_03452478(*(long *)(unaff_x19 + 0xe8),0), lVar5 != 0)) {
                      fVar12 = (float)FUN_01ee1390(lVar5,*(undefined8 *)puVar4);
                      fVar11 = 0.5;
                      if (0.5 < fVar12) {
                        uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
                        fVar11 = 0.5;
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          fVar11 = 0.5;
                          thunk_FUN_01ac7298();
                        }
                        uVar6 = FUN_0391f968(uVar8,0,0);
                        if ((uVar6 & 1) != 0) {
                          FUN_01c0e0d8();
                          if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_01c0c838;
                          FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
                        }
                      }
                      uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar6 = FUN_0391f968(uVar8,0,0);
                      if ((uVar6 & 1) == 0) {
                        return;
                      }
                      if (*(long *)(unaff_x19 + 0x38) != 0) {
                        lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                           (lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
                          fVar12 = (float)FUN_03928d34(lVar7,0);
                          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                             ((fVar15 = param_4, fVar14 = fVar11,
                              lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0 &&
                              (fVar13 = (float)FUN_039291ac(lVar7,0), lVar5 != 0)))) {
                            fVar16 = *(float *)(unaff_x19 + 0x100) * 0.5;
                            FUN_03928dd4(fVar12 + fVar13 * fVar16,fVar11 + fVar14 * fVar16,
                                         param_4 + fVar15 * fVar16,lVar5,0);
                            if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0)) {
                              uVar8 = FUN_0391c74c(lVar5,0);
                              puVar2 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
                              uVar6 = FUN_02ee6670(uVar8,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__
                                                  ,0);
                              if ((uVar6 & 1) != 0) {
                                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                                   (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)
                                   ) goto LAB_01c0c838;
                                uVar17 = *(undefined4 *)(unaff_x19 + 0x110);
                                FUN_039293f4(uVar17,uVar17,uVar17,lVar5,0);
                              }
                              if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                 (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0))
                              {
                                uVar8 = FUN_0391c74c(lVar5,0);
                                uVar6 = thunk_FUN_02ee6388(uVar8,*(undefined8 *)puVar2,0);
                                if ((uVar6 & 1) == 0) {
                                  return;
                                }
                                if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                   (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 != 0)
                                   ) {
                                  fVar11 = *(float *)(unaff_x19 + 0x110);
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
    uVar6 = FUN_03922f24();
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_01c0c838;
      FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),0,0);
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar8,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
      FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),1,0);
      if (*(long *)(unaff_x19 + 0x178) != 0) {
        FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
        puVar2 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
        plVar10 = *(long **)(unaff_x19 + 0x180);
        pfVar1 = (float *)(unaff_x19 + 0x110);
        uVar8 = FUN_03052740(pfVar1,*(undefined8 *)
                                     Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,
                             0);
        uVar8 = FUN_02edd6e8(uVar8,*(undefined8 *)
                                    Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__,0
                            );
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            plVar10 = *(long **)(unaff_x19 + 0x188);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_3;
            in_stack_00000008 = param_4;
            uVar8 = FUN_03052740();
            if (plVar10 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
            if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
            plVar10 = *(long **)(unaff_x19 + 400);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_3;
            in_stack_00000008 = param_4;
            uVar8 = FUN_03052740((ulong)&stack0x00000000 | 4,*(undefined8 *)puVar2,0);
            if (plVar10 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
            if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
            plVar10 = *(long **)(unaff_x19 + 0x198);
            lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
            if (lVar5 == 0) goto LAB_01c0c838;
            uStack0000000000000000 = FUN_03928ef4(lVar5,0);
            uStack0000000000000004 = param_3;
            in_stack_00000008 = param_4;
            uVar8 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar2,0);
            if (plVar10 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
            plVar10 = *(long **)(unaff_x19 + 0x1b0);
            uVar8 = FUN_03052740(unaff_x19 + 0x134,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__,0);
            if (plVar10 == (long *)0x0) goto LAB_01c0c838;
            (**(code **)(*plVar10 + 0x558))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x560));
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            uVar8 = FUN_0391c74c(lVar5,0);
            puVar2 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
            uVar6 = FUN_02ee6670(uVar8,*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__,
                                 0);
            if ((uVar6 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                 (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0))
              goto LAB_01c0c838;
              fVar11 = *pfVar1;
              FUN_039293f4(fVar11,fVar11,fVar11,lVar5,0);
            }
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            uVar8 = FUN_0391c74c(lVar5,0);
            uVar6 = thunk_FUN_02ee6388(uVar8,*(undefined8 *)puVar2,0);
            if ((uVar6 & 1) == 0) {
              return;
            }
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar5 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar5 == 0)) goto LAB_01c0c838;
            fVar11 = *pfVar1;
FUN_01c0c7f8:
            FUN_039293f4(fVar11 * 5.0,fVar11 * 2.5,DAT_00b55088,lVar5,0);
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


