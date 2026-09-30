/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ChallengeEntry_GetTimestamp
ENTRY_POINT: 01952c48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Oculus_Platform_CAPI__ovr_ChallengeEntry_GetTimestamp
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x21;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  float fStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined8 uStack0000000000000194;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  
  puVar3 = 
  Method_Sirenix_Serialization_SerializationNodeDataWriter_WritePrimitiveArray<__Il2CppFullySharedGenericStructType>__
  ;
  puVar2 = Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__;
  uStack00000000000000e8 = param_1._8_8_;
  uStack00000000000000e0 = param_1._0_8_;
  uStack00000000000000f0 = uStack00000000000000e0;
  uStack00000000000000f8 = uStack00000000000000e8;
  uStack0000000000000100 = uStack00000000000000e0;
  uStack0000000000000108 = uStack00000000000000e8;
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) < 0x18) {
      return 0;
    }
    if (*in_stack_00000038 != 0) {
      if (*(int *)(*in_stack_00000038 + 0x18) < 0x1a) {
        return 0;
      }
      lVar7 = *(long *)Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__
      ;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      lVar8 = *(long *)puVar3;
      plVar9 = *(long **)(lVar7 + 0xb8) + 1;
      if (in_stack_00000030._4_4_ == 0) {
        plVar9 = *(long **)(lVar7 + 0xb8);
      }
      lVar7 = *plVar9;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      plVar9 = *(long **)(lVar8 + 0xb8) + 1;
      if (in_stack_00000030._4_4_ == 0) {
        plVar9 = *(long **)(lVar8 + 0xb8);
      }
      lVar8 = *plVar9;
      if (lVar8 != 0) {
        lVar15 = *in_stack_00000038;
        plVar9 = (long *)OVRPlugin__QuerySpacesWithResult(lVar8,0);
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_033f4db0) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01952d5c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)PTR_DAT_033f4db0,0);
LAB_01952d5c:
          lVar11 = (*(code *)*puVar10)(plVar9,1,puVar10[1]);
          puVar4 = 
          Method_UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_<>c_<Awake>b__183_0__;
          plVar9 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
          puVar3 = Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__;
          puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_6__;
          uVar18 = *(undefined8 *)(lVar11 + 0x18);
          uVar19 = *(undefined8 *)(lVar11 + 0xc);
          in_stack_00000080 = *(undefined8 *)(lVar11 + 4);
          uStack0000000000000094 = (undefined4)uVar18;
          uStack0000000000000098 = (undefined4)((ulong)uVar18 >> 0x20);
          fStack0000000000000090 = (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
          uStack0000000000000088 = (undefined4)uVar19;
          fStack000000000000008c = (float)((ulong)uVar19 >> 0x20);
          if (lVar15 != 0) {
            fStack00000000000000cc = fStack000000000000008c;
            uStack00000000000000d0 = fStack0000000000000090;
            in_stack_000000c0 = in_stack_00000080;
            uStack00000000000000c8 = uStack0000000000000088;
            uStack00000000000000d4 = uVar18;
            if (*(uint *)(lVar15 + 0x18) < 2) {
LAB_019532f8:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar12 = 0;
            *(undefined8 *)(lVar15 + 0x50) = uVar18;
            *(ulong *)(lVar15 + 0x48) = CONCAT44(fStack0000000000000090,fStack000000000000008c);
            *(undefined8 *)(lVar15 + 0x44) = uVar19;
            *(undefined8 *)(lVar15 + 0x3c) = in_stack_00000080;
            do {
              lVar15 = FUN_01a2b930(lVar8,uVar12 & 0xffffffff,0);
              _uStack00000000000001a8 = *(undefined8 *)(lVar15 + 0xc);
              in_stack_000001a0 = *(undefined8 *)(lVar15 + 4);
              in_stack_000001b0 = *(undefined8 *)(lVar15 + 0x14);
              in_stack_000001b8 = *(undefined4 *)(lVar15 + 0x1c);
              lVar15 = *plVar9;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar15);
                lVar15 = *plVar9;
              }
              lVar11 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_019532f8;
              uVar1 = *(uint *)(lVar11 + uVar12 * 4 + 0x20);
              if (-1 < (int)uVar1) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar15 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                uVar6 = FUN_01952b44(uVar12 & 0xffffffff);
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar15);
                  lVar15 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
                if (lVar15 == 0) break;
                if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_019532f8;
                if (*(int *)(lVar15 + uVar12 * 4 + 0x20) == 0) {
                  if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02666fdc(&stack0x00000080,0);
                  uStack0000000000000194 = CONCAT44(uStack0000000000000098,uStack0000000000000094);
                  uStack0000000000000188 = uStack0000000000000088;
                  in_stack_00000180 = in_stack_00000080;
                  fStack000000000000018c = fStack000000000000008c;
                  uStack0000000000000190 = fStack0000000000000090;
                  if (-1 < (int)uVar6) {
                    if (lVar7 == 0) break;
                    do {
                      plVar9 = (long *)FUN_01a3ed94(lVar7,0);
                      if (plVar9 == (long *)0x0) goto LAB_019532f4;
                      lVar15 = *plVar9;
                      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_01953074;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_01953074:
                      lVar15 = (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
                      in_stack_00000160 = *(undefined8 *)(lVar15 + 4);
                      in_stack_00000178 = *(undefined4 *)(lVar15 + 0x1c);
                      uStack0000000000000168 = (undefined4)*(undefined8 *)(lVar15 + 0xc);
                      uStack000000000000016c =
                           (undefined4)((ulong)*(undefined8 *)(lVar15 + 0xc) >> 0x20);
                      uStack0000000000000170 = (undefined4)*(undefined8 *)(lVar15 + 0x14);
                      uStack0000000000000174 =
                           (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x14) >> 0x20);
                      if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_019532f8;
                      lVar15 = unaff_x21 + (long)(int)uVar6 * 0x10;
                      uVar19 = *(undefined8 *)(lVar15 + 0x28);
                      uVar18 = *(undefined8 *)(lVar15 + 0x20);
                      uStack0000000000000174 = (undefined4)uVar19;
                      in_stack_00000178 = (undefined4)((ulong)uVar19 >> 0x20);
                      uStack000000000000016c = (undefined4)uVar18;
                      uStack0000000000000170 = (undefined4)((ulong)uVar18 >> 0x20);
                      FUN_019ac4ac(&stack0x00000180,&stack0x00000160,0);
                      lVar15 = *(long *)puVar2;
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar15 = *(long *)puVar2;
                      }
                      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
                      if (lVar15 == 0) goto LAB_019532f4;
                      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_019532f8;
                      uVar6 = *(uint *)(lVar15 + (long)(int)uVar6 * 4 + 0x20);
                    } while (-1 < (int)uVar6);
                  }
                  uVar18 = uStack0000000000000194;
                  uVar20 = uStack0000000000000190;
                  fVar5 = fStack000000000000018c;
                  param_4 = CONCAT44(uStack0000000000000190,fStack000000000000018c);
                  if (DAT_0377a2f5 == '\0') {
                    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
                    DAT_0377a2f5 = '\x01';
                  }
                  fVar22 = (float)uVar18;
                  fVar23 = SUB84(uVar18,4);
                  fVar17 = SQRT(fVar23 * fVar23 +
                                fVar22 * fVar22 + fVar5 * fVar5 + (float)uVar20 * (float)uVar20);
                  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar17) {
                    uVar18 = CONCAT44((float)uVar20 / fVar17,fVar5 / fVar17);
                    uStack0000000000000194 = CONCAT44(fVar23 / fVar17,fVar22 / fVar17);
                  }
                  else {
                    if (DAT_03774f00 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                        );
                      DAT_03774f00 = '\x01';
                    }
                    uStack0000000000000194 =
                         (*(undefined8 **)
                           (*(long *)
                             Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                           + 0xb8))[1];
                    uVar18 = **(undefined8 **)
                               (*(long *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                               + 0xb8);
                  }
                  lVar15 = *(long *)puVar3;
                  fStack000000000000018c = (float)uVar18;
                  uStack0000000000000190 = (undefined4)((ulong)uVar18 >> 0x20);
                  lVar11 = *in_stack_00000038;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar3;
                  }
                  FUN_01a2efbc(&stack0x00000080,*(long *)(lVar15 + 0xb8) + 0x138,
                               in_stack_00000030._4_4_,0);
                  in_stack_00000138 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
                  in_stack_00000130 = CONCAT44(uStack0000000000000094,fStack0000000000000090);
                  in_stack_00000128 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                  in_stack_00000148 = in_stack_000000a8;
                  in_stack_00000140 = in_stack_000000a0;
                  in_stack_00000120 = in_stack_00000080;
                  in_stack_00000150 = in_stack_000000b0;
                  FUN_01a2efbc(&stack0x00000080,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,
                               in_stack_00000030._4_4_,0);
                  uStack00000000000000f8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
                  uStack00000000000000f0 = CONCAT44(uStack0000000000000094,fStack0000000000000090);
                  uStack00000000000000e8 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                  uStack0000000000000108 = in_stack_000000a8;
                  uStack0000000000000100 = in_stack_000000a0;
                  uStack00000000000000e0 = in_stack_00000080;
                  in_stack_00000110 = in_stack_000000b0;
                  if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0) ==
                      0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01a38660(&stack0x00000060,&stack0x00000180,&stack0x00000120,&stack0x000000e0,0
                              );
                  uStack0000000000000088 = uStack0000000000000068;
                  in_stack_00000080 = in_stack_00000060;
                  uStack0000000000000094 = (undefined4)uStack0000000000000074;
                  uStack0000000000000098 = SUB84(uStack0000000000000074,4);
                  fStack000000000000008c = fStack000000000000006c;
                  fStack0000000000000090 = (float)uStack0000000000000070;
                  if (lVar11 == 0) break;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_019532f8;
                  lVar11 = lVar11 + uVar12 * 0x1c;
                  *(undefined8 *)(lVar11 + 0x34) = uStack0000000000000074;
                  *(ulong *)(lVar11 + 0x2c) =
                       CONCAT44(uStack0000000000000070,fStack000000000000006c);
                  *(ulong *)(lVar11 + 0x28) =
                       CONCAT44(fStack000000000000006c,uStack0000000000000068);
                  *(undefined8 *)(lVar11 + 0x20) = in_stack_00000060;
                  plVar9 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                else {
                  if ((uVar6 != 0xffffffff) && ((int)uVar6 < 0x13)) {
                    lVar15 = *(long *)puVar3;
                    if (*(int *)(lVar15 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar15 = *(long *)puVar3;
                    }
                    FUN_01a2efbc(&stack0x00000080,*(long *)(lVar15 + 0xb8) + 0x138,
                                 in_stack_00000030._4_4_,0);
                    in_stack_00000138 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
                    in_stack_00000130 = CONCAT44(uStack0000000000000094,fStack0000000000000090);
                    in_stack_00000128 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                    in_stack_00000148 = in_stack_000000a8;
                    in_stack_00000140 = in_stack_000000a0;
                    in_stack_00000120 = in_stack_00000080;
                    in_stack_00000150 = in_stack_000000b0;
                    FUN_01a2efbc(&stack0x00000080,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,
                                 in_stack_00000030._4_4_,0);
                    uStack00000000000000f8 = CONCAT44(uStack000000000000009c,uStack0000000000000098)
                    ;
                    uVar18 = CONCAT44(uStack0000000000000094,fStack0000000000000090);
                    uStack00000000000000e8 = CONCAT44(fStack000000000000008c,uStack0000000000000088)
                    ;
                    uStack0000000000000108 = in_stack_000000a8;
                    uStack0000000000000100 = in_stack_000000a0;
                    uStack00000000000000e0 = in_stack_00000080;
                    in_stack_00000110 = in_stack_000000b0;
                    uVar19 = in_stack_00000080;
                    uStack00000000000000f0 = uVar18;
                    if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0)
                        == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar21 = (undefined4)uVar19;
                    uVar20 = (undefined4)uVar18;
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_019532f8;
                    uVar16 = FUN_01a381d4(unaff_x21 + (long)(int)uVar6 * 0x10 + 0x20,
                                          &stack0x00000120,&stack0x000000e0,0);
                    _uStack00000000000001a8 = CONCAT44(uVar16,uStack00000000000001a8);
                    in_stack_000001b8 = (undefined4)param_4;
                    in_stack_000001b0 = CONCAT44(uVar21,uVar20);
                  }
                  plVar9 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                  lVar15 = *in_stack_00000038;
                  if (lVar15 == 0) break;
                  if (((uint)*(ulong *)(lVar15 + 0x18) <= uVar1) ||
                     ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) <= uVar12)) goto LAB_019532f8;
                  FUN_019a7844(lVar15 + 0x20 + (long)(int)uVar1 * 0x1c,&stack0x000001a0,
                               lVar15 + 0x20 + uVar12 * 0x1c,0);
                }
              }
              uVar12 = uVar12 + 1;
              if (uVar12 == 0x1a) {
                return 1;
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_019532f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


