/*
FUNCTION_NAME: FUN_058419ac
ENTRY_POINT: 058419ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058419ac(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  
  if ((DAT_066d2dbf & 1) == 0) {
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    DAT_066d2dbf = 1;
  }
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_148 = 0;
  local_150 = 0;
  if (*(long *)(param_2 + 0x48) != 0) {
    uVar20 = FUN_04495d5c(*(long *)(param_2 + 0x48),param_3,&local_150,
                          *(undefined8 *)
                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    uVar19 = DAT_010318a0;
    if ((uVar20 & 1) == 0) {
      iVar11 = *(int *)(param_2 + 0x30);
      if (iVar11 == 0) {
        iVar23 = 0;
        iVar21 = 0;
        uVar22 = 0;
      }
      else {
        iVar21 = *(int *)(param_2 + 0x34);
        iVar23 = 8;
        uVar22 = (uint)(iVar21 != 0);
      }
      if (*(long *)(param_2 + 0x48) == 0) goto LAB_05841c04;
      iVar5 = *(int *)(param_2 + 0x18);
      iVar8 = *(int *)(param_2 + 0x1c);
      iVar17 = (iVar5 + 0x20) * param_3;
      iVar6 = *(int *)(param_2 + 0x20);
      iVar9 = *(int *)(param_2 + 0x24);
      uStack_ac = 8;
      iVar7 = *(int *)(param_2 + 0x28);
      iVar10 = *(int *)(param_2 + 0x2c);
      iVar1 = iVar8 * param_3 + iVar17;
      iVar2 = iVar1 + iVar8 * param_3;
      iVar13 = iVar2 + iVar6 * param_3;
      iVar14 = iVar13 + iVar10 * param_3;
      iVar15 = iVar14 + iVar11 * param_3;
      uStack_a4 = 4;
      iVar18 = iVar7 * param_3;
      iVar16 = iVar15 + *(int *)(param_2 + 0x34) * param_3;
      iVar3 = iVar16 + iVar18;
      iVar4 = iVar3 + iVar18;
      iVar12 = (uint)(iVar10 != 0) << 2;
      local_7c = DAT_010318a0;
      local_74 = 0x800;
      local_e0 = param_3 << 4;
      iStack_dc = param_3 << 5;
      local_d8 = iVar17;
      iStack_d4 = iVar1;
      local_d0 = iVar2;
      iStack_cc = iVar13;
      local_c8 = iVar14;
      iStack_c4 = iVar15;
      local_c0 = iVar16;
      iStack_bc = iVar3;
      local_b8 = iVar4;
      iStack_b4 = iVar4 + iVar18;
      local_b0 = iVar5;
      local_a8 = iVar8;
      local_a0 = iVar6;
      iStack_9c = iVar9;
      local_98 = iVar10;
      iStack_94 = iVar12;
      local_90 = iVar11;
      local_8c = iVar23;
      local_88 = iVar21;
      local_84 = uVar22;
      local_80 = iVar7;
      FUN_044940c8(*(long *)(param_2 + 0x48),param_3,&local_e0,
                   *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
      param_1[4] = iVar2;
      param_1[5] = iVar13;
      param_1[6] = iVar14;
      param_1[7] = iVar15;
      *param_1 = param_3 << 4;
      param_1[1] = param_3 << 5;
      param_1[8] = iVar16;
      param_1[9] = iVar3;
      param_1[2] = iVar17;
      param_1[3] = iVar1;
      *(undefined8 *)(param_1 + 0x19) = uVar19;
      param_1[10] = iVar4;
      param_1[0xb] = iVar4 + iVar18;
      param_1[0xc] = iVar5;
      param_1[0xd] = 8;
      param_1[0xe] = iVar8;
      param_1[0xf] = 4;
      param_1[0x10] = iVar6;
      param_1[0x11] = iVar9;
      param_1[0x12] = iVar10;
      param_1[0x13] = iVar12;
      param_1[0x14] = iVar11;
      param_1[0x15] = iVar23;
      param_1[0x18] = iVar7;
      param_1[0x16] = iVar21;
      param_1[0x17] = uVar22;
      param_1[0x1b] = 0x800;
    }
    else {
      memcpy(param_1,&local_150,0x70);
    }
    return;
  }
LAB_05841c04:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


