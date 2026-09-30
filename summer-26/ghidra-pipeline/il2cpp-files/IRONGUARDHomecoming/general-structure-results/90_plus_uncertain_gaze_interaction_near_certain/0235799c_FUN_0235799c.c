/*
FUNCTION_NAME: FUN_0235799c
ENTRY_POINT: 0235799c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02357db8) */
/* WARNING: Removing unreachable block (ram,0x02357e34) */

bool FUN_0235799c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,void *param_6,long param_7,uint param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
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
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar7 = *(long *)(param_9 + 0x38);
  local_e0 = param_3;
  uStack_d8 = param_4;
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Animator>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<AudioEventListener>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<AudioListener>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<AudioSource>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Anchor>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<BaseUIEffect>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<BuildingBlock>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Button>__);
    lVar7 = *(long *)(param_9 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(param_9);
      lVar7 = *(long *)(param_9 + 0x38);
    }
  }
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_f0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
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
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  plVar5 = (long *)FUN_02616410(&local_e0,*(undefined8 *)(lVar7 + 0x10));
  puVar4 = Method_UnityEngine_Component_GetComponent<AudioEventListener>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Animator>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<Anchor>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_02357ae0:
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02357b2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02357b2c:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02357b88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_02357b88:
    (*(code *)*puVar6)(&local_2a0,plVar5,puVar6[1]);
    uStack_178 = uStack_298;
    local_180 = local_2a0;
    local_170 = local_290;
    FUN_02359450(&local_2a0,&local_180,param_1,param_2,param_7,
                 *(undefined8 *)(*(long *)(param_9 + 0x38) + 0x18));
    memcpy(&uStack_1d0,&local_2a0,0x50);
    uVar8 = FUN_03b56294(&uStack_1d0,0);
    if (((uVar8 & 1) == 0) && ((uStack_1d0._4_4_ <= 0.0 || ((param_8 & 1) == 0)))) {
      FUN_03b5656c(&uStack_1d0,0);
      goto LAB_02357ae0;
    }
    if (param_7 == 0) {
LAB_02357c28:
      if ((char)local_140 != '\0') {
        FUN_03337264(&local_2a0,&local_140,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy(&local_240,&local_2a0,0x50);
        if (uStack_1d0._4_4_ <= local_240._4_4_) {
          FUN_03b5656c(&uStack_1d0,0);
          goto LAB_02357ae0;
        }
        if ((char)local_140 != '\0') {
          memcpy(&local_240,(void *)((ulong)&local_140 | 8),0x50);
          FUN_03b5656c(&local_240,0);
        }
      }
      local_250 = 0;
      uStack_258 = 0;
      local_260 = 0;
      uVar10 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
      uStack_278 = 0;
      local_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      uStack_288 = 0;
      local_290 = 0;
      memcpy(&local_b0,&uStack_1d0,0x50);
      FUN_0333722c(&local_2a0,&local_b0,uVar10);
      memcpy(&local_140,&local_2a0,0x58);
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = uStack_178;
      local_d0 = local_180;
      local_c0 = local_170;
      FUN_0332df1c(&local_b0,&local_d0,*(undefined8 *)puVar2);
      uStack_158 = uStack_a8;
      local_160 = local_b0;
      uStack_148 = uStack_98;
      local_150 = uStack_a0;
      goto LAB_02357ae0;
    }
    FUN_03b562c4(&local_2a0,&uStack_1d0,0);
    uStack_1e8 = uStack_298;
    local_1f0 = local_2a0;
    uStack_1d8 = uStack_288;
    local_1e0 = local_290;
    uVar8 = FUN_02f1f898(&local_1f0,param_7,*(undefined8 *)puVar4);
    if ((uVar8 & 1) != 0) goto LAB_02357c28;
    FUN_03b5656c(&uStack_1d0,0);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02357da0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02357da0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  memcpy(param_6,(void *)((ulong)&local_140 | 8),0x50);
  thunk_FUN_01f51358((long)param_6 + 0x48,0);
  param_5[2] = uStack_148;
  param_5[1] = local_150;
  *param_5 = uStack_158;
  thunk_FUN_01f51358(param_5,0);
  return (char)local_140 != '\0';
}


