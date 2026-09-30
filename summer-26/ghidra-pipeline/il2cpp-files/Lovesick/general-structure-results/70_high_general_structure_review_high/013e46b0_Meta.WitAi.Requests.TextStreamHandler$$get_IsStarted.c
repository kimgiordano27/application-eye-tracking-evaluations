/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$get_IsStarted
ENTRY_POINT: 013e46b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Meta_WitAi_Requests_TextStreamHandler__get_IsStarted(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined1 unaff_w21;
  undefined1 unaff_w22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  undefined4 unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined8 unaff_x29;
  undefined4 uVar11;
  undefined4 uVar12;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  int in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__);
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__);
  puVar1 = (undefined8 *)StringLiteral_7739;
  puVar3 = System_Net_WebHeaderCollection_TypeInfo;
  DAT_03776843 = 1;
  uStack000000000000002c = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w20;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x26;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x24;
  *(undefined4 *)(unaff_x19 + 0x48) = unaff_w23;
  *(undefined4 *)(unaff_x19 + 0x30) = unaff_w25;
  *(undefined1 *)(unaff_x19 + 0x34) = unaff_w21;
  *(undefined1 *)(unaff_x19 + 0x35) = unaff_w22;
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x29;
  if ((unaff_x28 & 1) == 0) {
    puVar1 = (undefined8 *)puVar3;
  }
  uVar5 = FUN_0267c994(*puVar1,0);
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  puVar4 = StringLiteral_302;
  uVar6 = FUN_0268b4e0(uVar5,0,0);
  puVar2 = Method_System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_get_Count__;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar2,0);
    return 0;
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
  puVar2 = PTR_DAT_033ec208;
  if (lVar7 != 0) {
    FUN_0267d648(lVar7,uVar5,0);
    *(long *)(unaff_x19 + 0x18) = lVar7;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      FUN_02676e44(lVar7,in_stack_00000008._4_4_,iStack0000000000000010,0x18,0,0);
      *(long *)(unaff_x19 + 0x20) = lVar7;
      FUN_0267017c(lVar7,0,0);
      if (in_stack_00000000 != 0) {
        FUN_010e58e8(in_stack_00000000,&stack0x00000018,*(undefined8 *)UnityEngine_RectInt_TypeInfo)
        ;
        lVar7 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(long *)(unaff_x19 + 0x28) = lVar7;
        if (lVar7 != 0) {
          FUN_0268427c(lVar7,1,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_026841f4((float)(iStack0000000000000010 >> 1),*(long *)(unaff_x19 + 0x28),0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_026843c0((float)in_stack_00000008._4_4_ / (float)iStack0000000000000010,
                           *(long *)(unaff_x19 + 0x28),0);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                FUN_02684a90(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20),0);
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  FUN_02684674(*(long *)(unaff_x19 + 0x28),2,0);
                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    FUN_010c2c5c(*(long *)(unaff_x19 + 0x28),&stack0x00000018,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                                );
                    lVar7 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                    if (lVar7 != 0) {
                      FUN_0269f750((float)in_stack_00000008._4_4_ * 0.5,
                                   (float)iStack0000000000000010 * 0.5,0x40400000,lVar7,0);
                      uVar11 = DAT_028aa15c;
                      uVar12 = DAT_028aa15c;
                      FUN_02698b6c(0,0);
                      FUN_0269f994(lVar7,0);
                      *(undefined1 *)(unaff_x19 + 0x36) = 1;
                      puVar2 = 
                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
                      if (3 < *(int *)(unaff_x19 + 0x10)) {
                        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
                        in_stack_00000028 = in_stack_00000008._4_4_;
                        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000028);
                        if (plVar8 == (long *)0x0) goto LAB_013e4ba4;
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) {
LAB_013e4bac:
                          uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar5,0);
                        }
                        if ((int)plVar8[3] == 0) {
LAB_013e4ba8:
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        plVar8[4] = lVar9;
                        iStack0000000000000024 = iStack0000000000000010;
                        lVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000020 + 4)
                        ;
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_013e4bac;
                        puVar2 = 
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        ;
                        if (*(uint *)(plVar8 + 3) < 2) goto LAB_013e4ba8;
                        plVar8[5] = lVar9;
                        uStack0000000000000018 = FUN_0269f6b0(lVar7,0);
                        uStack000000000000001c = uVar11;
                        uStack0000000000000020 = uVar12;
                        lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000018);
                        if ((lVar7 != 0) &&
                           (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_013e4bac;
                        if (*(uint *)(plVar8 + 3) < 3) goto LAB_013e4ba8;
                        plVar8[6] = lVar7;
                        puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_013e4ba4;
                        uStack0000000000000014 = FUN_026841b8(*(long *)(unaff_x19 + 0x28),0);
                        lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000010 + 4)
                        ;
                        if ((lVar7 != 0) &&
                           (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_013e4bac;
                        if (*(uint *)(plVar8 + 3) < 4) goto LAB_013e4ba8;
                        plVar8[7] = lVar7;
                        puVar2 = StringLiteral_12992;
                        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_013e4ba4;
                        uStack000000000000002c = FUN_02684384(*(long *)(unaff_x19 + 0x28),0);
                        lVar7 = FUN_017841b4(&stack0x0000002c,*(undefined8 *)puVar2,0);
                        if ((lVar7 != 0) &&
                           (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_013e4bac;
                        puVar2 = 
                        Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__;
                        if (*(uint *)(plVar8 + 3) < 5) goto LAB_013e4ba8;
                        plVar8[8] = lVar7;
                        uVar5 = FUN_01600be4(*(undefined8 *)puVar2,plVar8,0);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864(*(long *)puVar4);
                        }
                        FUN_02660dac(uVar5,0);
                      }
                      if (*(long *)(unaff_x19 + 0x28) != 0) {
                        FUN_02685a6c(*(long *)(unaff_x19 + 0x28),0);
                        *(undefined1 *)(unaff_x19 + 0x36) = 0;
                        FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x18),0);
                        FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x20),0);
                        puVar2 = Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__;
                        if (3 < *(int *)(unaff_x19 + 0x10)) {
                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_02660dac(*(undefined8 *)puVar2,0);
                        }
                        uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
                        *(undefined8 *)(unaff_x19 + 0x60) = 0;
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar6 = FUN_0268b4e0(uVar5,0,0);
                        puVar3 = Method_System_Span<Vector3>__ctor__;
                        if ((uVar6 & 1) == 0) {
                          return uVar5;
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_026610e4(*(undefined8 *)puVar3,0);
                        return uVar5;
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


