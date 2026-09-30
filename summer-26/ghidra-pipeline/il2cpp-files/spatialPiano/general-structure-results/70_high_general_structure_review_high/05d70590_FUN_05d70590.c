/*
FUNCTION_NAME: FUN_05d70590
ENTRY_POINT: 05d70590
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d70590(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_34 [4];
  
  puVar1 = Method_System_Net_Sockets_NetworkStream_Close__;
                    /* try { // try from 05d705a8 to 05e705af has its CatchHandler @ 05d708a0 */
  if ((DAT_06bc39c8 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    DAT_06bc39c8 = 1;
  }
  local_34[0] = 0;
  local_40 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar3 = FUN_034dac00(0xe,*(undefined8 *)puVar1);
  FUN_05c5cb48(local_34,param_2,uVar3,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((int)*(uint *)(param_3 + 0x10) < 0) {
    bVar2 = 0;
  }
  else {
    memmove(&local_b0,(void *)(*(long *)(param_3 + 0x20) + (ulong)*(uint *)(param_3 + 0x10) * 0x74),
            0x74);
                    /* try { // try from 05d7064c to 05e70653 has its CatchHandler @ 05d70980 */
    bVar2 = FUN_05d7081c(param_1,param_2,&local_b0);
  }
                    /* try { // try from 05d7067c to 05e70683 has its CatchHandler @ 05d7097c */
  if ((0 < *(int *)(param_3 + 0x14)) &&
     (uVar4 = FUN_05d70c50(param_1,param_2,param_3), (uVar4 & 1) != 0)) {
    bVar6 = 1;
    goto LAB_05d7075c;
  }
  lVar7 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
LAB_05d7074c:
    if (lVar5 != 0) goto LAB_05d70750;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d706a8 to 05e706af has its CatchHandler @ 05d70960 */
    if ((*(char *)(lVar5 + 0x50) != '\0') && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
      uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      uVar9 = uVar4 - 1;
      uVar4 = uVar4 + 3 & 0x1fffffffc;
      puVar8 = (undefined4 *)(lVar7 + 0x2c);
      uVar10 = _DAT_011b46c0;
      uVar11 = _UNK_011b46c8;
      uVar12 = _DAT_011b30e0;
      uVar13 = _UNK_011b30e8;
      do {
                    /* try { // try from 05d706f4 to 05e70707 has its CatchHandler @ 05d7087c */
        if (uVar12 <= uVar9) {
          puVar8[-3] = 0xffffffff;
        }
        if (uVar13 <= uVar9) {
          puVar8[-2] = 0xffffffff;
        }
                    /* try { // try from 05d70714 to 05e70717 has its CatchHandler @ 05d708c0 */
        if (uVar10 <= uVar9) {
          puVar8[-1] = 0xffffffff;
        }
        if (uVar11 <= uVar9) {
                    /* try { // try from 05d70734 to 05e70747 has its CatchHandler @ 05d7086c */
          *puVar8 = 0xffffffff;
        }
        uVar10 = uVar10 + 4;
        uVar11 = uVar11 + 4;
        uVar12 = uVar12 + 4;
        uVar13 = uVar13 + 4;
        uVar4 = uVar4 - 4;
        puVar8 = puVar8 + 4;
      } while (uVar4 != 0);
      goto LAB_05d7074c;
    }
LAB_05d70750:
                    /* try { // try from 05d70750 to 05e70757 has its CatchHandler @ 05d709dc */
    FUN_05d70de8(lVar5,param_2);
  }
                    /* try { // try from 05d70758 to 05e7075f has its CatchHandler @ 05d709cc */
  bVar6 = 0;
LAB_05d7075c:
                    /* try { // try from 05d70760 to 05e70767 has its CatchHandler @ 05d709c8 */
  bVar6 = bVar2 & 1 | bVar6;
  *(byte *)(param_1 + 0x54) = bVar6;
                    /* try { // try from 05d70768 to 05e7076f has its CatchHandler @ 05d709c0 */
  if (param_2 != 0) {
                    /* try { // try from 05d70770 to 05e70777 has its CatchHandler @ 05d709bc */
                    /* try { // try from 05d70780 to 05e70783 has its CatchHandler @ 05d709ac */
    FUN_06116fac(param_2,*(long *)(*(long *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                  + 0xb8) + 0x54,bVar6,0);
                    /* try { // try from 05d7078c to 05e7078f has its CatchHandler @ 05d709a8 */
    FUN_05c5cb50(local_34,0);
                    /* try { // try from 05d70798 to 05e7079b has its CatchHandler @ 05d709a4 */
                    /* try { // try from 05d707a4 to 05e707a7 has its CatchHandler @ 05d709a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d707b0 to 05e707b3 has its CatchHandler @ 05d7099c */
  FUN_02f089c8();
}


