/*
FUNCTION_NAME: FUN_023584d4
ENTRY_POINT: 023584d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02358b58) */
/* WARNING: Removing unreachable block (ram,0x02358a6c) */

bool FUN_023584d4(undefined8 *****param_1,undefined8 *****param_2,long *param_3,void *param_4,
                 long param_5,uint param_6,long param_7)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  void *pvVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong __n;
  undefined8 *puVar17;
  void *apvStack_2e0 [2];
  long *local_2d0;
  long local_2c8;
  void *local_2c0;
  uint local_2b4;
  long *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
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
  long *local_200;
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
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 *local_170;
  long lStack_168;
  long lStack_160;
  long local_158;
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
  undefined8 ****local_f0;
  undefined8 ****ppppuStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_70;
  undefined *puVar6;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar15 = *(long **)(param_7 + 0x38);
  apvStack_2e0[1] = param_4;
  local_2b4 = param_6;
  local_f0 = param_2;
  ppppuStack_e8 = param_1;
  if (plVar15 == (long *)0x0) {
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
    plVar15 = *(long **)(param_7 + 0x38);
    if (plVar15 == (long *)0x0) {
      FUN_01ecafa0(param_7);
      plVar15 = *(long **)(param_7 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar15 + 0xfc);
  uVar7 = *(uint *)(plVar15[1] + 0xfc);
  uVar14 = (ulong)uVar7;
  local_2d0 = param_3;
  local_2c8 = lVar2;
  if ((*(byte *)(plVar15[1] + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
    uVar7 = *(uint *)(lVar2 + 0xfc);
    plVar15 = *(long **)(param_7 + 0x38);
  }
  lVar2 = (long)apvStack_2e0 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0);
  puVar17 = (undefined8 *)(lVar2 - (__n + 0xf & 0x1fffffff0));
  pvVar11 = (void *)((long)puVar17 - (uVar14 + 0xf & 0x1fffffff0));
  local_100 = 0;
  local_190 = (long *)0x0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  local_200 = (long *)0x0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  pppppuVar1 = param_1;
  if (-1 < *(int *)(*plVar15 + 0x28)) {
    pppppuVar1 = &ppppuStack_e8;
  }
  memcpy(puVar17,pppppuVar1,__n);
  uVar3 = FUN_01f089f8(*plVar15,puVar17);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar13 = thunk_FUN_01f117cc();
    puVar6 = Method_UnityEngine_Component_GetComponent<Animation>__;
  }
  else {
    lVar16 = *(long *)(param_7 + 0x38);
    pppppuVar1 = (undefined8 *****)local_f0;
    if (-1 < *(int *)(*(long *)(lVar16 + 8) + 0x28)) {
      pppppuVar1 = &local_f0;
    }
    memcpy(pvVar11,pppppuVar1,uVar14);
    uVar14 = FUN_01f089f8(*(undefined8 *)(lVar16 + 8),pvVar11);
    if ((uVar14 & 1) != 0) {
      local_100 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      local_150 = 0;
      lStack_168 = 0;
      local_170 = (undefined8 *)0x0;
      local_158 = 0;
      lStack_160 = 0;
      lVar9 = *(long *)(param_7 + 0x38);
      lVar8 = *(long *)(lVar9 + 8);
      lVar16 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
        lVar9 = *(long *)(param_7 + 0x38);
        lVar16 = *(long *)(lVar9 + 8);
      }
      pppppuVar1 = (undefined8 *****)local_f0;
      if (-1 < *(int *)(lVar16 + 0x28)) {
        pppppuVar1 = &local_f0;
      }
      FUN_01f09244(lVar8,*(undefined8 *)(lVar9 + 0x10),lVar2,pppppuVar1,0,&local_2b0);
      plVar15 = local_2b0;
      puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (local_2b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_2c0 = (void *)((ulong)&local_150 | 8);
LAB_02358744:
      do {
        lVar2 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02358790;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar6,0);
LAB_02358790:
        uVar14 = (*(code *)*puVar4)(plVar15,puVar4[1]);
        if ((uVar14 & 1) == 0) goto LAB_023589f4;
        lVar2 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_UnityEngine_Component_GetComponent<Animator>__) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_023587f4;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar15,*(long *)Method_UnityEngine_Component_GetComponent<Animator>__
                              ,0);
LAB_023587f4:
        (*(code *)*puVar4)(&local_2b0,plVar15,puVar4[1]);
        uStack_188 = uStack_2a8;
        local_190 = local_2b0;
        local_180 = local_2a0;
        plVar12 = *(long **)(param_7 + 0x38);
        pppppuVar1 = param_1;
        if (-1 < *(int *)(*plVar12 + 0x28)) {
          pppppuVar1 = &ppppuStack_e8;
        }
        memcpy(puVar17,pppppuVar1,__n);
        local_c0 = puVar17;
        if (-1 < *(int *)(*plVar12 + 0x28)) {
          local_c0 = (undefined8 *)*puVar17;
        }
        puVar4 = (undefined8 *)plVar12[3];
        lStack_b8 = param_5;
        (*(code *)puVar4[2])(*puVar4,puVar4,&local_190,&local_c0,&local_2b0);
        memcpy(&uStack_1e0,&local_2b0,0x50);
        uVar14 = FUN_03b56294(&uStack_1e0,0);
        if (((uVar14 & 1) != 0) || ((0.0 < uStack_1e0._4_4_ && ((local_2b4 & 1) != 0)))) {
          if (param_5 != 0) {
            FUN_03b562c4(&local_2b0,&uStack_1e0,0);
            uStack_1f8 = uStack_2a8;
            local_200 = local_2b0;
            uStack_1e8 = uStack_298;
            local_1f0 = local_2a0;
            uVar14 = FUN_02f1f898(&local_200,param_5,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<AudioEventListener>__);
            if ((uVar14 & 1) == 0) {
              FUN_03b5656c(&uStack_1e0,0);
              goto LAB_02358744;
            }
          }
          if ((char)local_150 != '\0') {
            FUN_03337264(&local_2b0,&local_150,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<Button>__);
            memcpy(&local_250,&local_2b0,0x50);
            if (uStack_1e0._4_4_ <= local_250._4_4_) {
              FUN_03b5656c(&uStack_1e0,0);
              goto LAB_02358744;
            }
            if ((char)local_150 != '\0') {
              memcpy(&local_250,local_2c0,0x50);
              FUN_03b5656c(&local_250,0);
            }
          }
          local_260 = 0;
          uStack_268 = 0;
          local_270 = 0;
          uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<BaseUIEffect>__;
          uStack_288 = 0;
          local_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_2a8 = 0;
          local_2b0 = (long *)0x0;
          uStack_298 = 0;
          local_2a0 = 0;
          memcpy(&local_c0,&uStack_1e0,0x50);
          FUN_0333722c(&local_2b0,&local_c0,uVar13);
          memcpy(&local_150,&local_2b0,0x58);
          lStack_b8 = 0;
          local_c0 = (undefined8 *)0x0;
          lStack_a8 = 0;
          lStack_b0 = 0;
          uStack_d8 = uStack_188;
          local_e0 = local_190;
          local_d0 = local_180;
          FUN_0332df1c(&local_c0,&local_e0,
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<Anchor>__);
          lStack_168 = lStack_b8;
          local_170 = local_c0;
          local_158 = lStack_a8;
          lStack_160 = lStack_b0;
          goto LAB_02358744;
        }
        FUN_03b5656c(&uStack_1e0,0);
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar13 = thunk_FUN_01f117cc();
    puVar6 = Method_UnityEngine_Component_GetComponent<AdditionalBonus>__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  FUN_034efd20(uVar13,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar13,param_7);
LAB_023589f4:
  if (plVar15 != (long *)0x0) {
    lVar2 = *plVar15;
    uVar14 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar17 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02358a54;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_01ecb238(plVar15,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_02358a54:
    (*(code *)*puVar17)(plVar15,puVar17[1]);
  }
  pvVar11 = apvStack_2e0[1];
  memcpy(apvStack_2e0[1],(void *)((ulong)&local_150 | 8),0x50);
  thunk_FUN_01f51358((long)pvVar11 + 0x48,0);
  local_2d0[2] = local_158;
  local_2d0[1] = lStack_160;
  *local_2d0 = lStack_168;
  thunk_FUN_01f51358(local_2d0,0);
  if (*(long *)(local_2c8 + 0x28) == local_70) {
    return (char)local_150 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


