/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f21ce0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
               (int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x26;
  
  lVar5 = *unaff_x21;
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x26);
  }
  uVar7 = FUN_033a87c8(uVar7,0);
  if (lVar5 != 0) {
    lVar5 = FUN_032df734(lVar5,*(undefined8 *)StringLiteral_2868,uVar7,0);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01dde7f8(lVar8);
    }
    if (lVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01de26bc(lVar5,lVar8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar5,lVar8);
      }
    }
    *(long *)(unaff_x20 + 0x30) = lVar2;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01dde7f8(lVar8);
    }
    if (lVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_01de26bc(lVar5,lVar8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar5,lVar8);
      }
    }
    thunk_FUN_01e10808((long *)(unaff_x20 + 0x30),lVar2);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (param_1 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_01e10808((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,param_1);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
      thunk_FUN_01e10808();
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8();
      }
      uVar7 = FUN_01d7d9bc(lVar5,param_1);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
      thunk_FUN_01e10808((undefined8 *)(unaff_x20 + 0x18));
      lVar5 = *(long *)(unaff_x20 + 0x40);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar7 = FUN_033a87c8(uVar7,0);
      if (lVar5 == 0) goto LAB_02f21f7c;
      lVar5 = FUN_032df734(lVar5,*(undefined8 *)StringLiteral_3087,uVar7,0);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01dde7f8(lVar8);
      }
      if (lVar5 == 0) {
        thunk_FUN_01dd295c(StringLiteral_3089);
        uVar7 = thunk_FUN_01de27b8();
        uVar3 = thunk_FUN_01dd295c(StringLiteral_3090);
        FUN_032d63a8(uVar7,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7);
      }
      lVar2 = thunk_FUN_01de26bc(lVar5,lVar8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar5,lVar8);
      }
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar6 = 0;
        uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          FUN_02f23df0();
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_032e1a0c(*unaff_x21,*(undefined8 *)StringLiteral_2870,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_01e10808();
      return;
    }
  }
LAB_02f21f7c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


