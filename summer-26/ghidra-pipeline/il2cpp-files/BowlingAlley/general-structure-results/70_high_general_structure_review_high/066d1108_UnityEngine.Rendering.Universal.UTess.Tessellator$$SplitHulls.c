/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$SplitHulls
ENTRY_POINT: 066d1108
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_UTess_Tessellator__SplitHulls(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar10;
  long unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  plVar8 = (long *)__cxa_begin_catch();
  lVar10 = *plVar8;
  __cxa_end_catch();
  FUN_0536e020(&stack0x00000040,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
              );
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar10);
  }
  lVar10 = *(long *)(unaff_x20 + 400);
  if (lVar10 != 0) {
    iVar11 = *(int *)(lVar10 + 0x2c);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (*(char *)(unaff_x24 + 0x377) == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                        );
      *(undefined1 *)(unaff_x24 + 0x377) = 1;
    }
    lVar6 = *unaff_x21;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *unaff_x21;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar9 != 0) {
      iVar12 = *(int *)(lVar9 + 0x34) + -1;
      if (iVar12 <= iVar11) {
        iVar11 = iVar12;
      }
      *(int *)(lVar10 + 0x2c) = iVar11;
      if (*(long *)(unaff_x20 + 400) != 0) {
        iVar11 = *(int *)(*(long *)(unaff_x20 + 400) + 0x2c);
        if (*(char *)(unaff_x24 + 0x377) == '\0') {
          thunk_FUN_032e1da0();
          lVar6 = *unaff_x21;
          *(undefined1 *)(unaff_x24 + 0x377) = 1;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x21;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar10 != 0) {
          lVar9 = *(long *)(unaff_x20 + 400);
          *(bool *)(unaff_x20 + 0x230) = iVar11 == *(int *)(lVar10 + 0x34) + -1;
          if (lVar9 != 0) {
            iVar12 = *(int *)(lVar9 + 0x30);
            iVar11 = *(int *)(lVar9 + 0x2c);
            if (iVar12 <= *(int *)(lVar9 + 0x2c)) {
              iVar11 = iVar12;
            }
            if (unaff_w25 <= iVar12) {
              unaff_w25 = iVar11;
            }
            *(int *)(lVar9 + 0x30) = unaff_w25;
            if (*(char *)(unaff_x24 + 0x377) == '\0') {
              thunk_FUN_032e1da0();
              lVar6 = *unaff_x21;
              *(undefined1 *)(unaff_x24 + 0x377) = 1;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar6 = *unaff_x21;
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x80), lVar10 != 0)) &&
               (lVar10 = FUN_0503c288(lVar10,*unaff_x26), lVar10 != 0)) {
              FUN_04c7bf70(&stack0x00000028,lVar10,*unaff_x27);
              puVar5 = 
              Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
              ;
              puVar4 = 
              Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_Add__
              ;
              puVar3 = PTR_DAT_0727aac8;
              in_stack_00000048 = in_stack_00000030;
              in_stack_00000040 = in_stack_00000028;
              in_stack_00000050 = in_stack_00000038;
              while( true ) {
                do {
                  uVar7 = FUN_0536e024(&stack0x00000040,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
                                      );
                  if ((uVar7 & 1) == 0) {
                    FUN_0536e020(&stack0x00000040,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
                                );
                    return;
                  }
                  if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  lVar10 = *(long *)(in_stack_00000050 + 0x10);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  iVar11 = *(int *)(lVar10 + 0x10);
                  iVar12 = *(int *)(lVar10 + 0x14);
                  iVar13 = *(int *)(lVar10 + 0x18);
                  FUN_06be6b04();
                  uVar7 = FUN_066d39d0((float)iVar11,(float)iVar12,(float)iVar13);
                } while (((uVar7 & 1) != 0) || (lVar10 = FUN_066d3c1c(), lVar10 == 0));
                lVar6 = *(long *)(lVar10 + 0x10);
                if (lVar6 == 0) break;
                iVar11 = 0;
                while (iVar11 < *(int *)(lVar6 + 0x18)) {
                  if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  lVar6 = FUN_041e29a8(*(long *)(lVar10 + 0x20),iVar11,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                                      );
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x1c),0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x34),lVar6,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x20),lVar6,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x28),lVar6,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x2c),0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x30),0);
                  FUN_06bc1060(*(undefined4 *)(unaff_x20 + 0x204),lVar6,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x3c),lVar6,
                               *(undefined8 *)puVar5,0);
                  lVar9 = *(long *)(unaff_x20 + 400);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (*(char *)(lVar9 + 0x10) != '\0') {
                    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    lVar9 = FUN_041e29a8(*(long *)(lVar10 + 0x10),iVar11,*(undefined8 *)puVar4);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    uVar1 = *(undefined8 *)(unaff_x20 + 0x1a8);
                    uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    FUN_06bbca8c(uVar1,0,uVar2,lVar9,*(undefined4 *)(lVar9 + 0x18),lVar6,0,0);
                    lVar9 = *(long *)(unaff_x20 + 400);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                  }
                  if (*(char *)(lVar9 + 0x38) != '\0') {
                    if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    lVar9 = FUN_041e29a8(*(long *)(lVar10 + 0x18),iVar11,*(undefined8 *)puVar4);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    uVar1 = *(undefined8 *)(unaff_x20 + 0x1b8);
                    uVar2 = *(undefined8 *)(unaff_x20 + 0x1c0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    FUN_06bbca8c(uVar1,0,uVar2,lVar9,*(undefined4 *)(lVar9 + 0x18),lVar6,0,0);
                  }
                  lVar6 = *(long *)(lVar10 + 0x10);
                  iVar11 = iVar11 + 1;
                  if (lVar6 == 0) goto LAB_066d1044;
                }
              }
LAB_066d1044:
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


