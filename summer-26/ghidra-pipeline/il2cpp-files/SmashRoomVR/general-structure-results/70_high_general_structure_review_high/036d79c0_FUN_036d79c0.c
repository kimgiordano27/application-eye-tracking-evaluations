/*
FUNCTION_NAME: FUN_036d79c0
ENTRY_POINT: 036d79c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_10;telemetry_or_network_hits_8
*/


void FUN_036d79c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined8 local_38;
  
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ff75f5 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff75f5 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_03b26f4c(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar12 = FUN_03922f24(uVar11,0,0);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar13 = FUN_03b26f4c(0);
    if (lVar13 == 0) {
LAB_036d7db0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar15 = *(undefined8 *)(lVar13 + 0x40);
    uVar11 = FUN_0391c2b8(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar12 = FUN_0391f968(uVar15,uVar11,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar13 = FUN_03b26f4c(0);
      uVar11 = FUN_0391c2b8(param_1,0);
      if (lVar13 == 0) goto LAB_036d7db0;
      FUN_03b22be0(lVar13,uVar11,0);
    }
    uVar12 = FUN_039261f0(0);
    if (((uVar12 & 1) == 0) || (uVar12 = FUN_036d3614(param_1), (uVar12 & 1) != 0)) {
      uVar12 = FUN_039261f0(0);
      if (((uVar12 & 1) == 0) && (*(char *)(param_1 + 0x230) == '\0')) {
        uVar11 = FUN_036d2ec0();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar12 = FUN_0391f968(uVar11,0,0);
        if ((uVar12 & 1) != 0) {
          plVar14 = (long *)FUN_036d2ec0();
          if (plVar14 == (long *)0x0) goto LAB_036d7db0;
          (**(code **)(*plVar14 + 0x268))(plVar14,1,*(undefined8 *)(*plVar14 + 0x270));
        }
      }
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        FUN_036d6aac(param_1);
      }
    }
    else {
      uVar11 = FUN_036d2ec0();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar12 = FUN_0391f968(uVar11,0,0);
      if ((uVar12 & 1) != 0) {
        plVar14 = (long *)FUN_036d2ec0();
        if (plVar14 == (long *)0x0) goto LAB_036d7db0;
        uVar12 = (**(code **)(*plVar14 + 0x2f8))(plVar14,*(undefined8 *)(*plVar14 + 0x300));
        if ((uVar12 & 1) != 0) {
          uVar4 = FUN_036d34d0(param_1);
          FUN_03926528(uVar4 & 1,0);
        }
      }
      uVar12 = FUN_036d3614(param_1);
      if (((uVar12 & 1) == 0) && (*(char *)(param_1 + 0x230) == '\0')) {
        iVar18 = *(int *)(param_1 + 0x184);
        if (iVar18 != 2) {
          uVar11 = *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        }
        else {
          uVar11 = *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        }
        uVar11 = FUN_03926364(*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x18c),
                              iVar18 == 1,*(int *)(param_1 + 400) - 1U < 2,iVar18 == 2,0,uVar11,
                              *(undefined4 *)(param_1 + 0x1ac),0);
        *(undefined8 *)(param_1 + 0x100) = uVar11;
        thunk_FUN_01b4f09c((long *)(param_1 + 0x100),uVar11);
        if (*(char *)(param_1 + 0x2c8) != '\0') {
          FUN_036d6aac(param_1);
        }
        if (*(long *)(param_1 + 0x100) != 0) {
          iVar18 = *(int *)(param_1 + 0x234);
          iVar5 = FUN_036d3064(param_1);
          iVar17 = *(int *)(param_1 + 0x238);
          iVar6 = FUN_036d3064(param_1);
          if (iVar5 + iVar18 < iVar6 + iVar17) {
            iVar18 = *(int *)(param_1 + 0x238);
            iVar5 = FUN_036d3064(param_1);
            iVar17 = *(int *)(param_1 + 0x234);
          }
          else {
            iVar18 = *(int *)(param_1 + 0x234);
            iVar5 = FUN_036d3064(param_1);
            iVar17 = *(int *)(param_1 + 0x238);
          }
          iVar7 = FUN_036d3064(param_1);
          lVar16 = *(long *)(param_1 + 0x100);
          iVar6 = *(int *)(param_1 + 0x234);
          iVar8 = FUN_036d3064(param_1);
          iVar10 = *(int *)(param_1 + 0x238);
          iVar9 = FUN_036d3064(param_1);
          lVar13 = 0x234;
          if (iVar9 + iVar10 <= iVar8 + iVar6) {
            lVar13 = 0x238;
          }
          iVar6 = *(int *)(param_1 + lVar13);
          iVar10 = FUN_036d3064(param_1);
          local_38 = 0;
          FUN_03921288(&local_38,iVar10 + iVar6,((iVar5 + iVar18) - iVar17) - iVar7,0);
          if (lVar16 == 0) goto LAB_036d7db0;
          FUN_0392676c(lVar16,local_38,0);
        }
      }
      bVar3 = FUN_039262d0(0);
      *(byte *)(param_1 + 0x2a9) = bVar3 & 1;
    }
    *(undefined1 *)(param_1 + 0x270) = 1;
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x220);
    thunk_FUN_01b4f09c(param_1 + 0x290);
    *(undefined1 *)(param_1 + 0x298) = 0;
    FUN_036d6a64(param_1);
    FUN_036d3a30(param_1);
  }
  return;
}


