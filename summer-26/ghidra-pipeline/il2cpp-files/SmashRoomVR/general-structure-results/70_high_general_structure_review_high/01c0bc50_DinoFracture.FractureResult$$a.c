/*
FUNCTION_NAME: DinoFracture.FractureResult$$a
ENTRY_POINT: 01c0bc50
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


void DinoFracture_FractureResult__a(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  char cVar11;
  uint unaff_w21;
  uint uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float in_stack_00000008;
  
  for (; (int)unaff_w21 < (int)in_w8; unaff_w21 = unaff_w21 + 1) {
    if (in_w8 <= unaff_w21) goto LAB_01c0c83c;
    lVar9 = *(long *)(unaff_x20 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01c0c838;
    FUN_0391fb70(lVar9,1,0);
    in_w8 = *(uint *)(unaff_x20 + 0x18);
  }
  iVar6 = FUN_039198f8(*(undefined8 *)Method_Mono_Security_PKCS7_SignerInfo__ctor__,0,0);
  if (iVar6 == 1) {
    lVar9 = *(long *)(unaff_x19 + 0x1f0);
    if (lVar9 == 0) goto LAB_01c0c838;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar2) {
      uVar12 = 0;
      do {
        if (uVar2 <= uVar12) goto LAB_01c0c83c;
        lVar7 = *(long *)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_01c0c838;
        FUN_0391fb70(lVar7,1,0);
        uVar2 = *(uint *)(lVar9 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar2);
    }
  }
  iVar6 = FUN_0391993c(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__,0)
  ;
  fVar14 = (float)param_3;
  uVar21 = (undefined4)param_2;
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if (lVar9 != 0) {
    if (iVar6 == 1) {
      FUN_0391fb70(lVar9,0,0);
      fVar14 = (float)param_3;
      uVar21 = (undefined4)param_2;
      lVar9 = *(long *)(unaff_x19 + 0x1c8);
      if (lVar9 == 0) goto LAB_01c0c838;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar2) {
        uVar12 = 0;
        do {
          if (uVar2 <= uVar12) {
LAB_01c0c83c:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar7 = *(long *)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_01c0c838;
          FUN_0391b78c(lVar7,1,0);
          fVar14 = (float)param_3;
          uVar21 = (undefined4)param_2;
          uVar2 = *(uint *)(lVar9 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar2);
      }
    }
    else {
      FUN_0391fb70(lVar9,1,0);
    }
    lVar9 = *(long *)(unaff_x19 + 0x1c0);
    if (lVar9 != 0) {
      if ((*(char *)(lVar9 + 0x2c) != '\0') && (*(char *)(unaff_x19 + 0x51) == '\0')) {
        if (*(long *)(unaff_x19 + 0x1e0) == 0) goto LAB_01c0c838;
        FUN_0391fb70(*(long *)(unaff_x19 + 0x1e0),0,0);
        if ((*(long *)(unaff_x19 + 0x1e0) == 0) ||
           (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x1e0),
                                 *(undefined8 *)
                                  Method_TMPro_Examples_VertexZoom_<AnimateVertexColors>d__10_System_Collections_IEnumerator_Reset__
                                ), lVar9 == 0)) goto LAB_01c0c838;
        FUN_01c0c840();
        lVar9 = *(long *)(unaff_x19 + 0x1c0);
        if (lVar9 == 0) goto LAB_01c0c838;
      }
      if ((*(char *)(lVar9 + 0x2c) == '\0') || (*(char *)(unaff_x19 + 0x51) != '\0')) {
        if (*(long *)(unaff_x19 + 0x1e0) == 0) goto LAB_01c0c838;
        FUN_0391fb70(*(long *)(unaff_x19 + 0x1e0),1,0);
        cVar11 = *(char *)(unaff_x19 + 0x51);
      }
      else {
        cVar11 = '\0';
      }
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (cVar11 == '\0') {
        uVar8 = FUN_0391f968(uVar10,0,0);
        lVar9 = *(long *)(unaff_x19 + 0x48);
        if (lVar9 == 0) goto LAB_01c0c838;
        if ((uVar8 & 1) == 0) {
          FUN_0391fb70(lVar9,0,0);
        }
        else {
          FUN_0391fb70(lVar9,1,0);
          puVar5 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
          plVar13 = *(long **)(unaff_x19 + 0x140);
          uVar10 = FUN_03052740(unaff_x19 + 0x110,
                                *(undefined8 *)
                                 Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__,0);
          uVar10 = FUN_02edd6e8(uVar10,*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__
                                ,0);
          if (plVar13 == (long *)0x0) goto LAB_01c0c838;
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          plVar13 = *(long **)(unaff_x19 + 0x148);
          lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (lVar9 == 0) goto LAB_01c0c838;
          uStack0000000000000000 = FUN_03928ef4(lVar9,0);
          uStack0000000000000004 = uVar21;
          in_stack_00000008 = fVar14;
          uVar10 = FUN_03052740();
          uVar10 = FUN_02edd6e8(*(undefined8 *)
                                 Method_Oculus_Interaction_VirtualPointable_<>c_<_ctor>b__10_0__,
                                uVar10,0);
          if (plVar13 == (long *)0x0) goto LAB_01c0c838;
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          plVar13 = *(long **)(unaff_x19 + 0x150);
          lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (lVar9 == 0) goto LAB_01c0c838;
          uStack0000000000000000 = FUN_03928ef4(lVar9,0);
          uStack0000000000000004 = uVar21;
          in_stack_00000008 = fVar14;
          uVar10 = FUN_03052740();
          uVar10 = FUN_02edd6e8(*(undefined8 *)
                                 Method_UnityEngine_UIElements_VisualElement_<>c__DisplayClass492_0_<UnityEngine_UIElements_Experimental_ITransitionAnimations_Start>b__0__
                                ,uVar10,0);
          if (plVar13 == (long *)0x0) goto LAB_01c0c838;
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
          plVar13 = *(long **)(unaff_x19 + 0x158);
          lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
          if (lVar9 == 0) goto LAB_01c0c838;
          uStack0000000000000000 = FUN_03928ef4(lVar9,0);
          uStack0000000000000004 = uVar21;
          in_stack_00000008 = fVar14;
          uVar10 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar5,0);
          uVar10 = FUN_02edd6e8(*(undefined8 *)
                                 Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_1__,
                                uVar10,0);
          if (plVar13 == (long *)0x0) goto LAB_01c0c838;
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
          if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_01c0c838;
          FUN_03b1de40(*(long *)(unaff_x19 + 0x160),*(undefined1 *)(unaff_x19 + 0x130),0);
          if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_01c0c838;
          FUN_03b1de40(*(long *)(unaff_x19 + 0x168),*(undefined1 *)(unaff_x19 + 0x131),0);
          plVar13 = *(long **)(unaff_x19 + 0x170);
          uVar10 = FUN_03052740(unaff_x19 + 0x134,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__,0);
          if (plVar13 == (long *)0x0) goto LAB_01c0c838;
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
        }
        uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03922f24(uVar10,0,0);
        if ((uVar8 & 1) != 0) {
          return;
        }
        if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
           (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0),
           puVar5 = 
           Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
           , lVar9 != 0)) {
          fVar15 = (float)FUN_01ee1390(lVar9,*(undefined8 *)
                                              Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                      );
          if (fVar15 != 0.0) {
            lVar9 = *(long *)(unaff_x19 + 0x30);
            if (lVar9 == 0) goto LAB_01c0c838;
            *(undefined4 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x48) = 0;
            *(undefined4 *)(lVar9 + 0x40) = 0;
            FUN_01c0c9fc();
          }
          if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
             (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar9 != 0)) {
            fVar15 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
            if (fVar15 == 0.0) {
              if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
              lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
              if (DAT_03fed25b == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed25b = '\x01';
              }
              puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
              if (lVar9 == 0) goto LAB_01c0c838;
              lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
              uVar8 = (ulong)*(uint *)(lVar7 + 0x1c);
              FUN_03929e04(*(undefined4 *)(lVar7 + 0x18),uVar8,*(undefined4 *)(lVar7 + 0x20),
                           -*(float *)(unaff_x19 + 0x1d0),lVar9,0,0);
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar9 == 0))
              goto LAB_01c0c838;
              FUN_03928ef4(lVar9,0);
              *(int *)(unaff_x19 + 0x1d0) = (int)uVar8;
              if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
              lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
              if (DAT_03fed25b == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed25b = '\x01';
              }
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c0c838;
              lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
              uVar21 = *(undefined4 *)(lVar7 + 0x18);
              uVar22 = *(undefined4 *)(lVar7 + 0x1c);
              fVar14 = *(float *)(lVar7 + 0x20);
              lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0);
              if ((lVar7 == 0) || (FUN_03928ef4(lVar7,0), lVar9 == 0)) goto LAB_01c0c838;
              FUN_03929e04(uVar21,uVar22,fVar14,uVar8,lVar9,0,0);
            }
            if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
               (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xc0),0), lVar9 != 0)) {
              fVar16 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
              fVar15 = DAT_00b55290;
              if (fVar16 < DAT_00b55290) {
                lVar9 = *(long *)(unaff_x19 + 0x30);
                if (lVar9 == 0) goto LAB_01c0c838;
                *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(unaff_x19 + 0x9c);
                *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(unaff_x19 + 0x98);
                *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(unaff_x19 + 0xa0);
                *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(unaff_x19 + 0xa4);
              }
              if ((*(long *)(unaff_x19 + 200) != 0) &&
                 (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar9 != 0)) {
                fVar16 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
                if (0.5 < fVar16) {
                  if (*(char *)(unaff_x19 + 0x208) == '\0') {
                    uVar21 = FUN_039198f8(*(undefined8 *)
                                           Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                                          ,0,0);
                    *(undefined4 *)(unaff_x19 + 0xa8) = uVar21;
                    *(undefined1 *)(unaff_x19 + 0x208) = 1;
                  }
                  FUN_03919868(*(undefined8 *)
                                Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                               ,2,0);
                  FUN_01c0ce20();
                }
                if ((*(long *)(unaff_x19 + 200) != 0) &&
                   (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 200),0), lVar9 != 0)) {
                  fVar16 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
                  if ((fVar16 < fVar15) && (*(char *)(unaff_x19 + 0x208) != '\0')) {
                    FUN_03919868(*(undefined8 *)
                                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                                 ,*(undefined4 *)(unaff_x19 + 0xa8),0);
                    *(undefined1 *)(unaff_x19 + 0x208) = 0;
                  }
                  if ((*(long *)(unaff_x19 + 0xf0) != 0) &&
                     (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xf0),0), lVar9 != 0)) {
                    uVar8 = FUN_0344193c(lVar9,0);
                    if ((uVar8 & 1) != 0) {
                      *(byte *)(unaff_x19 + 0x131) = *(byte *)(unaff_x19 + 0x131) ^ 1;
                    }
                    if ((*(long *)(unaff_x19 + 0xf8) != 0) &&
                       (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xf8),0), lVar9 != 0)) {
                      uVar8 = FUN_0344193c(lVar9,0);
                      if ((uVar8 & 1) != 0) {
                        *(byte *)(unaff_x19 + 0x130) = *(byte *)(unaff_x19 + 0x130) ^ 1;
                      }
                      if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
                         (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xe0),0), lVar9 != 0)) {
                        fVar15 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
                        if (0.5 < fVar15) {
                          uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar8 = FUN_0391f968(uVar10,0,0);
                          if ((uVar8 & 1) != 0) {
                            Meta_WitAi_Dictation_MultiRequestTranscription__OnFullTranscription();
                          }
                        }
                        if ((*(long *)(unaff_x19 + 0xe8) != 0) &&
                           (lVar9 = FUN_03452478(*(long *)(unaff_x19 + 0xe8),0), lVar9 != 0)) {
                          fVar16 = (float)FUN_01ee1390(lVar9,*(undefined8 *)puVar5);
                          fVar15 = 0.5;
                          if (0.5 < fVar16) {
                            uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
                            fVar15 = 0.5;
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              fVar15 = 0.5;
                              thunk_FUN_01ac7298();
                            }
                            uVar8 = FUN_0391f968(uVar10,0,0);
                            if ((uVar8 & 1) != 0) {
                              FUN_01c0e0d8();
                              if (*(long *)(unaff_x19 + 0x178) == 0) goto LAB_01c0c838;
                              FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
                            }
                          }
                          uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          uVar8 = FUN_0391f968(uVar10,0,0);
                          if ((uVar8 & 1) == 0) {
                            return;
                          }
                          if (*(long *)(unaff_x19 + 0x38) != 0) {
                            lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                               (lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
                              fVar16 = (float)FUN_03928d34(lVar7,0);
                              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                 ((fVar19 = fVar14, fVar18 = fVar15,
                                  lVar7 = FUN_0391fab4(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0 &&
                                  (fVar17 = (float)FUN_039291ac(lVar7,0), lVar9 != 0)))) {
                                fVar20 = *(float *)(unaff_x19 + 0x100) * 0.5;
                                FUN_03928dd4(fVar16 + fVar17 * fVar20,fVar15 + fVar18 * fVar20,
                                             fVar14 + fVar19 * fVar20,lVar9,0);
                                if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                   (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar9 != 0)
                                   ) {
                                  uVar10 = FUN_0391c74c(lVar9,0);
                                  puVar3 = 
                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
                                  uVar8 = FUN_02ee6670(uVar10,*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__
                                                  ,0);
                                  if ((uVar8 & 1) != 0) {
                                    if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                                       (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0),
                                       lVar9 == 0)) goto LAB_01c0c838;
                                    uVar21 = *(undefined4 *)(unaff_x19 + 0x110);
                                    FUN_039293f4(uVar21,uVar21,uVar21,lVar9,0);
                                  }
                                  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                     (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0),
                                     lVar9 != 0)) {
                                    uVar10 = FUN_0391c74c(lVar9,0);
                                    uVar8 = thunk_FUN_02ee6388(uVar10,*(undefined8 *)puVar3,0);
                                    if ((uVar8 & 1) == 0) {
                                      return;
                                    }
                                    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                       (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0),
                                       lVar9 != 0)) {
                                      fVar14 = *(float *)(unaff_x19 + 0x110);
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
        uVar8 = FUN_03922f24();
        if ((uVar8 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_01c0c838;
          FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),0,0);
        }
        uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_0391f968(uVar10,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x1b8) != 0) {
          FUN_0391fb70(*(long *)(unaff_x19 + 0x1b8),1,0);
          if (*(long *)(unaff_x19 + 0x178) != 0) {
            FUN_0391fb70(*(long *)(unaff_x19 + 0x178),1,0);
            puVar3 = Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__;
            plVar13 = *(long **)(unaff_x19 + 0x180);
            pfVar1 = (float *)(unaff_x19 + 0x110);
            uVar10 = FUN_03052740(pfVar1,*(undefined8 *)
                                          Method_Oculus_Interaction_VirtualSelector_<>c_<_ctor>b__12_0__
                                  ,0);
            uVar10 = FUN_02edd6e8(uVar10,*(undefined8 *)
                                          Method_UnityEngine_UIElements_VisualElement_Hierarchy_Insert__
                                  ,0);
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                plVar13 = *(long **)(unaff_x19 + 0x188);
                lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                if (lVar9 == 0) goto LAB_01c0c838;
                uStack0000000000000000 = FUN_03928ef4(lVar9,0);
                uStack0000000000000004 = uVar21;
                in_stack_00000008 = fVar14;
                uVar10 = FUN_03052740();
                if (plVar13 == (long *)0x0) goto LAB_01c0c838;
                (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
                if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
                plVar13 = *(long **)(unaff_x19 + 400);
                lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                if (lVar9 == 0) goto LAB_01c0c838;
                uStack0000000000000000 = FUN_03928ef4(lVar9,0);
                uStack0000000000000004 = uVar21;
                in_stack_00000008 = fVar14;
                uVar10 = FUN_03052740((ulong)&stack0x00000000 | 4,*(undefined8 *)puVar3,0);
                if (plVar13 == (long *)0x0) goto LAB_01c0c838;
                (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
                if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01c0c838;
                plVar13 = *(long **)(unaff_x19 + 0x198);
                lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0);
                if (lVar9 == 0) goto LAB_01c0c838;
                uStack0000000000000000 = FUN_03928ef4(lVar9,0);
                uStack0000000000000004 = uVar21;
                in_stack_00000008 = fVar14;
                uVar10 = FUN_03052740(&stack0x00000008,*(undefined8 *)puVar3,0);
                if (plVar13 == (long *)0x0) goto LAB_01c0c838;
                (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
                plVar13 = *(long **)(unaff_x19 + 0x1b0);
                uVar10 = FUN_03052740(unaff_x19 + 0x134,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__
                                      ,0);
                if (plVar13 == (long *)0x0) goto LAB_01c0c838;
                (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                   (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar9 == 0))
                goto LAB_01c0c838;
                uVar10 = FUN_0391c74c(lVar9,0);
                puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__;
                uVar8 = FUN_02ee6670(uVar10,*(undefined8 *)
                                             Method_UnityEngine_UIElements_VisualElement_Hierarchy_Add__
                                     ,0);
                if ((uVar8 & 1) != 0) {
                  if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                     (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar9 == 0))
                  goto LAB_01c0c838;
                  fVar14 = *pfVar1;
                  FUN_039293f4(fVar14,fVar14,fVar14,lVar9,0);
                }
                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                   (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar9 == 0))
                goto LAB_01c0c838;
                uVar10 = FUN_0391c74c(lVar9,0);
                uVar8 = thunk_FUN_02ee6388(uVar10,*(undefined8 *)puVar3,0);
                if ((uVar8 & 1) == 0) {
                  return;
                }
                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                   (lVar9 = FUN_0391fab4(*(long *)(unaff_x19 + 0x38),0), lVar9 == 0))
                goto LAB_01c0c838;
                fVar14 = *pfVar1;
FUN_01c0c7f8:
                FUN_039293f4(fVar14 * 5.0,fVar14 * 2.5,DAT_00b55088,lVar9,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01c0c838:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


