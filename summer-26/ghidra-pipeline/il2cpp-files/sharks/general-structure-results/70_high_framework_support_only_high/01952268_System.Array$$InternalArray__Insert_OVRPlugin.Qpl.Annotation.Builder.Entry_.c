/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01952268
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (float param_1,float param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 01952268 to 01a5228b has its CatchHandler @ 01952268
                       catch() { ... } // from try @ 01952268 with catch @ 01952268
                       catch() { ... } // from try @ 01952294 with catch @ 01952268 */
  while (fVar8 = param_2, fVar9 = param_3, lVar1 = FUN_033e6c1c(), lVar1 != 0) {
    fVar7 = (float)FUN_033f2e00(lVar1,0);
                    /* try { // try from 0195228c to 01a52293 has its CatchHandler @ 019522b8 */
                    /* try { // try from 01952294 to 01a522cb has its CatchHandler @ 01952268 */
    if (*(char *)(unaff_x27 + 0xecb) == '\0') {
      FUN_017fc350();
      *(undefined1 *)(unaff_x27 + 0xecb) = unaff_w28;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    fVar8 = param_2 - fVar8;
    param_3 = param_3 - fVar9;
    param_2 = param_3 * param_3;
    fVar8 = SQRT(param_2 + (param_1 - fVar7) * (param_1 - fVar7) + fVar8 * fVar8);
    if (fVar8 < unaff_s14) {
      uVar2 = FUN_033e6c1c(unaff_x23,0);
      *unaff_x21 = uVar2;
      thunk_FUN_0188fd20();
      unaff_s14 = fVar8;
    }
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x25) {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar3 = FUN_033e963c(uVar2,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01952430;
          FUN_03433b48(*(long *)(unaff_x19 + 0x40),1,0);
          FUN_033ea6a4(0x41200000);
          lVar6 = *(long *)(unaff_x19 + 0x48);
          plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,1);
          in_stack_00000008._4_1_ = 1;
          lVar1 = thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_037f38c8,(long)&stack0x00000008 + 4);
          if (plVar4 == (long *)0x0) goto LAB_01952430;
          if ((lVar1 != 0) &&
             (lVar5 = thunk_FUN_01861ac0(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar2 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar2,0);
          }
          if ((int)plVar4[3] == 0) goto LAB_01952434;
          plVar4[4] = lVar1;
          thunk_FUN_0188fd20(plVar4 + 4,lVar1);
          if (lVar6 == 0) goto LAB_01952430;
          FUN_02e45468(lVar6,*(undefined8 *)PTR_DAT_037f5920,0,plVar4,0);
        }
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x25) {
LAB_01952434:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      unaff_x23 = *(long *)(unaff_x26 + unaff_x25 * 8);
      if (unaff_x23 == 0) goto LAB_01952430;
    } while (*(char *)(unaff_x23 + 0x29) != '\0');
    lVar1 = FUN_033e6c1c(unaff_x23,0);
    if (lVar1 == 0) break;
    param_1 = (float)FUN_033f2e00(lVar1,0);
  }
LAB_01952430:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


