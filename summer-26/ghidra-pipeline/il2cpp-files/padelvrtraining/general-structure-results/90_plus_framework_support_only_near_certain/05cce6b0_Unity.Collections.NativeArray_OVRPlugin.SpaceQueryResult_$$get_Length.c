/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 05cce6b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
               (long param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = PTR_DAT_091f8b38;
  if ((DAT_0983d4ec & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f8b50);
    FUN_03d2d2b0(PTR_DAT_091f8b38);
    FUN_03d2d2b0(PTR_DAT_091fcbb8);
    FUN_03d2d2b0(PTR_DAT_091fafa0);
    FUN_03d2d2b0(PTR_DAT_091fcbc0);
    FUN_03d2d2b0(PTR_DAT_091fcbc8);
    DAT_0983d4ec = 1;
  }
  puVar2 = PTR_DAT_091fcbb8;
  iVar3 = FUN_06093590(param_2,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_091f8b50;
  if (iVar3 != 1) {
LAB_05cce834:
    puVar1 = PTR_DAT_091fcbc8;
    local_90 = param_2[2];
    uStack_98 = param_2[1];
    local_a0 = *param_2;
    local_70 = local_a0;
    uStack_68 = uStack_98;
    local_60 = local_90;
    FUN_060921c8(&local_88,&local_70,*(undefined8 *)puVar2);
    uStack_b8 = uStack_80;
    local_c0 = local_88;
    local_b0 = local_78;
    FUN_07f09544(&local_c0,0);
    uVar6 = FUN_06fd2898(*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x130),
                         *(undefined8 *)(param_1 + 0x138),0);
    FUN_05fbbdc8(param_1,0,1,uVar6,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
    return;
  }
  plVar4 = (long *)FUN_0609352c(param_2,*(undefined8 *)PTR_DAT_091f8b50);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091fafa0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05cce7c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091fafa0,0);
LAB_05cce7c8:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar3 == 0) goto LAB_05cce834;
    plVar4 = (long *)FUN_0609352c(param_2,*(undefined8 *)puVar1);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091fcbc0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cce8c0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091fcbc0,0);
LAB_05cce8c0:
      uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
      FUN_051b1c20(&local_88,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
      puVar5 = (undefined8 *)(param_1 + 0x118);
      local_60 = local_78;
      uStack_68 = uStack_80;
      local_70 = local_88;
      *(undefined8 *)(param_1 + 0x128) = local_78;
      *(undefined8 *)(param_1 + 0x120) = uStack_80;
      *puVar5 = local_88;
      thunk_FUN_03d1023c(puVar5,0);
      uVar8 = FUN_06093294(puVar5,*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb8));
      if ((uVar8 & 1) == 0) {
        local_f0 = *(undefined8 *)(param_1 + 0x128);
        uStack_f8 = *(undefined8 *)(param_1 + 0x120);
        local_100 = *puVar5;
        local_70 = local_100;
        uStack_68 = uStack_f8;
        local_60 = local_f0;
        FUN_060921c8(&local_88,&local_70,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200));
        local_110 = local_78;
        uStack_118 = uStack_80;
        local_120 = local_88;
        *(undefined8 *)(param_1 + 0xa8) = local_78;
        *(undefined8 *)(param_1 + 0xa0) = uStack_80;
        *(undefined8 *)(param_1 + 0x98) = local_88;
        thunk_FUN_03d1023c(param_1 + 0x98,0);
        FUN_06092a44(puVar5,*(undefined8 *)(param_1 + 0xe0),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0));
      }
      else {
        local_d0 = *(undefined8 *)(param_1 + 0x128);
        uStack_d8 = *(undefined8 *)(param_1 + 0x120);
        local_e0 = *puVar5;
        local_70 = local_e0;
        uStack_68 = uStack_d8;
        local_60 = local_d0;
        FUN_05cceb2c(param_1,&local_70,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38));
      }
      local_130 = param_2[2];
      uStack_138 = param_2[1];
      local_140 = *param_2;
      local_70 = local_140;
      uStack_68 = uStack_138;
      local_60 = local_130;
      FUN_060921c8(&local_88,&local_70,*(undefined8 *)puVar2);
      uStack_158 = uStack_80;
      local_160 = local_88;
      local_150 = local_78;
      FUN_07f09544(&local_160,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


