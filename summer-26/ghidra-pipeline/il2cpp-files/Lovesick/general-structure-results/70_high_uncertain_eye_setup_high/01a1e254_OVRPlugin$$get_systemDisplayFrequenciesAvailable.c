/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 01a1e254
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequenciesAvailable(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  plVar4 = (long *)(*param_1)();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_4227) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01a1e2b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_4227,0);
LAB_01a1e2b4:
                    /* try { // try from 01a1e2b8 to 01b1e2df has its CatchHandler @ 01a1e484 */
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_11555) {
                    /* try { // try from 01a1e314 to 01b1e33b has its CatchHandler @ 01a1e480 */
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_01a1e320;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_11555,1);
LAB_01a1e320:
      puVar3 = Method_System_String_Compare__;
      puVar2 = Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__;
      puVar1 = System_Collections_Generic_IList<Expression>_TypeInfo;
      (*(code *)*puVar5)(&stack0x00000008,plVar4,puVar5[1]);
                    /* try { // try from 01a1e348 to 01b1e34f has its CatchHandler @ 01a1e478 */
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar7 = FUN_012b69b4(&stack0x00000020,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
                    /* try { // try from 01a1e370 to 01b1e37b has its CatchHandler @ 01a1e47c */
        FUN_00bf9134(&stack0x00000020,*(undefined8 *)puVar1);
                    /* try { // try from 01a1e380 to 01b1e3cb has its CatchHandler @ 01a1e488 */
        FUN_01953da4();
        FUN_01953e1c();
      }
      FUN_012b69b0(&stack0x00000020,*(undefined8 *)puVar2);
                    /* try { // try from 01a1e3cc to 01b1e45b has its CatchHandler @ 01a1e0d8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


