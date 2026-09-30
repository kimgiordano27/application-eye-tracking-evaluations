/*
FUNCTION_NAME: FUN_03afe93c
ENTRY_POINT: 03afe93c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_8;telemetry_or_network_hits_8
*/


void FUN_03afe93c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ffda1e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db6740);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ffda1e = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03b26f4c(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar7 = FUN_03922f24(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar8 = FUN_03b26f4c(0);
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(lVar8 + 0x40);
    uVar6 = FUN_0391c2b8(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar7 = FUN_0391f968(uVar10,uVar6,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar8 = FUN_03b26f4c(0);
      uVar6 = FUN_0391c2b8(param_1,0);
      if (lVar8 == 0) goto LAB_03afec94;
      FUN_03b22be0(lVar8,uVar6,0);
    }
    puVar3 = PTR_DAT_03db6740;
    lVar8 = *(long *)PTR_DAT_03db6740;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar3;
    }
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 9) == '\0') {
      bVar4 = FUN_039262d0(0);
      bVar4 = bVar4 & 1;
    }
    else {
      bVar4 = 0;
    }
    if (param_1 != 0) {
      *(byte *)(param_1 + 0x210) = bVar4;
      uVar7 = FUN_03afdf20();
      if ((uVar7 & 1) != 0) {
        uVar6 = FUN_03afb578();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar7 = FUN_0391f968(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          plVar9 = (long *)FUN_03afb578();
          if (plVar9 == (long *)0x0) goto LAB_03afec94;
          uVar7 = (**(code **)(*plVar9 + 0x2f8))(plVar9,*(undefined8 *)(*plVar9 + 0x300));
          if ((uVar7 & 1) != 0) {
            uVar5 = FUN_03afbbdc(param_1);
            FUN_03926528(uVar5 & 1,0);
          }
        }
        iVar1 = *(int *)(param_1 + 0x11c);
        if (iVar1 != 2) {
          uVar6 = *(undefined8 *)
                   Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        }
        else {
          uVar6 = *(undefined8 *)
                   Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        }
        uVar6 = FUN_03926364(*(undefined8 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x124),
                             iVar1 == 1,*(int *)(param_1 + 0x128) - 1U < 2,iVar1 == 2,0,uVar6,
                             *(undefined4 *)(param_1 + 0x134),0);
        *(undefined8 *)(param_1 + 0x100) = uVar6;
        thunk_FUN_01b4f09c(param_1 + 0x100);
        if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_03afde34(param_1,0);
        }
      }
      uVar7 = FUN_039261f0(0);
      if (((uVar7 & 1) == 0) || (*(char *)(param_1 + 0x210) != '\0')) {
        uVar6 = FUN_03afb578();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar7 = FUN_0391f968(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          plVar9 = (long *)FUN_03afb578();
          if (plVar9 == (long *)0x0) goto LAB_03afec94;
          (**(code **)(*plVar9 + 0x268))(plVar9,1,*(undefined8 *)(*plVar9 + 0x270));
        }
        lVar8 = *(long *)(param_1 + 0x180);
        if (lVar8 == 0) goto LAB_03afec94;
        *(uint *)(param_1 + 0x194) =
             *(uint *)(lVar8 + 0x10) & ((int)*(uint *)(lVar8 + 0x10) >> 0x1f ^ 0xffffffffU);
        *(uint *)(param_1 + 0x198) = *(uint *)(lVar8 + 0x10) & (int)*(uint *)(lVar8 + 0x10) >> 0x1f;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x180);
      }
      *(undefined1 *)(param_1 + 0x1d0) = 1;
      *(long *)(param_1 + 0x1f8) = lVar8;
      thunk_FUN_01b4f09c(param_1 + 0x1f8);
      *(undefined1 *)(param_1 + 0x200) = 0;
      FUN_03afdc8c(param_1);
      FUN_03afc178(param_1);
      return;
    }
  }
LAB_03afec94:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


