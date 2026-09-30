/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 058b1ee8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint uVar7;
  long *unaff_x26;
  long *unaff_x27;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  
  do {
    iVar2 = 0;
LAB_058b1eec:
                    /* try { // try from 058b1ef0 to 059b1eff has its CatchHandler @ 058b1f00 */
    if (unaff_w23 - iVar2 < unaff_w19) {
                    /* catch() { ... } // from try @ 058b1e7c with catch @ 058b1f00
                       catch() { ... } // from try @ 058b1ef0 with catch @ 058b1f00 */
                    /* try { // try from 058b1f04 to 059b1f07 has its CatchHandler @ 058b1f10 */
      FUN_06461ff8();
    }
                    /* try { // try from 058b1f08 to 059b1f13 has its CatchHandler @ 058b1c64 */
    unaff_w19 = iVar2 + unaff_w19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058b1e54 with catch @ 058b1f10
                       catch(type#2 @ 00000000) { ... } // from try @ 058b1f04 with catch @ 058b1f10
                        */
    iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x18);
    if (iVar2 < iVar1) {
LAB_058b1f94:
      if (((int)unaff_w29 < 1) && (unaff_w19 == iVar1)) {
        return unaff_x22;
      }
      lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      lVar3 = FUN_031f21dc(lVar3,unaff_w19);
      if ((int)unaff_w29 < 1) {
        iVar2 = 0;
        goto LAB_058b2044;
      }
      if (unaff_x21 == 0) goto LAB_058b2084;
      uVar6 = *(undefined8 *)(unaff_x21 + 0x18);
      iVar2 = 0;
      uVar7 = 0;
      goto LAB_058b1fe8;
    }
    iVar2 = (**(code **)(*unaff_x26 + 0x198))();
    if (iVar2 == 0xf) {
      iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x18);
      goto LAB_058b1f94;
    }
    if (unaff_x21 == 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      unaff_x21 = FUN_031f21dc(lVar3,0x20);
      if (unaff_x21 == 0) goto LAB_058b2084;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w29) goto LAB_058b2088;
    plVar4 = (long *)(unaff_x21 + (long)(int)unaff_w29 * 8 + 0x20);
    *plVar4 = unaff_x22;
    unaff_w29 = unaff_w29 + 1;
    thunk_FUN_0329bf60(plVar4,unaff_x22);
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ << 1;
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    unaff_x22 = FUN_031f21dc(lVar3,in_stack_00000008._4_4_);
    if (unaff_x22 == 0) goto LAB_058b2084;
  } while (*(int *)(unaff_x22 + 0x18) < 1);
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*unaff_x27 + 0x178))();
    if (iVar1 == 0) break;
    iVar2 = iVar1 + iVar2;
  } while (iVar2 < *(int *)(unaff_x22 + 0x18));
  goto LAB_058b1eec;
LAB_058b1fe8:
  if ((uint)uVar6 <= uVar7) {
LAB_058b2088:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  plVar4 = (long *)(unaff_x21 + (long)(int)uVar7 * 8 + 0x20);
  lVar5 = *plVar4;
  if (lVar5 == 0) {
LAB_058b2084:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_05e24634(lVar5,0,lVar3,iVar2,*(undefined4 *)(lVar5 + 0x18),0);
  uVar6 = *(undefined8 *)(unaff_x21 + 0x18);
  if ((uint)uVar6 <= uVar7) goto LAB_058b2088;
  lVar5 = *plVar4;
  if (lVar5 == 0) goto LAB_058b2084;
  uVar7 = uVar7 + 1;
  iVar2 = iVar2 + *(int *)(lVar5 + 0x18);
  if (unaff_w29 == uVar7) {
LAB_058b2044:
    FUN_05e24634(unaff_x22,0,lVar3,iVar2,unaff_w19 - iVar2,0);
    return lVar3;
  }
  goto LAB_058b1fe8;
}


