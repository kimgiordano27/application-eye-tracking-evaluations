/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.OVRSkeletonMapping$$.ctor
ENTRY_POINT: 035218a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Oculus_Interaction_Body_Input_OVRSkeletonMapping___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x58) = *unaff_x29;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x68) = *unaff_x28;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x70) = *unaff_x27;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x78) = *unaff_x26;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x80) = *unaff_x25;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x88) = *unaff_x24;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x90) = *unaff_x23;
  thunk_FUN_01f51358();
  *(undefined8 *)(unaff_x19 + 0x98) = *unaff_x22;
  thunk_FUN_01f51358();
  lVar3 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) =
         *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__;
    thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x20));
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) =
           *(undefined8 *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
      ;
      thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x28));
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) =
             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u32__;
        thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x30));
        if (3 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x38) =
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u16__;
          thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x38));
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) =
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u8__;
            thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x40));
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) =
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s8__;
              thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x48));
              if (6 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x50) =
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_s16__;
                thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x50));
                if (7 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x58) =
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_u32__;
                  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x58));
                  if (8 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x60) =
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabaq_s32__;
                    thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x60));
                    puVar2 = 
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    ;
                    if (9 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x68) =
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u8__;
                      thunk_FUN_01f51358();
                      *(long *)(unaff_x19 + 0xa0) = lVar3;
                      thunk_FUN_01f51358((long *)(unaff_x19 + 0xa0),lVar3);
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
                      lVar3 = *(long *)puVar2;
                      if (*(int *)(lVar3 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar3 = *(long *)puVar2;
                      }
                      if (**(char **)(lVar3 + 0xb8) == '\0') {
                        if (in_stack_00000008 == 0) {
                          return;
                        }
                        FUN_03521d14(in_stack_00000008);
                        uVar4 = FUN_0340eec4(*(undefined8 *)(in_stack_00000008 + 0x58),0);
                        if ((uVar4 & 1) == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


