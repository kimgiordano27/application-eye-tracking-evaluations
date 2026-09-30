/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03adf1e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


float System_Array__BinarySearch<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint *unaff_x20;
  byte *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  ulong unaff_x28;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  
  do {
    fVar7 = unaff_s8;
    *unaff_x20 = (uint)unaff_x25;
    do {
      if ((unaff_x21 != (byte *)0x0) && (unaff_x25 == *unaff_x20)) {
        lVar5 = *(long *)(unaff_x23 + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar5 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        plVar4 = *(long **)(lVar5 + unaff_x25 * 8 + 0x20);
        if (plVar4 != (long *)0x0) {
          lVar5 = *unaff_x26;
          lVar6 = *plVar4;
                    /* try { // try from 03adf234 to 03bdf243 has its CatchHandler @ 03adf274 */
          if ((*(byte *)(lVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)
             ) {
                    /* try { // try from 03adf24c to 03bdf253 has its CatchHandler @ 03adf270 */
                    /* try { // try from 03adf254 to 03bdf28f has its CatchHandler @ 03adf1d0 */
            bVar1 = *(byte *)(*(long *)PTR_DAT_070f1f00 + 0x130);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03adf24c with catch @ 03adf270
                        */
            if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_070f1f00)) goto LAB_03adf298;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03adf234 with catch @ 03adf274
                        */
            bVar1 = **(float **)(lVar5 + 0xb8) <= unaff_s9;
          }
          else {
            bVar1 = FUN_064e12a4(plVar4,0);
          }
                    /* try { // try from 03adf290 to 03bdf293 has its CatchHandler @ 03adf2ac */
                    /* try { // try from 03adf294 to 03bdf2af has its CatchHandler @ 03adf1d0 */
          *unaff_x21 = bVar1 & 1;
        }
      }
LAB_03adf298:
      unaff_x28 = unaff_x28 - 1;
      unaff_x25 = unaff_x25 + 1;
      if (unaff_x28 == 0) {
        do {
          do {
                    /* try { // try from 03adf2b8 to 03bdf2c3 has its CatchHandler @ 03adf1d0 */
            unaff_x24 = unaff_x24 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03adf2b0 with catch @ 03adf2c0
                        */
            iVar2 = FUN_064d4834();
                    /* try { // try from 03adf2c4 to 03bdf327 has its CatchHandler @ 03adf2c4
                       catch() { ... } // from try @ 03adf2c4 with catch @ 03adf2c4
                       catch() { ... } // from try @ 03adf348 with catch @ 03adf2c4
                       catch() { ... } // from try @ 03adf388 with catch @ 03adf2c4
                       catch() { ... } // from try @ 03adf3ac with catch @ 03adf2c4 */
            if (iVar2 <= unaff_x24) {
              return fVar7;
            }
            lVar5 = FUN_064d485c();
            uVar3 = FUN_064d4bf4(lVar5 + unaff_x24 * 0x20,0);
            if ((uVar3 & 1) == 0) {
              return fVar7;
            }
            lVar6 = unaff_x24 * 0x20;
            lVar5 = FUN_064d485c();
          } while (*(byte *)(lVar6 + lVar5 + 5) != unaff_w22);
          lVar5 = FUN_064d485c();
          unaff_x28 = (ulong)*(byte *)(lVar6 + lVar5);
          lVar5 = FUN_064d485c();
        } while (unaff_x28 == 0);
        unaff_x25 = (ulong)*(ushort *)(lVar6 + lVar5 + 0xe);
      }
      unaff_s9 = (float)FUN_03ae0b60();
      iVar2 = System_Collections_Generic_Dictionary<int,_GraphicsFence>__System_Collections_ICollection_get_SyncRoot
                        (unaff_s9,fVar7,&stack0x0000000c,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
      unaff_s8 = unaff_s9;
    } while (iVar2 < 1);
  } while( true );
}


