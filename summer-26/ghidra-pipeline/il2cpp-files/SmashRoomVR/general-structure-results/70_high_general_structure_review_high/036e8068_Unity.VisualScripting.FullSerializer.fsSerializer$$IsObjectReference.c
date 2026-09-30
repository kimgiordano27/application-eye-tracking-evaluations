/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsObjectReference
ENTRY_POINT: 036e8068
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


undefined4
Unity_VisualScripting_FullSerializer_fsSerializer__IsObjectReference(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_x9;
  long lVar6;
  int in_w10;
  int in_w11;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000070;
  
  if (in_w11 < in_w10) {
    if (in_w10 < 0xe6a57b) {
      if (in_w10 < 0xa3a05b) {
        if (in_w10 == 0x8b5eea) {
LAB_036e99e4:
          *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
          FUN_03705178(in_stack_00000020 + 0x260,0x10,0);
          return 1;
        }
        iVar5 = 0xa3a05a;
LAB_036e99cc:
        if (in_w10 != iVar5) {
          return 0;
        }
        *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
        return 1;
      }
      if (in_w10 != 0xb1a5a9) {
        if (in_w10 == 0xce640a) goto LAB_036e99e4;
        iVar5 = 0xe6a57a;
        goto LAB_036e99cc;
      }
    }
    else {
      if (0x2d9fc43 < in_w10) {
        if (in_w10 != 0x3004302) {
          if (in_w10 == 0x31d0163) goto LAB_036e8f94;
          if (in_w10 != 0x3434822) {
            return 0;
          }
        }
        *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
        return 1;
      }
      if (in_w10 != 0xf4aac9) {
        if (in_w10 != 0x2d9fc43) {
          return 0;
        }
LAB_036e8f94:
        if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
          return 1;
        }
        cVar2 = FUN_03705274(in_stack_00000020 + 0x260,0x10,0);
        if (cVar2 != '\0') {
          return 1;
        }
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
        return 1;
      }
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      param_2 = thunk_FUN_01ac7298();
      param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      if (in_x9 == 0) {
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    if (*(int *)(in_x9 + 0x18) != 0) {
      in_stack_00000070 = 0;
      fVar8 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                  &stack0x00000070);
      if (fVar8 == -32768.0) {
        return 0;
      }
      if (in_stack_00000028._4_4_ == 1) {
        fVar9 = DAT_00b55290;
        if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
          fVar9 = 1.0;
        }
        fVar8 = *(float *)(in_stack_00000020 + 0x1e8) * fVar8 * fVar9;
      }
      else {
        if (in_stack_00000028._4_4_ != 0) {
          return 0;
        }
        fVar9 = DAT_00b55290;
        if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
          fVar9 = 1.0;
        }
        fVar8 = fVar8 * fVar9;
      }
      *(float *)(in_stack_00000020 + 0x61c) = fVar8;
      return 1;
    }
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  if (in_w10 < 0x719366) {
    if (in_w10 < 0x6afe3e) {
      if (in_w10 == 0x6a5e93) goto LAB_036ea3d4;
      if (in_w10 != 0x6afe3d) {
        return 0;
      }
LAB_036e9ff4:
      *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
      return 1;
    }
    if (in_w10 == 0x6ba308) {
Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead:
      *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
      return 1;
    }
    if (in_w10 != 0x6ccb9a) {
      if (in_w10 != 0x719365) {
        return 0;
      }
      if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
        FUN_02177074(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d6e8);
        uVar3 = FUN_0303de64(&stack0x0000026c,0);
        uVar4 = FUN_0303de64(&stack0x0000026c,0);
        uVar3 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9d750,uVar3,*(undefined8 *)PTR_DAT_03d9d768,
                             uVar4,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar3,0);
      }
      FUN_02176e74(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d718);
      return 1;
    }
  }
  else {
    if (in_w10 < 0x73f194) {
      if (in_w10 != 0x72a582) {
        if (in_w10 != 0x73f193) {
          return 0;
        }
LAB_036ea3d4:
        uVar7 = System_ValueTuple<object,_object>__ToString
                          (in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_03d9d730);
        *(undefined4 *)(in_stack_00000020 + 0x40c) = uVar7;
        return 1;
      }
      if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
        return 1;
      }
      uVar1 = *(int *)(in_stack_00000020 + 0x494) - 1;
      if (*(int *)(in_stack_00000020 + 0x494) < 1) {
LAB_036ea744:
        *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
        return 1;
      }
      fVar8 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
      *(float *)(in_stack_00000020 + 0x640) = fVar8;
      if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
         (lVar6 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar6 == 0))
      goto LAB_036ecd74;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(float *)(lVar6 + (ulong)uVar1 * 0x178 + 0x144) = fVar8;
        goto LAB_036ea744;
      }
      goto LAB_036ecd10;
    }
    if (in_w10 == 0x74913d) goto LAB_036e9ff4;
    if (in_w10 == 0x753608) goto Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead;
    if (in_w10 != 0x765e9a) {
      return 0;
    }
  }
  *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
  return 1;
}


