/*
FUNCTION_NAME: FUN_015d38f8
ENTRY_POINT: 015d38f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x015d3e14) */
/* WARNING: Removing unreachable block (ram,0x015d3e10) */
/* WARNING: Removing unreachable block (ram,0x015d3e6c) */

long FUN_015d38f8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  long local_68;
  long local_58;
  
  if ((DAT_03777ef8 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<KeyValuePair<string,_object>>__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
                    /* try { // try from 015d394c to 016d394f has its CatchHandler @ 015d3d40 */
    DAT_03777ef8 = 1;
  }
  local_58 = 0;
  local_68 = 0;
                    /* try { // try from 015d3960 to 016d3967 has its CatchHandler @ 015d3d3c */
  lVar9 = FUN_015d3868(param_1,*(undefined8 *)(param_1 + 0x30));
  lVar10 = FUN_015d3868(param_1,*(undefined8 *)(param_1 + 0x38));
                    /* try { // try from 015d397c to 016d3983 has its CatchHandler @ 015d3d4c */
  lVar11 = FUN_015d3868(param_1,*(undefined8 *)(param_1 + 0x28));
  lVar21 = *(long *)(param_1 + 0x48);
  if (lVar21 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar17 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar20 = thunk_FUN_00d48444(
                                 Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ZBin>__
                                 );
      FUN_017713a8(uVar17,uVar20,0);
      uVar20 = thunk_FUN_00d48444(Method_Sirenix_Serialization_BinaryDataReader_ReadUInt32__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar17,uVar20);
    }
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<KeyValuePair<string,_object>>__
                                        );
    puVar8 = StringLiteral_10310;
    if (plVar12 == (long *)0x0) goto LAB_015d3de8;
                    /* try { // try from 015d3a18 to 016d3a37 has its CatchHandler @ 015d3d30 */
    FUN_015d01e8(plVar12,uVar17,uVar20);
    lVar21 = FUN_015d09a8(plVar12);
    local_58 = lVar21;
    local_68 = FUN_015d0ce8(plVar12);
                    /* try { // try from 015d3a44 to 016d3a6f has its CatchHandler @ 015d3d34 */
    lVar16 = *plVar12;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_015d3df8;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_015d3df8:
    (*(code *)*puVar13)(plVar12,puVar13[1]);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)(param_1 + 0x30);
    uVar20 = *(undefined8 *)(param_1 + 0x38);
    uVar24 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 015d39ac to 016d39af has its CatchHandler @ 015d3d38 */
    if (*(int *)(*(long *)OVRPlugin_TrackingConfidence___TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* try { // try from 015d39c4 to 016d39cf has its CatchHandler @ 015d3d28 */
    FUN_015d2068(lVar21,uVar1,uVar20,uVar24,uVar17,&local_58,&local_68);
    lVar21 = local_58;
  }
  lVar16 = local_68;
  if (lVar21 == 0) {
    iVar23 = 0;
  }
  else {
    iVar23 = *(int *)(lVar21 + 0x18);
                    /* try { // try from 015d39e0 to 016d39f7 has its CatchHandler @ 015d3d24 */
  }
                    /* try { // try from 015d3a8c to 016d3a8f has its CatchHandler @ 015d3d18 */
  if (local_68 == 0) {
    iVar22 = 0;
  }
  else {
    iVar22 = *(int *)(local_68 + 0x18);
  }
                    /* try { // try from 015d3ac0 to 016d3ac7 has its CatchHandler @ 015d3d20 */
  if ((((lVar9 != 0) && (lVar10 != 0)) && (lVar11 != 0)) &&
     (lVar14 = FUN_015d2558(param_1,iVar23 + iVar22 + *(int *)(lVar9 + 0x18) +
                                    *(int *)(lVar10 + 0x18) + *(int *)(lVar11 + 0x18) + 0x40),
     lVar14 != 0)) {
    uVar17 = *(undefined8 *)(lVar14 + 0x18);
    uVar15 = (uint)uVar17;
    if (0xc < uVar15) {
      iVar2 = *(int *)(lVar9 + 0x18);
      iVar3 = *(int *)(lVar10 + 0x18);
      iVar4 = *(int *)(lVar11 + 0x18);
      *(char *)(lVar14 + 0x2c) = (char)iVar23;
      if (((uVar15 != 0xd) && (*(undefined1 *)(lVar14 + 0x2d) = 0, 0xe < uVar15)) &&
         ((*(char *)(lVar14 + 0x2e) = (char)iVar23, uVar15 != 0xf &&
          (*(undefined1 *)(lVar14 + 0x2f) = 0, 0x10 < uVar15)))) {
        iVar2 = iVar2 + iVar3 + iVar4 + 0x40;
        *(char *)(lVar14 + 0x30) = (char)iVar2;
        if ((uVar15 != 0x11) && (*(char *)(lVar14 + 0x31) = (char)((uint)iVar2 >> 8), 0x14 < uVar15)
           ) {
          *(char *)(lVar14 + 0x34) = (char)iVar22;
          if (uVar15 != 0x15) {
            uVar6 = (undefined1)((uint)iVar22 >> 8);
            *(undefined1 *)(lVar14 + 0x35) = uVar6;
            if (((0x16 < uVar15) && (*(char *)(lVar14 + 0x36) = (char)iVar22, uVar15 != 0x17)) &&
               (*(undefined1 *)(lVar14 + 0x37) = uVar6, 0x18 < uVar15)) {
              iVar23 = (short)iVar2 + iVar23;
              *(char *)(lVar14 + 0x38) = (char)iVar23;
              if ((uVar15 != 0x19) &&
                 (*(char *)(lVar14 + 0x39) = (char)((uint)iVar23 >> 8), 0x1c < uVar15)) {
                uVar1 = *(undefined4 *)(lVar9 + 0x18);
                *(char *)(lVar14 + 0x3c) = (char)uVar1;
                if (uVar15 != 0x1d) {
                  uVar6 = (undefined1)((uint)uVar1 >> 8);
                  *(undefined1 *)(lVar14 + 0x3d) = uVar6;
                  if (((0x1e < uVar15) && (*(char *)(lVar14 + 0x3e) = (char)uVar1, uVar15 != 0x1f))
                     && ((*(undefined1 *)(lVar14 + 0x3f) = uVar6, 0x20 < uVar15 &&
                         ((*(undefined1 *)(lVar14 + 0x40) = 0x40, uVar15 != 0x21 &&
                          (*(undefined1 *)(lVar14 + 0x41) = 0, 0x24 < uVar15)))))) {
                    uVar5 = *(undefined4 *)(lVar10 + 0x18);
                    *(char *)(lVar14 + 0x44) = (char)uVar5;
                    if (uVar15 != 0x25) {
                      uVar6 = (undefined1)((uint)uVar5 >> 8);
                      *(undefined1 *)(lVar14 + 0x45) = uVar6;
                      if (((0x26 < uVar15) &&
                          (*(char *)(lVar14 + 0x46) = (char)uVar5, uVar15 != 0x27)) &&
                         (*(undefined1 *)(lVar14 + 0x47) = uVar6, 0x28 < uVar15)) {
                        iVar22 = (short)uVar1 + 0x40;
                        *(char *)(lVar14 + 0x48) = (char)iVar22;
                        if ((uVar15 != 0x29) &&
                           (*(char *)(lVar14 + 0x49) = (char)((uint)iVar22 >> 8), 0x2c < uVar15)) {
                          uVar20 = *(undefined8 *)(lVar11 + 0x18);
                          uVar6 = (undefined1)uVar20;
                          *(undefined1 *)(lVar14 + 0x4c) = uVar6;
                          if (uVar15 != 0x2d) {
                            uVar7 = (undefined1)((ulong)uVar20 >> 8);
                            *(undefined1 *)(lVar14 + 0x4d) = uVar7;
                            if (((0x2e < uVar15) &&
                                (*(undefined1 *)(lVar14 + 0x4e) = uVar6, uVar15 != 0x2f)) &&
                               (*(undefined1 *)(lVar14 + 0x4f) = uVar7, 0x30 < uVar15)) {
                              iVar3 = (int)(short)uVar5 + (int)(short)iVar22;
                              *(char *)(lVar14 + 0x50) = (char)iVar3;
                              if ((((uVar15 != 0x31) &&
                                   (*(char *)(lVar14 + 0x51) = (char)((uint)iVar3 >> 8),
                                   0x38 < uVar15)) &&
                                  (*(char *)(lVar14 + 0x58) = (char)uVar17, uVar15 != 0x39)) &&
                                 (*(char *)(lVar14 + 0x59) = (char)((ulong)uVar17 >> 8),
                                 0x3c < uVar15)) {
                                uVar1 = *(undefined4 *)(param_1 + 0x14);
                                *(char *)(lVar14 + 0x5c) = (char)uVar1;
                                if (((uVar15 != 0x3d) &&
                                    (*(char *)(lVar14 + 0x5d) = (char)((uint)uVar1 >> 8),
                                    0x3e < uVar15)) &&
                                   (*(char *)(lVar14 + 0x5e) = (char)((uint)uVar1 >> 0x10),
                                   uVar15 != 0x3f)) {
                                  *(char *)(lVar14 + 0x5f) = (char)((uint)uVar1 >> 0x18);
                                  FUN_0179eccc(lVar9,0,lVar14,0x40,*(undefined4 *)(lVar9 + 0x18),0);
                                  FUN_0179eccc(lVar10,0,lVar14,(int)(short)iVar22,
                                               *(undefined4 *)(lVar10 + 0x18),0);
                                  FUN_0179eccc(lVar11,0,lVar14,(int)(short)iVar3,
                                               *(undefined4 *)(lVar11 + 0x18),0);
                                  if (lVar21 != 0) {
                                    FUN_0179eccc(lVar21,0,lVar14,(int)(short)iVar2,
                                                 *(undefined4 *)(lVar21 + 0x18),0);
                                    FUN_0179519c(lVar21,0,*(undefined4 *)(lVar21 + 0x18),0);
                                  }
                                  if (lVar16 != 0) {
                                    FUN_0179eccc(lVar16,0,lVar14,(int)(short)iVar23,
                                                 *(undefined4 *)(lVar16 + 0x18),0);
                                    FUN_0179519c(lVar16,0,*(undefined4 *)(lVar16 + 0x18),0);
                                    return lVar14;
                                  }
                                  goto LAB_015d3de8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_015d3de8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


