/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 06ac2b04
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTimeInSeconds(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long unaff_x19;
  int iVar5;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_0335b6c8(param_1 + 0xcf8,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06ac2b14 to 06bc2b17 has its CatchHandler @ 06ac2c24 */
  *(undefined1 *)(unaff_x20 + 0x215) = unaff_w21;
  lVar3 = *(long *)(unaff_x19 + 0x68);
  if (lVar3 == 0) {
LAB_06ac2bdc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar4 = *(int *)(lVar3 + 0x18);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 1;
      iVar2 = iVar1;
      if (iVar1 < iVar4) {
        do {
                    /* try { // try from 06ac2b4c to 06bc2b77 has its CatchHandler @ 06ac2c20 */
          lVar3 = FUN_04ab0b48(lVar3,iVar5,DAT_083efe78);
          if ((lVar3 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_06ac2bdc;
          uVar6 = *(undefined8 *)(lVar3 + 0x20);
          lVar3 = FUN_04ab0b48(*(long *)(unaff_x19 + 0x68),iVar2,DAT_083efe78);
          if (lVar3 == 0) goto LAB_06ac2bdc;
                    /* try { // try from 06ac2b7c to 06bc2b7f has its CatchHandler @ 06ac2c1c */
          uVar7 = *(undefined8 *)(lVar3 + 0x20);
          if (*(int *)(DAT_083cfcf8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cfcf8);
          }
          FUN_07a7fd5c(uVar6,uVar7,0);
          lVar3 = *(long *)(unaff_x19 + 0x68);
          if (lVar3 == 0) goto LAB_06ac2bdc;
          iVar4 = *(int *)(lVar3 + 0x18);
          iVar2 = iVar2 + 1;
                    /* try { // try from 06ac2bb4 to 06bc2bf7 has its CatchHandler @ 06ac2c18 */
        } while (iVar2 < iVar4);
      }
      iVar5 = iVar1;
    } while (iVar1 < iVar4);
  }
  return;
}


