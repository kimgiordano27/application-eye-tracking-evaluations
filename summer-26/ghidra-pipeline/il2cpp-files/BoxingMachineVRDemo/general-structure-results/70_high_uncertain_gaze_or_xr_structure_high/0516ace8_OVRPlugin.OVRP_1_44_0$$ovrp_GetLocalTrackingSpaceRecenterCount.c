/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0516ace8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0516affc) */
/* WARNING: Removing unreachable block (ram,0x0516b034) */

int OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
code_r0x0516ace8:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
  do {
    uVar4 = (*(code *)*puVar3)();
                    /* try { // try from 0516ad10 to 0526ad1b has its CatchHandler @ 0516ae10 */
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0516afc8;
      lVar5 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0) goto LAB_0516af80;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
                    /* try { // try from 0516ad1c to 0526ad47 has its CatchHandler @ 0516acb8 */
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
                    /* try { // try from 0516ad58 to 0526ad5b has its CatchHandler @ 0516adbc */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516ad60;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 0516ad48 to 0526ad53 has its CatchHandler @ 0516adc0 */
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ad60:
    lVar5 = (*(code *)*puVar3)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar1 = FUN_0516aa08();
    iVar2 = FUN_0516aa08();
    unaff_w24 = unaff_w24 + iVar1 + iVar2 + 1;
                    /* try { // try from 0516acb8 to 0526acff has its CatchHandler @ 0516acb8
                       catch() { ... } // from try @ 0516acb8 with catch @ 0516acb8
                       catch() { ... } // from try @ 0516ad1c with catch @ 0516acb8
                       catch() { ... } // from try @ 0516ad74 with catch @ 0516acb8
                       catch() { ... } // from try @ 0516adb8 with catch @ 0516acb8
                       catch() { ... } // from try @ 0516ae0c with catch @ 0516acb8
                       catch() { ... } // from try @ 0516ae4c with catch @ 0516acb8 */
    lVar5 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 == 0) goto code_r0x0516ace8;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x25) {
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
      if (uVar4 == 0) goto code_r0x0516ace8;
    }
                    /* try { // try from 0516ad00 to 0526ad0b has its CatchHandler @ 0516ae0c */
    puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0516afbc;
    }
  }
LAB_0516af80:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516afbc:
  (*(code *)*puVar3)();
LAB_0516afc8:
  *(int *)(unaff_x19 + 0x18) = unaff_w24 + 1;
  return unaff_w24 + 1;
}


