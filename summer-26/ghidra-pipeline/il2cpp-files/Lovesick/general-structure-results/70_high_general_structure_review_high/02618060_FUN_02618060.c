/*
FUNCTION_NAME: FUN_02618060
ENTRY_POINT: 02618060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 FUN_02618060(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_248 [120];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
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
  undefined8 local_160;
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
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar4 = Method_UnityEngine_GameObject_GetComponentInChildren<Animation>__;
  if ((DAT_03783474 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_LambdaExpression_GetParameter__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<IDebugManager>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Animation>__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_HttpWebRequest_EndGetResponse__);
    thunk_FUN_00d48444(PTR_DAT_033edaa0);
    DAT_03783474 = 1;
  }
  local_80 = 0;
  local_f0 = 0;
  local_170 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uVar7 = *(undefined4 *)(param_3 + 0x44);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo;
  uVar8 = FUN_026183c4(uVar7);
  if ((uVar8 & 1) != 0) {
LAB_02618310:
    FUN_012d80e8(param_3,*(undefined8 *)puVar2);
    return 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar9 = FUN_02618458();
  puVar5 = Method_System_Linq_Expressions_LambdaExpression_GetParameter__;
  puVar3 = Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__;
  puVar1 = System_Collections_Generic_IEnumerator<IDebugManager>_TypeInfo;
  if (lVar9 != 0) {
    if (1 < *(int *)(lVar9 + 0x18)) {
      FUN_01323390(lVar9,auStack_248,
                   *(undefined8 *)Method_System_Net_HttpWebRequest_EndGetResponse__);
      memcpy(&local_160,auStack_248,0x78);
      while (uVar8 = FUN_012b894c(&local_160,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        FUN_00af49c0(auStack_248,&local_160,*(undefined8 *)puVar1);
        memcpy(&local_1d0,auStack_248,0x68);
        iVar6 = FUN_02617e34(&local_1d0);
        if (iVar6 != *(int *)(param_3 + 0x44)) {
          uVar7 = FUN_02617e34(&local_1d0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_026183c4(uVar7);
          if ((uVar8 & 1) == 0) {
            FUN_012b8948(&local_160,*(undefined8 *)puVar5);
            return 0;
          }
        }
      }
      FUN_012b8948(&local_160,*(undefined8 *)puVar5);
    }
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_026189a0(uVar7,&local_e0);
    if ((uVar8 & 1) == 0) goto LAB_02618310;
    fVar10 = (float)FUN_02617ee8(&local_e0);
    fVar13 = *(float *)(param_3 + 0x48);
    fVar12 = *(float *)(param_3 + 0x4c);
    if (DAT_03775439 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775439 = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar11 = (float)FUN_0267c760(0);
    lVar9 = UnityEngine_TextCore_Text_FontAsset__TryAddCharacters(param_3);
    if (lVar9 != 0) {
      fVar10 = fVar10 - fVar13;
      param_2 = param_2 - fVar12;
      if (SQRT(fVar10 * fVar10 + param_2 * param_2) / fVar11 < *(float *)(lVar9 + 0x58)) {
        return 0;
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


