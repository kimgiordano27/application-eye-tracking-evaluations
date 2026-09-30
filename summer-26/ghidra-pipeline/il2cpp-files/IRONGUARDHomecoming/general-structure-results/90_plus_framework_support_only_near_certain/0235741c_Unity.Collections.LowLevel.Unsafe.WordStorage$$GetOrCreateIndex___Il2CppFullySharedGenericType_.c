/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.WordStorage$$GetOrCreateIndex<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0235741c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0235783c) */
/* WARNING: Removing unreachable block (ram,0x023578b8) */

bool Unity_Collections_LowLevel_Unsafe_WordStorage__GetOrCreateIndex<__Il2CppFullySharedGenericType>
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               void *param_5,long param_6,uint param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar8 = *(long *)(param_8 + 0x38);
  uStack_80 = param_2;
  uStack_78 = param_3;
  if (lVar8 == 0) {
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
    lVar8 = *(long *)(param_8 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_8);
      lVar8 = *(long *)(param_8 + 0x38);
    }
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_90 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plVar6 = (long *)FUN_02616410(&uStack_80,*(undefined8 *)(lVar8 + 0x10));
  puVar5 = Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<AudioEventListener>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Animator>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<Anchor>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_02357564:
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_023575b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_023575b0:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0235760c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0235760c:
    (*(code *)*puVar7)(&uStack_260,plVar6,puVar7[1]);
    uStack_118 = uStack_258;
    uStack_120 = uStack_260;
    uStack_110 = uStack_250;
    uStack_1f8 = param_1[1];
    uStack_200 = *param_1;
    uStack_1e8 = param_1[3];
    uStack_1f0 = param_1[2];
    uStack_50 = uStack_200;
    uStack_48 = uStack_1f8;
    uStack_40 = uStack_1f0;
    uStack_38 = uStack_1e8;
    FUN_02358c40(&uStack_260,&uStack_120,&uStack_50,param_6,
                 *(undefined8 *)(*(long *)(param_8 + 0x38) + 0x18));
    memcpy(&uStack_170,&uStack_260,0x50);
    uVar9 = FUN_03b56294(&uStack_170,0);
    if (((uVar9 & 1) == 0) && ((uStack_170._4_4_ <= 0.0 || ((param_7 & 1) == 0)))) {
      FUN_03b5656c(&uStack_170,0);
      goto LAB_02357564;
    }
    if (param_6 == 0) {
Unity_Collections_LowLevel_Unsafe_Words__SetFixedString<FixedString512Bytes>:
      if ((char)uStack_e0 != '\0') {
        FUN_03337264(&uStack_260,&uStack_e0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
        memcpy(&uStack_1e0,&uStack_260,0x50);
        if (uStack_170._4_4_ <= uStack_1e0._4_4_) {
          FUN_03b5656c(&uStack_170,0);
          goto LAB_02357564;
        }
        if ((char)uStack_e0 != '\0') {
          memcpy(&uStack_1e0,(void *)((ulong)&uStack_e0 | 8),0x50);
          FUN_03b5656c(&uStack_1e0,0);
        }
      }
      uVar11 = *(undefined8 *)puVar5;
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      memcpy(&uStack_50,&uStack_170,0x50);
      FUN_0333722c(&uStack_260,&uStack_50,uVar11);
      memcpy(&uStack_e0,&uStack_260,0x58);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = uStack_118;
      uStack_70 = uStack_120;
      uStack_60 = uStack_110;
      FUN_0332df1c(&uStack_50,&uStack_70,*(undefined8 *)puVar2);
      uStack_f8 = uStack_48;
      uStack_100 = uStack_50;
      uStack_e8 = uStack_38;
      uStack_f0 = uStack_40;
      goto LAB_02357564;
    }
    FUN_03b562c4(&uStack_260,&uStack_170,0);
    uStack_188 = uStack_258;
    uStack_190 = uStack_260;
    uStack_178 = uStack_248;
    uStack_180 = uStack_250;
    uVar9 = FUN_02f1f898(&uStack_190,param_6,*(undefined8 *)puVar4);
    if ((uVar9 & 1) != 0)
    goto Unity_Collections_LowLevel_Unsafe_Words__SetFixedString<FixedString512Bytes>;
    FUN_03b5656c(&uStack_170,0);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02357824;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02357824:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  memcpy(param_5,(void *)((ulong)&uStack_e0 | 8),0x50);
  thunk_FUN_01f51358((long)param_5 + 0x48,0);
  param_4[2] = uStack_e8;
  param_4[1] = uStack_f0;
  *param_4 = uStack_f8;
  thunk_FUN_01f51358(param_4,0);
  return (char)uStack_e0 != '\0';
}


