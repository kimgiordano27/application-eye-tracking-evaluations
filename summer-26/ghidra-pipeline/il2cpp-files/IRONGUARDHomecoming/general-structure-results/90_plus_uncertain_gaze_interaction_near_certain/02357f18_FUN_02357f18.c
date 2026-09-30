/*
FUNCTION_NAME: FUN_02357f18
ENTRY_POINT: 02357f18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02358338) */
/* WARNING: Removing unreachable block (ram,0x023583f0) */

bool FUN_02357f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 void *param_5,long param_6,uint param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_2a0;
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
  
  local_e0 = param_2;
  uStack_d8 = param_3;
  if (*(long *)(param_8 + 0x38) == 0) {
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
    if (*(long *)(param_8 + 0x38) == 0) {
      FUN_01ecafa0(param_8);
    }
  }
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
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
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Animation>__);
    FUN_034efd20(uVar12,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,param_8);
  }
  local_f0 = 0;
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
  plVar6 = (long *)FUN_02616410(&local_e0,*(undefined8 *)(*(long *)(param_8 + 0x38) + 0x10));
  puVar5 = Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<AudioEventListener>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Animator>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<Anchor>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_0235806c:
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023580b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_023580b8:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02358114;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_02358114:
    (*(code *)*puVar7)(&local_2a0,plVar6,puVar7[1]);
    uStack_178 = uStack_298;
    local_180 = local_2a0;
    local_170 = local_290;
    FUN_02359c38(&local_2a0,&local_180,param_1,param_6,
                 *(undefined8 *)(*(long *)(param_8 + 0x38) + 0x18));
    memcpy(&uStack_1d0,&local_2a0,0x50);
    uVar10 = FUN_03b56294(&uStack_1d0,0);
    if (((uVar10 & 1) == 0) && ((uStack_1d0._4_4_ <= 0.0 || ((param_7 & 1) == 0)))) {
      FUN_03b5656c(&uStack_1d0,0);
      goto LAB_0235806c;
    }
    if (param_6 == 0) {
LAB_023581b0:
      if ((char)local_140 != '\0') {
        FUN_03337264(&local_2a0,&local_140,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy(&local_240,&local_2a0,0x50);
        if (uStack_1d0._4_4_ <= local_240._4_4_) {
          FUN_03b5656c(&uStack_1d0,0);
          goto LAB_0235806c;
        }
        if ((char)local_140 != '\0') {
          memcpy(&local_240,(void *)((ulong)&local_140 | 8),0x50);
          FUN_03b5656c(&local_240,0);
        }
      }
      uVar12 = *(undefined8 *)puVar5;
      local_250 = 0;
      uStack_268 = 0;
      local_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      local_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      memcpy(&local_b0,&uStack_1d0,0x50);
      FUN_0333722c(&local_2a0,&local_b0,uVar12);
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
      goto LAB_0235806c;
    }
    FUN_03b562c4(&local_2a0,&uStack_1d0,0);
    uStack_1e8 = uStack_298;
    local_1f0 = local_2a0;
    uStack_1d8 = uStack_288;
    local_1e0 = local_290;
    uVar10 = FUN_02f1f898(&local_1f0,param_6,*(undefined8 *)puVar4);
    if ((uVar10 & 1) != 0) goto LAB_023581b0;
    FUN_03b5656c(&uStack_1d0,0);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02358320;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02358320:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  memcpy(param_5,(void *)((ulong)&local_140 | 8),0x50);
  thunk_FUN_01f51358((long)param_5 + 0x48,0);
  param_4[2] = uStack_148;
  param_4[1] = local_150;
  *param_4 = uStack_158;
  thunk_FUN_01f51358(param_4,0);
  return (char)local_140 != '\0';
}


