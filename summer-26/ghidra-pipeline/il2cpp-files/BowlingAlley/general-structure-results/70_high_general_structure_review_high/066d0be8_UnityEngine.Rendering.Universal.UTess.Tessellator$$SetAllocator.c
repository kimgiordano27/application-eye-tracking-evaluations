/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$SetAllocator
ENTRY_POINT: 066d0be8
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


void UnityEngine_Rendering_Universal_UTess_Tessellator__SetAllocator(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long lVar9;
  long unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  while (uVar6 = FUN_0536e024(&stack0x00000040,*unaff_x22), (uVar6 & 1) != 0) {
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(in_stack_00000050 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar10 = *(int *)(*(long *)(in_stack_00000050 + 0x10) + 0x24);
    if (iVar10 <= unaff_w25) {
      unaff_w25 = iVar10;
    }
  }
  FUN_0536e020(&stack0x00000040,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_ContainsKey__
              );
  lVar9 = *(long *)(unaff_x20 + 400);
  if (lVar9 != 0) {
    iVar10 = *(int *)(lVar9 + 0x2c);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (*(char *)(unaff_x24 + 0x377) == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>__ctor__
                        );
      *(undefined1 *)(unaff_x24 + 0x377) = 1;
    }
    lVar7 = *unaff_x21;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar7 = *unaff_x21;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar8 != 0) {
      iVar11 = *(int *)(lVar8 + 0x34) + -1;
      if (iVar11 <= iVar10) {
        iVar10 = iVar11;
      }
      *(int *)(lVar9 + 0x2c) = iVar10;
      if (*(long *)(unaff_x20 + 400) != 0) {
        iVar10 = *(int *)(*(long *)(unaff_x20 + 400) + 0x2c);
        if (*(char *)(unaff_x24 + 0x377) == '\0') {
          thunk_FUN_032e1da0();
          lVar7 = *unaff_x21;
          *(undefined1 *)(unaff_x24 + 0x377) = 1;
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar7 = *unaff_x21;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 != 0) {
          lVar8 = *(long *)(unaff_x20 + 400);
          *(bool *)(unaff_x20 + 0x230) = iVar10 == *(int *)(lVar9 + 0x34) + -1;
          if (lVar8 != 0) {
            iVar11 = *(int *)(lVar8 + 0x30);
            iVar10 = *(int *)(lVar8 + 0x2c);
            if (iVar11 <= *(int *)(lVar8 + 0x2c)) {
              iVar10 = iVar11;
            }
            if (unaff_w25 <= iVar11) {
              unaff_w25 = iVar10;
            }
            *(int *)(lVar8 + 0x30) = unaff_w25;
            if (*(char *)(unaff_x24 + 0x377) == '\0') {
              thunk_FUN_032e1da0();
              lVar7 = *unaff_x21;
              *(undefined1 *)(unaff_x24 + 0x377) = 1;
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar7 = *unaff_x21;
            }
            lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) &&
               (lVar9 = FUN_0503c288(lVar9,*unaff_x26), lVar9 != 0)) {
              FUN_04c7bf70(&stack0x00000028,lVar9,*unaff_x27);
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
                  uVar6 = FUN_0536e024(&stack0x00000040,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2JointType,_Quaternion>_get_Item__
                                      );
                  if ((uVar6 & 1) == 0) {
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
                  lVar9 = *(long *)(in_stack_00000050 + 0x10);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  iVar10 = *(int *)(lVar9 + 0x10);
                  iVar11 = *(int *)(lVar9 + 0x14);
                  iVar12 = *(int *)(lVar9 + 0x18);
                  FUN_06be6b04();
                  uVar6 = FUN_066d39d0((float)iVar10,(float)iVar11,(float)iVar12);
                } while (((uVar6 & 1) != 0) || (lVar9 = FUN_066d3c1c(), lVar9 == 0));
                lVar7 = *(long *)(lVar9 + 0x10);
                if (lVar7 == 0) break;
                iVar10 = 0;
                while (iVar10 < *(int *)(lVar7 + 0x18)) {
                  if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  lVar7 = FUN_041e29a8(*(long *)(lVar9 + 0x20),iVar10,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                                      );
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar7,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_Add__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x1c),0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x34),lVar7,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x20),lVar7,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_set_Item__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x28),lVar7,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>__ctor__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar7,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x2c),0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc0f50(lVar7,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                               ,*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x30),0);
                  FUN_06bc1060(*(undefined4 *)(unaff_x20 + 0x204),lVar7,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                               ,0);
                  if (*(long *)(unaff_x20 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  FUN_06bc1060(*(undefined4 *)(*(long *)(unaff_x20 + 400) + 0x3c),lVar7,
                               *(undefined8 *)puVar5,0);
                  lVar8 = *(long *)(unaff_x20 + 400);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (*(char *)(lVar8 + 0x10) != '\0') {
                    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    lVar8 = FUN_041e29a8(*(long *)(lVar9 + 0x10),iVar10,*(undefined8 *)puVar4);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    uVar1 = *(undefined8 *)(unaff_x20 + 0x1a8);
                    uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    FUN_06bbca8c(uVar1,0,uVar2,lVar8,*(undefined4 *)(lVar8 + 0x18),lVar7,0,0);
                    lVar8 = *(long *)(unaff_x20 + 400);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                  }
                  if (*(char *)(lVar8 + 0x38) != '\0') {
                    if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    lVar8 = FUN_041e29a8(*(long *)(lVar9 + 0x18),iVar10,*(undefined8 *)puVar4);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d5ee8();
                    }
                    uVar1 = *(undefined8 *)(unaff_x20 + 0x1b8);
                    uVar2 = *(undefined8 *)(unaff_x20 + 0x1c0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    FUN_06bbca8c(uVar1,0,uVar2,lVar8,*(undefined4 *)(lVar8 + 0x18),lVar7,0,0);
                  }
                  lVar7 = *(long *)(lVar9 + 0x10);
                  iVar10 = iVar10 + 1;
                  if (lVar7 == 0) goto LAB_066d1044;
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


