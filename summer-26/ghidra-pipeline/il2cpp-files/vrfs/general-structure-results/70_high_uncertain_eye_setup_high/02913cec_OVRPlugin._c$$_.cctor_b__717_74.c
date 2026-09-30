/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_74
ENTRY_POINT: 02913cec
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_<>c__<_cctor>b__717_74(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  undefined8 in_stack_00000008;
  
  plVar2 = (long *)thunk_FUN_015d0480();
  if (plVar2 == (long *)0x0) {
    FUN_031dbd4c();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    /* try { // try from 02913d18 to 02a13d6b has its CatchHandler @ 02913da8 */
    lVar5 = FUN_015c2790(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02913da4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(plVar9,lVar5,0);
LAB_02913da4:
  iVar1 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_015c2790(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto OVRPlugin_<>c__<_cctor>b__717_77;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar9,lVar5,0);
OVRPlugin_<>c__<_cctor>b__717_77:
      in_stack_00000008._4_2_ = (*(code *)*puVar3)(plVar9,iVar10,puVar3[1]);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_015c2790();
      }
      lVar5 = thunk_FUN_015d01b0(lVar5,(long)&stack0x00000008 + 4);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar4,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar5;
      thunk_FUN_01656ef8(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
      iVar10 = iVar10 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar10 != iVar1);
  }
  return;
}


