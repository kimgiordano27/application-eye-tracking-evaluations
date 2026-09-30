/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartQueryByLocalGroupDelegate$$EndInvoke
ENTRY_POINT: 08a39818
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate__EndInvoke(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x3b5) = 1;
  if (unaff_x19 == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar3 = thunk_FUN_04983f60();
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac52cd8);
    System_RuntimeType__get_Assembly(uVar3,uVar6,0);
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac52ce0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,uVar6);
  }
                    /* try { // try from 08a39828 to 08b3982b has its CatchHandler @ 08a39834 */
  if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* catch() { ... } // from try @ 08a39828 with catch @ 08a39834 */
                    /* try { // try from 08a39838 to 08b3983f has its CatchHandler @ 08a39848 */
    uVar2 = FUN_08bde5ec();
    if ((uVar2 & 1) != 0) {
      return;
    }
                    /* try { // try from 08a3984c to 08b3997f has its CatchHandler @ 08a3984c
                       catch() { ... } // from try @ 08a3984c with catch @ 08a3984c
                       catch() { ... } // from try @ 08a39a40 with catch @ 08a3984c
                       catch() { ... } // from try @ 08a39ad0 with catch @ 08a3984c
                       catch() { ... } // from try @ 08a39b28 with catch @ 08a3984c */
    uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac14830);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    thunk_FUN_049ee3d8((long *)(unaff_x20 + 0x20),uVar3);
    FUN_08a395bc();
    FUN_08a3971c();
    puVar1 = PTR_DAT_0ac46eb8;
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    plVar8 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac52cd0);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08a3996c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a3996c:
                    /* WARNING: Could not recover jumptable at 0x08a39980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar8,uVar3,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


