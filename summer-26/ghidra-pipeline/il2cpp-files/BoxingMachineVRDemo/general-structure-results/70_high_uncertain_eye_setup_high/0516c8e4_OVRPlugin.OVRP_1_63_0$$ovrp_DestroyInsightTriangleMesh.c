/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightTriangleMesh
ENTRY_POINT: 0516c8e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh(void)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
                    /* try { // try from 0516c8e4 to 0526c907 has its CatchHandler @ 0516c938 */
  *(undefined1 *)(unaff_x20 + 0xe8e) = 1;
  puVar3 = PTR_DAT_06764da0;
  FUN_0516db60();
  iVar13 = 0;
  uVar14 = 0;
  plVar11 = (long *)0x0;
LAB_0516c908:
  do {
                    /* try { // try from 0516c908 to 0526c917 has its CatchHandler @ 0516c930 */
    if (iVar13 < 0x80) {
      uVar12 = 0;
      bVar1 = false;
      lVar10 = (long)iVar13;
                    /* try { // try from 0516c928 to 0526c92b has its CatchHandler @ 0516c938 */
      do {
                    /* try { // try from 0516c92c to 0526c95b has its CatchHandler @ 0516c700 */
        plVar7 = *(long **)(unaff_x19 + 0x78);
                    /* catch() { ... } // from try @ 0516c908 with catch @ 0516c930 */
        if (plVar7 == (long *)0x0) goto LAB_0516cb2c;
                    /* catch() { ... } // from try @ 0516c8c4 with catch @ 0516c934 */
                    /* catch() { ... } // from try @ 0516c8e4 with catch @ 0516c938
                       catch() { ... } // from try @ 0516c928 with catch @ 0516c938 */
                    /* catch() { ... } // from try @ 0516c8b0 with catch @ 0516c93c */
        cVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    /* catch() { ... } // from try @ 0516c894 with catch @ 0516c940 */
        if (cVar4 == '\0') {
          if ((plVar11 != (long *)0x0) || (bVar1)) {
            uVar14 = uVar12 + (uVar14 & 0xffffffff);
            goto LAB_0516c9bc;
          }
          plVar11 = (long *)FUN_04ea62a0(0);
          if (plVar11 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar11 + 0x2d8))
                              (plVar11,*(undefined8 *)(unaff_x19 + 0x88),0,uVar12 & 0xffffffff,
                               *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar11 + 0x2e0)
                              );
            lVar10 = *(long *)(unaff_x19 + 0xa0);
            if (lVar10 != 0) {
              *(int *)(lVar10 + 0x18) = (int)uVar14 + *(int *)(lVar10 + 0x18) + (int)uVar12 + 1;
              FUN_04e938a4(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar6,0);
              return;
            }
          }
          goto LAB_0516cb2c;
        }
        lVar9 = *(long *)(unaff_x19 + 0x88);
        if (lVar9 == 0) goto LAB_0516cb2c;
                    /* try { // try from 0516c95c to 0526c973 has its CatchHandler @ 0516cb3c */
        if (*(uint *)(lVar9 + 0x18) <= (uint)(iVar13 + (int)uVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar2 = lVar10 + uVar12;
        lVar9 = lVar9 + lVar10 + uVar12;
        uVar12 = uVar12 + 1;
        bVar1 = 0x7e < lVar2;
        *(char *)(lVar9 + 0x20) = cVar4;
      } while (lVar10 + uVar12 != 0x80);
      iVar8 = 0x80;
    }
    else {
      bVar1 = true;
      iVar8 = iVar13;
    }
    uVar12 = (ulong)(uint)(iVar8 - iVar13);
    uVar14 = (ulong)(uint)((iVar8 - iVar13) + (int)uVar14);
LAB_0516c9bc:
    uVar5 = FUN_0516dc30();
    plVar7 = (long *)FUN_04ea62a0(0);
    if (plVar7 == (long *)0x0) goto LAB_0516cb2c;
    uVar6 = (**(code **)(*plVar7 + 0x2d8))
                      (plVar7,*(undefined8 *)(unaff_x19 + 0x88),0,uVar5 + 1,
                       *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar7 + 0x2e0));
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_04e962b8(plVar11,0x100,0);
    }
    if (plVar11 == (long *)0x0) goto LAB_0516cb2c;
    FUN_04e97938(plVar11,*(undefined8 *)(unaff_x19 + 0x90),0,uVar6,0);
    if ((int)uVar12 + -1 <= (int)uVar5) break;
    iVar13 = (int)uVar12 + ~uVar5;
    FUN_05029918(*(undefined8 *)(unaff_x19 + 0x88),uVar5 + 1,*(undefined8 *)(unaff_x19 + 0x88),0,
                 iVar13,0);
  } while( true );
  iVar13 = 0;
  if (!bVar1) {
    lVar10 = *(long *)(unaff_x19 + 0xa0);
    if (lVar10 != 0) {
      *(int *)(lVar10 + 0x18) = (int)uVar14 + *(int *)(lVar10 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x0516cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      return;
    }
LAB_0516cb2c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  goto LAB_0516c908;
}


