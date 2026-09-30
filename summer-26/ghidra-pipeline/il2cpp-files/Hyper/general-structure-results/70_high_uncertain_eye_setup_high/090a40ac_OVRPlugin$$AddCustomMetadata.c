/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 090a40ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__AddCustomMetadata(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  long *plVar8;
  long unaff_x23;
  long *plVar9;
  float fVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  puVar1 = PTR_DAT_0ac78f60;
  iVar7 = 0;
  plVar9 = *(long **)(unaff_x23 + 0x960);
  do {
                    /* try { // try from 090a40c0 to 091a40df has its CatchHandler @ 090a42b0 */
    uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 200);
    uStack0000000000000000 = *(undefined8 *)(unaff_x19 + 0xc0);
    uStack0000000000000010 = *(undefined8 *)(unaff_x19 + 0xd0);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_090bdfa0();
    if (iVar2 != 0) {
      plVar8 = *(long **)(unaff_x20 + 0x130);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
                    /* try { // try from 090a4108 to 091a410b has its CatchHandler @ 090a428c */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_090a4144;
          }
                    /* try { // try from 090a411c to 091a4123 has its CatchHandler @ 090a4284 */
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar1,0);
                    /* try { // try from 090a4134 to 091a413f has its CatchHandler @ 090a4280 */
LAB_090a4144:
                    /* try { // try from 090a4150 to 091a415b has its CatchHandler @ 090a4274 */
      fVar10 = (float)(*(code *)*puVar3)(plVar8,iVar7,puVar3[1]);
      if (*(float *)(unaff_x19 + 0xd8) < fVar10) {
        return 1;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 5) {
                    /* try { // try from 090a4170 to 091a418f has its CatchHandler @ 090a4278 */
      return 0;
    }
  } while( true );
}


