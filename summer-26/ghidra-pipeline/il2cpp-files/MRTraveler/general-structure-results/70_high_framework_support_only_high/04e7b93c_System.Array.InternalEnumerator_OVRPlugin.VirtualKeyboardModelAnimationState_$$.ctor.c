/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.ctor
ENTRY_POINT: 04e7b93c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
          (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long *plVar10;
  uint uVar11;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_NG == in_OV) {
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar4 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
      FUN_07100530(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4);
    }
    if ((uint)param_1 <= (uint)unaff_x28) break;
    uVar11 = *(uint *)(unaff_x29 + unaff_x22 * unaff_x21 + 0x24);
    unaff_x22 = (ulong)uVar11;
    unaff_w19 = unaff_w19 + 1;
    if ((int)uVar11 < 0) {
      uVar11 = *(uint *)(unaff_x20 + 0x28);
      if ((int)uVar11 < 0) {
        if (unaff_x29 == 0) goto LAB_04e7bae0;
        uVar11 = *(uint *)(unaff_x20 + 0x24);
        if (uVar11 == *(uint *)(unaff_x29 + 0x18)) {
          FUN_04e79ff8();
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04e7bae0;
          uVar11 = *(uint *)(unaff_x20 + 0x24);
          unaff_x29 = *(long *)(unaff_x20 + 0x18);
          iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
          *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
          if (unaff_x29 == 0) goto LAB_04e7bae0;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w23 / iVar1;
          }
          in_stack_00000000._4_4_ = unaff_w23 - iVar2 * iVar1;
        }
        else {
          *(uint *)(unaff_x20 + 0x24) = uVar11 + 1;
        }
      }
      else {
        if (unaff_x29 == 0) goto LAB_04e7bae0;
        if (*(uint *)(unaff_x29 + 0x18) <= uVar11) break;
        *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x29 + (ulong)uVar11 * 0x18 + 0x24)
        ;
      }
      if (uVar11 < *(uint *)(unaff_x29 + 0x18)) {
        lVar7 = unaff_x29 + (long)(int)uVar11 * 0x18;
        *(int *)(lVar7 + 0x20) = unaff_w23;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_00000018;
        lVar7 = *(long *)(unaff_x20 + 0x10);
        if (lVar7 == 0) {
LAB_04e7bae0:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((in_stack_00000000._4_4_ < *(uint *)(lVar7 + 0x18)) &&
           (uVar11 < *(uint *)(unaff_x29 + 0x18))) {
          piVar8 = (int *)(lVar7 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
          *(int *)(unaff_x29 + (long)(int)uVar11 * 0x18 + 0x24) = *piVar8 + -1;
          *piVar8 = uVar11 + 1;
          uVar4 = 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_04e7ba78:
          *in_stack_00000008 = uVar11;
          return uVar4;
        }
      }
      break;
    }
    if ((uint)param_1 <= uVar11) break;
    if (*(int *)(unaff_x29 + unaff_x22 * (unaff_x21 & 0xffffffff) + 0x20) == unaff_w23) {
      plVar10 = *(long **)(unaff_x20 + 0x30);
      if (plVar10 == (long *)0x0) goto LAB_04e7bae0;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
      lVar6 = unaff_x29 + unaff_x22 * unaff_x21;
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      uVar5 = *(undefined8 *)(lVar6 + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar6 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04e7b918;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar10,lVar7,0);
LAB_04e7b918:
      uVar9 = (*(code *)*puVar3)(plVar10,uVar4,uVar5,in_stack_00000010,in_stack_00000018,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        uVar4 = 0;
        goto LAB_04e7ba78;
      }
      param_1 = *(undefined8 *)(unaff_x29 + 0x18);
    }
    in_OV = SBORROW4(unaff_w19,(int)param_1);
    in_NG = unaff_w19 - (int)param_1 < 0;
    unaff_x28 = unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


