/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceContainer
ENTRY_POINT: 0516dd40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer
               (long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w9;
  code *in_x10;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  ulong unaff_x24;
  undefined8 *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  
  while( true ) {
    iVar2 = unaff_w28 - (int)unaff_x24;
    if (in_w9 <= iVar2) {
      iVar2 = in_w9;
    }
    iVar2 = (*in_x10)(param_1,param_2,param_3,iVar2,param_5);
    if (iVar2 == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067742f8);
      uVar6 = thunk_FUN_02d9d534();
                    /* try { // try from 0516dee8 to 0526deeb has its CatchHandler @ 0516df6c */
                    /* catch() { ... } // from try @ 0516dd74 with catch @ 0516deec
                       try { // try from 0516deec to 0526df0b has its CatchHandler @ 0516db10 */
                    /* catch() { ... } // from try @ 0516dd04 with catch @ 0516def0 */
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06779198);
      FUN_04fb7fb4(uVar6,uVar7,0);
                    /* try { // try from 0516df0c to 0526df23 has its CatchHandler @ 0516df58 */
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067828c0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar7);
    }
                    /* try { // try from 0516dd54 to 0526dd57 has its CatchHandler @ 0516df74 */
    iVar1 = iVar2 + (int)unaff_x24;
                    /* try { // try from 0516dd60 to 0526dd63 has its CatchHandler @ 0516df70 */
    if (iVar1 == unaff_w20) break;
                    /* try { // try from 0516dd6c to 0526dd6f has its CatchHandler @ 0516df6c */
    uVar3 = FUN_0516dc30();
                    /* try { // try from 0516dd74 to 0526dd7b has its CatchHandler @ 0516deec */
    if (unaff_x21 == (long *)0x0) {
                    /* try { // try from 0516dd7c to 0526decf has its CatchHandler @ 0516db10 */
      unaff_x21 = (long *)thunk_FUN_02d9d534(*unaff_x26);
      FUN_04e962b8(unaff_x21,unaff_w20,0);
    }
    plVar5 = (long *)FUN_04ea62a0(0);
    if (plVar5 == (long *)0x0) goto LAB_0516ded0;
    uVar4 = (**(code **)(*plVar5 + 0x2d8))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,uVar3 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2e0));
    if (unaff_x21 == (long *)0x0) goto LAB_0516ded0;
    FUN_04e97938(unaff_x21,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
    param_3 = 0;
    if ((int)uVar3 < iVar1 + -1) {
      param_3 = (ulong)(iVar1 + ~uVar3);
      FUN_05029918(*(undefined8 *)(unaff_x19 + 0x88),uVar3 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                   param_3,0);
    }
    unaff_w27 = iVar2 + unaff_w27;
    if (unaff_w20 <= unaff_w27) {
                    /* WARNING: Could not recover jumptable at 0x0516de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      return;
    }
    param_1 = *(long **)(unaff_x19 + 0x78);
    if (param_1 == (long *)0x0) goto LAB_0516ded0;
    param_2 = *(undefined8 *)(unaff_x19 + 0x88);
    in_w9 = unaff_w20 - unaff_w27;
    in_x10 = *(code **)(*param_1 + 0x2b8);
    param_5 = *(undefined8 *)(*param_1 + 0x2c0);
    unaff_x24 = param_3;
  }
  plVar5 = (long *)FUN_04ea62a0(0);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x2d8))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w20,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2e0));
    FUN_04e938a4(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
    return;
  }
LAB_0516ded0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


