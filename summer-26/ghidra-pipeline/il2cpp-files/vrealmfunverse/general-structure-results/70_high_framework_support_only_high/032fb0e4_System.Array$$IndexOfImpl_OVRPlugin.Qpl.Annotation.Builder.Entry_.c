/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 032fb0e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__IndexOfImpl<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar10;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 032fb0e4 to 033fb0e7 has its CatchHandler @ 032fb168 */
                    /* try { // try from 032fb0e8 to 033fb0eb has its CatchHandler @ 032fb160 */
                    /* try { // try from 032fb0ec to 033fb0ef has its CatchHandler @ 032fb158 */
  FUN_02b3c81c(PTR_DAT_0631fff8);
                    /* try { // try from 032fb0f0 to 033fb0f3 has its CatchHandler @ 032fb14c */
                    /* try { // try from 032fb0f4 to 033fb0f7 has its CatchHandler @ 032fb148 */
  if (*(long *)(unaff_x22 + 0x38) == 0) {
                    /* try { // try from 032fb0f8 to 033fb0fb has its CatchHandler @ 032fb134 */
                    /* try { // try from 032fb0fc to 033fb0ff has its CatchHandler @ 032fb12c */
    FUN_02b76274();
  }
                    /* try { // try from 032fb100 to 033fb103 has its CatchHandler @ 032fb124 */
  puVar1 = PTR_DAT_0631fff8;
                    /* try { // try from 032fb104 to 033fb107 has its CatchHandler @ 032fb11c */
                    /* try { // try from 032fb108 to 033fb10b has its CatchHandler @ 032fb114 */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* catch() { ... } // from try @ 032faed8 with catch @ 032fb10c
                       try { // try from 032fb10c to 033fb19f has its CatchHandler @ 032faa48 */
  in_stack_00000008 = 0;
                    /* catch() { ... } // from try @ 032fae88 with catch @ 032fb110 */
  lVar3 = *(long *)PTR_DAT_0631fff8;
                    /* catch() { ... } // from try @ 032fb108 with catch @ 032fb114 */
                    /* catch() { ... } // from try @ 032faea0 with catch @ 032fb118 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 032fb104 with catch @ 032fb11c */
    thunk_FUN_02b9ad44();
                    /* catch() { ... } // from try @ 032fafc8 with catch @ 032fb120 */
    lVar3 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 032fb100 with catch @ 032fb124 */
                    /* catch() { ... } // from try @ 032fae54 with catch @ 032fb128 */
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x10) = unaff_w23;
                    /* catch() { ... } // from try @ 032fb0fc with catch @ 032fb12c */
                    /* catch() { ... } // from try @ 032faf28 with catch @ 032fb130 */
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
                    /* catch() { ... } // from try @ 032fb0f8 with catch @ 032fb134 */
                    /* catch() { ... } // from try @ 032fae38 with catch @ 032fb138 */
                    /* catch() { ... } // from try @ 032fb014 with catch @ 032fb13c */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032fac30 with catch @ 032fb140 */
    lVar3 = FUN_02b76218();
  }
                    /* catch() { ... } // from try @ 032fad78 with catch @ 032fb144 */
                    /* catch() { ... } // from try @ 032fb0f4 with catch @ 032fb148 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 032fb0f0 with catch @ 032fb14c */
    thunk_FUN_02b9ad44();
  }
                    /* catch() { ... } // from try @ 032fabdc with catch @ 032fb150 */
                    /* catch() { ... } // from try @ 032fac14 with catch @ 032fb154 */
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
                    /* catch() { ... } // from try @ 032fb0ec with catch @ 032fb158 */
                    /* catch() { ... } // from try @ 032fab90 with catch @ 032fb15c */
                    /* catch() { ... } // from try @ 032fb0e8 with catch @ 032fb160 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032fabb8 with catch @ 032fb164 */
    lVar3 = FUN_02b76218();
  }
                    /* catch() { ... } // from try @ 032fb0e4 with catch @ 032fb168 */
                    /* catch() { ... } // from try @ 032fb0e0 with catch @ 032fb16c */
                    /* catch() { ... } // from try @ 032fadb8 with catch @ 032fb170 */
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
                    /* catch() { ... } // from try @ 032face4 with catch @ 032fb174 */
                    /* catch() { ... } // from try @ 032fac5c with catch @ 032fb178 */
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
                    /* catch() { ... } // from try @ 032fae14 with catch @ 032fb17c */
                    /* catch() { ... } // from try @ 032fadf0 with catch @ 032fb180 */
                    /* catch() { ... } // from try @ 032fad24 with catch @ 032fb184 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032fac9c with catch @ 032fb188 */
      lVar3 = FUN_02b76218();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar7 = *(long *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(lVar7 + 0x18);
                    /* try { // try from 032fb1a0 to 033fb1b7 has its CatchHandler @ 032fb21c */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
      lVar7 = *(long *)(unaff_x22 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    uVar11 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    uVar4 = thunk_FUN_02b79644(lVar7);
    FUN_03bf8048(uVar4,uVar11,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x28));
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar4;
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar3 + 0xb8) + 8,uVar4);
  }
  if (unaff_x20 != 0) {
    iVar2 = FUN_0463ae80();
    if (iVar2 == -1) {
      if (unaff_x24 == 0) goto LAB_032fb3b4;
      if (*(int *)(unaff_x24 + 0x18) == 0) {
        FUN_031a6410();
        puVar5 = (undefined4 *)FUN_0463b21c();
        plVar10 = *(long **)(puVar5 + 2);
        *puVar5 = unaff_w23;
        puVar5[1] = unaff_w21;
        if (plVar10 == (long *)0x0) goto LAB_032fb3b4;
        lVar3 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0631fff0) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_032fb374;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_0631fff0,0);
LAB_032fb374:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
        uVar11 = *(undefined8 *)(puVar5 + 2);
      }
      else {
        in_stack_00000008 = 0;
        uStack0000000000000000 = CONCAT44(unaff_w21,unaff_w23);
        in_stack_00000008 =
             UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__PreprocessTween
                       ();
        thunk_FUN_02bb0e9c(&stack0x00000008,in_stack_00000008);
        in_stack_00000018 = in_stack_00000008;
        in_stack_00000010 = uStack0000000000000000;
        System_Collections_Generic_List_Enumerator<ShaderTagId>__MoveNextRare();
        uVar11 = in_stack_00000018;
      }
      *unaff_x19 = uVar11;
      thunk_FUN_02bb0e9c();
    }
    else {
      lVar3 = FUN_0463b21c();
      *unaff_x19 = *(undefined8 *)(lVar3 + 8);
      thunk_FUN_02bb0e9c();
      *(undefined4 *)(lVar3 + 4) = unaff_w21;
    }
    return iVar2 != -1;
  }
LAB_032fb3b4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


