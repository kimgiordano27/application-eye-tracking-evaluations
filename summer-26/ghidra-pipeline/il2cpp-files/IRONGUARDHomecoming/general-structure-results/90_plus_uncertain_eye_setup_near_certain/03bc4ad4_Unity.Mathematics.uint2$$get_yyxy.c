/*
FUNCTION_NAME: Unity.Mathematics.uint2$$get_yyxy
ENTRY_POINT: 03bc4ad4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bc4dd8) */

void Unity_Mathematics_uint2__get_yyxy(long param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_58 [2];
  
  if ((DAT_048398fc & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13433);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11898);
    thunk_FUN_01efb3a4(StringLiteral_13400);
    thunk_FUN_01efb3a4(StringLiteral_11579);
    thunk_FUN_01efb3a4(StringLiteral_11600);
    thunk_FUN_01efb3a4(StringLiteral_12036);
    DAT_048398fc = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  plVar5 = (long *)FUN_03b2468c(0);
  local_58[0] = *(undefined4 *)(param_1 + 0xa0);
  local_70 = FUN_03bc4448(local_58);
  puVar4 = StringLiteral_13433;
  puVar3 = StringLiteral_12036;
  iVar9 = local_70._12_4_;
  puVar8 = (undefined8 *)StringLiteral_11579;
  while (iVar9 = iVar9 + -1, StringLiteral_11579 = (undefined *)puVar8, -1 < iVar9) {
    local_58[0] = *(undefined4 *)(param_1 + 0xa0);
    auVar13 = FUN_03bc4448(local_58);
    local_70 = auVar13;
    uVar6 = FUN_02617b44(local_70,iVar9,*(undefined8 *)puVar3);
    uVar7 = FUN_02271038(param_3,uVar6,*(undefined8 *)puVar4);
    puVar8 = (undefined8 *)StringLiteral_11579;
    if ((uVar7 & 1) == 0) {
      local_78[0] = *(undefined4 *)(param_1 + 0xa0);
      local_58[0] = local_78[0];
      auVar13 = FUN_03bc4448(local_78);
      local_70 = auVar13;
      uVar6 = FUN_02617b44(local_70,iVar9,*(undefined8 *)puVar3);
      FUN_03bc8fb8(local_58,uVar6);
      puVar8 = (undefined8 *)StringLiteral_11579;
    }
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(param_3 + 0x18)) {
    uVar7 = 0;
    uVar10 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      local_58[0] = *(undefined4 *)(param_1 + 0xa0);
      uVar6 = *(undefined8 *)(param_3 + 0x20 + uVar7 * 8);
      auVar13 = FUN_03bc4448(local_58);
      uVar10 = FUN_023c0864(auVar13._0_8_,auVar13._8_8_,uVar6,*puVar8);
      if ((uVar10 & 1) == 0) {
        FUN_03bc6388(uVar6,*(undefined4 *)(param_1 + 0xa0),0);
      }
      uVar10 = (ulong)*(uint *)(param_3 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(param_3 + 0x18));
  }
  local_58[0] = *(undefined4 *)(param_1 + 0xa0);
  FUN_03bc3734(&local_e0,local_58);
  uStack_98 = uStack_d8;
  local_a0 = local_e0;
  uVar6 = local_a0;
  uStack_88 = uStack_c8;
  uStack_90 = local_d0;
  local_a0._0_1_ = (char)local_e0;
  bVar1 = (char)local_a0 != '\0';
  local_a0 = uVar6;
  if (bVar1) {
    local_58[0] = *(undefined4 *)(param_1 + 0xa0);
    FUN_03bc3734(&local_e0,local_58);
    uStack_98 = uStack_d8;
    local_a0 = local_e0;
    uStack_88 = uStack_c8;
    uStack_90 = local_d0;
    FUN_0332df58(&local_e0,&local_a0,*(undefined8 *)StringLiteral_13400);
    uStack_b8 = uStack_d8;
    local_c0 = local_e0;
    local_b0 = local_d0;
    local_f0 = param_2[2];
    uStack_f8 = param_2[1];
    local_100 = *param_2;
    uVar7 = FUN_03b55e20(&local_c0,&local_100,0);
    if ((uVar7 & 1) != 0) goto LAB_03bc4d50;
  }
  local_58[0] = *(undefined4 *)(param_1 + 0xa0);
  local_110 = param_2[2];
  uStack_118 = param_2[1];
  local_120 = *param_2;
  Unity_Mathematics_uint2x3__op_Equality(local_58,&local_120);
LAB_03bc4d50:
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03bc4da4;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03bc4da4:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
  }
  return;
}


