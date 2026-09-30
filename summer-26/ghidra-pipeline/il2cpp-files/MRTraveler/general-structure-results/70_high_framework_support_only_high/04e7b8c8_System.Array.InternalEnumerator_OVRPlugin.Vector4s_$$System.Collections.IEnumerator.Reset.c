/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e7b8c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  int unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04e7b8c8:
  param_1 = FUN_03cf1244(param_1);
LAB_04e7b8d0:
  uVar7 = (uint)unaff_x28;
  lVar8 = *unaff_x25;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_1) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04e7b918;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(unaff_x25,param_1,0);
LAB_04e7b918:
  uVar10 = (*(code *)*puVar4)(unaff_x25,unaff_x27,unaff_x26,in_stack_00000010,in_stack_00000018,
                              puVar4[1]);
  if ((uVar10 & 1) != 0) {
    uVar5 = 0;
LAB_04e7ba78:
    *in_stack_00000008 = uVar7;
    return uVar5;
  }
LAB_04e7b938:
  uVar7 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
  if ((int)uVar7 <= unaff_w19) {
    thunk_FUN_03ce5214(PTR_DAT_08e71970);
    uVar5 = thunk_FUN_03cf5234();
    uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
    FUN_07100530(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar5);
  }
  if ((uint)unaff_x28 < uVar7) {
    uVar1 = *(uint *)(unaff_x29 + unaff_x22 * unaff_x21 + 0x24);
    unaff_x22 = (ulong)uVar1;
    unaff_w19 = unaff_w19 + 1;
    if (-1 < (int)uVar1) {
      if (uVar7 <= uVar1) goto LAB_04e7baa0;
      unaff_x28 = unaff_x22;
      if (*(int *)(unaff_x29 + unaff_x22 * (unaff_x21 & 0xffffffff) + 0x20) == unaff_w23)
      goto code_r0x04e7b89c;
      goto LAB_04e7b938;
    }
    uVar7 = *(uint *)(unaff_x20 + 0x28);
    if ((int)uVar7 < 0) {
      if (unaff_x29 == 0) goto LAB_04e7bae0;
      uVar7 = *(uint *)(unaff_x20 + 0x24);
      if (uVar7 == *(uint *)(unaff_x29 + 0x18)) {
        FUN_04e79ff8();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04e7bae0;
        uVar7 = *(uint *)(unaff_x20 + 0x24);
        unaff_x29 = *(long *)(unaff_x20 + 0x18);
        iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
        *(uint *)(unaff_x20 + 0x24) = uVar7 + 1;
        if (unaff_x29 == 0) goto LAB_04e7bae0;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = unaff_w23 / iVar2;
        }
        in_stack_00000000._4_4_ = unaff_w23 - iVar3 * iVar2;
      }
      else {
        *(uint *)(unaff_x20 + 0x24) = uVar7 + 1;
      }
    }
    else {
      if (unaff_x29 == 0) goto LAB_04e7bae0;
      if (*(uint *)(unaff_x29 + 0x18) <= uVar7) goto LAB_04e7baa0;
      *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x29 + (ulong)uVar7 * 0x18 + 0x24);
    }
    if (*(uint *)(unaff_x29 + 0x18) <= uVar7) goto LAB_04e7baa0;
    lVar8 = unaff_x29 + (long)(int)uVar7 * 0x18;
    *(int *)(lVar8 + 0x20) = unaff_w23;
    *(undefined8 *)(lVar8 + 0x28) = in_stack_00000010;
    *(undefined8 *)(lVar8 + 0x30) = in_stack_00000018;
    lVar8 = *(long *)(unaff_x20 + 0x10);
    if (lVar8 == 0) goto LAB_04e7bae0;
    if ((in_stack_00000000._4_4_ < *(uint *)(lVar8 + 0x18)) && (uVar7 < *(uint *)(unaff_x29 + 0x18))
       ) {
      piVar9 = (int *)(lVar8 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
      *(int *)(unaff_x29 + (long)(int)uVar7 * 0x18 + 0x24) = *piVar9 + -1;
      *piVar9 = uVar7 + 1;
      uVar5 = 1;
      *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
      *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
      goto LAB_04e7ba78;
    }
  }
LAB_04e7baa0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
code_r0x04e7b89c:
  unaff_x25 = *(long **)(unaff_x20 + 0x30);
  if (unaff_x25 == (long *)0x0) {
LAB_04e7bae0:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  param_1 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
  lVar8 = unaff_x29 + unaff_x22 * unaff_x21;
  unaff_x27 = *(undefined8 *)(lVar8 + 0x28);
  unaff_x26 = *(undefined8 *)(lVar8 + 0x30);
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) goto code_r0x04e7b8c8;
  goto LAB_04e7b8d0;
}


