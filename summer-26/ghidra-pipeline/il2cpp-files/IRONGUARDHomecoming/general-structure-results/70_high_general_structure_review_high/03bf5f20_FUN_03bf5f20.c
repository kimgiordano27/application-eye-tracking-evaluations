/*
FUNCTION_NAME: FUN_03bf5f20
ENTRY_POINT: 03bf5f20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03bf5f20(long param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong *puVar23;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *puVar16;
  
  if ((DAT_04839aa3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputRemoting_DeserializeData<InputRemoting_NewLayoutMsg_Data>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_14181);
    thunk_FUN_01efb3a4(StringLiteral_14176);
    DAT_04839aa3 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_88 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar15 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    FUN_034efd20(uVar15,uVar14,0);
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    if ((uVar8 & 1) != 0) {
      plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputRemoting_DeserializeData<InputRemoting_NewLayoutMsg_Data>__
                                         );
      FUN_034db65c(plVar9,param_2,0);
      puVar16 = StringLiteral_14176;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar5 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
      if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar16);
      }
      local_b0 = (ulong)local_b0._4_4_ << 0x20;
      FUN_03b44b80(&local_b0,0x49,0x45,0x56,0x54,0);
      if (iVar5 == (int)local_b0) {
        iVar5 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
        lVar18 = *(long *)puVar16;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar18);
          lVar18 = *(long *)puVar16;
        }
        puVar16 = StringLiteral_14176;
        if (iVar5 <= **(int **)(lVar18 + 0xb8)) {
          (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
          (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
          lVar18 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          lVar10 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          puVar23 = (ulong *)(param_1 + 0xa0);
          puVar19 = (undefined4 *)*puVar23;
          if ((lVar18 == 0) || (lVar10 == 0)) {
            puVar11 = (undefined4 *)0x0;
            *puVar23 = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
          }
          else {
            if ((puVar19 == (undefined4 *)0x0) ||
               (puVar11 = puVar19, *(long *)(param_1 + 0x78) < lVar10)) {
              puVar11 = (undefined4 *)FUN_040383c8(lVar10,4,4,0);
              *(long *)(param_1 + 0x78) = lVar10;
            }
            lVar22 = 0;
            puVar1 = (undefined4 *)(lVar10 + (long)puVar11);
            puVar20 = puVar11;
            lVar10 = lVar18;
            while( true ) {
              uVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
              uVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
              uVar4 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
              if ((long)puVar1 - (long)puVar20 < (long)(ulong)(ushort)uVar7) break;
              *puVar20 = uVar6;
              *(ushort *)(puVar20 + 1) = (ushort)uVar7;
              *(undefined2 *)((long)puVar20 + 6) = uVar4;
              uVar2 = uVar7 & 0xffff;
              iVar5 = uVar2 - 8;
              lVar12 = (**(code **)(*plVar9 + 0x2c8))(plVar9,iVar5,*(undefined8 *)(*plVar9 + 0x2d0))
              ;
              if (lVar12 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (*(int *)(lVar12 + 0x18) != 0) {
                  lVar17 = lVar12 + 0x20;
                }
              }
              FUN_04037e20(puVar20 + 2,lVar17,(long)iVar5,0);
              uVar3 = uVar2;
              if ((uVar7 & 3) != 0) {
                uVar3 = (uVar2 - (uVar7 & 3)) + 4;
              }
              if (iVar5 % 4 != 0) {
                iVar5 = (uVar2 - iVar5 % 4) + -4;
              }
              puVar20 = (undefined4 *)((long)(puVar20 + 2) + (long)iVar5);
              lVar22 = lVar22 + (ulong)uVar3;
              if ((puVar1 <= puVar20) || (lVar10 = lVar10 + -1, lVar10 == 0)) break;
            }
            uVar7 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
            lVar10 = FUN_01f08890(*(undefined8 *)StringLiteral_14181,(ulong)uVar7);
            if (0 < (int)uVar7) {
              uVar8 = 0;
              puVar21 = (undefined8 *)(lVar10 + 0x28);
              do {
                uStack_78 = 0;
                local_80 = 0;
                local_68 = 0;
                local_70 = 0;
                uVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
                local_80 = CONCAT44(local_80._4_4_,uVar6);
                uStack_78 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                thunk_FUN_01f51358((ulong)&local_80 | 8);
                uVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
                local_70 = CONCAT44(local_70._4_4_,uVar6);
                uVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
                local_70 = CONCAT44(uVar6,(undefined4)local_70);
                local_68 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                thunk_FUN_01f51358(&local_68);
                uStack_a8 = uStack_78;
                local_b0 = local_80;
                uStack_98 = local_68;
                uStack_a0 = local_70;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                puVar21[2] = local_68;
                puVar21[1] = local_70;
                *puVar21 = uStack_78;
                puVar21[-1] = local_80;
                thunk_FUN_01f51358(puVar21,0);
                uVar8 = uVar8 + 1;
                puVar21 = puVar21 + 4;
              } while (uVar7 != uVar8);
            }
            *(long *)(param_1 + 0xc0) = lVar10;
            *(undefined4 **)(param_1 + 0xb0) = puVar1;
            *(undefined4 **)(param_1 + 0xa0) = puVar11;
            *(undefined4 **)(param_1 + 0xa8) = puVar11;
            *(long *)(param_1 + 0x90) = lVar18;
            *(long *)(param_1 + 0x98) = lVar22;
            thunk_FUN_01f51358((long *)(param_1 + 0xc0),lVar10);
            puVar11 = (undefined4 *)*puVar23;
          }
          if ((puVar19 != (undefined4 *)0x0) && (puVar11 != puVar19)) {
            FUN_0403841c(puVar19,4,0);
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          return;
        }
        thunk_FUN_01efb3a4(StringLiteral_14176);
        FUN_01bc4c70();
        lVar18 = thunk_FUN_01efb3a4(puVar16);
        local_b0 = CONCAT44(local_b0._4_4_,**(undefined4 **)(lVar18 + 0xb8));
        uVar14 = thunk_FUN_01efb3a4(
                                   Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   );
        uVar14 = thunk_FUN_01f113fc(uVar14,&local_b0);
        puVar16 = StringLiteral_14184;
      }
      else {
        thunk_FUN_01efb3a4(StringLiteral_14176);
        FUN_01bc4c70();
        uVar6 = FUN_03bf5ccc();
        local_b0 = CONCAT44(local_b0._4_4_,uVar6);
        uVar14 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_IndexOfCore__);
        uVar14 = thunk_FUN_01f113fc(uVar14,&local_b0);
        puVar16 = StringLiteral_14183;
      }
      uVar15 = thunk_FUN_01efb3a4(puVar16);
      uVar14 = FUN_03406290(uVar15,uVar14,0);
      thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
      uVar15 = thunk_FUN_01f117cc();
      FUN_034c6a10(uVar15,uVar14,0);
      uVar14 = thunk_FUN_01efb3a4(StringLiteral_14182);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar15,uVar14);
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar15 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualTreeAsset_CloneTree__);
    uVar13 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<ulong,_ulong,_NoOptions>__);
    FUN_034efd98(uVar15,uVar14,uVar13,0);
  }
  uVar14 = thunk_FUN_01efb3a4(StringLiteral_14182);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar15,uVar14);
}


