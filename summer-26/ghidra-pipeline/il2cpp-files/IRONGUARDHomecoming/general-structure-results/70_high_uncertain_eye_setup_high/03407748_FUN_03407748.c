/*
FUNCTION_NAME: FUN_03407748
ENTRY_POINT: 03407748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03407748(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_04832693 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRObjectPool_List<OVRSpaceUser>__);
    DAT_04832693 = 1;
  }
  if (*(char *)(param_2 + 0x21) != '\0') {
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_MultiColumnTreeView_RaiseHeaderContextMenuPopulate__
                              );
    uVar5 = FUN_033f1a84(uVar5,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_03579608(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_03406a20(param_2);
  }
  puVar1 = Method_OVRObjectPool_List<OVRSpaceUser>__;
  if ((param_3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(*(long *)Method_OVRObjectPool_List<OVRSpaceUser>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_034035ac(uVar5,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
      uVar5 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(Method_OVRSceneManager_OnAnchorsFetchCompleted__);
      FUN_03437810(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01efb3a4(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar4);
    }
  }
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar5 = FUN_03403e9c();
    local_70 = FUN_034076a4(uVar5,uVar5);
    thunk_FUN_01f51358(&local_70,local_70);
    if (*(long *)(param_2 + 0x30) != 0) {
      uVar5 = FUN_03403e9c();
      uStack_68 = FUN_034076a4(uVar5,uVar5);
      thunk_FUN_01f51358(&uStack_68);
      if (*(long *)(param_2 + 0x38) != 0) {
        uVar5 = FUN_03403e9c();
        uStack_60 = FUN_034076a4(uVar5,uVar5);
        thunk_FUN_01f51358(&uStack_60);
        if (*(long *)(param_2 + 0x48) != 0) {
          uVar5 = FUN_03403e9c();
          local_58 = FUN_034076a4(uVar5,uVar5);
          thunk_FUN_01f51358(&local_58);
          if (*(char *)(param_2 + 100) == '\0') {
            if (*(long *)(param_2 + 0x50) == 0) goto LAB_0340795c;
            uVar5 = FUN_03403e9c();
            uStack_50 = FUN_034076a4(uVar5,uVar5);
            thunk_FUN_01f51358(&uStack_50);
          }
          uVar5 = *(undefined8 *)(param_2 + 0x58);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar2 = FUN_034079f8(uVar5,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_2 + 0x58) == 0) goto LAB_0340795c;
            uVar5 = FUN_03403e9c();
            uStack_40 = FUN_034076a4(uVar5,uVar5);
            thunk_FUN_01f51358(&uStack_40);
            local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0x60));
          }
          if ((param_3 & 1) != 0) {
            if ((*(long *)(param_2 + 0x40) == 0) || (lVar3 = FUN_03403e9c(), lVar3 == 0))
            goto LAB_0340795c;
            if (*(int *)(lVar3 + 0x18) == 0x14) {
              local_48 = FUN_034076a4(lVar3,lVar3);
              thunk_FUN_01f51358(&local_48);
            }
          }
          param_1[5] = local_48;
          param_1[4] = uStack_50;
          param_1[7] = local_38;
          param_1[6] = uStack_40;
          param_1[1] = uStack_68;
          *param_1 = local_70;
          param_1[3] = local_58;
          param_1[2] = uStack_60;
          return;
        }
      }
    }
  }
LAB_0340795c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


