/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 0516c960
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry(long param_1,char param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  
code_r0x0516c960:
  lVar7 = unaff_x23 + unaff_x21;
  lVar2 = param_1 + unaff_x23 + unaff_x21;
  unaff_x21 = unaff_x21 + 1;
  bVar1 = 0x7e < lVar7;
                    /* try { // try from 0516c97c to 0526c97f has its CatchHandler @ 0516cb34 */
  *(char *)(lVar2 + 0x20) = param_2;
  if (unaff_x23 + unaff_x21 != 0x80) goto LAB_0516c92c;
  iVar6 = 0x80;
LAB_0516c98c:
  unaff_x21 = (ulong)(uint)(iVar6 - unaff_w22);
  unaff_x25 = (ulong)(uint)((iVar6 - unaff_w22) + (int)unaff_x25);
                    /* try { // try from 0516c990 to 0526c9bb has its CatchHandler @ 0516cb24 */
  do {
                    /* try { // try from 0516c9c4 to 0526c9df has its CatchHandler @ 0516cb20 */
    uVar3 = FUN_0516dc30();
    plVar5 = (long *)FUN_04ea62a0(0);
    if (plVar5 == (long *)0x0) {
LAB_0516cb2c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0516c9f0 to 0526c9fb has its CatchHandler @ 0516cb58 */
    uVar4 = (**(code **)(*plVar5 + 0x2d8))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,uVar3 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2e0));
                    /* try { // try from 0516c9fc to 0526caa7 has its CatchHandler @ 0516c700 */
    if (unaff_x20 == (long *)0x0) {
      unaff_x20 = (long *)thunk_FUN_02d9d534(*unaff_x26);
      FUN_04e962b8(unaff_x20,0x100,0);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_0516cb2c;
    FUN_04e97938(unaff_x20,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
    if ((int)uVar3 < (int)unaff_x21 + -1) {
      unaff_w22 = (int)unaff_x21 + ~uVar3;
      FUN_05029918(*(undefined8 *)(unaff_x19 + 0x88),uVar3 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                   unaff_w22,0);
    }
    else {
      unaff_w22 = 0;
      if (!bVar1) {
        lVar7 = *(long *)(unaff_x19 + 0xa0);
        if (lVar7 != 0) {
          *(int *)(lVar7 + 0x18) = (int)unaff_x25 + *(int *)(lVar7 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x0516cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x170));
          return;
        }
        goto LAB_0516cb2c;
      }
    }
    if (0x7f < unaff_w22) break;
    unaff_x21 = 0;
    bVar1 = false;
    unaff_x23 = (long)unaff_w22;
    unaff_w24 = unaff_w22;
LAB_0516c92c:
    plVar5 = *(long **)(unaff_x19 + 0x78);
    if (plVar5 == (long *)0x0) goto LAB_0516cb2c;
    param_2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    if (param_2 != '\0') {
      param_1 = *(long *)(unaff_x19 + 0x88);
      if (param_1 == 0) goto LAB_0516cb2c;
      if (*(uint *)(param_1 + 0x18) <= (uint)(unaff_w24 + (int)unaff_x21)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      goto code_r0x0516c960;
    }
    if ((unaff_x20 == (long *)0x0) && (!bVar1)) {
      plVar5 = (long *)FUN_04ea62a0(0);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x2d8))
                          (plVar5,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_x21 & 0xffffffff,
                           *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2e0));
        lVar7 = *(long *)(unaff_x19 + 0xa0);
        if (lVar7 != 0) {
          *(int *)(lVar7 + 0x18) = (int)unaff_x25 + *(int *)(lVar7 + 0x18) + (int)unaff_x21 + 1;
          FUN_04e938a4(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar4,0);
          return;
        }
      }
      goto LAB_0516cb2c;
    }
    unaff_x25 = unaff_x21 + (unaff_x25 & 0xffffffff);
  } while( true );
  bVar1 = true;
  iVar6 = unaff_w22;
  goto LAB_0516c98c;
}


