/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 01d811d4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  undefined8 uVar7;
  long unaff_x24;
  long *unaff_x25;
  ulong uVar8;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000024;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  char cStack000000000000003c;
  
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d811d0 with catch @ 01d811d4
                       try { // try from 01d811d4 to 01e811f3 has its CatchHandler @ 01d81094 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d81138 with catch @ 01d811d8
                        */
  *(undefined1 *)(unaff_x24 + 0x7dc) = 1;
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d8117c with catch @ 01d811dc
                        */
  cStack000000000000003c = '\0';
  uStack0000000000000038 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000024 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
                    /* try { // try from 01d811f4 to 01e811f7 has its CatchHandler @ 01d81218 */
  uStack0000000000000018 = 0;
                    /* try { // try from 01d811f8 to 01e8121f has its CatchHandler @ 01d81094 */
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7eeec();
                    /* catch() { ... } // from try @ 01d811f4 with catch @ 01d81218 */
                    /* try { // try from 01d81220 to 01e81227 has its CatchHandler @ 01d8123c */
                    /* try { // try from 01d81228 to 01e81233 has its CatchHandler @ 01d81094 */
  FUN_01d7f060(unaff_w20 & 0xfffffff7,&stack0x00000030,unaff_w22 & 1,&stack0x0000003c,
               &stack0x00000038,&stack0x00000024);
                    /* try { // try from 01d81234 to 01e8123b has its CatchHandler @ 01d8123c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d81220 with catch @ 01d8123c
                       catch(type#2 @ 00000000) { ... } // from try @ 01d81234 with catch @ 01d8123c
                        */
  lVar5 = FUN_01d81324();
  if (lVar5 != 0) {
    FUN_0174876c(&stack0x00000008,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_023590d8);
    cVar4 = cStack000000000000003c;
    puVar1 = PTR_DAT_023590d0;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        uVar3 = uStack0000000000000030;
        uVar2 = uStack0000000000000028;
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar8 * 8);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar6 = FUN_01d7f470(uVar7,unaff_w20 & 0xfffffff7,uVar3,cVar4 != '\0',uVar2);
        if ((uVar6 & 1) != 0) {
          FUN_0174899c(&stack0x00000008,uVar7,*(undefined8 *)puVar1);
        }
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    unaff_x19[2] = uStack0000000000000018;
    unaff_x19[1] = uStack0000000000000010;
    *unaff_x19 = uStack0000000000000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


