/*
FUNCTION_NAME: FUN_03a116b8
ENTRY_POINT: 03a116b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_03a116b8(long param_1,int param_2,int param_3,long *param_4,undefined8 param_5,uint param_6
                 )

{
  undefined8 *__dest;
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [80];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [80];
  undefined1 auStack_d0 [80];
  
  if ((DAT_03ffce8e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db09e8);
    thunk_FUN_01ad9084(PTR_DAT_03db0948);
    thunk_FUN_01ad9084(PTR_DAT_03db07b8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db09d8);
    thunk_FUN_01ad9084(PTR_DAT_03db09e0);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(PTR_DAT_03dade20);
    DAT_03ffce8e = 1;
  }
  local_178[0] = 0;
  local_188 = 0;
  local_180 = 0;
  lVar10 = FUN_03a114cc(param_1);
  auVar3._8_8_ = local_160._8_8_;
  auVar3._0_8_ = local_160._0_8_;
  auVar2._8_8_ = local_170._8_8_;
  auVar2._0_8_ = local_170._0_8_;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (lVar10 != 0) {
      FUN_03a981ac(lVar10,0,0,0,0,0);
      return lVar10;
    }
    goto UnityEngine_UI_Scrollbar__get_direction;
  }
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  local_170 = auVar2;
  local_160 = auVar3;
  if (*(long *)(param_1 + 0xd0) == 0) goto UnityEngine_UI_Scrollbar__get_direction;
  local_170 = FUN_0218f910(*(long *)(param_1 + 0xd0),param_2,*(undefined8 *)PTR_DAT_03db09d8);
  if (*(long *)(param_1 + 0xd8) == 0) goto UnityEngine_UI_Scrollbar__get_direction;
  local_160 = FUN_0218f260(*(long *)(param_1 + 0xd8),param_3,*(undefined8 *)PTR_DAT_03db09e0);
  local_150 = param_5;
  thunk_FUN_01b4f09c(&local_150,param_5);
  local_138 = *(undefined8 *)(param_1 + 0xc0);
  __dest = (undefined8 *)(param_1 + 0x30);
  uStack_130 = ((ulong)CONCAT31(uStack_130._5_3_,(char)param_6) & 0xffffff01) << 0x20;
  local_128 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
  memcpy(__dest,local_170,0x50);
  thunk_FUN_01b4f09c(param_1 + 0x50,0);
  puVar6 = PTR_DAT_03db0948;
  iVar7 = FUN_02cfb600(__dest,*(undefined8 *)PTR_DAT_03db0948);
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
  }
  UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(iVar7 == param_2,0);
  puVar5 = PTR_DAT_03db07b8;
  iVar7 = FUN_02cfa8ec(param_1 + 0x40,*(undefined8 *)PTR_DAT_03db07b8);
  UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(iVar7 == param_3,0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_0391f968(param_4,0,0);
  fVar18 = 1.0;
  fVar19 = 0.0;
  if ((uVar11 & 1) == 0) {
LAB_03a11a24:
    fVar20 = 0.0;
    fVar21 = 1.0;
  }
  else {
    if (((param_6 >> 1 & 1) != 0) || (plVar12 = *(long **)(param_1 + 0x20), plVar12 == (long *)0x0))
    {
LAB_03a11990:
      puVar4 = PTR_DAT_03dade20;
      if (*(int *)(*(long *)PTR_DAT_03dade20 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ffcb01 == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03dade20);
        DAT_03ffcb01 = '\x01';
      }
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar15 = *(long *)puVar4;
      }
      if (**(long **)(lVar15 + 0xb8) == 0) goto UnityEngine_UI_Scrollbar__get_direction;
      uVar8 = FUN_03ab4f34(**(long **)(lVar15 + 0xb8),param_4,0);
      *(undefined4 *)(param_1 + 0x70) = 2;
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (*(long *)(param_1 + 0x10) == 0) goto UnityEngine_UI_Scrollbar__get_direction;
      FUN_039fb6c8(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_4,uVar8,0,0);
      goto LAB_03a11a24;
    }
    if (param_4 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = param_4;
      if (*param_4 != *(long *)StringLiteral_2992) {
        plVar13 = (long *)0x0;
      }
    }
    uVar11 = (**(code **)(*plVar12 + 0x178))
                       (plVar12,*(undefined8 *)(param_1 + 0x110),plVar13,local_178,&local_188,
                        *(undefined8 *)(*plVar12 + 0x180));
    if ((uVar11 & 1) == 0) goto LAB_03a11990;
    *(undefined4 *)(param_1 + 0x70) = 3;
    *(undefined4 *)(param_1 + 0x5c) = local_178[0];
    if (*(long *)(param_1 + 0x10) == 0) goto UnityEngine_UI_Scrollbar__get_direction;
    fVar21 = (float)local_180._4_4_;
    fVar18 = (float)(int)local_180;
    fVar20 = (float)local_188._4_4_;
    fVar19 = (float)(int)local_188;
    FUN_039fb6c8(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_4,local_178[0],1,0
                );
  }
  if (lVar10 != 0) {
    FUN_03a981c8(fVar19,fVar20,fVar18,fVar21,lVar10,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),0);
    lVar15 = *(long *)(param_1 + 0x18);
    memcpy(auStack_1d8,__dest,0x50);
    if (lVar15 != 0) {
      lVar16 = *(long *)PTR_DAT_03db09e8;
      memcpy(auStack_120,auStack_1d8,0x50);
      lVar14 = *(long *)(lVar15 + 0x10);
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          lVar14 = lVar14 + (long)(int)uVar1 * 0x50;
          memcpy((void *)(lVar14 + 0x20),auStack_120,0x50);
          thunk_FUN_01b4f09c(lVar14 + 0x40,0);
        }
        else {
          uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_d0,auStack_120,0x50);
          FUN_02c5f058(lVar15,auStack_d0,uVar17);
        }
        iVar7 = *(int *)(param_1 + 0x118);
        iVar9 = FUN_02cfb600(__dest,*(undefined8 *)puVar6);
        *(int *)(param_1 + 0x118) = iVar9 + iVar7;
        iVar7 = *(int *)(param_1 + 0x11c);
        iVar9 = FUN_02cfa8ec(param_1 + 0x40,*(undefined8 *)puVar5);
        *(int *)(param_1 + 0x11c) = iVar9 + iVar7;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *__dest = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        return lVar10;
      }
    }
  }
UnityEngine_UI_Scrollbar__get_direction:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


