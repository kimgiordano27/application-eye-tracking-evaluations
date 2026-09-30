/*
FUNCTION_NAME: FUN_03260918
ENTRY_POINT: 03260918
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 FUN_03260918(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__ptr;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  local_68 = param_1;
  if ((DAT_03ff48f5 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2598);
    thunk_FUN_01ad9084(PTR_DAT_03d84af8);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84b30);
    thunk_FUN_01ad9084(PTR_DAT_03d84b38);
    thunk_FUN_01ad9084(PTR_DAT_03d84b40);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    DAT_03ff48f5 = 1;
  }
  puVar2 = PTR_DAT_03d84af8;
  local_70 = 0;
  local_74 = 0;
  *param_2 = 0;
  thunk_FUN_01b4f09c(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0324cebc();
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar10);
    lVar10 = *(long *)puVar2;
  }
  uVar7 = FUN_0305fb14(uVar6,**(undefined8 **)(lVar10 + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    FUN_0308aab8(&local_70,0,0);
    uVar6 = local_70;
    local_74 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar4 = FUN_032738fc(&local_68,0,&local_74,uVar6,0);
    if (iVar4 != 0) {
      return 0;
    }
    uVar6 = *(undefined8 *)PTR_DAT_03d84b38;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0304eec0(uVar6,0);
    puVar1 = StringLiteral_2598;
    if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)StringLiteral_2598);
    }
    iVar4 = thunk_FUN_01b3d4a4(uVar6,0);
    __ptr = (void *)FUN_02f7c424(local_74 * iVar4,0);
    uVar3 = local_74;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    iVar5 = FUN_032738fc(&local_68,uVar3,&local_74,__ptr,0);
    if (iVar5 == 0) {
      lVar10 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d84b30,local_74);
      *param_2 = lVar10;
      thunk_FUN_01b4f09c(param_2,lVar10);
      puVar2 = PTR_DAT_03d84b40;
      if (local_74 != 0) {
        iVar12 = 0;
        lVar10 = 0;
        iVar5 = 1;
        do {
          uVar6 = Oculus_Interaction_HandGrab_ObjectPull__get_Pose(__ptr,iVar12,0);
          uVar13 = *(undefined8 *)PTR_DAT_03d84b38;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                              );
          }
          uVar13 = FUN_0304eec0(uVar13,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          plVar8 = (long *)thunk_FUN_01b3d260(uVar6,uVar13,0);
          if (plVar8 == (long *)0x0) {
LAB_03260cc0:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c();
          }
          puVar9 = (undefined8 *)thunk_FUN_01afac30();
          uVar13 = puVar9[1];
          uVar6 = *puVar9;
          lVar11 = *param_2;
          if (lVar11 == 0) goto LAB_03260cc0;
          if (*(uint *)(lVar11 + 0x18) <= iVar5 - 1U) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar11 = lVar11 + lVar10 * 0x18;
          lVar10 = (long)iVar5;
          *(undefined8 *)(lVar11 + 0x30) = puVar9[2];
          *(undefined8 *)(lVar11 + 0x28) = uVar13;
          *(undefined8 *)(lVar11 + 0x20) = uVar6;
          iVar5 = iVar5 + 1;
          iVar12 = iVar12 + iVar4;
        } while (lVar10 < (long)(ulong)local_74);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      free(__ptr);
      return 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    free(__ptr);
  }
  return 0;
}


