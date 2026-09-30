/*
FUNCTION_NAME: OVRPlugin.Ktx$$TranscodeKtxTexture
ENTRY_POINT: 031682b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__TranscodeKtxTexture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
                    /* try { // try from 031682b4 to 0326830b has its CatchHandler @ 031682b4
                       catch() { ... } // from try @ 031682b4 with catch @ 031682b4
                       catch() { ... } // from try @ 031683ec with catch @ 031682b4
                       catch() { ... } // from try @ 031684c0 with catch @ 031682b4
                       catch() { ... } // from try @ 0316853c with catch @ 031682b4 */
  FUN_0251773c();
  if (unaff_x20 != 0) {
    FUN_029bb898();
    puVar1 = PTR_DAT_03d807e0;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d807e0);
                    /* try { // try from 0316830c to 03268317 has its CatchHandler @ 031684f4 */
      FUN_02518558();
      puVar2 = PTR_DAT_03d80800;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d80800) {
                    /* try { // try from 03168370 to 0326837b has its CatchHandler @ 031684e8 */
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0316837c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d80800,1);
LAB_0316837c:
                    /* try { // try from 03168380 to 0326838b has its CatchHandler @ 031684cc */
        (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
          uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
          FUN_02518558();
                    /* try { // try from 031683bc to 032683eb has its CatchHandler @ 031684f8 */
          if (plVar8 != (long *)0x0) {
            lVar5 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_03168410;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,1);
LAB_03168410:
                    /* WARNING: Could not recover jumptable at 0x03168428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


