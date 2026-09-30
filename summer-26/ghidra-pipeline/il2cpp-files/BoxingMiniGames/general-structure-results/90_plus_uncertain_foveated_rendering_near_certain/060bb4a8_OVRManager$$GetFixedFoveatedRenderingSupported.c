/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 060bb4a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  ulong uStack0000000000000034;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060bb498 with catch @ 060bb4a8
                        */
                    /* try { // try from 060bb4ac to 061bb58f has its CatchHandler @ 060bb4ac
                       catch() { ... } // from try @ 060bb4ac with catch @ 060bb4ac
                       catch() { ... } // from try @ 060bb958 with catch @ 060bb4ac
                       catch() { ... } // from try @ 060bb9b8 with catch @ 060bb4ac
                       catch() { ... } // from try @ 060bb9e0 with catch @ 060bb4ac */
  FUN_03642964(*(undefined8 *)(param_1 + 0xe28));
  *(undefined1 *)(unaff_x21 + 0x99d) = 1;
  uVar9 = *(undefined8 *)(unaff_x19 + 0xd0);
  uStack000000000000000c = 0;
  iVar1 = *(int *)(*unaff_x20 + 0xe4);
  uStack0000000000000014 = 0;
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  if (iVar1 == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_071c24dc(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
LAB_060bb624:
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
    return;
  }
  FUN_060bb640();
  FUN_060bb794();
  puVar2 = PTR_DAT_07a21620;
  plVar10 = *(long **)(unaff_x19 + 0x180);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a21620) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_060bb568;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_07a21620,3);
LAB_060bb568:
    uStack0000000000000034 = (ulong)uStack0000000000000014;
    uStack0000000000000028 = 0;
    in_stack_00000020 = 0;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = 0;
    (*(code *)*puVar6)(plVar10,&stack0x00000020,puVar6[1]);
    plVar10 = *(long **)(unaff_x19 + 0x180);
                    /* try { // try from 060bb590 to 061bb59b has its CatchHandler @ 060bb980 */
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 060bb5b4 to 061bb5bf has its CatchHandler @ 060bb968 */
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_060bb5e4;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)puVar2,5);
LAB_060bb5e4:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar3 = FUN_060bb158();
      uVar4 = FUN_060bb8a8();
      uVar3 = (*(uint *)(unaff_x19 + 0x178) | uVar3) & (uVar4 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar3;
      if (uVar4 == 0) {
        return;
      }
      if (uVar3 != 0) {
        return;
      }
      goto LAB_060bb624;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


