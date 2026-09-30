/*
FUNCTION_NAME: FUN_038ccae4
ENTRY_POINT: 038ccae4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038cd32c) */
/* WARNING: Removing unreachable block (ram,0x038cd338) */

void FUN_038ccae4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_2b8;
  float fStack_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if ((DAT_04838067 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2292);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Write__);
    DAT_04838067 = 1;
  }
  local_e8[0] = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_03825b0c(param_2,0x226,0);
  lVar6 = FUN_04070398(param_1,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0407cee0(&local_e0,lVar6,0);
  uStack_128 = uStack_d8;
  local_130 = local_e0;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  local_110 = local_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uStack_168 = uStack_128;
  local_170 = local_130;
  uStack_158 = uStack_118;
  uStack_160 = uStack_120;
  uStack_148 = uStack_108;
  local_150 = local_110;
  uStack_138 = uStack_f8;
  uStack_140 = uStack_100;
  if (DAT_04837e2a == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837e2a = '\x01';
  }
  lVar6 = *(long *)puVar3;
  uStack_d8 = uStack_168;
  local_e0 = local_170;
  uStack_c8 = uStack_158;
  uStack_d0 = uStack_160;
  uStack_b8 = uStack_148;
  local_c0 = local_150;
  uStack_a8 = uStack_138;
  uStack_b0 = uStack_140;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0xc0) = uStack_a8;
  *(undefined8 *)(lVar6 + 0xb8) = uStack_b0;
  *(undefined8 *)(lVar6 + 0xb0) = uStack_b8;
  *(undefined8 *)(lVar6 + 0xa8) = local_c0;
  *(undefined8 *)(lVar6 + 0xa0) = uStack_c8;
  *(undefined8 *)(lVar6 + 0x98) = uStack_d0;
  *(undefined8 *)(lVar6 + 0x90) = uStack_d8;
  *(undefined8 *)(lVar6 + 0x88) = local_e0;
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  fVar20 = *(float *)(param_1 + 0x30);
  fVar21 = *(float *)(param_1 + 0x34);
  puVar9 = *(undefined4 **)
            (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
  uVar14 = *puVar9;
  uVar17 = puVar9[1];
  uVar19 = puVar9[2];
  FUN_038af6ac(&local_e0,0,0,0,0x3f800000,0);
  uStack_1a8 = uStack_d8;
  local_1b0 = local_e0;
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_188 = uStack_b8;
  local_190 = local_c0;
  uStack_178 = uStack_a8;
  uStack_180 = uStack_b0;
  FUN_038d0078(uVar14,uVar17,uVar19,0x3f800000,fVar20 + fVar21,&local_1b0,0);
  if (DAT_04838086 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838086 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x1ac) = 0;
  puVar4 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if (DAT_04838087 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar6 = *(long *)puVar4;
    DAT_04838087 = '\x01';
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x1a8) = 0;
  FUN_038d0218(*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48),1,0);
  fVar21 = *(float *)(param_1 + 0x30);
  fVar20 = *(float *)(param_1 + 0x38);
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  uVar19 = *puVar9;
  uVar17 = puVar9[1];
  uVar14 = puVar9[2];
  if (DAT_0483388a == '\0') {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    DAT_0483388a = '\x01';
  }
  fVar20 = ((fVar21 * -0.5 + 1.0) - fVar20) / DAT_00c92860;
  fVar21 = fVar20 + fVar20 + *(float *)(param_1 + 0x34);
  FUN_038d0390(uVar19,uVar17,uVar14,
               *(float *)(*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__
                                   + 0xb8) + 8) * fVar21,
               *(float *)(*(long *)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__
                                   + 0xb8) + 0xc) * fVar21,0);
  local_e8[0] = FUN_03896d2c(0);
  puVar1 = StringLiteral_2292;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  if (DAT_0483808a == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_0483808a = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(ulong *)(lVar6 + 0x88) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x88) >> 0x20) * fVar20,
                (float)*(undefined8 *)(lVar6 + 0x88) * fVar20);
  *(float *)(lVar6 + 0x90) = fVar20 * *(float *)(lVar6 + 0x90);
  *(ulong *)(lVar6 + 0x98) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x98) >> 0x20) * fVar20,
                (float)*(undefined8 *)(lVar6 + 0x98) * fVar20);
  *(float *)(lVar6 + 0xa0) = fVar20 * *(float *)(lVar6 + 0xa0);
  *(ulong *)(lVar6 + 0xa8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0xa8) >> 0x20) * fVar20,
                (float)*(undefined8 *)(lVar6 + 0xa8) * fVar20);
  *(float *)(lVar6 + 0xb0) = fVar20 * *(float *)(lVar6 + 0xb0);
  FUN_04062328(*(undefined4 *)(param_1 + 0x24),1,0);
  if (DAT_0483808b == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_0483808b = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_038295fc(0xbf800000,0xbf800000,0,0x3f800000,0xbf800000,0,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_038b52f4(local_e8,0);
  fVar18 = *(float *)(param_1 + 0x40);
  fVar21 = *(float *)(param_1 + 0x44);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_038d0588(fVar18 * -0.5,-fVar20 - fVar21,fVar18,fVar21,DAT_00c925a0,0);
  FUN_04062328(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),1,0);
  uVar7 = FUN_04062b70(0);
  uVar7 = FUN_03405678(*(undefined8 *)
                        Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Write__,uVar7,0);
  fVar22 = *(float *)(param_1 + 0x44);
  if (DAT_04838073 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838073 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(float *)(*(long *)(lVar6 + 0xb8) + 0x1c8) = fVar22 * 8.5;
  puVar1 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if (DAT_0483808d == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar6 = *(long *)puVar1;
    DAT_0483808d = '\x01';
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x1d0) = 4;
  FUN_038d06c8(fVar18 * -0.5,-fVar20 - fVar21,fVar18,fVar21,uVar7,0);
  fVar15 = *(float *)(param_1 + 0x3c);
  fVar20 = *(float *)(param_1 + 0x24);
  fVar21 = *(float *)(param_1 + 0x30);
  fVar18 = *(float *)(param_1 + 0x34);
  FUN_038af6ac(&local_e0,0,0,0,0x3f800000,0);
  fVar15 = fVar21 * 0.5 * fVar15;
  sincosf(fVar20 * DAT_00c924dc,&fStack_2b4,&local_2b8);
  uStack_1e8 = uStack_d8;
  local_1f0 = local_e0;
  uStack_1d8 = uStack_c8;
  uStack_1e0 = uStack_d0;
  uStack_1c8 = uStack_b8;
  local_1d0 = local_c0;
  uStack_1b8 = uStack_a8;
  uStack_1c0 = uStack_b0;
  FUN_038ce99c(local_2b8,fStack_2b4,0,fVar15 + fVar18 * 0.5,&local_1f0,0);
  FUN_04062328(*(undefined4 *)(param_1 + 0x24),0x3f800000,0x3f800000,1,0);
  FUN_038af6ac(&local_e0,0);
  uStack_228 = uStack_d8;
  local_230 = local_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_208 = uStack_b8;
  local_210 = local_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  fVar12 = 0.0;
  fVar21 = fStack_2b4;
  fVar18 = fVar15;
  FUN_038ce99c(local_2b8,fStack_2b4,0,fVar15,&local_230,0);
  fVar22 = (float)FUN_038cc724(param_1);
  fVar23 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar24 = *(float *)(param_1 + 0x34);
  FUN_038af6ac(&local_e0,0,0,0,0x3f800000,0);
  fVar20 = fVar16;
  if (1.0 < fVar16) {
    fVar20 = 1.0;
  }
  fVar13 = fVar23;
  if (1.0 < fVar23) {
    fVar13 = 1.0;
  }
  if (fVar16 < 0.0) {
    fVar20 = 0.0;
  }
  if (fVar23 < 0.0) {
    fVar13 = 0.0;
  }
  fVar21 = fVar21 + ((fVar18 + fVar21) - fVar21) * fVar20;
  fVar22 = fVar22 + ((fVar12 + fVar22) - fVar22) * fVar13;
  uStack_268 = uStack_d8;
  local_270 = local_e0;
  uStack_258 = uStack_c8;
  uStack_260 = uStack_d0;
  uStack_248 = uStack_b8;
  local_250 = local_c0;
  uStack_238 = uStack_a8;
  uStack_240 = uStack_b0;
  FUN_038ce99c(fVar22,fVar21,0,fVar15 + fVar24 * 0.5,&local_270,0);
  FUN_04062328(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),1,0);
  FUN_038af6ac(&local_e0,0);
  uStack_2a8 = uStack_d8;
  local_2b0 = local_e0;
  uStack_298 = uStack_c8;
  uStack_2a0 = uStack_d0;
  uStack_288 = uStack_b8;
  local_290 = local_c0;
  uStack_278 = uStack_a8;
  uStack_280 = uStack_b0;
  FUN_038ce99c(fVar22,fVar21,0,fVar15,&local_2b0,0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038cd2ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_038cd2ec:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
  }
  return;
}


