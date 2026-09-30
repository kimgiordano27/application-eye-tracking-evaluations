/*
FUNCTION_NAME: FUN_03262324
ENTRY_POINT: 03262324
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


bool FUN_03262324(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_03d84ba0;
  local_58 = param_3;
  if ((DAT_03ff4908 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d84ba0);
    thunk_FUN_01ad9084(PTR_DAT_03d84ba8);
    thunk_FUN_01ad9084(StringLiteral_2598);
    thunk_FUN_01ad9084(PTR_DAT_03d84af8);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01ad9084(PTR_DAT_03d84bb0);
    DAT_03ff4908 = 1;
  }
  lVar11 = *(long *)puVar1;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = (void *)0x0;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_01ae9ed0(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ae9e74();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ae9e74();
  }
  puVar2 = PTR_DAT_03d84af8;
  *param_4 = **(long **)(lVar10 + 0xb8);
  thunk_FUN_01b4f09c(param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0324cebc();
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar10);
    lVar10 = *(long *)puVar2;
  }
  uVar8 = FUN_0305fb14(uVar7,**(undefined8 **)(lVar10 + 0xb8),0);
  if ((uVar8 & 1) == 0) {
    bVar4 = false;
  }
  else {
    local_68 = 0;
    local_60 = (void *)0x0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar5 = FUN_03273cc0(&local_58,&local_68,0);
    if (iVar5 == 0) {
      local_68 = CONCAT44(local_68._4_4_,local_68._4_4_);
      uVar7 = *(undefined8 *)PTR_DAT_03d84bb0;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0304eec0(uVar7,0);
      puVar1 = StringLiteral_2598;
      if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_2598);
      }
      iVar6 = thunk_FUN_01b3d4a4(uVar7,0);
      local_60 = (void *)FUN_02f7c424(local_68._4_4_ * iVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      iVar5 = FUN_03273cc0(&local_58,&local_68,0);
      if (iVar5 == 0) {
        lVar10 = FUN_01b47fd0(*(undefined8 *)
                               Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__,
                              local_68._4_4_);
        *param_4 = lVar10;
        thunk_FUN_01b4f09c(param_4,lVar10);
        puVar2 = PTR_DAT_03d84ba8;
        if (0 < local_68._4_4_) {
          lVar10 = 0;
          uVar8 = 0;
          pvVar9 = local_60;
          do {
            FUN_0308aab8(&local_70,iVar6,0);
            local_70 = pvVar9;
            pvVar9 = (void *)Oculus_Interaction_HandGrab_ObjectPull__get_Pose(pvVar9,iVar6,0);
            pvVar3 = local_70;
            lVar11 = *(long *)puVar1;
            lVar12 = *param_4;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar11);
            }
            uVar13 = FUN_01f0ff60(pvVar3,*(undefined8 *)puVar2);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            *(undefined4 *)(lVar12 + lVar10 + 0x20) = uVar13;
            *(undefined4 *)(lVar12 + lVar10 + 0x24) = param_2;
            uVar8 = uVar8 + 1;
            lVar10 = lVar10 + 8;
          } while ((long)uVar8 < (long)local_68._4_4_);
        }
        pvVar9 = local_60;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        free(pvVar9);
        iVar5 = 0;
      }
    }
    bVar4 = iVar5 == 0;
  }
  return bVar4;
}


