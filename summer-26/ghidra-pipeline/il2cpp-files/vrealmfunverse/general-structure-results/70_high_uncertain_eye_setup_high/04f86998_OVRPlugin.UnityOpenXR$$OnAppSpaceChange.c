/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 04f86998
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnAppSpaceChange(void)

{
  undefined8 *puVar1;
  undefined1 in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x22 + 0xd2e) = in_w8;
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 04f869b8 to 050869bf has its CatchHandler @ 04f86a00 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 04f869c0 to 050869f7 has its CatchHandler @ 04f86698 */
        if (*(long *)(piVar4 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
          goto LAB_04f869f8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f869f8:
                    /* try { // try from 04f869f8 to 050869fb has its CatchHandler @ 04f86a08 */
                    /* try { // try from 04f869fc to 05086a23 has its CatchHandler @ 04f86698 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f869b8 with catch @ 04f86a00
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f86944 with catch @ 04f86a04
                        */
    uVar3 = (*(code *)*puVar1)();
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f869f8 with catch @ 04f86a08
                        */
    if ((uVar3 & 1) != 0) {
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x78) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar5 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x18);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 04f86a24 to 05086a27 has its CatchHandler @ 04f86a40 */
        lVar2 = *plVar5;
                    /* try { // try from 04f86a28 to 05086a43 has its CatchHandler @ 04f86698 */
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 04f86a24 with catch @ 04f86a40 */
                    /* try { // try from 04f86a44 to 05086a4b has its CatchHandler @ 04f86a54 */
            if (*(long *)(piVar4 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
              goto LAB_04f86ab4;
            }
                    /* try { // try from 04f86a4c to 05086a57 has its CatchHandler @ 04f86698 */
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f86a44 with catch @ 04f86a54
                        */
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_02b7654c(plVar5,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,2);
LAB_04f86ab4:
        (*(code *)*puVar1)(&stack0x00000000 + 4,plVar5);
        unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *unaff_x19 = in_stack_00000000._4_8_;
        *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      }
      return 1;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c9a2f0(&stack0x00000000 + 4,0);
  unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *unaff_x19 = in_stack_00000000._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  return 0;
}


