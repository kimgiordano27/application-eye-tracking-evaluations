/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 0341eea0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined4 OVRTelemetry_MarkerPoint__Dispose(void)

{
  ushort uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar5;
  uint uVar6;
  ulong unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  ulong unaff_x28;
  
  do {
    while( true ) {
                    /* try { // try from 0341eea0 to 0351eeb7 has its CatchHandler @ 0341eee4 */
      uVar5 = (uint)unaff_x24;
      uVar3 = FUN_032a2694();
      if ((uVar3 & 1) == 0) goto LAB_0341f000;
      uVar1 = FUN_032a26dc();
                    /* try { // try from 0341eeb8 to 0351eed3 has its CatchHandler @ 0341ebf0 */
      if (uVar1 < 0x80) break;
LAB_0341ef20:
      if ((int)uVar5 < 0) {
        uVar3 = FUN_032a263c();
        if ((uVar3 & 1) == 0) goto joined_r0x0341f0a8;
        uVar5 = 0;
      }
      unaff_w25 = (uint)uVar1 | unaff_w25 << 0x10;
      uVar6 = uVar5 + 0x10;
      while (uVar5 = uVar6, unaff_x24 = (ulong)uVar5, 5 < (int)uVar5) {
        if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_0341f0f0;
        if (*(uint *)(*(long *)(unaff_x22 + 0x38) + 0x18) <=
            ((int)unaff_w25 >> (uVar5 - 6 & 0x1f) & 0x3fU)) goto LAB_0341f0f4;
        uVar3 = FUN_032a263c();
        uVar6 = uVar5 - 6;
        if ((uVar3 & 1) == 0) {
          FUN_032a26dc();
          goto joined_r0x0341f0e8;
        }
      }
LAB_0341ee98:
      unaff_x28 = unaff_x24 >> 0x1f & 1;
    }
    lVar4 = *(long *)(unaff_x22 + 0x48);
    if (lVar4 == 0) goto LAB_0341f0f0;
                    /* try { // try from 0341eed4 to 0351eee3 has its CatchHandler @ 0341eee4 */
    if (*(uint *)(lVar4 + 0x18) <= (uint)uVar1) goto LAB_0341f0f4;
                    /* catch() { ... } // from try @ 0341eea0 with catch @ 0341eee4
                       catch() { ... } // from try @ 0341eed4 with catch @ 0341eee4 */
                    /* try { // try from 0341eee8 to 0351eeeb has its CatchHandler @ 0341eef4 */
    if (*(char *)(lVar4 + (ulong)uVar1 + 0x20) != '\0') {
      if (-1 < (int)uVar5) {
        if (uVar5 != 0) {
          if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_0341f0f0;
          if (*(uint *)(*(long *)(unaff_x22 + 0x38) + 0x18) <=
              (unaff_w25 << (ulong)(unaff_w26 - uVar5 & 0x1f) & 0x3f)) goto LAB_0341f0f4;
          uVar3 = FUN_032a263c();
          if ((uVar3 & 1) == 0) goto joined_r0x0341f0e8;
        }
        uVar3 = FUN_032a263c();
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
          goto joined_r0x0341f0e8;
        }
        unaff_x24 = 0xffffffff;
      }
      uVar5 = (uint)unaff_x24;
      uVar3 = FUN_032a263c();
      if ((uVar3 & 1) != 0) goto LAB_0341ee98;
      goto joined_r0x0341f0a8;
    }
                    /* try { // try from 0341eeec to 0351eef7 has its CatchHandler @ 0341ebf0 */
                    /* catch() { ... } // from try @ 0341ee28 with catch @ 0341eef4
                       catch() { ... } // from try @ 0341eee8 with catch @ 0341eef4 */
    if (uVar1 != 0x2b || (((uint)unaff_x28 ^ 1) & 1) != 0) goto LAB_0341ef20;
    uVar3 = FUN_032a2644();
  } while ((uVar3 & 1) != 0);
LAB_0341f000:
  if (-1 < (int)uVar5) {
joined_r0x0341f0e8:
    if ((unaff_x19 == 0) || (*(char *)(unaff_x19 + 0x30) != '\0')) {
      if ((int)uVar5 < 1) {
        uVar6 = 0;
      }
      else {
        if (*(long *)(unaff_x22 + 0x38) == 0) {
LAB_0341f0f0:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(*(long *)(unaff_x22 + 0x38) + 0x18) <=
            (unaff_w25 << (ulong)(6 - uVar5 & 0x1f) & 0x3f)) {
LAB_0341f0f4:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar3 = FUN_032a263c();
        uVar6 = 0;
        if ((uVar3 & 1) == 0) {
          uVar6 = uVar5;
        }
      }
      uVar3 = FUN_032a263c();
      if ((uVar3 & 1) == 0) {
        FUN_032a26dc();
        uVar5 = uVar6;
      }
      else {
        unaff_w25 = 0;
        uVar5 = 0xffffffff;
      }
    }
  }
joined_r0x0341f0a8:
  if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
    *(uint *)(unaff_x19 + 0x38) = unaff_w25;
    *(uint *)(unaff_x19 + 0x3c) = uVar5;
    uVar2 = FUN_032a272c();
    *(undefined4 *)(unaff_x19 + 0x34) = uVar2;
  }
  return *(undefined4 *)(unaff_x21 + 0x40);
}


