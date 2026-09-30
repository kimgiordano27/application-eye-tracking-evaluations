/*
FUNCTION_NAME: Meta.WitAi.Requests.AudioStreamHandler$$Dispose
ENTRY_POINT: 013e45a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Meta_WitAi_Requests_AudioStreamHandler__Dispose
          (long param_1,long param_2,int param_3,int param_4,undefined4 param_5,undefined8 param_6,
          undefined8 param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12,undefined8 param_13,int param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  byte in_stack_000000b0;
  byte in_stack_000000b8;
  undefined4 in_stack_000000d0;
  
  param_9 = param_2;
  param_10._4_4_ = param_3;
  param_11._0_4_ = param_4;
  if ((DAT_03776843 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_RectInt_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec208);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    thunk_FUN_00d48444(Method_System_Span<Vector3>__ctor__);
    thunk_FUN_00d48444(System_Net_WebHeaderCollection_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7739);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_12992);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__);
    DAT_03776843 = 1;
  }
  puVar1 = (undefined8 *)StringLiteral_7739;
  puVar3 = System_Net_WebHeaderCollection_TypeInfo;
  uStack000000000000002c = 0;
  *(undefined4 *)(param_1 + 0x10) = in_stack_000000d0;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  *(undefined8 *)(param_1 + 0x40) = param_7;
  *(undefined4 *)(param_1 + 0x48) = param_8;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(byte *)(param_1 + 0x34) = in_stack_000000b0 & 1;
  *(byte *)(param_1 + 0x35) = in_stack_000000b8 & 1;
  *(undefined8 *)(param_1 + 0x50) = in_stack_000000a0;
  *(undefined8 *)(param_1 + 0x58) = in_stack_000000a8;
  if ((in_stack_000000b0 & 1) == 0) {
    puVar1 = (undefined8 *)puVar3;
  }
  uVar7 = FUN_0267c994(*puVar1,0);
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  puVar4 = StringLiteral_302;
  uVar8 = FUN_0268b4e0(uVar7,0,0);
  puVar2 = Method_System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_get_Count__;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar2,0);
    return 0;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
  puVar2 = PTR_DAT_033ec208;
  if (lVar9 != 0) {
    FUN_0267d648(lVar9,uVar7,0);
    *(long *)(param_1 + 0x18) = lVar9;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    iVar6 = (int)param_11;
    iVar5 = param_10._4_4_;
    if (lVar9 != 0) {
      FUN_02676e44(lVar9,param_10._4_4_,(int)param_11,0x18,0,0);
      *(long *)(param_1 + 0x20) = lVar9;
      FUN_0267017c(lVar9,0,0);
      if (param_9 != 0) {
        FUN_010e58e8(param_9,&param_12,*(undefined8 *)UnityEngine_RectInt_TypeInfo);
        lVar9 = CONCAT44(param_12._4_4_,(undefined4)param_12);
        *(long *)(param_1 + 0x28) = lVar9;
        if (lVar9 != 0) {
          FUN_0268427c(lVar9,1,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_026841f4((float)(iVar6 >> 1),*(long *)(param_1 + 0x28),0);
            if (*(long *)(param_1 + 0x28) != 0) {
              fVar15 = (float)iVar5;
              FUN_026843c0(fVar15 / (float)iVar6,*(long *)(param_1 + 0x28),0);
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_02684a90(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_02684674(*(long *)(param_1 + 0x28),2,0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    FUN_010c2c5c(*(long *)(param_1 + 0x28),&param_12,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                                );
                    lVar9 = CONCAT44(param_12._4_4_,(undefined4)param_12);
                    if (lVar9 != 0) {
                      FUN_0269f750(fVar15 * 0.5,(float)iVar6 * 0.5,0x40400000,lVar9,0);
                      uVar13 = DAT_028aa15c;
                      uVar14 = DAT_028aa15c;
                      FUN_02698b6c(0,0);
                      FUN_0269f994(lVar9,0);
                      *(undefined1 *)(param_1 + 0x36) = 1;
                      puVar2 = 
                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
                      if (3 < *(int *)(param_1 + 0x10)) {
                        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
                        param_14 = iVar5;
                        lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&param_14);
                        if (plVar10 == (long *)0x0) goto LAB_013e4ba4;
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar12 == 0)) {
LAB_013e4bac:
                          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar7,0);
                        }
                        if ((int)plVar10[3] == 0) {
LAB_013e4ba8:
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        plVar10[4] = lVar11;
                        param_13._4_4_ = iVar6;
                        lVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&param_13 + 4);
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar12 == 0)) goto LAB_013e4bac;
                        puVar2 = 
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        ;
                        if (*(uint *)(plVar10 + 3) < 2) goto LAB_013e4ba8;
                        plVar10[5] = lVar11;
                        param_12._0_4_ = FUN_0269f6b0(lVar9,0);
                        param_12._4_4_ = uVar13;
                        param_13._0_4_ = uVar14;
                        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&param_12);
                        if ((lVar9 != 0) &&
                           (lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar11 == 0)) goto LAB_013e4bac;
                        if (*(uint *)(plVar10 + 3) < 3) goto LAB_013e4ba8;
                        plVar10[6] = lVar9;
                        puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                        if (*(long *)(param_1 + 0x28) == 0) goto LAB_013e4ba4;
                        param_11._4_4_ = FUN_026841b8(*(long *)(param_1 + 0x28),0);
                        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&param_11 + 4);
                        if ((lVar9 != 0) &&
                           (lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar11 == 0)) goto LAB_013e4bac;
                        if (*(uint *)(plVar10 + 3) < 4) goto LAB_013e4ba8;
                        plVar10[7] = lVar9;
                        puVar2 = StringLiteral_12992;
                        if (*(long *)(param_1 + 0x28) == 0) goto LAB_013e4ba4;
                        uStack000000000000002c = FUN_02684384(*(long *)(param_1 + 0x28),0);
                        lVar9 = FUN_017841b4(&stack0x0000002c,*(undefined8 *)puVar2,0);
                        if ((lVar9 != 0) &&
                           (lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar11 == 0)) goto LAB_013e4bac;
                        puVar2 = 
                        Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__;
                        if (*(uint *)(plVar10 + 3) < 5) goto LAB_013e4ba8;
                        plVar10[8] = lVar9;
                        uVar7 = FUN_01600be4(*(undefined8 *)puVar2,plVar10,0);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864(*(long *)puVar4);
                        }
                        FUN_02660dac(uVar7,0);
                      }
                      if (*(long *)(param_1 + 0x28) != 0) {
                        FUN_02685a6c(*(long *)(param_1 + 0x28),0);
                        *(undefined1 *)(param_1 + 0x36) = 0;
                        FUN_0142deac(*(undefined8 *)(param_1 + 0x18),0);
                        FUN_0142deac(*(undefined8 *)(param_1 + 0x20),0);
                        puVar2 = Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__;
                        if (3 < *(int *)(param_1 + 0x10)) {
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_02660dac(*(undefined8 *)puVar2,0);
                        }
                        uVar7 = *(undefined8 *)(param_1 + 0x60);
                        *(undefined8 *)(param_1 + 0x60) = 0;
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar8 = FUN_0268b4e0(uVar7,0,0);
                        puVar3 = Method_System_Span<Vector3>__ctor__;
                        if ((uVar8 & 1) == 0) {
                          return uVar7;
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_026610e4(*(undefined8 *)puVar3,0);
                        return uVar7;
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
LAB_013e4ba4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


