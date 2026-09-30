/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 0603492c
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


void OVRPlugin_UnityOpenXR__SetClientVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 uStack0000000000000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  
  *(undefined1 *)(unaff_x22 + 0xc19) = 1;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000094 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075f7680) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034820 with catch @ 0603498c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034880 with catch @ 06034990
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034970 with catch @ 06034994
                       catch(type#1 @ 0718d318) { ... } // from try @ 06034978 with catch @ 06034994
                        */
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06034998;
        }
                    /* try { // try from 06034970 to 06134973 has its CatchHandler @ 06034994 */
        uVar6 = uVar6 - 1;
                    /* try { // try from 06034974 to 06134977 has its CatchHandler @ 06034984 */
        piVar7 = piVar7 + 4;
                    /* try { // try from 06034978 to 0613497b has its CatchHandler @ 06034994 */
      } while (uVar6 != 0);
    }
                    /* try { // try from 0603497c to 061349ab has its CatchHandler @ 060346a0 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034900 with catch @ 06034980
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06034974 with catch @ 06034984
                        */
    puVar4 = (undefined8 *)FUN_0322c1e8();
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060347d8 with catch @ 06034988
                        */
LAB_06034998:
    iVar3 = (*(code *)*puVar4)();
    puVar2 = PTR_DAT_075f7670;
    puVar1 = PTR_DAT_075f2eb0;
    if (iVar3 == 0x1a) {
                    /* try { // try from 060349ac to 061349af has its CatchHandler @ 060349d0 */
                    /* try { // try from 060349b0 to 061349d7 has its CatchHandler @ 060346a0 */
      iVar3 = 0;
      do {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 060349ac with catch @ 060349d0 */
        if (uVar6 != 0) {
                    /* try { // try from 060349d8 to 061349df has its CatchHandler @ 060349f4 */
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* try { // try from 060349e0 to 061349eb has its CatchHandler @ 060346a0 */
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06034a10;
            }
            uVar6 = uVar6 - 1;
                    /* try { // try from 060349ec to 061349f3 has its CatchHandler @ 060349f4 */
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060349d8 with catch @ 060349f4
                       catch(type#2 @ 00000000) { ... } // from try @ 060349ec with catch @ 060349f4
                        */
                    /* try { // try from 060349f8 to 06134b23 has its CatchHandler @ 060349f8
                       catch() { ... } // from try @ 060349f8 with catch @ 060349f8
                       catch() { ... } // from try @ 06034d28 with catch @ 060349f8
                       catch() { ... } // from try @ 06034d6c with catch @ 060349f8
                       catch() { ... } // from try @ 06034da0 with catch @ 060349f8
                       catch() { ... } // from try @ 06034dd0 with catch @ 060349f8 */
        puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_06034a10:
        (*(code *)*puVar4)(&stack0x00000060);
        uStack0000000000000088 = uStack0000000000000068;
        uStack0000000000000080 = in_stack_00000060;
        uStack0000000000000094 = (undefined4)uStack0000000000000074;
        uStack0000000000000098 = SUB84(uStack0000000000000074,4);
        uStack000000000000008c = uStack000000000000006c;
        uStack0000000000000090 = uStack0000000000000070;
        if ((unaff_x19 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          in_stack_00000028 = uStack0000000000000068;
          in_stack_00000020 = in_stack_00000060;
          uStack0000000000000034 = uStack0000000000000074;
          uStack0000000000000030 = uStack0000000000000070;
          FUN_06030a30(&stack0x00000040,&stack0x00000020,0);
          uStack0000000000000088 = uStack0000000000000048;
          uStack0000000000000080 = in_stack_00000040;
          uStack0000000000000094 = (undefined4)uStack0000000000000054;
          uStack0000000000000098 = SUB84(uStack0000000000000054,4);
          uStack000000000000008c = uStack000000000000004c;
          uStack0000000000000090 = uStack0000000000000050;
        }
        uStack0000000000000074 = CONCAT44(uStack0000000000000098,uStack0000000000000094);
        uStack0000000000000068 = uStack0000000000000088;
        in_stack_00000060 = uStack0000000000000080;
        uStack000000000000006c = uStack000000000000008c;
        uStack0000000000000070 = uStack0000000000000090;
        if (unaff_x21 == 0) goto LAB_06034ae0;
        FUN_0603422c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x1a);
    }
    return;
  }
LAB_06034ae0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


