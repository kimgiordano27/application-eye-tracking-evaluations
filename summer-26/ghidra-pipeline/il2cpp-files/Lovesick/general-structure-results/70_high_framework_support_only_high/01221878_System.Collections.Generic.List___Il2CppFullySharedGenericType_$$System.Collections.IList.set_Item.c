/*
FUNCTION_NAME: System.Collections.Generic.List<__Il2CppFullySharedGenericType>$$System.Collections.IList.set_Item
ENTRY_POINT: 01221878
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Collections_Generic_List<__Il2CppFullySharedGenericType>__System_Collections_IList_set_Item
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  
  thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
  thunk_FUN_00d48444(StringLiteral_5228);
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
  thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
  thunk_FUN_00d48444(
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    );
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
  thunk_FUN_00d48444(StringLiteral_6673);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  *(undefined1 *)(unaff_x20 + 0x45a) = 1;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  uVar9 = FUN_01780344(uVar9,0);
  uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
  uVar7 = FUN_01789ac0(uVar9,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    uVar9 = FUN_01780344(uVar9,0);
    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar7 = FUN_01789ac0(uVar9,uVar6,0);
    uVar10 = 0;
    if ((uVar7 & 1) == 0) {
      uVar10 = 0x10;
    }
    if ((uVar7 & 1) != 0) {
      uVar8 = 1;
      uVar11 = 0x10;
      goto LAB_01221ad4;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    uVar9 = FUN_01780344(uVar9,0);
    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar7 = FUN_01789ac0(uVar9,uVar6,0);
    uVar11 = 0;
    if ((uVar7 & 1) == 0) {
      uVar11 = uVar10;
    }
    if ((uVar7 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      puVar3 = StringLiteral_5228;
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
      uVar7 = FUN_01789ac0(uVar9,uVar6,0);
      uVar1 = 0;
      if ((uVar7 & 1) == 0) {
        uVar1 = uVar11;
      }
      if ((uVar7 & 1) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        puVar3 = StringLiteral_6673;
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar9 = FUN_01780344(uVar9,0);
        uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
        uVar7 = FUN_01789ac0(uVar9,uVar6,0);
        uVar2 = 0;
        if ((uVar7 & 1) == 0) {
          uVar2 = uVar1;
        }
        if ((uVar7 & 1) == 0) {
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          puVar3 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
          uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
          uVar7 = FUN_01789ac0(uVar9,uVar6,0);
          uVar10 = 0;
          if ((uVar7 & 1) == 0) {
            uVar10 = uVar2;
          }
          if ((uVar7 & 1) != 0) {
            uVar8 = 4;
            goto LAB_01221ad4;
          }
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          puVar3 = 
          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
          uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
          uVar7 = FUN_01789ac0(uVar9,uVar6,0);
          uVar11 = 0;
          if ((uVar7 & 1) == 0) {
            uVar11 = uVar10;
          }
          if ((uVar7 & 1) != 0) {
            uVar8 = 8;
            uVar11 = uVar1;
            goto LAB_01221ad4;
          }
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          puVar3 = Method_System_Data_DataSet_ReadXmlDiffgram__;
          uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
          uVar7 = FUN_01789ac0(uVar9,uVar6,0);
          if ((uVar7 & 1) != 0) {
            uVar8 = 8;
            uVar11 = uVar2;
            goto LAB_01221ad4;
          }
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_00d5941c();
          }
          puVar3 = 
          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
          uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar4);
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
          uVar7 = FUN_01789ac0(uVar9,uVar6,0);
          if ((uVar7 & 1) == 0) {
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            puVar3 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
            uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            uVar9 = FUN_01780344(uVar9,0);
            uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
            uVar7 = FUN_01789ac0(uVar9,uVar6,0);
            if ((uVar7 & 1) == 0) {
              thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
              uVar9 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              uVar6 = thunk_FUN_00d48444(
                                        Method_System_Collections_Generic_List<AudioAffordanceThemeData>_get_Count__
                                        );
              FUN_0176c578(uVar9,uVar6,0);
              uVar6 = thunk_FUN_00d48444(
                                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar9,uVar6);
            }
            uVar8 = 8;
            goto LAB_01221ad4;
          }
        }
        uVar8 = 4;
        uVar11 = uVar10;
        goto LAB_01221ad4;
      }
    }
    uVar8 = 2;
  }
  else {
    uVar8 = 1;
  }
  uVar11 = 0x10;
LAB_01221ad4:
  uVar10 = 0;
  if (uVar8 != 0) {
    uVar10 = uVar11 / uVar8;
  }
  return uVar10;
}


