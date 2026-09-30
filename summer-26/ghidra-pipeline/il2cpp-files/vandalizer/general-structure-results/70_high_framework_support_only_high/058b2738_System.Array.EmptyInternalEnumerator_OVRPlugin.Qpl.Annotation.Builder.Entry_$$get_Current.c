/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Current
ENTRY_POINT: 058b2738
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar6;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  
code_r0x058b2738:
  do {
                    /* try { // try from 058b2744 to 059b276b has its CatchHandler @ 058b2780 */
    iVar1 = (**(code **)(*unaff_x27 + 0x178))();
    if (iVar1 == 0) break;
    unaff_w28 = iVar1 + unaff_w28;
                    /* try { // try from 058b276c to 059b2777 has its CatchHandler @ 058b2214 */
  } while (unaff_w28 < *(int *)(unaff_x22 + 0x18));
  do {
    if (unaff_w23 - unaff_w28 < unaff_w19) {
      FUN_06461ff8();
    }
    unaff_w19 = unaff_w28 + unaff_w19;
    iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x18);
    if (unaff_w28 < iVar1) {
LAB_058b2824:
      if (((int)unaff_w29 < 1) && (unaff_w19 == iVar1)) {
        return unaff_x22;
      }
      lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = FUN_031f21dc(lVar2,unaff_w19);
      if ((int)unaff_w29 < 1) {
        iVar1 = 0;
        goto LAB_058b28d4;
      }
      if (unaff_x21 == 0) goto LAB_058b2914;
      uVar5 = *(undefined8 *)(unaff_x21 + 0x18);
      iVar1 = 0;
      uVar6 = 0;
      break;
    }
    iVar1 = (**(code **)(*unaff_x26 + 0x198))();
    if (iVar1 == 0xf) {
      iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x18);
      goto LAB_058b2824;
    }
    if (unaff_x21 == 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      unaff_x21 = FUN_031f21dc(lVar2,0x20);
      if (unaff_x21 == 0) goto LAB_058b2914;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w29) goto LAB_058b2918;
    plVar3 = (long *)(unaff_x21 + (long)(int)unaff_w29 * 8 + 0x20);
    *plVar3 = unaff_x22;
    unaff_w29 = unaff_w29 + 1;
    thunk_FUN_0329bf60(plVar3,unaff_x22);
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ << 1;
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    unaff_x22 = FUN_031f21dc(lVar2,in_stack_00000008._4_4_);
    if (unaff_x22 == 0) goto LAB_058b2914;
    if (0 < *(int *)(unaff_x22 + 0x18)) goto code_r0x058b2734;
    unaff_w28 = 0;
  } while( true );
LAB_058b2878:
  if ((uint)uVar5 <= uVar6) {
LAB_058b2918:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  plVar3 = (long *)(unaff_x21 + (long)(int)uVar6 * 8 + 0x20);
  lVar4 = *plVar3;
  if (lVar4 == 0) {
LAB_058b2914:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_05e24634(lVar4,0,lVar2,iVar1,*(undefined4 *)(lVar4 + 0x18),0);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x18);
  if ((uint)uVar5 <= uVar6) goto LAB_058b2918;
  lVar4 = *plVar3;
  if (lVar4 == 0) goto LAB_058b2914;
  uVar6 = uVar6 + 1;
  iVar1 = iVar1 + *(int *)(lVar4 + 0x18);
  if (unaff_w29 == uVar6) {
LAB_058b28d4:
    FUN_05e24634(unaff_x22,0,lVar2,iVar1,unaff_w19 - iVar1,0);
    return lVar2;
  }
  goto LAB_058b2878;
code_r0x058b2734:
  unaff_w28 = 0;
  goto code_r0x058b2738;
}


