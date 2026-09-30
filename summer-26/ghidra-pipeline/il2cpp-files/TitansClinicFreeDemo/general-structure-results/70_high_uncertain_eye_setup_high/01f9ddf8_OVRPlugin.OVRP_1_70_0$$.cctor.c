/*
FUNCTION_NAME: OVRPlugin.OVRP_1_70_0$$.cctor
ENTRY_POINT: 01f9ddf8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_70_0___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  do {
    uVar5 = *(undefined8 *)(unaff_x24 + unaff_x22 * 8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 01f9de08 to 0209de13 has its CatchHandler @ 01f9de64 */
      thunk_FUN_01220628();
    }
    FUN_01f9dc1c(uVar5);
                    /* try { // try from 01f9de14 to 0209de5f has its CatchHandler @ 01f9dcec */
    unaff_x22 = unaff_x22 + 1;
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
    uVar6 = (uint)unaff_x22;
    if ((int)uVar3 <= (int)uVar6) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (uVar3 == *(uint *)(unaff_x19 + 0x18)) {
        return;
      }
                    /* try { // try from 01f9de88 to 0209de8b has its CatchHandler @ 01f9deb4 */
                    /* try { // try from 01f9de8c to 0209dec3 has its CatchHandler @ 01f9dcec */
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3650);
      uVar5 = FUN_01230af8(uVar5,2);
      FUN_0103b050();
      puVar1 = PTR_DAT_027b1ab0;
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
                    /* catch() { ... } // from try @ 01f9de88 with catch @ 01f9deb4 */
      uVar2 = thunk_FUN_01279b34(PTR_DAT_027b1ab0);
      uVar2 = thunk_FUN_0124b7d8(uVar2,&stack0x0000000c);
                    /* try { // try from 01f9dec4 to 0209decb has its CatchHandler @ 01f9dee0 */
                    /* try { // try from 01f9decc to 0209ded7 has its CatchHandler @ 01f9dcec */
      FUN_0103b050(uVar5);
                    /* try { // try from 01f9ded8 to 0209dedf has its CatchHandler @ 01f9dee0 */
      FUN_0103b3ac(uVar5,uVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f9dec4 with catch @ 01f9dee0
                       catch(type#2 @ 00000000) { ... } // from try @ 01f9ded8 with catch @ 01f9dee0
                        */
      FUN_0103b3e0(uVar5,0,uVar2);
      FUN_0103b050();
      in_stack_00000008 = (undefined4)*(undefined8 *)(unaff_x19 + 0x18);
      uVar2 = thunk_FUN_01279b34(puVar1);
      uVar2 = thunk_FUN_0124b7d8(uVar2,&stack0x00000008);
      FUN_0103b050(uVar5);
      FUN_0103b3ac(uVar5,uVar2);
      FUN_0103b3e0(uVar5,1,uVar2);
      uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1ed0);
      uVar5 = FUN_01f9b348(uVar2,uVar5);
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar2 = thunk_FUN_0124bba8();
      FUN_01e7d290(uVar2,uVar5,0);
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1ec8);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar2,uVar5);
    }
    if (uVar3 <= uVar6) break;
    lVar4 = *(long *)(unaff_x24 + unaff_x22 * 8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (lVar4 == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar5 = thunk_FUN_0124bba8();
                    /* try { // try from 01f9de60 to 0209de63 has its CatchHandler @ 01f9de68 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9de08 with catch @ 01f9de64
                       try { // try from 01f9de64 to 0209de87 has its CatchHandler @ 01f9dcec */
      FUN_01e7e374(uVar5,0);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9de60 with catch @ 01f9de68
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9dd9c with catch @ 01f9de6c
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9dde0 with catch @ 01f9de70
                        */
      uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1ec8);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar5,uVar2);
    }
  } while (uVar6 < *(uint *)(unaff_x20 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


