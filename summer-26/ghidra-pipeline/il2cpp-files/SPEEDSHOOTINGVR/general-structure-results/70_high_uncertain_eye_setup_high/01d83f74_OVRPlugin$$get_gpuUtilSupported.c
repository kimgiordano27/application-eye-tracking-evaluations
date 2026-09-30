/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 01d83f74
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_gpuUtilSupported(void)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  while (!(bool)in_CY) {
                    /* try { // try from 01d83f80 to 01e83f83 has its CatchHandler @ 01d8431c */
    *(undefined8 *)((long)unaff_x21 + unaff_x27) = unaff_x23;
    thunk_FUN_0106e12c((undefined8 *)((long)unaff_x21 + unaff_x27),unaff_x23);
    unaff_x26 = unaff_x26 + 1;
    unaff_x27 = unaff_x27 + 8;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
                    /* try { // try from 01d83fa0 to 01e83fab has its CatchHandler @ 01d84334 */
      FUN_01d83ce4();
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 01d83fb4 to 01e83fb7 has its CatchHandler @ 01d8431c */
        thunk_FUN_01022c14(*unaff_x24);
      }
      FUN_01d7ecdc();
      uVar2 = FUN_00fcda0c();
                    /* try { // try from 01d83fd4 to 01e83fdb has its CatchHandler @ 01d84310 */
                    /* try { // try from 01d83fe0 to 01e83fe7 has its CatchHandler @ 01d84320 */
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x25);
      }
      uVar3 = FUN_01d603ec(uVar2,0,0);
                    /* try { // try from 01d83ffc to 01e83fff has its CatchHandler @ 01d8431c */
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 01d8400c to 01e84017 has its CatchHandler @ 01d84330 */
        return uVar2;
      }
      thunk_FUN_010303a8(PTR_DAT_02353050);
      uVar2 = thunk_FUN_010400dc();
      FUN_01d842e0();
      goto LAB_01d84184;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) break;
    plVar7 = *(long **)(unaff_x20 + unaff_x27);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01d603ec(plVar7,0,0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bbe8);
      uVar2 = thunk_FUN_010400dc();
      FUN_01c66bb4(uVar2,0);
      goto LAB_01d84184;
    }
    lVar1 = *unaff_x24;
    if (plVar7 == (long *)0x0) {
LAB_01d83f28:
      unaff_x23 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar1 + 0x130)) goto LAB_01d83f28;
      unaff_x23 = plVar7;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1) {
        unaff_x23 = (long *)0x0;
      }
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (unaff_x23 == (long *)0x0) {
      if (plVar7 == (long *)0x0) goto LAB_01d84158;
                    /* try { // try from 01d84024 to 01e84027 has its CatchHandler @ 01d8432c */
      uVar3 = (**(code **)(*plVar7 + 0x5d8))(plVar7,*(undefined8 *)(*plVar7 + 0x5e0));
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar2 = FUN_01d63258();
        return uVar2;
      }
      plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,
                                    *(undefined4 *)(unaff_x20 + 0x18));
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01d840fc;
      uVar3 = 0;
      uVar6 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      plVar8 = plVar7 + 4;
      goto LAB_01d840a0;
    }
    if (unaff_x21 == (long *)0x0) goto LAB_01d84158;
    lVar1 = thunk_FUN_0103ffe0(unaff_x23,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar1 == 0) goto LAB_01d8415c;
    in_CY = *(uint *)(unaff_x21 + 3) <= unaff_x26;
  }
LAB_01d84154:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01d84154 to 01e84157 has its CatchHandler @ 01d84350 */
  FUN_00fdc53c();
LAB_01d840a0:
  if (uVar6 <= uVar3) goto LAB_01d84154;
  if (plVar7 == (long *)0x0) goto LAB_01d84158;
  lVar1 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
  if ((lVar1 != 0) &&
     (lVar4 = thunk_FUN_0103ffe0(lVar1,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_01d8415c:
    uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar2,0);
  }
                    /* try { // try from 01d840cc to 01e84103 has its CatchHandler @ 01d84318 */
  if (*(uint *)(plVar7 + 3) <= uVar3) goto LAB_01d84154;
  *plVar8 = lVar1;
  thunk_FUN_0106e12c(plVar8,lVar1);
  uVar6 = (ulong)*(uint *)(unaff_x20 + 0x18);
  uVar3 = uVar3 + 1;
  plVar8 = plVar8 + 1;
  if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar3) {
LAB_01d840fc:
    uVar3 = FUN_01cbcb8c(0);
                    /* try { // try from 01d84104 to 01e8413f has its CatchHandler @ 01d83b70 */
    if ((uVar3 & 1) == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234cf18);
      uVar2 = thunk_FUN_010400dc();
      FUN_01d59244(uVar2,0);
LAB_01d84184:
      uVar5 = thunk_FUN_010303a8(PTR_DAT_023591e8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar2,uVar5);
    }
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar1 = *unaff_x24;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01d84150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
      return uVar2;
    }
LAB_01d84158:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01d84158 to 01e841bb has its CatchHandler @ 01d84344 */
    FUN_00fdc534();
  }
  goto LAB_01d840a0;
}


