/*
FUNCTION_NAME: FUN_05bc3ff8
ENTRY_POINT: 05bc3ff8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;ray_or_cast_sink_hits_12;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05bc3ff8(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  long local_68;
  
  if ((DAT_066d51bb & 1) == 0) {
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate>__
                );
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonWriter_get_WriteState__);
    FUN_02b3c81c(UnityEngine_Animations_Rigging_OverrideTransformData_var);
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate>__
                );
    FUN_02b3c81c(
                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate>__
                );
    DAT_066d51bb = 1;
  }
  local_68 = 0;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
LAB_05bc44ac:
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x218);
    if (*(long *)(param_1 + 0x218) == 0) {
      uVar7 = FUN_02b3c908(*(undefined8 *)
                            Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate>__
                           ,*(undefined4 *)(param_1 + 0x1c4));
      *(undefined8 *)(param_1 + 0x218) = uVar7;
      thunk_FUN_02bb0e9c(plVar1,uVar7);
    }
    puVar5 = 
    Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate>__
    ;
    puVar4 = PTR_DAT_06312520;
    puVar3 = PTR_DAT_06312310;
    if (0 < *(int *)(param_1 + 0x1c4)) {
      uVar13 = 0;
      puVar2 = (uint *)(param_1 + 0x1c8);
      do {
        iVar6 = FUN_05bca3dc(*(undefined4 *)(param_1 + 0x20),uVar13 & 0xffffffff,puVar2,0);
        if ((iVar6 != 0) || (*puVar2 == 0)) {
          local_80 = CONCAT44(local_80._4_4_,iVar6);
          uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar3 + 0x48),&local_80);
          local_6c = *puVar2;
          uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(puVar3 + 0x50),&local_6c);
          uVar7 = FUN_04c0af28(*(undefined8 *)
                                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate>__
                               ,uVar7,uVar10,0);
          uVar7 = FUN_04bffdac(*(undefined8 *)
                                Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate>__
                               ,uVar7,0);
          if (*(int *)(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__ + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__);
          }
LAB_05bc44a4:
          FUN_05bd1c54(uVar7,0);
          goto LAB_05bc44ac;
        }
        lVar16 = *plVar1;
        if (lVar16 == 0) {
LAB_05bc4570:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar13) {
LAB_05bc4560:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar15 = (long *)(lVar16 + uVar13 * 8 + 0x20);
        if (*plVar15 == 0) {
          lVar8 = FUN_02b3c908(*(undefined8 *)
                                UnityEngine_Animations_Rigging_OverrideTransformData_var);
          if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_05bc4560;
          *plVar15 = lVar8;
          thunk_FUN_02bb0e9c(plVar15,lVar8);
          if (*puVar2 != 0) goto LAB_05bc418c;
        }
        else {
LAB_05bc418c:
          lVar16 = 0;
          uVar14 = 0;
          do {
            local_68 = 0;
            FUN_05bca6e4(*(undefined4 *)(param_1 + 0x20),uVar13 & 0xffffffff,uVar14,&local_68,0);
            if (local_68 == 0) {
              puVar12 = (undefined8 *)
                        Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate>__
              ;
              if (*(int *)(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__ + 0xe4) == 0)
              {
                thunk_FUN_02b9ad44();
                puVar12 = (undefined8 *)
                          Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate>__
                ;
              }
LAB_05bc44a0:
              uVar7 = *puVar12;
              goto LAB_05bc44a4;
            }
            if (*(int *)(param_1 + 0x30) == 5) {
              lVar8 = FUN_05c6c600(*(undefined4 *)(param_1 + 0x1e8),4,0,local_68,0);
            }
            else {
              lVar8 = FUN_05c6af90(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec)
                                   ,4,0,1,local_68,0);
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar9 = FUN_05c8e378(0,lVar8,0);
            if ((uVar9 & 1) != 0) {
              puVar12 = (undefined8 *)
                        Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate>__
              ;
              if (*(int *)(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__ + 0xe4) == 0)
              {
                thunk_FUN_02b9ad44();
                puVar12 = (undefined8 *)
                          Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate>__
                ;
              }
              goto LAB_05bc44a0;
            }
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_05bc4570;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_05bc4560;
            plVar15 = *(long **)(lVar11 + uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) goto LAB_05bc4570;
            if ((lVar8 != 0) &&
               (lVar11 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)) {
LAB_05bc4564:
              uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar7,0);
            }
            if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_05bc4560;
            plVar15[lVar16 + 4] = lVar8;
            thunk_FUN_02bb0e9c(plVar15 + lVar16 + 4,lVar8);
            plVar15 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
            local_6c = (uint)uVar13;
            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(puVar3 + 0x48),&local_6c);
            if (plVar15 == (long *)0x0) goto LAB_05bc4570;
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
            goto LAB_05bc4564;
            if ((int)plVar15[3] == 0) goto LAB_05bc4560;
            plVar15[4] = lVar16;
            thunk_FUN_02bb0e9c(plVar15 + 4,lVar16);
            local_70 = uVar14;
            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(puVar3 + 0x48),&local_70);
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
            goto LAB_05bc4564;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_05bc4560;
            plVar15[5] = lVar16;
            thunk_FUN_02bb0e9c(plVar15 + 5,lVar16);
            local_74 = *puVar2;
            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(puVar3 + 0x50),&local_74);
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
            goto LAB_05bc4564;
            if (*(uint *)(plVar15 + 3) < 3) goto LAB_05bc4560;
            plVar15[6] = lVar16;
            thunk_FUN_02bb0e9c(plVar15 + 6,lVar16);
            local_80 = local_68;
            lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)(puVar3 + 0x58),&local_80);
            if ((lVar16 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
            goto LAB_05bc4564;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffc) == 0) goto LAB_05bc4560;
            plVar15[7] = lVar16;
            thunk_FUN_02bb0e9c(plVar15 + 7,lVar16);
            uVar7 = FUN_04c0afb0(*(undefined8 *)puVar5,plVar15,0);
            if (*(int *)(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__ + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__);
            }
            FUN_05bc8818(uVar7,0);
            uVar14 = uVar14 + 1;
            lVar16 = (long)(int)uVar14;
          } while (lVar16 < (long)(ulong)*puVar2);
        }
        if (*(int *)(*(long *)Method_Newtonsoft_Json_JsonWriter_get_WriteState__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05bc8818(*(undefined8 *)
                      Method_Meta_XR_MRUtilityKit_MRUKNative_LoadFunction<MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate>__
                     ,0);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)*(int *)(param_1 + 0x1c4));
    }
    *(undefined1 *)(param_1 + 0x1c2) = 0;
    *(undefined2 *)(param_1 + 0x1c0) = 0x100;
    FUN_05bc4968(param_1);
    uVar7 = 1;
  }
  return uVar7;
}


