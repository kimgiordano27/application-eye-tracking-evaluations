/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 01db2380
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2378) */
/* WARNING: Removing unreachable block (ram,0x01db2490) */
/* WARNING: Removing unreachable block (ram,0x01db249c) */
/* WARNING: Removing unreachable block (ram,0x01db2300) */
/* WARNING: Removing unreachable block (ram,0x01db2310) */
/* WARNING: Removing unreachable block (ram,0x01db2318) */
/* WARNING: Removing unreachable block (ram,0x01db2340) */
/* WARNING: Removing unreachable block (ram,0x01db2324) */
/* WARNING: Removing unreachable block (ram,0x01db2330) */
/* WARNING: Removing unreachable block (ram,0x01db234c) */
/* WARNING: Removing unreachable block (ram,0x01db22c0) */
/* WARNING: Removing unreachable block (ram,0x01db22d0) */
/* WARNING: Removing unreachable block (ram,0x01db22dc) */
/* WARNING: Removing unreachable block (ram,0x01db22e4) */
/* WARNING: Removing unreachable block (ram,0x01db237c) */
/* WARNING: Removing unreachable block (ram,0x01db22f0) */
/* WARNING: Removing unreachable block (ram,0x01db23ec) */
/* WARNING: Removing unreachable block (ram,0x01db2444) */

undefined4 OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w20;
  undefined4 uVar6;
  long *unaff_x22;
  long *unaff_x26;
  
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *unaff_x22;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_01db23d0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348(unaff_x22,*unaff_x26,0);
LAB_01db23d0:
  (*(code *)*puVar2)(unaff_x22,puVar2[1]);
  uVar4 = FUN_01012ff8();
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = thunk_FUN_01027034(0);
    if (iVar1 - unaff_w20 < 0x1e) {
      FUN_01db1b64();
      return 1;
    }
    uVar6 = 1;
  }
  FUN_01db1014();
  return uVar6;
}


