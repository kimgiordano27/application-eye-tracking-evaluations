/*
FUNCTION_NAME: FUN_04176564
ENTRY_POINT: 04176564
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_04176564(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1c0 [80];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  undefined4 local_58 [2];
  
  local_58[0] = param_4;
  if ((DAT_04840b78 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_0458caf8);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8b8);
    thunk_FUN_01efb3a4(PTR_DAT_0458cb48);
    thunk_FUN_01efb3a4(PTR_DAT_0458ca58);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8c0);
    thunk_FUN_01efb3a4(PTR_DAT_0458cae8);
    thunk_FUN_01efb3a4(PTR_DAT_0458caf0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458cb50);
    thunk_FUN_01efb3a4(PTR_DAT_0458cb58);
    thunk_FUN_01efb3a4(PTR_DAT_0458c008);
    DAT_04840b78 = 1;
  }
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_160._8_8_ = 0;
  local_160._0_8_ = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_170._8_8_ = 0;
  local_170._0_8_ = 0;
  if ((*(int *)(param_2 + 2) != 0) && (*(int *)((long)param_2 + 0x14) != 0)) {
    uVar7 = FUN_035b5e80(*param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)PTR_DAT_0458c008 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)PTR_DAT_0458c008);
    }
    local_110 = FUN_0244246c(uVar7,uVar5,*(undefined8 *)PTR_DAT_0458cb58);
    uVar7 = FUN_035b5e80(param_2[1],0);
    local_120 = FUN_02442428(uVar7,*(undefined4 *)((long)param_2 + 0x14),
                             *(undefined8 *)PTR_DAT_0458cb50);
    puVar3 = PTR_DAT_0458ca58;
    iVar4 = FUN_03321808(local_110,*(undefined8 *)PTR_DAT_0458ca58);
    puVar2 = PTR_DAT_0458c8c0;
    if (iVar4 != 0) {
      iVar4 = FUN_0331fe2c(local_120,*(undefined8 *)PTR_DAT_0458c8c0);
      if (iVar4 != 0) {
        uStack_138 = 0;
        local_140 = 0;
        local_128 = 0;
        local_130 = 0;
        local_160._8_8_ = 0;
        local_160._0_8_ = 0;
        uStack_148 = 0;
        local_150 = 0;
        local_170._8_8_ = 0;
        local_170._0_8_ = 0;
        lVar11 = *(long *)(param_1 + 0xd0);
        uVar5 = FUN_03321808(local_110,*(undefined8 *)puVar3);
        if (lVar11 != 0) {
          local_170 = FUN_0277f020(lVar11,uVar5,*(undefined8 *)PTR_DAT_0458cae8);
          lVar11 = *(long *)(param_1 + 0xd8);
          uVar5 = FUN_0331fe2c(local_120,*(undefined8 *)puVar2);
          if (lVar11 != 0) {
            local_160 = FUN_0277e970(lVar11,uVar5,*(undefined8 *)PTR_DAT_0458caf0);
            local_150 = param_6;
            thunk_FUN_01f51358(&local_150,param_6);
            uStack_138 = *(undefined8 *)(param_1 + 0xc0);
            __dest = (undefined8 *)(param_1 + 0x30);
            local_130 = ((ulong)CONCAT31(local_130._5_3_,param_7) & 0xffffff01) << 0x20;
            local_128 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
            memcpy(__dest,local_170,0x50);
            thunk_FUN_01f51358(param_1 + 0x50,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar4 = FUN_042187f0(local_58,0);
            if (-1 < iVar4) {
              *(undefined4 *)(param_1 + 0x70) = param_8;
              *(undefined4 *)(param_1 + 0x5c) = local_58[0];
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_041769e0;
              FUN_0415f4e0(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_3,
                           local_58[0],param_5 & 1,0);
            }
            iVar4 = FUN_03321808(__dest,*(undefined8 *)puVar3);
            iVar6 = FUN_03321808(local_110,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
            }
            UnityEngine_UIElements_Vector4Field___ctor(iVar4 == iVar6,0);
            lVar11 = param_1 + 0x40;
            iVar4 = FUN_0331fe2c(lVar11,*(undefined8 *)puVar2);
            iVar6 = FUN_0331fe2c(local_120,*(undefined8 *)puVar2);
            UnityEngine_UIElements_Vector4Field___ctor(iVar4 == iVar6,0);
            FUN_03321610(__dest,local_110._0_8_,local_110._8_8_,*(undefined8 *)PTR_DAT_0458c8b8);
            FUN_0331fc34(lVar11,local_120._0_8_,local_120._8_8_,*(undefined8 *)PTR_DAT_0458cb48);
            lVar9 = *(long *)(param_1 + 0x18);
            memcpy(auStack_1c0,__dest,0x50);
            if (lVar9 != 0) {
              lVar10 = *(long *)PTR_DAT_0458caf8;
              memcpy(auStack_100,auStack_1c0,0x50);
              lVar8 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  lVar8 = lVar8 + (long)(int)uVar1 * 0x50;
                  memcpy((void *)(lVar8 + 0x20),auStack_100,0x50);
                  thunk_FUN_01f51358(lVar8 + 0x40,0);
                }
                else {
                  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                  memcpy(auStack_b0,auStack_100,0x50);
                  System_Collections_Generic_ObjectEqualityComparer<Guid>___ctor
                            (lVar9,auStack_b0,uVar7);
                }
                iVar4 = *(int *)(param_1 + 0x118);
                iVar6 = FUN_03321808(__dest,*(undefined8 *)puVar3);
                *(int *)(param_1 + 0x118) = iVar6 + iVar4;
                iVar4 = *(int *)(param_1 + 0x11c);
                iVar6 = FUN_0331fe2c(lVar11,*(undefined8 *)puVar2);
                *(int *)(param_1 + 0x11c) = iVar6 + iVar4;
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
                return;
              }
            }
          }
        }
LAB_041769e0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
  return;
}


