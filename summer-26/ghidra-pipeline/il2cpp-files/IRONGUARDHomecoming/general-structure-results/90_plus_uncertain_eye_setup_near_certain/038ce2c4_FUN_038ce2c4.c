/*
FUNCTION_NAME: FUN_038ce2c4
ENTRY_POINT: 038ce2c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038ce554) */

void FUN_038ce2c4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
                    /* try { // try from 038ce2cc to 039ce2e3 has its CatchHandler @ 038ce488 */
                    /* try { // try from 038ce2ec to 039ce2ef has its CatchHandler @ 038ce484 */
                    /* try { // try from 038ce2f0 to 039ce303 has its CatchHandler @ 038ce480 */
  if ((DAT_0483806e & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483806e = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)FUN_03825b0c(param_2,0x226,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  FUN_038968d0(0);
  lVar5 = FUN_04070398(param_1,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0407cee0(&local_b0,lVar5,0);
  uStack_e8 = uStack_a8;
  local_f0 = local_b0;
  uStack_d8 = uStack_98;
  uStack_e0 = uStack_a0;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  if (DAT_04837e2a == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837e2a = '\x01';
  }
  lVar5 = *(long *)puVar3;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  uStack_98 = uStack_d8;
  uStack_a0 = uStack_e0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar5 + 0xc0) = uStack_78;
  *(undefined8 *)(lVar5 + 0xb8) = uStack_80;
  *(undefined8 *)(lVar5 + 0xb0) = uStack_88;
  *(undefined8 *)(lVar5 + 0xa8) = local_90;
  *(undefined8 *)(lVar5 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar5 + 0x98) = uStack_a0;
  *(undefined8 *)(lVar5 + 0x90) = uStack_a8;
  *(ulong *)(lVar5 + 0x88) = local_b0;
  iVar1 = *(int *)(param_1 + 0x24);
  if (0 < iVar1) {
    iVar9 = 0;
    uVar7 = local_b0;
    do {
      uVar12 = 0x3f800000;
      uVar14 = 0x3f800000;
      uVar10 = FUN_04062328((float)iVar9 / (float)iVar1,0x3f800000,0x3f800000,1,0);
      uVar13 = uVar12;
      uVar11 = FUN_038ce61c((float)iVar9 / (float)iVar1);
      uVar15 = (ulong)*(uint *)(param_1 + 0x28);
      FUN_038af6ac(&local_130,uVar10,uVar12,uVar14,uVar7,0);
      uStack_a8 = uStack_128;
      local_b0 = local_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
      uStack_88 = uStack_108;
      local_90 = local_110;
      uStack_78 = uStack_f8;
      uStack_80 = uStack_100;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uStack_168 = uStack_a8;
      local_170 = local_b0;
      uStack_158 = uStack_98;
      uStack_160 = uStack_a0;
      uStack_148 = uStack_88;
      local_150 = local_90;
      uStack_138 = uStack_78;
      uStack_140 = uStack_80;
      FUN_038ce99c(uVar11,uVar13,0,&local_170,0);
      iVar1 = *(int *)(param_1 + 0x24);
      iVar9 = iVar9 + 1;
      uVar7 = uVar15;
    } while (iVar9 < iVar1);
  }
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_038ce51c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_038ce51c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}


