/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 019521d8
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int in_w9;
  float fVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x20;
  long *unaff_x24;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_037f2b80;
  uVar7 = *(uint *)(unaff_x20 + 0x18);
  if (in_w9 == 0) {
    if (0 < (int)uVar7) {
                    /* try { // try from 01952210 to 01a52233 has its CatchHandler @ 01952210
                       catch() { ... } // from try @ 01952210 with catch @ 01952210
                       catch() { ... } // from try @ 01952244 with catch @ 01952210 */
      lVar5 = 0;
      fVar8 = 40.0;
      do {
        if (uVar7 <= (uint)lVar5) goto LAB_01952434;
        lVar9 = *(long *)(unaff_x20 + 0x20 + lVar5 * 8);
        if (lVar9 == 0) goto LAB_01952430;
        if (*(char *)(lVar9 + 0x29) == '\0') {
          lVar6 = FUN_033e6c1c(lVar9,0);
          if (lVar6 == 0) goto LAB_01952430;
          fVar10 = (float)FUN_033f2e00(lVar6,0);
          fVar12 = param_2;
          fVar13 = param_3;
          lVar6 = FUN_033e6c1c();
          if (lVar6 == 0) goto LAB_01952430;
          fVar11 = (float)FUN_033f2e00(lVar6,0);
          if (DAT_03a21ecb == '\0') {
            FUN_017fc350(puVar1);
            DAT_03a21ecb = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          fVar12 = param_2 - fVar12;
          param_3 = param_3 - fVar13;
          param_2 = param_3 * param_3;
          fVar12 = SQRT(param_2 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12);
          if (fVar12 < fVar8) {
            uVar2 = FUN_033e6c1c(lVar9,0);
            *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
            thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x38),uVar2);
            fVar8 = fVar12;
          }
        }
        uVar7 = *(uint *)(unaff_x20 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar7);
    }
  }
  else {
    if (uVar7 == 0) goto LAB_01952434;
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_01952430;
    uVar2 = FUN_033e6c1c(*(long *)(unaff_x20 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    thunk_FUN_0188fd20();
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_033e963c(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_03433b48(*(long *)(unaff_x19 + 0x40),1,0);
    FUN_033ea6a4(0x41200000);
    lVar9 = *(long *)(unaff_x19 + 0x48);
    plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98,1);
    in_stack_00000008._4_1_ = 1;
    lVar5 = thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_037f38c8,(long)&stack0x00000008 + 4);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01861ac0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar2 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar2,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_01952434:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar4[4] = lVar5;
      thunk_FUN_0188fd20(plVar4 + 4,lVar5);
      if (lVar9 != 0) {
        FUN_02e45468(lVar9,*(undefined8 *)PTR_DAT_037f5920,0,plVar4,0);
        return;
      }
    }
  }
LAB_01952430:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


