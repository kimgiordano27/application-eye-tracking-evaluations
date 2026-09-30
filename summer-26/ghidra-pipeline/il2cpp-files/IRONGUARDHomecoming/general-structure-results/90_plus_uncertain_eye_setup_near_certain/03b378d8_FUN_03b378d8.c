/*
FUNCTION_NAME: FUN_03b378d8
ENTRY_POINT: 03b378d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b37d04) */

void FUN_03b378d8(double param_1,long param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined8 param_6)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  int *piVar17;
  bool bVar18;
  undefined4 uVar19;
  long local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((DAT_04839420 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04839420 = 1;
  }
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_98 = 0;
  local_a0 = 0.0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  dStack_a8 = 0.0;
  local_b0 = 0;
  dStack_d8 = 0.0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0.0;
  local_100 = 0;
  uStack_f8 = 0;
  plVar6 = (long *)FUN_03b2468c(0);
  *(undefined8 *)(param_2 + 200) = param_6;
  *(undefined1 *)(param_2 + 0xc2) = 1;
  lVar8 = *(long *)(param_2 + 0x68) + (long)param_5 * 0x20;
  uVar1 = *(ushort *)(lVar8 + 6);
  uVar14 = (uint)uVar1;
                    /* try { // try from 03b37990 to 03c37997 has its CatchHandler @ 03b37f34 */
  if (uVar14 == 0xffff) {
    uVar14 = 0xffffffff;
  }
  uStack_c8 = 0;
  local_d0 = 0.0;
  uStack_b8 = 0;
  local_c0 = 0;
  dStack_d8 = 0.0;
  local_e0 = 0;
                    /* try { // try from 03b3799c to 03c379a7 has its CatchHandler @ 03b37f30 */
  FUN_03b366b0(&local_e0,param_3);
                    /* try { // try from 03b379ac to 03c379b7 has its CatchHandler @ 03b37f2c */
  FUN_03b36524(&local_e0,param_4);
  FUN_03b36710(&local_e0,param_5);
                    /* try { // try from 03b379c4 to 03c379cf has its CatchHandler @ 03b37f28 */
  uStack_c8._0_4_ = CONCAT22(0xffff,(undefined2)uStack_c8);
  puVar10 = &local_e0;
  puVar3 = (undefined8 *)0x0;
  if (uVar1 != 0xffff) {
    puVar10 = (undefined8 *)0x0;
    puVar3 = &local_e0;
  }
  dStack_d8 = param_1;
  local_d0 = param_1;
                    /* try { // try from 03b379dc to 03c379e3 has its CatchHandler @ 03b37f1c */
  if (uVar1 == 0xffff) {
    bVar11 = 0;
    bVar16 = *(byte *)((long)puVar10 + 1) & 0xfd;
    *(byte *)((long)puVar10 + 1) = bVar16;
  }
  else {
                    /* try { // try from 03b379e4 to 03c379ef has its CatchHandler @ 03b37f18 */
    lVar15 = *(long *)(param_2 + 0x60) + (long)(int)(uVar14 * 0x30);
                    /* try { // try from 03b379f0 to 03c379fb has its CatchHandler @ 03b37f14 */
    bVar16 = *(byte *)((long)puVar3 + 1) & 0xfc |
             *(byte *)((long)puVar3 + 1) & 1 | (*(byte *)(lVar15 + 1) >> 1 & 1) << 1;
                    /* try { // try from 03b37a00 to 03c37a0b has its CatchHandler @ 03b37f10 */
    *(byte *)((long)puVar3 + 1) = bVar16;
    bVar11 = *(byte *)(lVar15 + 1) & 0x20;
  }
  local_e0._0_2_ = CONCAT11(bVar16 & 0xdf | bVar11,(undefined1)local_e0);
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_88 = uStack_b8;
  uStack_90 = local_c0;
  dStack_a8 = dStack_d8;
  local_b0 = local_e0;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xef;
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar15 = *(long *)(lVar15 + (long)(int)param_4 * 8 + 0x20);
  uVar7 = FUN_03b5e688(lVar15,0);
  uVar19 = 0;
  if ((uVar7 & 1) == 0) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar19 = thunk_FUN_03b5d0dc(lVar15,0);
  }
  uStack_98 = CONCAT44(uVar19,(undefined4)uStack_98);
  local_b0 = local_b0 | 0x100;
  *(undefined4 *)(*(long *)(param_2 + 0x78) + (long)(int)param_4 * 4) = uVar19;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = FUN_03b5e3c0(uVar19,lVar15,0);
  if (((uVar7 & 1) != 0) &&
     ((*(double *)(lVar8 + 0x10) == 0.0 || (dStack_a8 < *(double *)(lVar8 + 0x10))))) {
    *(double *)(lVar8 + 0x10) = dStack_a8;
  }
  if ((*(byte *)(lVar8 + 4) >> 3 & 1) == 0) {
LAB_03b37be0:
    bVar18 = false;
  }
  else {
    lVar15 = *(long *)(param_2 + 0x68);
    uVar12 = (uint)*(ushort *)(lVar8 + 8);
    if (uVar12 == 0xffff) {
      uVar12 = 0xffffffff;
    }
    lVar8 = FUN_03bf3e58(param_6,0);
    lVar15 = lVar15 + (long)(int)uVar12 * 0x20;
    if (lVar8 != 0) {
      iVar5 = FUN_03bf2ebc(lVar8,0);
      if ((iVar5 != 0) && (*(int *)(lVar15 + 0x18) == iVar5)) goto LAB_03b37c64;
      *(int *)(lVar15 + 0x18) = iVar5;
    }
    uStack_f8 = 0;
    uVar13 = (uint)*(ushort *)
                    ((-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5) +
                     *(long *)(param_2 + 0x68) + 8);
    if (uVar13 == 0xffff) {
      uVar13 = 0xffffffff;
    }
    local_100 = param_2;
    thunk_FUN_01f51358(&local_100,param_2);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar12);
    uStack_e8 = uStack_f8;
    local_f0 = local_100;
    lVar8 = *(long *)(param_2 + 0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar9 = *(long **)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar19 = (**(code **)(*plVar9 + 0x1b8))(plVar9,&local_f0,*(undefined8 *)(*plVar9 + 0x1c0));
    uStack_98 = CONCAT44(uVar19,(undefined4)uStack_98);
    local_b0 = local_b0 | 0x100;
    *(undefined4 *)(*(long *)(param_2 + 0x80) + (long)(int)uVar13 * 4) = uVar19;
    if (*(char *)(lVar15 + 1) == '\0') goto LAB_03b37be0;
    uVar12 = (uint)*(ushort *)(lVar15 + 0xc);
    if (uVar12 == 0xffff) {
      uVar12 = 0xffffffff;
    }
    FUN_03b3813c(param_2,&local_b0,uVar12);
    bVar18 = true;
  }
  uVar7 = FUN_03b382ec(param_2,&local_b0,uVar14);
  lVar8 = *(long *)(param_2 + 0x68) + (uStack_98 & 0xffff) * 0x20;
  if ((uVar7 & 1) == 0) {
    Unity_Mathematics_math__length(param_2,&local_b0,uVar14,lVar8);
  }
  if ((*(char *)(lVar8 + 1) == '\0') || ((*(byte *)(lVar8 + 4) >> 3 & 1) != 0)) {
    if (!bVar18 && (uVar7 & 1) == 0) {
      FUN_03b388b4(param_2,&local_b0,uVar14);
    }
  }
  else {
    uVar14 = (uint)*(ushort *)(lVar8 + 0xc);
    if (uVar14 == 0xffff) {
      uVar14 = 0xffffffff;
    }
    FUN_03b3813c(param_2,&local_b0,uVar14);
  }
LAB_03b37c64:
  *(undefined1 *)(param_2 + 0xc2) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03b37cc0;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03b37cc0:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


