/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 01d96630
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollFuture(ulong param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  uint uVar7;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 01d96638 to 01e96653 has its CatchHandler @ 01d965f8 */
    FUN_00fdc2e4(PTR_DAT_0234c848);
    FUN_00fdc2e4(PTR_DAT_0234c408);
                    /* try { // try from 01d96654 to 01e96663 has its CatchHandler @ 01d96664 */
    FUN_00fdc2e4(PTR_DAT_02352868);
                    /* catch() { ... } // from try @ 01d96620 with catch @ 01d96664
                       catch() { ... } // from try @ 01d96654 with catch @ 01d96664 */
    FUN_00fdc2e4(PTR_DAT_02352870);
                    /* try { // try from 01d96668 to 01e9666b has its CatchHandler @ 01d96674 */
                    /* try { // try from 01d9666c to 01e96677 has its CatchHandler @ 01d965f8 */
    *(undefined1 *)(unaff_x19 + 0x89a) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d96668 with catch @ 01d96674
                        */
  plVar2 = (long *)thunk_FUN_010400dc(*unaff_x21);
  FUN_01dc8fa4(plVar2,0);
  if (param_2 != (long *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
    if ((plVar2 != (long *)0x0) &&
       (FUN_01dc3848(plVar2,*(undefined8 *)PTR_DAT_02352868,0), puVar1 = PTR_DAT_0234c408,
       lVar3 != 0)) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if (uVar7 != 0) {
            FUN_01dc3848(plVar2,*(undefined8 *)puVar1,0);
            uVar6 = *(uint *)(lVar3 + 0x18);
          }
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar4 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_01d96764;
          uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          FUN_01dc3848(plVar2,uVar5,0);
          uVar6 = *(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
      }
      FUN_01dc3848(plVar2,*(undefined8 *)PTR_DAT_02352870,0);
                    /* WARNING: Could not recover jumptable at 0x01d96760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return;
    }
  }
LAB_01d96764:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


