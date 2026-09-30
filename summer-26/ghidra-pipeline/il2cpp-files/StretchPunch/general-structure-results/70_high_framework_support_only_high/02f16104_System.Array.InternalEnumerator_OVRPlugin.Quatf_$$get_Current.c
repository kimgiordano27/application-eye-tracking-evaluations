/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$get_Current
ENTRY_POINT: 02f16104
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long in_x9;
  ulong uVar9;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  int unaff_w29;
  uint *in_stack_00000008;
  
  do {
    uVar12 = (uint)unaff_x26;
    if (*(int *)(in_x9 + 0x20) == unaff_w22) {
      plVar10 = *(long **)(unaff_x20 + 0x30);
      if (plVar10 == (long *)0x0) goto LAB_02f16334;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
      uVar11 = *(undefined8 *)(unaff_x27 + (unaff_x26 & 0xffffffff) * 0x10 + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8(lVar5);
      }
      lVar7 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02f1618c;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar10,lVar5,0);
LAB_02f1618c:
      uVar9 = (*(code *)*puVar3)(plVar10,uVar11);
      if ((uVar9 & 1) != 0) {
        uVar11 = 0;
        goto LAB_02f162cc;
      }
      param_1 = *(undefined8 *)(unaff_x27 + 0x18);
    }
    uVar6 = (uint)param_1;
    if ((int)uVar6 <= unaff_w29) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar11 = thunk_FUN_01de27b8();
      uVar4 = thunk_FUN_01dd295c(StringLiteral_3086);
      FUN_03393770(uVar11,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar11);
    }
    if (uVar6 <= uVar12) goto LAB_02f162f4;
    uVar12 = *(uint *)(unaff_x27 + (unaff_x26 & 0xffffffff) * 0x10 + 0x24);
    unaff_x26 = (ulong)uVar12;
    unaff_w29 = unaff_w29 + 1;
    if ((int)uVar12 < 0) {
      uVar12 = *(uint *)(unaff_x20 + 0x28);
      if ((int)uVar12 < 0) {
        if (unaff_x27 == 0) goto LAB_02f16334;
        uVar12 = *(uint *)(unaff_x20 + 0x24);
        if (uVar12 == *(uint *)(unaff_x27 + 0x18)) {
          FUN_02f14914();
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_02f16334;
          uVar12 = *(uint *)(unaff_x20 + 0x24);
          unaff_x27 = *(long *)(unaff_x20 + 0x18);
          iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
          *(uint *)(unaff_x20 + 0x24) = uVar12 + 1;
          if (unaff_x27 == 0) goto LAB_02f16334;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w22 / iVar1;
          }
          unaff_w28 = unaff_w22 - iVar2 * iVar1;
        }
        else {
          *(uint *)(unaff_x20 + 0x24) = uVar12 + 1;
        }
      }
      else {
        if (unaff_x27 == 0) goto LAB_02f16334;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar12) goto LAB_02f162f4;
        *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x27 + (ulong)uVar12 * 0x10 + 0x24)
        ;
      }
      if (uVar12 < *(uint *)(unaff_x27 + 0x18)) {
        lVar5 = unaff_x27 + (long)(int)uVar12 * 0x10;
        *(int *)(lVar5 + 0x20) = unaff_w22;
        *(undefined8 *)(lVar5 + 0x28) = unaff_x21;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) {
LAB_02f16334:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if ((unaff_w28 < *(uint *)(lVar5 + 0x18)) && (uVar12 < *(uint *)(unaff_x27 + 0x18))) {
          piVar8 = (int *)(lVar5 + (long)(int)unaff_w28 * 4 + 0x20);
          *(int *)(unaff_x27 + (long)(int)uVar12 * 0x10 + 0x24) = *piVar8 + -1;
          *piVar8 = uVar12 + 1;
          uVar11 = 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
LAB_02f162cc:
          *in_stack_00000008 = uVar12;
          return uVar11;
        }
      }
LAB_02f162f4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (uVar6 <= uVar12) goto LAB_02f162f4;
    in_x9 = unaff_x27 + unaff_x26 * 0x10;
  } while( true );
}


