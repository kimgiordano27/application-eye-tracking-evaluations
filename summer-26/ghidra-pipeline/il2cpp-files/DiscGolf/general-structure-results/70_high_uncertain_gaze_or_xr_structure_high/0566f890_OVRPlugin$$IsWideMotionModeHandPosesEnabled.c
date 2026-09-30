/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 0566f890
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 0566f894 to 0576f933 has its CatchHandler @ 0566f744 */
  plVar7 = *(long **)(unaff_x22 + 0x1a0);
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000000 = 0;
  plVar2 = (long *)thunk_FUN_02dd3048();
  if (plVar2 == (long *)0x0) {
    if (unaff_x21 == 0) {
                    /* try { // try from 0566f944 to 0576f947 has its CatchHandler @ 0566f950 */
      uStack0000000000000000 = 0;
      uStack0000000000000008 = 0;
    }
    else {
      uStack0000000000000008 = *(undefined8 *)(unaff_x21 + 0x28);
      uStack0000000000000000 = *(undefined8 *)(unaff_x21 + 0x20);
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566f884 with catch @ 0566f948
                       try { // try from 0566f948 to 0576f96b has its CatchHandler @ 0566f744 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566f934 with catch @ 0566f94c
                        */
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566f85c with catch @ 0566f950
                       catch(type#1 @ 066567d8) { ... } // from try @ 0566f944 with catch @ 0566f950
                        */
    if (*(int *)(*plVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0564f7f0(uVar1);
  }
  else {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0566f908;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*unaff_x23,0);
LAB_0566f908:
    _uStack0000000000000010 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
    if (*(int *)(*plVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* try { // try from 0566f934 to 0576f937 has its CatchHandler @ 0566f94c */
                    /* try { // try from 0566f938 to 0576f943 has its CatchHandler @ 0566f744 */
    FUN_0564f884(uVar1,&stack0x00000010,0);
  }
  return;
}


