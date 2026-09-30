/*
FUNCTION_NAME: FUN_05d6e728
ENTRY_POINT: 05d6e728
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_05d6e728(undefined4 param_1,long param_2,ulong param_3,uint param_4,int param_5,
                 undefined1 *param_6,uint param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long local_68;
  
  if ((DAT_066db8bf & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelHierarchyChanged__);
    FUN_02b3c81c(PTR_DAT_063223b8);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<ContextualMenuPopulateEvent>__
                );
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetTarget<Tweener>__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                );
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066db8bf = 1;
  }
  local_68 = 0;
  if (DAT_066db8a5 == '\0') {
    FUN_02b3c81c(Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__);
    DAT_066db8a5 = '\x01';
  }
  local_68 = 0;
  cVar1 = *(char *)(*(long *)(*(long *)Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__ + 0xb8)
                   + 8);
  *param_6 = 0;
  if (((param_4 >> 1 & 1) == 0) && (param_5 == 400)) {
LAB_05d6ea60:
    if (cVar1 == '\0') {
      if (param_2 == 0) goto LAB_05d6eca0;
    }
    else {
      if (param_2 == 0) goto LAB_05d6eca0;
LAB_05d6ea68:
      if (*(long *)(param_2 + 0x130) == 0) {
        return 0;
      }
    }
  }
  else {
    if (param_2 == 0) goto LAB_05d6eca0;
    uVar7 = FUN_05d4fc08(param_2,param_1,param_4,param_5,&local_68,0);
    if ((uVar7 & 1) != 0) {
      if (local_68 == 0) goto LAB_05d6eca0;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_05c8c45c(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        return local_68;
      }
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_05d4fcb8(param_2,param_1,param_4,param_5,0);
    }
    lVar8 = FUN_05d4bdbc(param_2,0);
    uVar4 = FUN_05d83100(param_5,0);
    puVar2 = PTR_DAT_06312520;
    if ((param_4 >> 1 & 1) == 0) {
      if (lVar8 == 0) goto LAB_05d6eca0;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) {
LAB_05d6eca4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar9 = (long *)(lVar8 + (long)(int)uVar4 * 0x10 + 0x20);
    }
    else {
      if (lVar8 == 0) goto LAB_05d6eca0;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_05d6eca4;
      plVar9 = (long *)(lVar8 + (long)(int)uVar4 * 0x10 + 0x28);
    }
    lVar8 = *plVar9;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(lVar8,0,0);
    if ((uVar7 & 1) == 0) goto LAB_05d6ea60;
    if (cVar1 == '\0') {
      if (lVar8 == 0) goto LAB_05d6eca0;
    }
    else {
      if (lVar8 == 0) goto LAB_05d6eca0;
      if (*(long *)(lVar8 + 0x130) == 0) {
        return 0;
      }
    }
    uVar7 = FUN_05d4fc08(lVar8,param_1,param_4,param_5,&local_68,0);
    if ((uVar7 & 1) != 0) {
      if (local_68 == 0) goto LAB_05d6eca0;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_05c8c45c(uVar11,0,0);
      if ((uVar7 & 1) != 0) goto LAB_05d6ea50;
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_05d4fcb8(lVar8,param_1,param_4,param_5,0);
    }
    iVar5 = FUN_05d4b35c(lVar8,0);
    if ((iVar5 == 1) || (iVar5 = FUN_05d4b35c(lVar8,0), iVar5 == 2)) {
      if (cVar1 != '\0') {
        if (*(long *)(lVar8 + 0x1f8) == 0) goto LAB_05d6eca0;
        uVar7 = FUN_04a792a4(*(long *)(lVar8 + 0x1f8),param_1,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<ContextualMenuPopulateEvent>__
                            );
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        goto LAB_05d6ea68;
      }
      uVar7 = FUN_05d5049c(lVar8,param_1,param_4,param_5,&local_68,param_7 & 1,0);
      if ((uVar7 & 1) != 0) {
LAB_05d6ea50:
        *param_6 = 1;
        return local_68;
      }
    }
    else {
      uVar7 = FUN_05d4fc08(lVar8,param_1,0,400,&local_68,0);
      if ((uVar7 & 1) == 0) goto LAB_05d6ea60;
      if (local_68 == 0) goto LAB_05d6eca0;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_05c8c45c(uVar11,0,0);
      if ((uVar7 & 1) != 0) goto LAB_05d6ea50;
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_05d4fcb8(lVar8,param_1,param_4,param_5,0);
    }
  }
  uVar7 = FUN_05d4fc08(param_2,param_1,0,400,&local_68,0);
  if ((uVar7 & 1) != 0) {
    if (local_68 == 0) goto LAB_05d6eca0;
    uVar11 = *(undefined8 *)(local_68 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      return local_68;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_05d4fcb8(param_2,param_1,0,400,0);
  }
  iVar5 = FUN_05d4b35c(param_2,0);
  if ((iVar5 == 1) || (iVar5 = FUN_05d4b35c(param_2,0), iVar5 == 2)) {
    if (cVar1 != '\0') {
      return 0;
    }
    uVar7 = FUN_05d5049c(param_2,param_1,0,400,&local_68,param_7 & 1,0);
    if ((uVar7 & 1) != 0) {
      return local_68;
    }
  }
  if (cVar1 != '\0') {
    return 0;
  }
  if (local_68 != 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    return 0;
  }
  lVar8 = FUN_05d4bda4(param_2,0);
  if (lVar8 == 0) {
    return 0;
  }
  lVar8 = FUN_05d4bda4(param_2,0);
  puVar3 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__;
  puVar2 = PTR_DAT_06312520;
  if (lVar8 != 0) {
    iVar5 = *(int *)(lVar8 + 0x18);
    if (iVar5 < 1) {
      return 0;
    }
    iVar10 = 0;
    do {
      plVar9 = (long *)FUN_037a6268(lVar8,iVar10,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      uVar7 = FUN_05c8e378(plVar9,0,0);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        uVar6 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
        if (**(long **)(*(long *)
                         Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelHierarchyChanged__ +
                       0xb8) == 0) break;
        uVar7 = FUN_04a54450(**(long **)(*(long *)
                                          Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelHierarchyChanged__
                                        + 0xb8),uVar6,*(undefined8 *)PTR_DAT_063223b8);
        if (((uVar7 & 1) != 0) &&
           (local_68 = FUN_05d6e728(param_1,plVar9,1,param_4,param_5,param_6,param_7 & 1),
           local_68 != 0)) {
          return local_68;
        }
      }
      iVar10 = iVar10 + 1;
      if (iVar5 == iVar10) {
        return 0;
      }
    } while( true );
  }
LAB_05d6eca0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


