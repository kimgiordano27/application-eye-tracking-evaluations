/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 07027d04
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_EmptyArray<OVRPlugin_Vector4f>___cctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int unaff_w19;
  uint uVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  uint uVar8;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
code_r0x07027d04:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_07027cf8;
LAB_07027d10:
  puVar3 = (undefined8 *)FUN_0406ae20();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_07506ce8();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
          lVar5 = unaff_x29 + (long)(int)unaff_w28 * 0x28;
          uVar10 = in_stack_00000018[1];
          uVar9 = *in_stack_00000018;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000018[2];
          *(undefined8 *)(lVar5 + 0x18) = uVar10;
          *(undefined8 *)(lVar5 + 0x10) = uVar9;
          if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
            return 1;
          }
        }
LAB_07027fac:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      return 0;
    }
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= unaff_w28) goto LAB_07027fac;
      unaff_w28 = *(uint *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19 + 4);
      if ((int)(uint)uVar4 <= unaff_w23) {
        FUN_07506dec(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
                    /* try { // try from 07027d6c to 07127d6f has its CatchHandler @ 07027de8 */
      unaff_w23 = unaff_w23 + 1;
      uVar8 = (uint)uVar4;
                    /* try { // try from 07027d70 to 07127e13 has its CatchHandler @ 070278a4 */
      if (uVar8 <= unaff_w28) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar7 = *(uint *)(unaff_x21 + 0x20);
          if (uVar7 == uVar8) {
            FUN_07028370();
            lVar6 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
            if (lVar6 == 0) goto LAB_07027fc4;
            uVar8 = *(uint *)(lVar6 + 0x18);
            iVar1 = 0;
            if (uVar8 != 0) {
              iVar1 = unaff_w27 / (int)uVar8;
            }
            uVar2 = unaff_w27 - iVar1 * uVar8;
            if (uVar8 <= uVar2) goto LAB_07027fac;
            lVar5 = *(long *)(unaff_x21 + 0x18);
            in_stack_00000010 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            lVar5 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
          }
          if (lVar5 == 0) {
LAB_07027fc4:
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_07027fac;
          lVar5 = lVar5 + (long)(int)uVar7 * 0x28;
        }
        else {
          uVar7 = *(uint *)(unaff_x21 + 0x24);
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          if (uVar8 <= uVar7) goto LAB_07027fac;
          lVar5 = unaff_x26 + (long)(int)uVar7 * 0x28;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
        }
        *(int *)(lVar5 + 0x20) = unaff_w27;
        iVar1 = *in_stack_00000010;
        *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
        *(int *)(lVar5 + 0x24) = iVar1 + -1;
        uVar10 = in_stack_00000018[1];
        uVar9 = *in_stack_00000018;
        *(undefined8 *)(lVar5 + 0x40) = in_stack_00000018[2];
        *(undefined8 *)(lVar5 + 0x38) = uVar10;
        *(undefined8 *)(lVar5 + 0x30) = uVar9;
        *in_stack_00000010 = uVar7 + 1;
        return 1;
      }
    } while (*(int *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19) != unaff_w27);
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_0406aaec(param_3);
    }
    param_1 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_07027d10;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_07027cf8:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x07027d04;
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


