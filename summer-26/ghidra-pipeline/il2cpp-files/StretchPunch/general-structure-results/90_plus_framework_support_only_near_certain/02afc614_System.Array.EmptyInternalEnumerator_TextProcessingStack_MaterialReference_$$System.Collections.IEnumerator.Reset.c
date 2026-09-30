/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TextProcessingStack<MaterialReference>>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02afc614
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array_EmptyInternalEnumerator<TextProcessingStack<MaterialReference>>__System_Collections_IEnumerator_Reset
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_044a4d5b & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    DAT_044a4d5b = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc(param_2,0);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_02afab58(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar8 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar8 + 0x38);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar11 + -3)) {
          uStack_138 = puVar11[1];
          local_140 = *puVar11;
          uStack_128 = puVar11[3];
          uStack_130 = puVar11[2];
          uStack_118 = puVar11[5];
          local_120 = puVar11[4];
          uStack_108 = puVar11[7];
          uStack_110 = puVar11[6];
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          local_f0 = local_140;
          uStack_e8 = uStack_138;
          local_e0 = uStack_130;
          uStack_d8 = uStack_128;
          local_d0 = local_120;
          uStack_c8 = uStack_118;
          local_c0 = uStack_110;
          uStack_b8 = uStack_108;
          FUN_0306dca8(&local_b0,puVar11[-2],puVar11[-1],&local_140,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
          memcpy(&local_140,&local_b0,0x50);
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),
                                     &local_140);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)param_3 + 4] = lVar9;
          thunk_FUN_01e10808(plVar6 + (long)(int)param_3 + 4,lVar9);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0xb;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x38);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02afc97c;
        if (-1 < *(int *)(puVar11 + -3)) {
          uStack_138 = puVar11[-1];
          local_140 = puVar11[-2];
          uVar3 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),
                                     &local_140);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02afc97c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          uStack_88 = puVar11[5];
          local_90 = puVar11[4];
          uStack_78 = puVar11[7];
          local_80 = puVar11[6];
          uStack_a8 = puVar11[1];
          local_b0 = *puVar11;
          uStack_98 = puVar11[3];
          local_a0 = puVar11[2];
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),&local_b0
                                    );
          local_60 = 0;
          uStack_58 = 0;
          FUN_0336f7b8(&local_60,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_02afc97c;
          lVar7 = lVar8 + (long)(int)param_3 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = uStack_58;
          *puVar5 = local_60;
          param_3 = param_3 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0xb;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


