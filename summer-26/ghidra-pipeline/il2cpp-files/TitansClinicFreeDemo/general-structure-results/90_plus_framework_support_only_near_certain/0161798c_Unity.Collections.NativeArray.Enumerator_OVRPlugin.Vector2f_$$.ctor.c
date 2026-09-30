/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 0161798c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector2f>___ctor
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar9;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_016179b8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_0122ea3c();
LAB_016179b8:
        uVar5 = (*(code *)*puVar4)();
        if ((uVar5 & 1) != 0) {
          if (in_stack_00000000._4_1_ == '\x02') {
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
            uVar6 = thunk_FUN_0124b7d8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58),
                                       &stack0x00000010);
            FUN_01f8849c(uVar6,0);
          }
          else if (in_stack_00000000._4_1_ == '\x01') {
            in_stack_00000020 = in_stack_00000008[2];
            in_stack_00000018 = in_stack_00000008[1];
            in_stack_00000010 = *in_stack_00000008;
            if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
              lVar7 = unaff_x26 + unaff_x19 * 0x28;
              *(undefined8 *)(lVar7 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
              if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
                thunk_FUN_01286abc(unaff_x26 + unaff_x19 * 0x28 + 0x38,0);
                return 1;
              }
            }
LAB_01617cc4:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          return 0;
        }
        uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
        do {
          if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_01617cc4;
          uVar8 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x22 + 0x24);
          if ((int)(uint)uVar5 <= unaff_w29) {
            FUN_01f885a0(0);
          }
          uVar5 = *(ulong *)(unaff_x26 + 0x18);
          unaff_w29 = unaff_w29 + 1;
          if ((uint)uVar5 <= uVar8) {
            if (*(int *)(unaff_x20 + 0x28) < 1) {
              uVar8 = *(uint *)(unaff_x20 + 0x20);
              if (uVar8 == (uint)uVar5) {
                Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__get_Current();
                lVar7 = *(long *)(unaff_x20 + 0x10);
                *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
                if (lVar7 == 0)
                goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
                uVar1 = *(uint *)(lVar7 + 0x18);
                iVar3 = 0;
                if (uVar1 != 0) {
                  iVar3 = unaff_w27 / (int)uVar1;
                }
                uVar2 = unaff_w27 - iVar3 * uVar1;
                if (uVar1 <= uVar2) goto LAB_01617cc4;
                unaff_x26 = *(long *)(unaff_x20 + 0x18);
                unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
              }
              else {
                unaff_x26 = *(long *)(unaff_x20 + 0x18);
                *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
              }
              if (unaff_x26 == 0) {
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
                FUN_01230ca0();
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_01617cc4;
              lVar7 = (long)(int)uVar8;
            }
            else {
              *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
              uVar8 = *(uint *)(unaff_x20 + 0x24);
              if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_01617cc4;
              lVar7 = (long)(int)uVar8;
              *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x28 + 0x24);
            }
            lVar7 = unaff_x26 + lVar7 * 0x28;
            *(int *)(lVar7 + 0x20) = unaff_w27;
            *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
            *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028._4_4_;
            uVar9 = in_stack_00000008[1];
            uVar6 = *in_stack_00000008;
            *(undefined8 *)(lVar7 + 0x40) = in_stack_00000008[2];
            *(undefined8 *)(lVar7 + 0x38) = uVar9;
            *(undefined8 *)(lVar7 + 0x30) = uVar6;
            thunk_FUN_01286abc(lVar7 + 0x38,0);
            *unaff_x28 = uVar8 + 1;
            return 1;
          }
          unaff_x19 = (long)(int)uVar8;
        } while (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_0122e748(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


