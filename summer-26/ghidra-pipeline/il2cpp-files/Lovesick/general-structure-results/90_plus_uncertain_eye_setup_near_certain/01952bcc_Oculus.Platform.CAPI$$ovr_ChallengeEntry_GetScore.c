/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ChallengeEntry_GetScore
ENTRY_POINT: 01952bcc
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


undefined8 Oculus_Platform_CAPI__ovr_ChallengeEntry_GetScore(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x21;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 in_d3;
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
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack000000000000016c;
  undefined4 in_stack_00000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  float fStack000000000000018c;
  float in_stack_00000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  
  thunk_FUN_00d48444(Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__);
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_<>c_<Awake>b__183_0__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f4db0);
  thunk_FUN_00d48444(StringLiteral_6259);
  *(undefined1 *)(unaff_x19 + 0x1c3) = 1;
  puVar3 = 
  Method_Sirenix_Serialization_SerializationNodeDataWriter_WritePrimitiveArray<__Il2CppFullySharedGenericStructType>__
  ;
  puVar2 = Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__;
  _uStack00000000000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001b8 = 0;
  in_stack_00000188 = 0;
  fStack000000000000018c = 0.0;
  in_stack_00000190 = 0.0;
  fStack0000000000000194 = 0.0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0.0;
  in_stack_00000168 = 0;
  uStack000000000000016c = 0;
  in_stack_00000170 = 0;
  uStack0000000000000174 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000150 = 0;
  in_stack_00000110 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) < 0x18) {
      return 0;
    }
    if (*in_stack_00000038 != 0) {
      if (*(int *)(*in_stack_00000038 + 0x18) < 0x1a) {
        return 0;
      }
      lVar10 = *(long *)
                Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar2;
      }
      lVar11 = *(long *)puVar3;
      plVar12 = *(long **)(lVar10 + 0xb8) + 1;
      if (in_stack_00000030._4_4_ == 0) {
        plVar12 = *(long **)(lVar10 + 0xb8);
      }
      lVar10 = *plVar12;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar3;
      }
      plVar12 = *(long **)(lVar11 + 0xb8) + 1;
      if (in_stack_00000030._4_4_ == 0) {
        plVar12 = *(long **)(lVar11 + 0xb8);
      }
      lVar11 = *plVar12;
      if (lVar11 != 0) {
        lVar18 = *in_stack_00000038;
        plVar12 = (long *)OVRPlugin__QuerySpacesWithResult(lVar11,0);
        if (plVar12 != (long *)0x0) {
          lVar14 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_033f4db0) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_01952d5c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)PTR_DAT_033f4db0,0);
LAB_01952d5c:
          lVar14 = (*(code *)*puVar13)(plVar12,1,puVar13[1]);
          puVar4 = 
          Method_UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_<>c_<Awake>b__183_0__;
          plVar12 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
          puVar3 = Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__;
          puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_6__;
          uVar21 = *(undefined8 *)(lVar14 + 0x18);
          uVar22 = *(undefined8 *)(lVar14 + 0xc);
          in_stack_00000080 = *(undefined8 *)(lVar14 + 4);
          fStack0000000000000094 = (float)uVar21;
          fStack0000000000000098 = (float)((ulong)uVar21 >> 0x20);
          fStack0000000000000090 = (float)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x20);
          uStack0000000000000088 = (undefined4)uVar22;
          fStack000000000000008c = (float)((ulong)uVar22 >> 0x20);
          if (lVar18 != 0) {
            fStack00000000000000cc = fStack000000000000008c;
            uStack00000000000000d0 = fStack0000000000000090;
            in_stack_000000c0 = in_stack_00000080;
            uStack00000000000000c8 = uStack0000000000000088;
            uStack00000000000000d4 = uVar21;
            if (*(uint *)(lVar18 + 0x18) < 2) {
LAB_019532f8:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar15 = 0;
            *(undefined8 *)(lVar18 + 0x50) = uVar21;
            *(ulong *)(lVar18 + 0x48) = CONCAT44(fStack0000000000000090,fStack000000000000008c);
            *(undefined8 *)(lVar18 + 0x44) = uVar22;
            *(undefined8 *)(lVar18 + 0x3c) = in_stack_00000080;
            do {
              lVar18 = FUN_01a2b930(lVar11,uVar15 & 0xffffffff,0);
              _uStack00000000000001a8 = *(undefined8 *)(lVar18 + 0xc);
              in_stack_000001a0 = *(undefined8 *)(lVar18 + 4);
              in_stack_000001b0 = *(undefined8 *)(lVar18 + 0x14);
              in_stack_000001b8 = *(undefined4 *)(lVar18 + 0x1c);
              lVar18 = *plVar12;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar18);
                lVar18 = *plVar12;
              }
              lVar14 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_019532f8;
              uVar1 = *(uint *)(lVar14 + uVar15 * 4 + 0x20);
              if (-1 < (int)uVar1) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar18 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                uVar9 = FUN_01952b44(uVar15 & 0xffffffff);
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar18);
                  lVar18 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
                if (lVar18 == 0) break;
                if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_019532f8;
                if (*(int *)(lVar18 + uVar15 * 4 + 0x20) == 0) {
                  if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02666fdc(&stack0x00000080,0);
                  in_stack_00000188 = uStack0000000000000088;
                  in_stack_00000180 = in_stack_00000080;
                  fStack0000000000000194 = fStack0000000000000094;
                  in_stack_00000198 = fStack0000000000000098;
                  fStack000000000000018c = fStack000000000000008c;
                  in_stack_00000190 = fStack0000000000000090;
                  if (-1 < (int)uVar9) {
                    if (lVar10 == 0) break;
                    do {
                      plVar12 = (long *)FUN_01a3ed94(lVar10,0);
                      if (plVar12 == (long *)0x0) goto LAB_019532f4;
                      lVar18 = *plVar12;
                      uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                            puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                            goto LAB_01953074;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01953074:
                      lVar18 = (*(code *)*puVar13)(plVar12,uVar9,puVar13[1]);
                      in_stack_00000160 = *(undefined8 *)(lVar18 + 4);
                      in_stack_00000178 = *(undefined4 *)(lVar18 + 0x1c);
                      in_stack_00000168 = (undefined4)*(undefined8 *)(lVar18 + 0xc);
                      uStack000000000000016c =
                           (undefined4)((ulong)*(undefined8 *)(lVar18 + 0xc) >> 0x20);
                      in_stack_00000170 = (undefined4)*(undefined8 *)(lVar18 + 0x14);
                      uStack0000000000000174 =
                           (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x14) >> 0x20);
                      if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_019532f8;
                      lVar18 = unaff_x21 + (long)(int)uVar9 * 0x10;
                      uVar22 = *(undefined8 *)(lVar18 + 0x28);
                      uVar21 = *(undefined8 *)(lVar18 + 0x20);
                      uStack0000000000000174 = (undefined4)uVar22;
                      in_stack_00000178 = (undefined4)((ulong)uVar22 >> 0x20);
                      uStack000000000000016c = (undefined4)uVar21;
                      in_stack_00000170 = (undefined4)((ulong)uVar21 >> 0x20);
                      FUN_019ac4ac(&stack0x00000180,&stack0x00000160,0);
                      lVar18 = *(long *)puVar2;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar18 = *(long *)puVar2;
                      }
                      lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
                      if (lVar18 == 0) goto LAB_019532f4;
                      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_019532f8;
                      uVar9 = *(uint *)(lVar18 + (long)(int)uVar9 * 4 + 0x20);
                    } while (-1 < (int)uVar9);
                  }
                  fVar8 = in_stack_00000198;
                  fVar7 = fStack0000000000000194;
                  fVar6 = in_stack_00000190;
                  fVar5 = fStack000000000000018c;
                  in_d3 = CONCAT44(in_stack_00000190,fStack000000000000018c);
                  if (DAT_0377a2f5 == '\0') {
                    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
                    DAT_0377a2f5 = '\x01';
                  }
                  fVar20 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
                  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar20) {
                    uVar21 = CONCAT44(fVar6 / fVar20,fVar5 / fVar20);
                    uVar22 = CONCAT44(fVar8 / fVar20,fVar7 / fVar20);
                  }
                  else {
                    if (DAT_03774f00 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                        );
                      DAT_03774f00 = '\x01';
                    }
                    uVar22 = (*(undefined8 **)
                               (*(long *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                               + 0xb8))[1];
                    uVar21 = **(undefined8 **)
                               (*(long *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                               + 0xb8);
                  }
                  lVar18 = *(long *)puVar3;
                  fStack0000000000000194 = (float)uVar22;
                  in_stack_00000198 = (float)((ulong)uVar22 >> 0x20);
                  fStack000000000000018c = (float)uVar21;
                  in_stack_00000190 = (float)((ulong)uVar21 >> 0x20);
                  lVar14 = *in_stack_00000038;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar18 = *(long *)puVar3;
                  }
                  FUN_01a2efbc(&stack0x00000080,*(long *)(lVar18 + 0xb8) + 0x138,
                               in_stack_00000030._4_4_,0);
                  in_stack_00000138 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
                  in_stack_00000130 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                  in_stack_00000128 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                  in_stack_00000148 = in_stack_000000a8;
                  in_stack_00000140 = in_stack_000000a0;
                  in_stack_00000120 = in_stack_00000080;
                  in_stack_00000150 = in_stack_000000b0;
                  FUN_01a2efbc(&stack0x00000080,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,
                               in_stack_00000030._4_4_,0);
                  in_stack_000000f8 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
                  in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                  in_stack_000000e8 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                  in_stack_00000108 = in_stack_000000a8;
                  in_stack_00000100 = in_stack_000000a0;
                  in_stack_000000e0 = in_stack_00000080;
                  in_stack_00000110 = in_stack_000000b0;
                  if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0) ==
                      0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01a38660(&stack0x00000060,&stack0x00000180,&stack0x00000120,&stack0x000000e0,0
                              );
                  uStack0000000000000088 = uStack0000000000000068;
                  in_stack_00000080 = in_stack_00000060;
                  fStack0000000000000094 = (float)uStack0000000000000074;
                  fStack0000000000000098 = SUB84(uStack0000000000000074,4);
                  fStack000000000000008c = fStack000000000000006c;
                  fStack0000000000000090 = (float)uStack0000000000000070;
                  if (lVar14 == 0) break;
                  if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_019532f8;
                  lVar14 = lVar14 + uVar15 * 0x1c;
                  *(undefined8 *)(lVar14 + 0x34) = uStack0000000000000074;
                  *(ulong *)(lVar14 + 0x2c) =
                       CONCAT44(uStack0000000000000070,fStack000000000000006c);
                  *(ulong *)(lVar14 + 0x28) =
                       CONCAT44(fStack000000000000006c,uStack0000000000000068);
                  *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
                  plVar12 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                else {
                  if ((uVar9 != 0xffffffff) && ((int)uVar9 < 0x13)) {
                    lVar18 = *(long *)puVar3;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar18 = *(long *)puVar3;
                    }
                    FUN_01a2efbc(&stack0x00000080,*(long *)(lVar18 + 0xb8) + 0x138,
                                 in_stack_00000030._4_4_,0);
                    in_stack_00000138 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
                    in_stack_00000130 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                    in_stack_00000128 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                    in_stack_00000148 = in_stack_000000a8;
                    in_stack_00000140 = in_stack_000000a0;
                    in_stack_00000120 = in_stack_00000080;
                    in_stack_00000150 = in_stack_000000b0;
                    FUN_01a2efbc(&stack0x00000080,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,
                                 in_stack_00000030._4_4_,0);
                    in_stack_000000f8 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
                    uVar21 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
                    in_stack_000000e8 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
                    in_stack_00000108 = in_stack_000000a8;
                    in_stack_00000100 = in_stack_000000a0;
                    in_stack_000000e0 = in_stack_00000080;
                    in_stack_00000110 = in_stack_000000b0;
                    uVar22 = in_stack_00000080;
                    in_stack_000000f0 = uVar21;
                    if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0)
                        == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar24 = (undefined4)uVar22;
                    uVar23 = (undefined4)uVar21;
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_019532f8;
                    uVar19 = FUN_01a381d4(unaff_x21 + (long)(int)uVar9 * 0x10 + 0x20,
                                          &stack0x00000120,&stack0x000000e0,0);
                    _uStack00000000000001a8 = CONCAT44(uVar19,uStack00000000000001a8);
                    in_stack_000001b8 = (undefined4)in_d3;
                    in_stack_000001b0 = CONCAT44(uVar24,uVar23);
                  }
                  plVar12 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                  lVar18 = *in_stack_00000038;
                  if (lVar18 == 0) break;
                  if (((uint)*(ulong *)(lVar18 + 0x18) <= uVar1) ||
                     ((*(ulong *)(lVar18 + 0x18) & 0xffffffff) <= uVar15)) goto LAB_019532f8;
                  FUN_019a7844(lVar18 + 0x20 + (long)(int)uVar1 * 0x1c,&stack0x000001a0,
                               lVar18 + 0x20 + uVar15 * 0x1c,0);
                }
              }
              uVar15 = uVar15 + 1;
              if (uVar15 == 0x1a) {
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


