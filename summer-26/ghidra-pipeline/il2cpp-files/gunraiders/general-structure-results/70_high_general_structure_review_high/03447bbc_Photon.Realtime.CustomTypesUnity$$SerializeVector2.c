/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 03447bbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


float Photon_Realtime_CustomTypesUnity__SerializeVector2(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  ulong uVar4;
  long unaff_x22;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined1 *)(unaff_x22 + 0x387) = in_w8;
                    /* try { // try from 03447bc8 to 03547bcb has its CatchHandler @ 03447bd0 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03447b48 with catch @ 03447bcc
                       try { // try from 03447bcc to 03547be7 has its CatchHandler @ 03447ad0 */
    thunk_FUN_01c1d1e8();
  }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03447b84 with catch @ 03447bd0
                       catch(type#1 @ 04025298) { ... } // from try @ 03447bc8 with catch @ 03447bd0
                        */
  if (DAT_0453640d == '\0') {
    FUN_01c5d288(PTR_DAT_04232530);
                    /* try { // try from 03447be8 to 03547beb has its CatchHandler @ 03447bf8 */
    DAT_0453640d = '\x01';
  }
  lVar1 = *unaff_x21;
                    /* catch() { ... } // from try @ 03447be8 with catch @ 03447bf8 */
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar1 = *unaff_x21;
  }
                    /* try { // try from 03447c04 to 03547c0f has its CatchHandler @ 03447c24 */
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) != 0) {
                    /* try { // try from 03447c10 to 03547c1b has its CatchHandler @ 03447ad0 */
    uVar2 = FUN_03447d3c();
    if ((uVar2 & 1) == 0) {
      return 3.4028235e+38;
    }
                    /* try { // try from 03447c1c to 03547c23 has its CatchHandler @ 03447c24 */
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03447c04 with catch @ 03447c24
                       catch(type#2 @ 00000000) { ... } // from try @ 03447c1c with catch @ 03447c24
                        */
      thunk_FUN_01c1d1e8();
    }
    if (DAT_0453640d == '\0') {
      FUN_01c5d288(PTR_DAT_04232530);
      DAT_0453640d = '\x01';
    }
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar1 = *unaff_x21;
    }
    if ((*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) != 0) &&
       (lVar1 = FUN_03447dd4(lVar1,unaff_w20), lVar1 != 0)) {
      uVar2 = *(ulong *)(lVar1 + 0x18);
      if (uVar2 == 0) {
        return 3.4028235e+38;
      }
      if ((int)uVar2 < 1) {
        return -3.4028235e+38;
      }
      uVar4 = 0;
      pfVar5 = (float *)(lVar1 + 0x28);
      fVar12 = -3.4028235e+38;
      while( true ) {
        if ((uVar2 & 0xffffffff) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        fVar8 = pfVar5[-1];
        fVar10 = *pfVar5;
        fVar6 = (float)FUN_03447ae8(pfVar5[-2]);
        if ((unaff_x19 == 0) || (fVar9 = fVar8, fVar11 = fVar10, lVar3 = FUN_03d468ac(), lVar3 == 0)
           ) break;
        fVar7 = (float)FUN_03d55c58(lVar3,0);
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        fVar6 = fVar10 * fVar11 + fVar6 * fVar7 + fVar8 * fVar9;
        uVar4 = uVar4 + 1;
        if (fVar6 <= fVar12) {
          fVar6 = fVar12;
        }
        fVar12 = fVar6;
        pfVar5 = pfVar5 + 3;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return fVar12;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


