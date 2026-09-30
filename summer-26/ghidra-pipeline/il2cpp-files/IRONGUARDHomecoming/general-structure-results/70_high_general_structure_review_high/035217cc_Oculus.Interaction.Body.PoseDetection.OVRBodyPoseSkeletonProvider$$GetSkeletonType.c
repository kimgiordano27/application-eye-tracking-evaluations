/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$GetSkeletonType
ENTRY_POINT: 035217cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__GetSkeletonType(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long in_stack_00000008;
  
  lVar12 = FUN_01f08890(*unaff_x21,1);
  puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s16__;
  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u16__;
  puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s8__;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s32__;
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_s8__;
  puVar6 = Method_Meta_WitAi_Events_SpeechEvents_SetEvent<WitResponseNode>__;
  puVar5 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
  puVar4 = Method_UnityEngine_UIElements_TextValueField<long>_get_formatString__;
  puVar3 = Method_System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_Pop__;
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined4 *)(lVar12 + 0x20) = 3;
      *(long *)(unaff_x19 + 0x20) = lVar12;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)puVar6;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)puVar3;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)puVar2;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)puVar5;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)puVar5;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)puVar2;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)puVar8;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)puVar11;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)puVar9;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)puVar10;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)puVar2;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)puVar5;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)puVar4;
      thunk_FUN_01f51358();
      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)puVar7;
      thunk_FUN_01f51358();
      lVar12 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,10);
      if (lVar12 == 0) goto LAB_03521bbc;
      if (*(int *)(lVar12 + 0x18) != 0) {
        *(undefined8 *)(lVar12 + 0x20) =
             *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__;
        thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x20));
        if (1 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x28) =
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
          ;
          thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x28));
          if (2 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x30) =
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u32__;
            thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x30));
            if (3 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x38) =
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u16__;
              thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x38));
              if (4 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x40) =
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u8__;
                thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x40));
                if (5 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x48) =
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s8__;
                  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x48));
                  if (6 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x50) =
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s16__;
                    thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x50));
                    if (7 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x58) =
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u32__;
                      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x58));
                      if (8 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x60) =
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s32__;
                        thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x60));
                        puVar2 = 
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        ;
                        if (9 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + 0x68) =
                               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u8__
                          ;
                          thunk_FUN_01f51358();
                          *(long *)(unaff_x19 + 0xa0) = lVar12;
                          thunk_FUN_01f51358((long *)(unaff_x19 + 0xa0),lVar12);
                          uVar1 = DAT_00c8de30;
                          *(undefined8 *)(unaff_x19 + 0xac) = 0x200000002;
                          *(undefined4 *)(unaff_x19 + 0xbc) = 1;
                          *(undefined8 *)(unaff_x19 + 200) = uVar1;
                          *(undefined2 *)(unaff_x19 + 0xd3) = 0x101;
                          FUN_035ac8e8();
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          if (DAT_04833019 == '\0') {
                            thunk_FUN_01efb3a4(
                                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                              );
                            DAT_04833019 = '\x01';
                          }
                          lVar12 = *(long *)puVar2;
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar12 = *(long *)puVar2;
                          }
                          if (**(char **)(lVar12 + 0xb8) == '\0') {
                            if (in_stack_00000008 == 0) {
                              return;
                            }
                            FUN_03521d14(in_stack_00000008);
                            uVar13 = FUN_0340eec4(*(undefined8 *)(in_stack_00000008 + 0x58),0);
                            if ((uVar13 & 1) == 0) {
                              return;
                            }
                          }
                          *(undefined1 *)(unaff_x19 + 0xd2) = 1;
                          return;
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
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_03521bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


