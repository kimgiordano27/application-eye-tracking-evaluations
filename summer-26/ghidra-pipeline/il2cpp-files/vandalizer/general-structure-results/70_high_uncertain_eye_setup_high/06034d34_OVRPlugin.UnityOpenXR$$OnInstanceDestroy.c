/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 06034d34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_UnityOpenXR__OnInstanceDestroy(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  lVar4 = FUN_055ee02c();
  if (lVar4 != 0) {
    cVar1 = *(char *)(lVar4 + 0x2c);
    if (cVar1 == '\0') {
                    /* try { // try from 06034dd0 to 06134ddb has its CatchHandler @ 060349f8 */
                    /* try { // try from 06034ddc to 06134de3 has its CatchHandler @ 06034de4 */
      if (*(int *)(*(long *)PTR_DAT_075d64f0 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06034dc8 with catch @ 06034de4
                       catch(type#2 @ 00000000) { ... } // from try @ 06034ddc with catch @ 06034de4
                        */
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
                    /* try { // try from 06034de8 to 06134eb7 has its CatchHandler @ 06034de8
                       catch() { ... } // from try @ 06034de8 with catch @ 06034de8
                       catch() { ... } // from try @ 06034f34 with catch @ 06034de8
                       catch() { ... } // from try @ 06034f70 with catch @ 06034de8
                       catch() { ... } // from try @ 06034f94 with catch @ 06034de8
                       catch() { ... } // from try @ 06034fc8 with catch @ 06034de8 */
      FUN_06e684bc(&stack0x00000040,0);
      uStack0000000000000034 = uStack0000000000000054;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000030 = uStack0000000000000050;
      uStack0000000000000028 = uStack0000000000000048;
      uStack000000000000002c = uStack000000000000004c;
LAB_06034e40:
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return cVar1 != '\0';
    }
    lVar5 = FUN_055ee02c();
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
      plVar9 = *(long **)(*(long *)(lVar5 + 0x38) + 0x10);
      uStack0000000000000014 = *(undefined8 *)(lVar4 + 0x24);
                    /* try { // try from 06034d68 to 06134d6b has its CatchHandler @ 06034d70 */
      uVar10 = *(undefined8 *)(lVar4 + 0x10);
                    /* try { // try from 06034d6c to 06134d9b has its CatchHandler @ 060349f8 */
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x1c) >> 0x20);
      uVar3 = uStack0000000000000050;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034d68 with catch @ 06034d70
                        */
      uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
      uVar2 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034b24 with catch @ 06034d74
                        */
      in_stack_00000040 = uVar10;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar9 != (long *)0x0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034c34 with catch @ 06034d78
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034cb0 with catch @ 06034d7c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034b38 with catch @ 06034d80
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034bb8 with catch @ 06034d84
                        */
        uStack000000000000000c = uStack000000000000004c;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 06034d9c to 06134d9f has its CatchHandler @ 06034dc0 */
        if (uVar7 != 0) {
                    /* try { // try from 06034da0 to 06134dc7 has its CatchHandler @ 060349f8 */
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f3788) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06034e10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
                    /* catch() { ... } // from try @ 06034d9c with catch @ 06034dc0 */
                    /* try { // try from 06034dc8 to 06134dcf has its CatchHandler @ 06034de4 */
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)PTR_DAT_075f3788,1);
LAB_06034e10:
        in_stack_00000068 = uVar2;
        uStack0000000000000074 = uStack0000000000000014;
        uStack000000000000006c = uStack000000000000000c;
        in_stack_00000070 = uVar3;
        in_stack_00000060 = uVar10;
        (*(code *)*puVar6)(&stack0x00000020,plVar9,&stack0x00000060,puVar6[1]);
        goto LAB_06034e40;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


