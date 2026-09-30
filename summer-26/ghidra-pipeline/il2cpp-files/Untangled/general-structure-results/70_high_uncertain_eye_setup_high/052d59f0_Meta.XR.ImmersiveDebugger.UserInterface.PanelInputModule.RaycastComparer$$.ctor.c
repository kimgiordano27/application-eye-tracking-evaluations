/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule.RaycastComparer$$.ctor
ENTRY_POINT: 052d59f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer___ctor
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
                    /* try { // try from 052d59f0 to 053d5a4f has its CatchHandler @ 052d5c28 */
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = FUN_066c67ec(*(long *)(unaff_x20 + 0xa8),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = FUN_03a862a4(lVar3,*(undefined8 *)PTR_DAT_06d03770);
    plVar1 = (long *)(unaff_x19 + 0x408);
    *plVar1 = lVar3;
    thunk_FUN_02f411dc(plVar1);
    FUN_0528b8a8(*plVar1,0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06743fdc(*plVar1,*(undefined8 *)(unaff_x19 + 0x78),0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06744404(*plVar1,0,0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar8 = *(float *)(unaff_x19 + 0x2cc);
    fVar6 = *(float *)(unaff_x19 + 0x2c8);
    FUN_067441f8(*(undefined4 *)(unaff_x19 + 0x2c4),fVar6,fVar8,*plVar1,0);
    if (*(char *)(unaff_x19 + 0x270) != '\0') {
      lVar3 = *(long *)(unaff_x19 + 0x408);
      fVar7 = (float)FUN_052cfe78();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_067441f8(fVar7 + *(float *)(unaff_x19 + 0x34c),fVar6 + *(float *)(unaff_x19 + 0x350),
                   fVar8 + *(float *)(unaff_x19 + 0x354),lVar3,0);
    }
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06744330(*(undefined4 *)(unaff_x19 + 0x2d0),*(undefined4 *)(unaff_x19 + 0x2d4),
                 *(undefined4 *)(unaff_x19 + 0x2d8),*plVar1,0);
    FUN_0529a940(0,0,0,*(undefined8 *)(unaff_x19 + 0x430),0);
  }
  else if (in_stack_00000028._4_4_ < unaff_s8) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x410);
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_066c67b0();
      lVar4 = FUN_066c67b0();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar6 = (float)FUN_066d320c(lVar4,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066d4ae0((fStack0000000000000030 * param_3 +
                   fStack0000000000000038 * fVar6 + fStack0000000000000034 * param_4) -
                   fStack000000000000003c * param_2,
                   (fStack000000000000003c * fVar6 +
                   fStack0000000000000038 * param_2 + fStack0000000000000030 * param_4) -
                   fStack0000000000000034 * param_3,
                   (fStack0000000000000034 * param_2 +
                   fStack0000000000000038 * param_3 + fStack000000000000003c * param_4) -
                   fStack0000000000000030 * fVar6,
                   ((fStack0000000000000038 * param_4 - fStack0000000000000034 * fVar6) -
                   fStack0000000000000030 * param_2) - fStack000000000000003c * param_3,lVar3,0);
      if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_066c67ec(*(long *)(unaff_x20 + 0xa8),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_03a862a4(lVar3,*(undefined8 *)PTR_DAT_06d03770);
      plVar1 = (long *)(unaff_x19 + 0x410);
      *plVar1 = lVar3;
      thunk_FUN_02f411dc(plVar1);
      FUN_0528b868(*plVar1,0);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_06743fdc(*plVar1,*(undefined8 *)(unaff_x19 + 0x78),0);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_06744404(*plVar1,0,0);
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      fVar8 = *(float *)(unaff_x19 + 0x2cc);
      fVar6 = *(float *)(unaff_x19 + 0x2c8);
      FUN_067441f8(*(undefined4 *)(unaff_x19 + 0x2c4),fVar6,fVar8,*plVar1,0);
      if (*(char *)(unaff_x19 + 0x270) != '\0') {
        lVar3 = *(long *)(unaff_x19 + 0x408);
        fVar7 = (float)FUN_052cfe78();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_067441f8(fVar7 + *(float *)(unaff_x19 + 0x34c),fVar6 + *(float *)(unaff_x19 + 0x350),
                     fVar8 + *(float *)(unaff_x19 + 0x354),lVar3,0);
      }
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_06744330(*(undefined4 *)(unaff_x19 + 0x2d0),*(undefined4 *)(unaff_x19 + 0x2d4),
                   *(undefined4 *)(unaff_x19 + 0x2d8),*plVar1,0);
      FUN_0529a830(0,0,0,*(undefined8 *)(unaff_x19 + 0x430),0);
    }
  }
  return;
}


