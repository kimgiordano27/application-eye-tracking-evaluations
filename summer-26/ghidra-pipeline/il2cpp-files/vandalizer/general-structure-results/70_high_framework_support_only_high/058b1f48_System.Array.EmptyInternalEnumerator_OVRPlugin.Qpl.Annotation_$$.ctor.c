/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 058b1f48
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int unaff_w19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  uint uVar8;
  long *unaff_x26;
  long *unaff_x27;
  uint unaff_w29;
  undefined8 in_stack_00000008;
  
  do {
    lVar4 = FUN_0322bef4();
    do {
      lVar4 = FUN_031f21dc(lVar4,0x20);
      if (lVar4 == 0) goto LAB_058b2084;
      do {
        if (*(uint *)(lVar4 + 0x18) <= unaff_w29) goto LAB_058b2088;
        plVar5 = (long *)(lVar4 + (long)(int)unaff_w29 * 8 + 0x20);
        *plVar5 = unaff_x22;
        unaff_w29 = unaff_w29 + 1;
        thunk_FUN_0329bf60(plVar5,unaff_x22);
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ << 1;
        lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        unaff_x22 = FUN_031f21dc(lVar3,in_stack_00000008._4_4_);
        if (unaff_x22 == 0) goto LAB_058b2084;
        if (*(int *)(unaff_x22 + 0x18) < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          do {
            iVar1 = (**(code **)(*unaff_x27 + 0x178))();
            if (iVar1 == 0) break;
            iVar2 = iVar1 + iVar2;
          } while (iVar2 < *(int *)(unaff_x22 + 0x18));
        }
        if (unaff_w23 - iVar2 < unaff_w19) {
          FUN_06461ff8();
        }
        unaff_w19 = iVar2 + unaff_w19;
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
          if (lVar4 == 0) goto LAB_058b2084;
          uVar7 = *(undefined8 *)(lVar4 + 0x18);
          iVar2 = 0;
          uVar8 = 0;
          goto LAB_058b1fe8;
        }
        iVar2 = (**(code **)(*unaff_x26 + 0x198))();
        if (iVar2 == 0xf) {
          iVar1 = (int)*(undefined8 *)(unaff_x22 + 0x18);
          goto LAB_058b1f94;
        }
      } while (lVar4 != 0);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    } while ((*(byte *)(lVar4 + 0x135) & 1) != 0);
  } while( true );
LAB_058b1fe8:
  if ((uint)uVar7 <= uVar8) {
LAB_058b2088:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  plVar5 = (long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
LAB_058b2084:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_05e24634(lVar6,0,lVar3,iVar2,*(undefined4 *)(lVar6 + 0x18),0);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  if ((uint)uVar7 <= uVar8) goto LAB_058b2088;
  lVar6 = *plVar5;
  if (lVar6 == 0) goto LAB_058b2084;
  uVar8 = uVar8 + 1;
  iVar2 = iVar2 + *(int *)(lVar6 + 0x18);
  if (unaff_w29 == uVar8) {
LAB_058b2044:
    FUN_05e24634(unaff_x22,0,lVar3,iVar2,unaff_w19 - iVar2,0);
    return lVar3;
  }
  goto LAB_058b1fe8;
}


