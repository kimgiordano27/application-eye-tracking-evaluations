/*
FUNCTION_NAME: FUN_05cb9530
ENTRY_POINT: 05cb9530
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool FUN_05cb9530(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,long param_8,long param_9)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *__src;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auStack_21c [8];
  int local_214;
  int local_210;
  byte local_20c;
  undefined8 local_208;
  undefined1 *puStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined1 local_168 [4];
  undefined1 auStack_164 [252];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_06a57c5a & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<PublishDraftItemResponse>__);
    FUN_02d4dc40(Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<PurchaseInventoryItemsResponse>__);
    FUN_02d4dc40(PTR_DAT_0664a408);
    FUN_02d4dc40(Method_PlayFab_PlayFabMultiplayerInstanceAPI_GetAssetUploadUrl__);
    DAT_06a57c5a = 1;
  }
  local_168[0] = 0;
  local_170 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  memset(auStack_164,0,0xfc);
  if (param_9 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
  }
  cVar1 = *(char *)(param_9 + 0x11);
  cVar2 = *(char *)(param_9 + 0x10);
  FUN_05b07190(local_168,*(undefined8 *)(param_5 + 0x130),0);
  local_208 = 0;
  puStack_200 = local_168;
  if (param_7 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
  }
  if (*(long *)(param_7 + 0x1d8) == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
  }
  cVar3 = *(char *)(*(long *)(param_7 + 0x1d8) + 0x141);
  bVar6 = cVar3 != '\0';
  FUN_05cb9bb8(param_5);
  if (param_8 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
  }
  iVar8 = *(int *)(param_8 + 0x10);
  if (iVar8 == -1) {
    if (cVar1 == '\0') goto LAB_05cb992c;
    FUN_05cb9ce8(param_5,cVar3 != '\0',1,0,param_7,param_9);
  }
  else {
    memmove(&local_1e0,(void *)(*(long *)(param_8 + 0x20) + (long)iVar8 * 0x74),0x74);
    lVar9 = FUN_05f1c5ec(&local_1e0,0);
    if (cVar2 == '\0') {
      if (cVar1 == '\0') {
        if (lVar9 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
        }
LAB_05cb98ac:
        iVar8 = FUN_05eb99d0(lVar9,0);
        if (((iVar8 != 0) && (FUN_05eb9824(auStack_21c,lVar9,0), (local_20c & 1) != 0)) &&
           (FUN_05eb9824(auStack_21c,lVar9,0), local_210 != 0)) {
          FUN_05eb9824(auStack_21c,lVar9,0);
          if (local_214 == 1) {
            FUN_05cb9ce8(param_5,cVar3 != '\0',0,lVar9,param_7,param_9);
            goto LAB_05cb9978;
          }
        }
LAB_05cb992c:
        bVar6 = false;
      }
      else {
        FUN_05cb9ce8(param_5,cVar3 != '\0',1,0,param_7,param_9);
      }
    }
    else {
      if (lVar9 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
      }
      iVar7 = FUN_05eb99d0(lVar9,0);
      if (iVar7 == 0) {
        FUN_05cb9ce8(param_5,cVar3 != '\0',cVar1 != '\0',lVar9,param_7,param_9);
      }
      else {
        if (cVar1 == '\0') goto LAB_05cb98ac;
        iVar7 = FUN_05f1c678(&local_1e0,0);
        if (iVar7 != 1) {
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05ea2df4(*(undefined8 *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_GetAssetUploadUrl__,0);
        }
        if (param_6 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
        }
        uVar10 = FUN_05f13c88(param_6 + 0x18,iVar8,&local_1f8,0);
        if ((uVar10 & 1) == 0) {
          FUN_05cb9ce8(param_5,cVar3 != '\0',1,lVar9,param_7,param_9);
        }
        else {
          *(undefined4 *)(param_5 + 200) = *(undefined4 *)(param_9 + 0x1c);
          puVar5 = Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<PurchaseInventoryItemsResponse>__
          ;
          *(undefined8 *)(param_5 + 0xc0) = *(undefined8 *)(param_9 + 0x60);
          puVar11 = (undefined8 *)
                    FUN_032aae20(*(undefined8 *)(param_9 + 0x68),*(undefined8 *)(param_9 + 0x70),
                                 iVar8,*(undefined8 *)puVar5);
          if (0 < *(int *)(param_5 + 200)) {
            lVar15 = 0;
            uVar10 = 0;
            lVar14 = 0x20;
            do {
              __src = (void *)FUN_032aadec(*puVar11,puVar11[1],uVar10 & 0xffffffff,
                                           *(undefined8 *)
                                            Method_PlayFab_Internal_PlayFabHttp_MakeApiCall<PublishDraftItemResponse>__
                                          );
              lVar13 = *(long *)(param_5 + 0x120);
              memmove(auStack_164,(void *)((long)__src + 0xcc),0xfc);
              if (*(int *)(*(long *)PTR_DAT_0664a408 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar16 = FUN_05f1b5a8(auStack_164,0);
              if (lVar13 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4def0();
                }
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
              }
              lVar13 = lVar13 + lVar15;
              *(undefined4 *)(lVar13 + 0x20) = uVar16;
              *(undefined4 *)(lVar13 + 0x24) = param_2;
              *(undefined4 *)(lVar13 + 0x28) = param_3;
              *(undefined4 *)(lVar13 + 0x2c) = param_4;
              lVar13 = *(long *)(param_5 + 0x138);
              if (lVar13 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
              }
              if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4def0();
                }
                goto 
                UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin;
              }
              memmove((void *)(lVar13 + lVar14),__src,0x1c8);
              uVar12 = FUN_05c69918(puVar11,uVar10 & 0xffffffff,0);
              if ((uVar12 & 1) == 0) {
                FUN_05cb9ce8(param_5,cVar3 != '\0',1,lVar9,param_7,param_9);
                goto LAB_05cb9978;
              }
              uVar10 = uVar10 + 1;
              lVar15 = lVar15 + 0x10;
              lVar14 = lVar14 + 0x1c8;
            } while ((long)uVar10 < (long)*(int *)(param_5 + 200));
          }
          FUN_05cb9eb0(param_5);
          bVar6 = true;
          *(float *)(param_5 + 0xd4) = *(float *)(param_7 + 0x1a8) * *(float *)(param_7 + 0x1a8);
          uVar16 = *(undefined4 *)(param_9 + 0x2c);
          *(undefined1 *)(param_5 + 0xcc) = 0;
          *(undefined1 *)(param_5 + 0x52) = 1;
          *(undefined4 *)(param_5 + 0xd0) = uVar16;
        }
      }
    }
  }
LAB_05cb9978:
  FUN_05b0719c(local_168,0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return bVar6;
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_NearFarInteractor__get_curveOrigin:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


