/*
FUNCTION_NAME: FUN_060f8b20
ENTRY_POINT: 060f8b20
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060f8b20(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  puVar3 = System_WeakReference<TMP_FontAsset>_TypeInfo;
  puVar4 = PTR_DAT_06a68ba0;
  if ((DAT_06e9538c & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a65e18);
    FUN_02e3ca1c(System_ValueTuple<object,_PlayerRef,_ReliableKey,_float>_TypeInfo);
    FUN_02e3ca1c(System_WeakReference<VisualElement>_TypeInfo);
    FUN_02e3ca1c(System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo);
    FUN_02e3ca1c(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    FUN_02e3ca1c(
                System_Reactive_Subjects_Subject<ValueTuple<NetworkRunner,_List<SessionInfo>>>_TypeInfo
                );
    FUN_02e3ca1c(System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a68670);
    FUN_02e3ca1c(PTR_DAT_06a69b18);
    FUN_02e3ca1c(PTR_DAT_06a65ed8);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a68ba0);
    FUN_02e3ca1c(System_WeakReference<TMP_FontAsset>_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                );
    DAT_06e9538c = 1;
  }
  lVar13 = *(long *)(param_1 + 0x38);
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_68 = 0;
  uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar4);
  FUN_0434092c(uVar8,0,*(undefined8 *)puVar3,0);
  if (lVar13 != 0) {
    FUN_052eacc0(lVar13,uVar8,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                );
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x38) + 0x20) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar9 = FUN_062696b0(uVar8,0,0);
        puVar4 = 
        UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
        ;
        if ((uVar9 & 1) == 0) {
          lVar13 = *(long *)
                    UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
          ;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 != 0) {
            iVar1 = *(int *)(lVar13 + 0x18);
            *(undefined4 *)(lVar13 + 0x18) = 0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_05628afc(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
            }
            if (*(long *)(param_1 + 0x38) != 0) {
              FUN_052e8e18(&local_80,*(long *)(param_1 + 0x38),
                           *(undefined8 *)System_Net_WebCompletionSource<WebResponseStream>_TypeInfo
                          );
              puVar7 = System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo;
              puVar6 = System_ValueTuple<object,_PlayerRef,_ReliableKey,_float>_TypeInfo;
              puVar5 = 
              System_Reactive_Subjects_Subject<ValueTuple<NetworkRunner,_List<SessionInfo>>>_TypeInfo
              ;
              puVar3 = PTR_DAT_06a68670;
              puStack_58 = puStack_78;
              local_60 = local_80;
              local_50 = local_70;
              puStack_78 = &local_60;
              local_80 = 0;
LAB_060f8d50:
              uVar9 = FUN_04fc09e8(&local_60,*(undefined8 *)puVar7);
              uVar8 = local_50;
              if ((uVar9 & 1) != 0) {
                if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                uVar9 = FUN_060d8a84(*(long *)(param_1 + 0x20),local_50,&local_68,0);
                if ((uVar9 & 1) != 0) {
                  lVar13 = *(long *)puVar4;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar13 = *(long *)puVar4;
                  }
                  lVar13 = **(long **)(lVar13 + 0xb8);
                  if (lVar13 != 0) {
                    lVar10 = *(long *)(lVar13 + 0x10);
                    lVar12 = *(long *)puVar3;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar13 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                        puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar11 = uVar8;
                        thunk_FUN_02ee2be8(puVar11,uVar8);
                      }
                      else {
                        FUN_03f2b60c(lVar13,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02e3ccc4();
                      }
                      FUN_04def5fc(*(long *)(param_1 + 0x28),uVar8,local_68,*(undefined8 *)puVar6);
                      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02e3ccc4();
                      }
                      uVar9 = FUN_052e9494(*(long *)(param_1 + 0x30),local_68,*(undefined8 *)puVar5)
                      ;
                      if (((uVar9 & 1) != 0) && (lVar13 = *(long *)(param_1 + 0x10), lVar13 != 0)) {
                        (**(code **)(lVar13 + 0x18))
                                  (*(undefined8 *)(lVar13 + 0x40),local_68,
                                   *(undefined8 *)(lVar13 + 0x28));
                      }
                      goto LAB_060f8d50;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                goto LAB_060f8d50;
              }
              FUN_04fc09e4(&local_60,*(undefined8 *)System_WeakReference<VisualElement>_TypeInfo);
              lVar13 = *(long *)puVar4;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar13 = *(long *)puVar4;
              }
              lVar13 = **(long **)(lVar13 + 0xb8);
              uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a65e18);
              FUN_04d318f4(uVar8,param_1,
                           *(undefined8 *)
                            UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                           ,0);
              if (lVar13 != 0) {
                FUN_03f2bf50(lVar13,uVar8,*(undefined8 *)PTR_DAT_06a65ed8);
                lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
                if (lVar13 != 0) {
                  iVar1 = *(int *)(lVar13 + 0x18);
                  *(undefined4 *)(lVar13 + 0x18) = 0;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (iVar1 < 1) {
                    return;
                  }
                  FUN_05628afc(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
                  return;
                }
              }
            }
          }
          goto LAB_060f8f20;
        }
      }
      return;
    }
  }
LAB_060f8f20:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


