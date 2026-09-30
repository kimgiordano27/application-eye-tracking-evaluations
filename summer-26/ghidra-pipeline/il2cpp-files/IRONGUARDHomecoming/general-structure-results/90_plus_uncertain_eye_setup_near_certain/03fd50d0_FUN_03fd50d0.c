/*
FUNCTION_NAME: FUN_03fd50d0
ENTRY_POINT: 03fd50d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fd5398) */

undefined1  [16]
FUN_03fd50d0(undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
            long *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  uint *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  
                    /* try { // try from 03fd50e0 to 040d5317 has its CatchHandler @ 03fd50e0
                       catch() { ... } // from try @ 03fd50e0 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd5528 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd555c with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd5580 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd563c with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd56f4 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd5764 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd57ac with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd57d0 with catch @ 03fd50e0
                       catch() { ... } // from try @ 03fd5810 with catch @ 03fd50e0 */
  if ((DAT_0483ba6e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04584250);
    thunk_FUN_01efb3a4(PTR_DAT_04584258);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483ba6e = 1;
  }
  if (DAT_04836648 == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
    DAT_04836648 = '\x01';
  }
  if (param_6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar15 = *param_6;
  puVar18 = *(uint **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  auVar19._4_4_ = 0;
  auVar19._0_4_ = *puVar18;
  uVar21 = 0;
  uVar22 = puVar18[1];
  uVar24 = puVar18[2];
  uVar26 = puVar18[3];
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04584250) {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03fd51c4;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238(param_6,*(long *)PTR_DAT_04584250,0);
LAB_03fd51c4:
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar13 = (long *)(*(code *)*puVar12)(param_6,puVar12[1]);
  puVar8 = PTR_DAT_04584258;
  puVar7 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  auVar19._8_8_ = uVar21;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03fd5394 to 040d539b has its CatchHandler @ 03fd553c */
    FUN_01f08a3c();
  }
  uVar17 = (ulong)uVar22;
  uVar9 = (ulong)uVar24;
  uVar10 = (ulong)uVar26;
  bVar11 = false;
LAB_03fd51f4:
  auVar5 = auVar19;
  bVar14 = bVar11;
  uVar27 = uVar10;
  uVar25 = uVar9;
  uVar23 = uVar17;
  uVar21 = auVar5._8_8_;
  lVar15 = *plVar13;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03fd5254;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar7,0);
LAB_03fd5254:
  uVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar17 & 1) != 0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03fd52b0;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar8,0);
LAB_03fd52b0:
    auVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    uVar17 = param_2;
    uVar9 = param_3;
    uVar10 = param_4;
    bVar11 = true;
    if (bVar14) {
      fVar1 = auVar5._0_4_;
      if (auVar19._0_4_ <= auVar5._0_4_) {
        fVar1 = auVar19._0_4_;
      }
      fVar2 = (float)uVar23;
      if ((float)param_2 <= (float)uVar23) {
        fVar2 = (float)param_2;
      }
      fVar3 = (float)uVar25;
      if ((float)param_3 <= (float)uVar25) {
        fVar3 = (float)param_3;
      }
      fVar4 = (float)uVar27;
      if ((float)param_4 <= (float)uVar27) {
        fVar4 = (float)param_4;
      }
      uVar17 = (ulong)(uint)fVar2;
      uVar9 = (ulong)(uint)fVar3;
      uVar10 = (ulong)(uint)fVar4;
      bVar11 = true;
      auVar19 = ZEXT416((uint)fVar1);
    }
    goto LAB_03fd51f4;
  }
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
                    /* try { // try from 03fd5318 to 040d531f has its CatchHandler @ 03fd5748 */
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03fd5350;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar6,0);
                    /* try { // try from 03fd5340 to 040d5343 has its CatchHandler @ 03fd5714 */
LAB_03fd5350:
                    /* try { // try from 03fd5350 to 040d5353 has its CatchHandler @ 03fd5734 */
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  auVar20._8_8_ = uVar21;
  auVar20._0_8_ = auVar5._0_8_;
                    /* try { // try from 03fd5360 to 040d536b has its CatchHandler @ 03fd5738 */
                    /* try { // try from 03fd5380 to 040d5387 has its CatchHandler @ 03fd5564 */
  return auVar20;
}


