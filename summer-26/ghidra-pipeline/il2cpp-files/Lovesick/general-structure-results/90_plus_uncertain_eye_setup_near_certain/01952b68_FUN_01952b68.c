/*
FUNCTION_NAME: FUN_01952b68
ENTRY_POINT: 01952b68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_01952b68(long param_1,int param_2,long *param_3)

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
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 in_d3;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  float local_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined4 uStack_158;
  float fStack_154;
  float fStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_0377a1c3 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_6__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<MemberInfo>__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_SerializationNodeDataWriter_WritePrimitiveArray<__Il2CppFullySharedGenericStructType>__
                      );
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable_<>c_<Awake>b__183_0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4db0);
    thunk_FUN_00d48444(StringLiteral_6259);
    DAT_0377a1c3 = 1;
  }
  puVar3 = 
  Method_Sirenix_Serialization_SerializationNodeDataWriter_WritePrimitiveArray<__Il2CppFullySharedGenericStructType>__
  ;
  puVar2 = Method_Oculus_Interaction_Input_FromOVRHmdDataSource_HandleInputDataDirtied__;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_98 = 0;
  fStack_94 = 0.0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  local_a0 = 0;
  local_88 = 0.0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  local_110 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 0x18) {
      return 0;
    }
    if (*param_3 != 0) {
      if (*(int *)(*param_3 + 0x18) < 0x1a) {
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
      if (param_2 == 0) {
        plVar12 = *(long **)(lVar10 + 0xb8);
      }
      lVar10 = *plVar12;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar3;
      }
      plVar12 = *(long **)(lVar11 + 0xb8) + 1;
      if (param_2 == 0) {
        plVar12 = *(long **)(lVar11 + 0xb8);
      }
      lVar11 = *plVar12;
      if (lVar11 != 0) {
        lVar18 = *param_3;
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
          uStack_1a0 = *(undefined8 *)(lVar14 + 4);
          fStack_18c = (float)uVar21;
          fStack_188 = (float)((ulong)uVar21 >> 0x20);
          fStack_190 = (float)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x20);
          uStack_198 = (undefined4)uVar22;
          local_194 = (float)((ulong)uVar22 >> 0x20);
          if (lVar18 != 0) {
            fStack_154 = local_194;
            fStack_150 = fStack_190;
            local_160 = uStack_1a0;
            uStack_158 = uStack_198;
            uStack_14c = uVar21;
            if (*(uint *)(lVar18 + 0x18) < 2) {
LAB_019532f8:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar15 = 0;
            *(undefined8 *)(lVar18 + 0x50) = uVar21;
            *(ulong *)(lVar18 + 0x48) = CONCAT44(fStack_190,local_194);
            *(undefined8 *)(lVar18 + 0x44) = uVar22;
            *(undefined8 *)(lVar18 + 0x3c) = uStack_1a0;
            do {
              lVar18 = FUN_01a2b930(lVar11,uVar15 & 0xffffffff,0);
              uStack_78 = *(undefined8 *)(lVar18 + 0xc);
              local_80 = *(undefined8 *)(lVar18 + 4);
              local_70 = *(undefined8 *)(lVar18 + 0x14);
              local_68 = *(undefined4 *)(lVar18 + 0x1c);
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
                  FUN_02666fdc(&uStack_1a0,0);
                  uStack_98 = uStack_198;
                  local_a0 = uStack_1a0;
                  fStack_8c = fStack_18c;
                  local_88 = fStack_188;
                  fStack_94 = local_194;
                  fStack_90 = fStack_190;
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
                      local_c0 = *(undefined8 *)(lVar18 + 4);
                      local_a8 = *(undefined4 *)(lVar18 + 0x1c);
                      uStack_b8 = (undefined4)*(undefined8 *)(lVar18 + 0xc);
                      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0xc) >> 0x20);
                      local_b0 = (undefined4)*(undefined8 *)(lVar18 + 0x14);
                      uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x14) >> 0x20);
                      if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_019532f8;
                      lVar18 = param_1 + (long)(int)uVar9 * 0x10;
                      uVar22 = *(undefined8 *)(lVar18 + 0x28);
                      uVar21 = *(undefined8 *)(lVar18 + 0x20);
                      uStack_ac = (undefined4)uVar22;
                      local_a8 = (undefined4)((ulong)uVar22 >> 0x20);
                      uStack_b4 = (undefined4)uVar21;
                      local_b0 = (undefined4)((ulong)uVar21 >> 0x20);
                      FUN_019ac4ac(&local_a0,&local_c0,0);
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
                  fVar8 = local_88;
                  fVar7 = fStack_8c;
                  fVar6 = fStack_90;
                  fVar5 = fStack_94;
                  in_d3 = CONCAT44(fStack_90,fStack_94);
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
                  fStack_8c = (float)uVar22;
                  local_88 = (float)((ulong)uVar22 >> 0x20);
                  fStack_94 = (float)uVar21;
                  fStack_90 = (float)((ulong)uVar21 >> 0x20);
                  lVar14 = *param_3;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar18 = *(long *)puVar3;
                  }
                  FUN_01a2efbc(&uStack_1a0,*(long *)(lVar18 + 0xb8) + 0x138,param_2,0);
                  uStack_e8 = CONCAT44(uStack_184,fStack_188);
                  local_f0 = CONCAT44(fStack_18c,fStack_190);
                  uStack_f8 = CONCAT44(local_194,uStack_198);
                  uStack_d8 = uStack_178;
                  local_e0 = uStack_180;
                  local_100 = uStack_1a0;
                  local_d0 = local_170;
                  FUN_01a2efbc(&uStack_1a0,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,param_2,0);
                  uStack_128 = CONCAT44(uStack_184,fStack_188);
                  local_130 = CONCAT44(fStack_18c,fStack_190);
                  uStack_138 = CONCAT44(local_194,uStack_198);
                  uStack_118 = uStack_178;
                  local_120 = uStack_180;
                  local_140 = uStack_1a0;
                  local_110 = local_170;
                  if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0) ==
                      0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01a38660(&local_1c0,&local_a0,&local_100,&local_140,0);
                  uStack_198 = uStack_1b8;
                  uStack_1a0 = local_1c0;
                  fStack_18c = (float)uStack_1ac;
                  fStack_188 = (float)((ulong)uStack_1ac >> 0x20);
                  local_194 = fStack_1b4;
                  fStack_190 = fStack_1b0;
                  if (lVar14 == 0) break;
                  if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_019532f8;
                  lVar14 = lVar14 + uVar15 * 0x1c;
                  *(undefined8 *)(lVar14 + 0x34) = uStack_1ac;
                  *(ulong *)(lVar14 + 0x2c) = CONCAT44(fStack_1b0,fStack_1b4);
                  *(ulong *)(lVar14 + 0x28) = CONCAT44(fStack_1b4,uStack_1b8);
                  *(undefined8 *)(lVar14 + 0x20) = local_1c0;
                  plVar12 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                }
                else {
                  if ((uVar9 != 0xffffffff) && ((int)uVar9 < 0x13)) {
                    lVar18 = *(long *)puVar3;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar18 = *(long *)puVar3;
                    }
                    FUN_01a2efbc(&uStack_1a0,*(long *)(lVar18 + 0xb8) + 0x138,param_2,0);
                    uStack_e8 = CONCAT44(uStack_184,fStack_188);
                    local_f0 = CONCAT44(fStack_18c,fStack_190);
                    uStack_f8 = CONCAT44(local_194,uStack_198);
                    uStack_d8 = uStack_178;
                    local_e0 = uStack_180;
                    local_100 = uStack_1a0;
                    local_d0 = local_170;
                    FUN_01a2efbc(&uStack_1a0,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,param_2,0);
                    uStack_128 = CONCAT44(uStack_184,fStack_188);
                    uVar21 = CONCAT44(fStack_18c,fStack_190);
                    uStack_138 = CONCAT44(local_194,uStack_198);
                    uStack_118 = uStack_178;
                    local_120 = uStack_180;
                    local_140 = uStack_1a0;
                    local_110 = local_170;
                    uVar22 = uStack_1a0;
                    local_130 = uVar21;
                    if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0)
                        == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar24 = (undefined4)uVar22;
                    uVar23 = (undefined4)uVar21;
                    if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_019532f8;
                    uVar19 = FUN_01a381d4(param_1 + (long)(int)uVar9 * 0x10 + 0x20,&local_100,
                                          &local_140,0);
                    uStack_78 = CONCAT44(uVar19,(undefined4)uStack_78);
                    local_68 = (undefined4)in_d3;
                    local_70 = CONCAT44(uVar24,uVar23);
                  }
                  plVar12 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
                  lVar18 = *param_3;
                  if (lVar18 == 0) break;
                  if (((uint)*(ulong *)(lVar18 + 0x18) <= uVar1) ||
                     ((*(ulong *)(lVar18 + 0x18) & 0xffffffff) <= uVar15)) goto LAB_019532f8;
                  FUN_019a7844(lVar18 + 0x20 + (long)(int)uVar1 * 0x1c,&local_80,
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


