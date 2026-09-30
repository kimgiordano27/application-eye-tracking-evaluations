/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 02f21774
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
          (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar5 = (uint)unaff_x25;
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == param_2) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f217bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(unaff_x23,param_2,0);
LAB_02f217bc:
    uVar8 = (*(code *)*puVar2)(unaff_x23,unaff_w24,unaff_w21,puVar2[1]);
    if ((uVar8 & 1) != 0) {
      if ((int)(uint)unaff_x20 < 0) {
        uVar6 = *(uint *)(unaff_x26 + 0x18);
        if (uVar6 <= uVar5) goto LAB_02f218f8;
        lVar7 = *(long *)(unaff_x22 + 0x10);
        if (lVar7 == 0) {
LAB_02f21938:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar7 + 0x18) <= (uint)in_stack_00000000) goto LAB_02f218f8;
        *(int *)(lVar7 + in_stack_00000000 * 4 + 0x20) =
             *(int *)(unaff_x26 + unaff_x28 * 0xc + 0x24) + 1;
      }
      else {
        uVar6 = *(uint *)(unaff_x26 + 0x18);
        if ((uVar6 <= uVar5) || (uVar6 <= (uint)unaff_x20)) goto LAB_02f218f8;
        *(undefined4 *)(unaff_x26 + 0x20 + (unaff_x20 & 0xffffffff) * 0xc + 4) =
             *(undefined4 *)(unaff_x26 + 0x20 + unaff_x28 * 0xc + 4);
      }
      if (uVar5 < uVar6) {
        *unaff_x29 = -1;
        *(undefined4 *)(unaff_x26 + unaff_x28 * 0xc + 0x24) = *(undefined4 *)(unaff_x22 + 0x28);
        iVar1 = *(int *)(unaff_x22 + 0x20) + -1;
        *(int *)(unaff_x22 + 0x20) = iVar1;
        *(int *)(unaff_x22 + 0x38) = *(int *)(unaff_x22 + 0x38) + 1;
        if (iVar1 == 0) {
          uVar5 = 0xffffffff;
          *(undefined4 *)(unaff_x22 + 0x24) = 0;
        }
        *(uint *)(unaff_x22 + 0x28) = uVar5;
        return 1;
      }
LAB_02f218f8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar8 = unaff_x25;
    unaff_x25 = unaff_x28;
    do {
      uVar5 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
      if ((int)uVar5 <= unaff_w27) {
        thunk_FUN_01dd295c(StringLiteral_1244);
        uVar3 = thunk_FUN_01de27b8();
        uVar4 = thunk_FUN_01dd295c(StringLiteral_3086);
        FUN_03393770(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar3,unaff_x19);
      }
      if (uVar5 <= (uint)uVar8) goto LAB_02f218f8;
      uVar6 = *(uint *)(unaff_x26 + unaff_x25 * 0xc + 0x24);
      unaff_x25 = (ulong)uVar6;
      unaff_w27 = unaff_w27 + 1;
      unaff_x20 = uVar8 & 0xffffffff;
      if ((int)uVar6 < 0) {
        return 0;
      }
      if (uVar5 <= uVar6) goto LAB_02f218f8;
      unaff_x29 = (int *)(unaff_x26 + unaff_x25 * 0xc + 0x20);
      uVar8 = unaff_x25;
    } while (*unaff_x29 != in_stack_00000008._4_4_);
    unaff_x23 = *(long **)(unaff_x22 + 0x30);
    if (unaff_x23 == (long *)0x0) goto LAB_02f21938;
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    unaff_w24 = *(undefined4 *)(unaff_x26 + unaff_x25 * 0xc + 0x28);
    unaff_x28 = unaff_x25;
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01dde7f8(param_2);
    }
  } while( true );
}


