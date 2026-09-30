/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 02bbb9fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Reset
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  uint uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02bbba28;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02bbba28:
        uVar5 = (*(code *)*puVar4)();
        if ((uVar5 & 1) != 0) {
          if (in_stack_00000008._4_1_ == '\x02') {
            FUN_0358baf0();
          }
          else if (in_stack_00000008._4_1_ == '\x01') {
            if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = in_stack_00000000;
              return 1;
            }
LAB_02bbbca4:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          return 0;
        }
        uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
        do {
          if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_02bbbca4;
          uVar7 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
          if ((int)(uint)uVar5 <= unaff_w29) {
            FUN_0358bbf4(0);
          }
          uVar5 = *(ulong *)(unaff_x26 + 0x18);
          unaff_w29 = unaff_w29 + 1;
          if ((uint)uVar5 <= uVar7) {
            if (*(int *)(unaff_x21 + 0x28) < 1) {
              uVar7 = *(uint *)(unaff_x21 + 0x20);
              if (uVar7 == (uint)uVar5) {
                FUN_02bbc068();
                lVar6 = *(long *)(unaff_x21 + 0x10);
                *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
                if (lVar6 == 0) goto LAB_02bbbca8;
                uVar1 = *(uint *)(lVar6 + 0x18);
                iVar2 = 0;
                if (uVar1 != 0) {
                  iVar2 = unaff_w27 / (int)uVar1;
                }
                uVar3 = unaff_w27 - iVar2 * uVar1;
                if (uVar1 <= uVar3) goto LAB_02bbbca4;
                unaff_x26 = *(long *)(unaff_x21 + 0x18);
                unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
              }
              else {
                unaff_x26 = *(long *)(unaff_x21 + 0x18);
                *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
              }
              if (unaff_x26 == 0) {
LAB_02bbbca8:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02bbbca4;
              lVar6 = (long)(int)uVar7;
            }
            else {
              *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
              uVar7 = *(uint *)(unaff_x21 + 0x24);
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02bbbca4;
              lVar6 = (long)(int)uVar7;
              *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x24);
            }
            lVar6 = unaff_x26 + lVar6 * 0x18;
            *(int *)(lVar6 + 0x20) = unaff_w27;
            iVar2 = *unaff_x28;
            *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
            *(int *)(lVar6 + 0x24) = iVar2 + -1;
            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
            *(undefined4 *)(lVar6 + 0x30) = in_stack_00000000;
            *unaff_x28 = uVar7 + 1;
            return 1;
          }
          unaff_x19 = (long)(int)uVar7;
        } while (*(int *)(unaff_x26 + (long)(int)uVar7 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


