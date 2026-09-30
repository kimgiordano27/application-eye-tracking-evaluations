/*
FUNCTION_NAME: thunk_FUN_038d3c10
ENTRY_POINT: 038d3c0c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 thunk_FUN_038d3c10(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_03ff94a8 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2826);
    thunk_FUN_01ad9084(StringLiteral_2244);
    thunk_FUN_01ad9084(StringLiteral_2245);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__);
    thunk_FUN_01ad9084(StringLiteral_613);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(StringLiteral_2246);
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_2247);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_4247);
    thunk_FUN_01ad9084(StringLiteral_2248);
    thunk_FUN_01ad9084(StringLiteral_7614);
    thunk_FUN_01ad9084(StringLiteral_2249);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(StringLiteral_2251);
    thunk_FUN_01ad9084(StringLiteral_8379);
    thunk_FUN_01ad9084(StringLiteral_2252);
    thunk_FUN_01ad9084(StringLiteral_12396);
    thunk_FUN_01ad9084(StringLiteral_7422);
    thunk_FUN_01ad9084(StringLiteral_2254);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01ad9084(StringLiteral_616);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(StringLiteral_2257);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03daa0a0);
    thunk_FUN_01ad9084(PTR_DAT_03daa0a8);
    thunk_FUN_01ad9084(PTR_DAT_03daa0b0);
    DAT_03ff94a8 = 1;
  }
  if ((param_1 != 0) &&
     (plVar3 = (long *)thunk_FUN_01acfdbc(param_1,0), puVar1 = StringLiteral_2245,
     plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = FUN_03059e84(plVar3,0);
      puVar1 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
      ;
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined8 *)StringLiteral_2251;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_0304eec0(uVar11,0);
        uVar4 = FUN_03057a60(plVar3,uVar11,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = *(undefined8 *)StringLiteral_613;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_0304eec0(uVar11,0);
          uVar4 = FUN_03057a60(plVar3,uVar11,0);
          if ((uVar4 & 1) == 0) {
            uVar11 = *(undefined8 *)StringLiteral_2246;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar11 = FUN_0304eec0(uVar11,0);
            uVar4 = FUN_03057a60(plVar3,uVar11,0);
            if ((uVar4 & 1) == 0) {
              uVar11 = *(undefined8 *)StringLiteral_2254;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_0304eec0(uVar11,0);
              uVar4 = FUN_03057a60(plVar3,uVar11,0);
              if ((uVar4 & 1) == 0) {
                uVar11 = *(undefined8 *)StringLiteral_2249;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar11 = FUN_0304eec0(uVar11,0);
                uVar4 = FUN_03057a60(plVar3,uVar11,0);
                if ((uVar4 & 1) == 0) {
                  uVar11 = *(undefined8 *)StringLiteral_2252;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar11 = FUN_0304eec0(uVar11,0);
                  uVar4 = FUN_03057a60(plVar3,uVar11,0);
                  if ((uVar4 & 1) == 0) {
                    uVar11 = *(undefined8 *)StringLiteral_616;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar11 = FUN_0304eec0(uVar11,0);
                    uVar4 = FUN_03057a60(plVar3,uVar11,0);
                    if ((uVar4 & 1) == 0) {
                      uVar11 = *(undefined8 *)StringLiteral_2248;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar11 = FUN_0304eec0(uVar11,0);
                      uVar4 = FUN_03057a60(plVar3,uVar11,0);
                      if ((uVar4 & 1) == 0) {
                        uVar11 = *(undefined8 *)StringLiteral_2247;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar11 = FUN_0304eec0(uVar11,0);
                        uVar4 = FUN_03057a60(plVar3,uVar11,0);
                        if ((uVar4 & 1) == 0) {
                          return 0;
                        }
                        uVar11 = *(undefined8 *)
                                  Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                        ;
                        lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                        if (lVar5 != 0) {
                          uVar11 = FUN_038dec28();
                          return uVar11;
                        }
                      }
                      else {
                        uVar11 = *(undefined8 *)StringLiteral_4247;
                        lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                        if (lVar5 != 0) {
                          uVar11 = FUN_038deca0();
                          return uVar11;
                        }
                      }
                    }
                    else {
                      uVar11 = *(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
                      lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                      if (lVar5 != 0) {
                        uVar11 = FUN_038ded18();
                        return uVar11;
                      }
                    }
                  }
                  else {
                    uVar11 = *(undefined8 *)StringLiteral_8379;
                    lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                    if (lVar5 != 0) {
                      uVar11 = FUN_038ded90();
                      return uVar11;
                    }
                  }
                }
                else {
                  uVar11 = *(undefined8 *)StringLiteral_7614;
                  lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                  if (lVar5 != 0) {
                    uVar11 = FUN_038dee08();
                    return uVar11;
                  }
                }
              }
              else {
                uVar11 = *(undefined8 *)StringLiteral_7422;
                lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
                if (lVar5 != 0) {
                  uVar11 = FUN_038def20();
                  return uVar11;
                }
              }
            }
            else {
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f336c(*(undefined8 *)PTR_DAT_03daa0a8,0);
              uVar11 = *(undefined8 *)
                        Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
              ;
              lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
              if (lVar5 != 0) {
                uVar11 = FUN_038dee80();
                return uVar11;
              }
            }
          }
          else {
            uVar11 = *(undefined8 *)Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__;
            lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
            if (lVar5 != 0) {
              uVar11 = FUN_038def98();
              return uVar11;
            }
          }
        }
        else {
          uVar11 = *(undefined8 *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
          ;
          lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
          if (lVar5 != 0) {
            uVar11 = FUN_038df038();
            return uVar11;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(param_1,uVar11);
      }
      uVar11 = *(undefined8 *)StringLiteral_2257;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_0304eec0(uVar11,0);
      uVar4 = FUN_03057a60(plVar3,uVar11,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)StringLiteral_2244;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_0304eec0(uVar11,0);
        uVar4 = FUN_03057a60(plVar3,uVar11,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = thunk_FUN_01ad9084(PTR_DAT_03daa0b8);
          uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          uVar7 = thunk_FUN_01ad9084(StringLiteral_2260);
          uVar11 = FUN_02ee6c30(uVar11,uVar6,uVar7,0);
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__
                            );
          uVar6 = thunk_FUN_01afaadc();
          FUN_03076790(uVar6,uVar11,0);
          uVar11 = thunk_FUN_01ad9084(PTR_DAT_03daa0c0);
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar6,uVar11);
        }
        uVar11 = *(undefined8 *)StringLiteral_2826;
        lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
        if (lVar5 == 0) goto LAB_038d44f8;
        uVar2 = thunk_FUN_01acf2a0(param_1,0,0);
        lVar8 = FUN_01b47fd0(*(undefined8 *)StringLiteral_12396,(ulong)uVar2);
        uVar11 = UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0__<GetRootElementForId>b__0
                           (*(undefined8 *)PTR_DAT_03daa0b0);
        if ((int)uVar2 < 1) {
          uVar6 = 0;
        }
        else {
          uVar4 = 0;
          uVar6 = 0;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_038d44f0;
            lVar10 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
            if (lVar10 == 0) {
              if (lVar8 == 0) goto LAB_038d44f4;
              if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_038d44f0;
              *(undefined8 *)(lVar8 + 0x20 + uVar4 * 8) = 0;
            }
            else {
              uVar7 = 0;
              if (*(long *)(lVar10 + 0x10) != 0) {
                uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x18);
              }
              if (lVar8 == 0) goto LAB_038d44f4;
              if ((*(uint *)(lVar8 + 0x18) <= uVar4) ||
                 (*(undefined8 *)(lVar8 + 0x20 + uVar4 * 8) = uVar7,
                 *(uint *)(lVar5 + 0x18) <= uVar4)) goto LAB_038d44f0;
              if (*(long *)(lVar10 + 0x18) == 0) goto LAB_038d44f4;
              uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18);
              uVar9 = FUN_0308a038(uVar6,uVar7,0);
              if (((uVar9 & 1) != 0) &&
                 (uVar9 = FUN_030821ec(uVar6,0,0), uVar6 = uVar7, (uVar9 & 1) == 0)) {
                uVar6 = uVar11;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
        uVar6 = FUN_038debb0(lVar8,uVar6);
        FUN_038dbe20(uVar11);
      }
      else {
        uVar11 = *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
        lVar5 = thunk_FUN_01afa9e0(param_1,uVar11);
        if (lVar5 == 0) {
LAB_038d44f8:
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(param_1,uVar11);
        }
        uVar2 = thunk_FUN_01acf2a0(param_1,0,0);
        uVar11 = UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0__<GetRootElementForId>b__0
                           (*(undefined8 *)PTR_DAT_03daa0a0);
        if (DAT_03ff9398 == (code *)0x0) {
          DAT_03ff9398 = (code *)FUN_01b47f04(
                                             "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                             );
        }
        uVar6 = (*DAT_03ff9398)((ulong)uVar2,uVar11,0);
        if (0 < (int)uVar2) {
          uVar4 = 0;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_038d44f0:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar7 = FUN_038dbe78(*(undefined8 *)(lVar5 + 0x20 + uVar4 * 8));
            if (DAT_03ff9428 == (code *)0x0) {
              DAT_03ff9428 = (code *)FUN_01b47f04(
                                                 "UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)"
                                                 );
            }
            (*DAT_03ff9428)(uVar6,uVar4 & 0xffffffff,uVar7);
            FUN_038dbe20(uVar7);
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
        FUN_038dbe20(uVar11);
      }
      return uVar6;
    }
  }
LAB_038d44f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


