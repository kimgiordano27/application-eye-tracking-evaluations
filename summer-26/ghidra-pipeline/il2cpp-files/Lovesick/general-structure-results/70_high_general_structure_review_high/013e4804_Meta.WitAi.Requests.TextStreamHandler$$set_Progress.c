/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$set_Progress
ENTRY_POINT: 013e4804
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Meta_WitAi_Requests_TextStreamHandler__set_Progress
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  FUN_010e58e8(param_2,param_3,*param_1);
  lVar5 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(long *)(unaff_x19 + 0x28) = lVar5;
  if (lVar5 != 0) {
    FUN_0268427c(lVar5,1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_026841f4((float)(unaff_w24 >> 1),*(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_026843c0((float)unaff_w20 / (float)unaff_w24,*(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_02684a90(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_02684674(*(long *)(unaff_x19 + 0x28),2,0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_010c2c5c(*(long *)(unaff_x19 + 0x28),&stack0x00000018,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                          );
              lVar5 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              if (lVar5 != 0) {
                FUN_0269f750((float)unaff_w20 * 0.5,(float)unaff_w24 * 0.5,0x40400000,lVar5,0);
                uVar8 = DAT_028aa15c;
                uVar9 = DAT_028aa15c;
                FUN_02698b6c(0,0);
                FUN_0269f994(lVar5,0);
                *(undefined1 *)(unaff_x19 + 0x36) = 1;
                puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
                if (3 < *(int *)(unaff_x19 + 0x10)) {
                  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
                  iStack0000000000000028 = unaff_w20;
                  lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000028);
                  if (plVar2 == (long *)0x0) goto LAB_013e4ba4;
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) {
LAB_013e4bac:
                    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar6,0);
                  }
                  if ((int)plVar2[3] == 0) {
LAB_013e4ba8:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar2[4] = lVar3;
                  lVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000024);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_013e4bac;
                  puVar1 = 
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                  if (*(uint *)(plVar2 + 3) < 2) goto LAB_013e4ba8;
                  plVar2[5] = lVar3;
                  uStack0000000000000018 = FUN_0269f6b0(lVar5,0);
                  uStack000000000000001c = uVar8;
                  in_stack_00000020 = uVar9;
                  lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000018);
                  if ((lVar5 != 0) &&
                     (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) goto LAB_013e4bac;
                  if (*(uint *)(plVar2 + 3) < 3) goto LAB_013e4ba8;
                  plVar2[6] = lVar5;
                  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_013e4ba4;
                  in_stack_00000010._4_4_ = FUN_026841b8(*(long *)(unaff_x19 + 0x28),0);
                  lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
                  if ((lVar5 != 0) &&
                     (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) goto LAB_013e4bac;
                  if (*(uint *)(plVar2 + 3) < 4) goto LAB_013e4ba8;
                  plVar2[7] = lVar5;
                  puVar1 = StringLiteral_12992;
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_013e4ba4;
                  uStack000000000000002c = FUN_02684384(*(long *)(unaff_x19 + 0x28),0);
                  lVar5 = FUN_017841b4((long)&stack0x00000028 + 4,*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)
                     ) goto LAB_013e4bac;
                  puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_6__;
                  if (*(uint *)(plVar2 + 3) < 5) goto LAB_013e4ba8;
                  plVar2[8] = lVar5;
                  uVar6 = FUN_01600be4(*(undefined8 *)puVar1,plVar2,0);
                  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x25);
                  }
                  FUN_02660dac(uVar6,0);
                }
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  FUN_02685a6c(*(long *)(unaff_x19 + 0x28),0);
                  *(undefined1 *)(unaff_x19 + 0x36) = 0;
                  FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x18),0);
                  FUN_0142deac(*(undefined8 *)(unaff_x19 + 0x20),0);
                  puVar1 = Method_System_Collections_Generic_List<TeleportPoint>_IndexOf__;
                  if (3 < *(int *)(unaff_x19 + 0x10)) {
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660dac(*(undefined8 *)puVar1,0);
                  }
                  uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
                  *(undefined8 *)(unaff_x19 + 0x60) = 0;
                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar7 = FUN_0268b4e0(uVar6,0,0);
                  puVar1 = Method_System_Span<Vector3>__ctor__;
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_026610e4(*(undefined8 *)puVar1,0);
                  }
                  return uVar6;
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


