/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 06019960
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemKeyboardDescription(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  plVar1 = (long *)FUN_060196d0();
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 06019984 to 061199af has its CatchHandler @ 06019a18 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f7488) {
                    /* try { // try from 060199b4 to 061199bb has its CatchHandler @ 06019a10 */
                    /* try { // try from 060199bc to 06119a03 has its CatchHandler @ 06019788 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_060199c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,*(long *)PTR_DAT_075f7488,0);
LAB_060199c0:
    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f39f0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019918 with catch @ 06019a1c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060198dc with catch @ 06019a20
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019a04 with catch @ 06019a24
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019868 with catch @ 06019a28
                        */
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06019a2c;
          }
          uVar5 = uVar5 - 1;
                    /* try { // try from 06019a04 to 06119a0b has its CatchHandler @ 06019a24 */
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
                    /* try { // try from 06019a0c to 06119a47 has its CatchHandler @ 06019788 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060199b4 with catch @ 06019a10
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019948 with catch @ 06019a14
                        */
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,*(long *)PTR_DAT_075f39f0,2);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019984 with catch @ 06019a18
                        */
LAB_06019a2c:
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060198ac with catch @ 06019a2c
                        */
      uVar5 = (*(code *)*puVar2)(plVar1,unaff_w20,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        FUN_06019aa4();
        if (*(long *)(unaff_x21 + 0x80) == 0) goto LAB_06019aa0;
        FUN_06036e90(&stack0x00000020,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        uVar3 = 1;
        unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *unaff_x19 = in_stack_00000020;
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      }
      return uVar3;
    }
  }
LAB_06019aa0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


