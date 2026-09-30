/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Toggle$$UpdateIcon
ENTRY_POINT: 0145373c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Toggle__UpdateIcon(float param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  do {
    FUN_026883a8(unaff_s8 + param_1,&stack0x00000020,0);
                    /* try { // try from 0145374c to 0155376f has its CatchHandler @ 01453bdc */
    fVar5 = (float)FUN_026884c4(&stack0x00000020,0);
    fVar6 = (float)FUN_026884c4(&stack0x00000050,0);
    FUN_026884cc(fVar5 * fVar6,&stack0x00000020,0);
                    /* try { // try from 0145377c to 01553793 has its CatchHandler @ 01453bd0 */
    fVar5 = (float)FUN_026884d4(&stack0x00000020,0);
    fVar6 = (float)FUN_026884d4(&stack0x00000050,0);
    FUN_026884dc(fVar5 * fVar6,&stack0x00000020,0);
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (unaff_x21 == 0)) goto LAB_01453884;
                    /* try { // try from 014537b0 to 015537b3 has its CatchHandler @ 01453be4 */
    uVar2 = (int)unaff_x25 + (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) {
LAB_01453888:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
                    /* try { // try from 014537c8 to 015537cb has its CatchHandler @ 01453be0 */
    lVar3 = unaff_x21 + (long)(int)uVar2 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (lVar3 = *(long *)(unaff_x19 + 0x30), lVar3 == 0))
    goto LAB_01453884;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_01453888;
    if (unaff_x23 == 0) goto LAB_01453884;
                    /* try { // try from 014537f0 to 0155381f has its CatchHandler @ 01453be4 */
    uVar2 = (int)unaff_x25 + (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar2) goto LAB_01453888;
    lVar1 = unaff_x25 * 4;
    unaff_x25 = unaff_x25 + 1;
    *(undefined4 *)(unaff_x23 + (long)(int)uVar2 * 4 + 0x20) = *(undefined4 *)(lVar3 + lVar1 + 0x20)
    ;
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 == 0) goto LAB_01453884;
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)unaff_x25) {
      lVar3 = thunk_FUN_00d62348(*unaff_x24);
      if (lVar3 != 0) {
        FUN_01435978();
                    /* try { // try from 0145384c to 01553863 has its CatchHandler @ 01453be4 */
        *(undefined4 *)(lVar3 + 0x10) = uStack000000000000004c;
        *(long *)(lVar3 + 0x20) = unaff_x21;
        *(undefined8 *)(lVar3 + 0x28) = unaff_x22;
        *(long *)(lVar3 + 0x30) = unaff_x23;
        *(undefined4 *)(lVar3 + 0x14) = uStack0000000000000048;
        FUN_014359a0(lVar3,0);
                    /* try { // try from 01453864 to 01553893 has its CatchHandler @ 01453348 */
        return lVar3;
      }
LAB_01453884:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_01453888;
    lVar3 = lVar3 + unaff_x25 * 0x10;
    in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
    fVar5 = (float)FUN_02688390(&stack0x00000050,0);
    fVar6 = (float)FUN_02688390(&stack0x00000020,0);
    fVar4 = (float)FUN_026884c4(&stack0x00000050,0);
    FUN_02688398(fVar5 + fVar6 * fVar4,&stack0x00000020,0);
    unaff_s8 = (float)FUN_026883a0(&stack0x00000050,0);
    param_1 = (float)FUN_026883a0(&stack0x00000020,0);
    fVar5 = (float)FUN_026884d4(&stack0x00000050,0);
    param_1 = param_1 * fVar5;
  } while( true );
}


