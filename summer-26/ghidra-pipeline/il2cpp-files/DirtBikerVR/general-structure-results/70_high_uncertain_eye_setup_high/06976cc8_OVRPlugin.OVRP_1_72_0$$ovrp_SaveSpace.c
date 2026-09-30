/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 06976cc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  float fVar7;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x498));
  FUN_03a8a718(PTR_DAT_084b74a0);
  FUN_03a8a718(PTR_DAT_08486738);
  FUN_03a8a718(PTR_DAT_08486c50);
  FUN_03a8a718(PTR_DAT_084b74a8);
  *(undefined1 *)(unaff_x20 + 0x127) = 1;
                    /* try { // try from 06976d0c to 06a76d0f has its CatchHandler @ 06976d18 */
                    /* try { // try from 06976d10 to 06a76d43 has its CatchHandler @ 06976a30 */
  FUN_06976e70();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06976d0c with catch @ 06976d18
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06976c4c with catch @ 06976d1c
                        */
  FUN_069771d0();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06976c70 with catch @ 06976d20
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06976c24 with catch @ 06976d24
                        */
  FUN_0697752c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06976bc0 with catch @ 06976d28
                        */
  FUN_0697763c();
  puVar2 = PTR_DAT_08486738;
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 != 0) {
                    /* try { // try from 06976d44 to 06a76d47 has its CatchHandler @ 06976d50 */
                    /* catch() { ... } // from try @ 06976d44 with catch @ 06976d50 */
    if (0.0 < *(float *)(lVar6 + 0x28)) {
                    /* try { // try from 06976d54 to 06a76d5b has its CatchHandler @ 06976d64 */
                    /* try { // try from 06976d5c to 06a76d67 has its CatchHandler @ 06976a30 */
      fVar7 = *(float *)(lVar6 + 0x28) * DAT_015c5c98;
      *(float *)(lVar6 + 0x20) = fVar7;
      *(float *)(lVar6 + 0x2c) = fVar7;
    }
    uVar4 = FUN_0447aad0();
    puVar1 = (undefined8 *)(unaff_x19 + 0x3f8);
    *(undefined8 *)(unaff_x19 + 0x3f8) = uVar4;
    thunk_FUN_03afed3c(puVar1,uVar4);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x3f8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07c9e200(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_07c99058();
      if (lVar6 == 0) goto LAB_06976e6c;
      uVar4 = FUN_045614d0(lVar6,*(undefined8 *)PTR_DAT_084b74a0);
      *puVar1 = uVar4;
      thunk_FUN_03afed3c(puVar1,uVar4);
    }
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_069777e0();
    puVar2 = PTR_DAT_08486c50;
    if (*(char *)(unaff_x19 + 0xc4) != '\0') {
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b7490);
      FUN_05f23c3c();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07d27aac(uVar4,0);
      if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_06976e6c;
      uVar3 = FUN_07ca1fcc(*(long *)(unaff_x19 + 0xa0),0);
      *(undefined4 *)(unaff_x19 + 0x454) = uVar3;
    }
    return;
  }
LAB_06976e6c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


