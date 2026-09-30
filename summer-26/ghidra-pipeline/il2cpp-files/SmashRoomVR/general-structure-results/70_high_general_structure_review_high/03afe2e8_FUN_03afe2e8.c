/*
FUNCTION_NAME: FUN_03afe2e8
ENTRY_POINT: 03afe2e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03afe47c) */
/* WARNING: Removing unreachable block (ram,0x03afe880) */

void FUN_03afe2e8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined2 local_44 [2];
  
  if ((DAT_03ffd9fc & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d600);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ffd9fc = 1;
  }
  local_44[0] = 0;
  if (*(char *)((long)param_1 + 0x1d1) != '\0') {
    if ((char)param_1[0x3a] == '\0') {
      FUN_03afe93c(param_1);
      *(undefined1 *)((long)param_1 + 0x1d1) = 0;
      return;
    }
    *(undefined1 *)((long)param_1 + 0x1d1) = 0;
  }
  FUN_03afec98(param_1);
  if ((char)param_1[0x3a] == '\0') {
    return;
  }
  uVar5 = FUN_03afe008(param_1);
  if ((uVar5 & 1) != 0) {
    lVar12 = param_1[0x37];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(lVar12,0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9d600);
      FUN_03b1ff4c(plVar6,0);
      uVar7 = FUN_03afba68(param_1);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar7,uVar7);
      }
      FUN_03b20940(plVar6,uVar7,0);
      lVar12 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03afe464;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ae9f78(plVar6,*(long *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03afe464:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
      lVar12 = param_1[0x37];
      uVar7 = FUN_03afba68(param_1);
      if (lVar12 == 0) goto LAB_03afe87c;
      FUN_03af8c9c(lVar12,uVar7,0);
    }
    FUN_03afda08(param_1);
  }
  if ((char)param_1[0x3a] == '\0') {
    return;
  }
  uVar5 = FUN_039261f0(0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((char)param_1[0x42] != '\0') {
    return;
  }
  if (param_1[0x20] == 0) goto LAB_03afe84c;
  iVar2 = FUN_039265e4(param_1[0x20],0);
  lVar12 = param_1[0x20];
  if (iVar2 == 0) {
    if (lVar12 == 0) goto LAB_03afe87c;
    lVar12 = FUN_039264a8(lVar12,0);
    uVar5 = FUN_02ee6670(param_1[0x30],lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)param_1 + 300) != '\0') {
        if (param_1[0x20] == 0) goto LAB_03afe87c;
        uVar5 = FUN_039266a0(param_1[0x20],0);
        puVar1 = 
        Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
        ;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          iVar2 = UnityEngine_UIElements_StyleCache__SetValue(0);
          if (iVar2 != 8) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar2 = UnityEngine_UIElements_StyleCache__SetValue(0);
            if (iVar2 != 0x1f) {
              lVar12 = param_1[0x20];
              uVar7 = FUN_03afe088(param_1);
              if (lVar12 == 0) goto LAB_03afe87c;
              FUN_0392676c(lVar12,uVar7,0);
              goto LAB_03afe7f4;
            }
          }
        }
      }
      if (param_1[0x20] == 0) goto LAB_03afe87c;
      uVar5 = FUN_03926664(param_1[0x20],0);
      if ((uVar5 & 1) != 0) {
        FUN_03afe204(param_1);
      }
    }
    else {
      plVar6 = param_1 + 0x30;
      if ((char)param_1[0x32] == '\0') {
        *plVar6 = *(long *)
                   Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        thunk_FUN_01b4f09c(plVar6);
        puVar1 = 
        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
        ;
        if (lVar12 == 0) goto LAB_03afe87c;
        if (0 < *(int *)(lVar12 + 0x10)) {
          iVar2 = 0;
          do {
            uVar3 = FUN_02ee1ff0(lVar12,iVar2,0);
            uVar4 = 10;
            if ((uVar3 & 0xffff) != 3 && (uVar3 & 0xffff) != 0xd) {
              uVar4 = uVar3;
            }
            local_44[0] = (undefined2)uVar4;
            lVar10 = param_1[0x2a];
            if (lVar10 == 0) {
              if ((int)param_1[0x26] != 0) {
                lVar10 = *plVar6;
                if (lVar10 != 0) {
                  uVar4 = FUN_03aff218(param_1,lVar10,*(undefined4 *)(lVar10 + 0x10));
                  goto LAB_03afe688;
                }
                goto LAB_03afe87c;
              }
            }
            else {
              lVar9 = *plVar6;
              if (lVar9 == 0) goto LAB_03afe87c;
              uVar4 = (**(code **)(lVar10 + 0x18))
                                (*(undefined8 *)(lVar10 + 0x40),lVar9,*(undefined4 *)(lVar9 + 0x10),
                                 uVar4,*(undefined8 *)(lVar10 + 0x28));
LAB_03afe688:
              local_44[0] = (undefined2)uVar4;
            }
            if (((uVar4 & 0xffff) == 10) && ((int)param_1[0x25] == 1)) {
              if (param_1[0x20] == 0) goto LAB_03afe87c;
              FUN_039264e4(param_1[0x20],param_1[0x30],0);
              goto LAB_03afe844;
            }
            if ((uVar4 & 0xffff) != 0) {
              lVar10 = *plVar6;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar7 = FUN_02fcd73c(local_44,0);
              lVar10 = FUN_02edd6e8(lVar10,uVar7,0);
              *plVar6 = lVar10;
              thunk_FUN_01b4f09c(plVar6,lVar10);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(lVar12 + 0x10));
        }
        iVar2 = *(int *)((long)param_1 + 0x134);
        if (0 < iVar2) {
          lVar10 = *plVar6;
          if (lVar10 == 0) goto LAB_03afe87c;
          if (iVar2 < *(int *)(lVar10 + 0x10)) {
            lVar10 = FUN_02ee8330(lVar10,0,iVar2,0);
            *plVar6 = lVar10;
            thunk_FUN_01b4f09c(plVar6,lVar10);
          }
        }
        if (param_1[0x20] == 0) goto LAB_03afe87c;
        uVar5 = FUN_03926664(param_1[0x20],0);
        if ((uVar5 & 1) == 0) {
          lVar10 = *plVar6;
          if (lVar10 == 0) goto LAB_03afe87c;
          iVar2 = *(int *)(lVar10 + 0x10);
          piVar11 = (int *)((long)param_1 + 0x194);
          *(int *)(param_1 + 0x33) = iVar2;
          if (iVar2 < 0) {
            piVar11[0] = 0;
            piVar11[1] = 0;
          }
          else {
            *piVar11 = iVar2;
          }
        }
        else {
          FUN_03afe204(param_1);
          lVar10 = param_1[0x30];
        }
        uVar5 = FUN_02ee6670(lVar10,lVar12,0);
        if ((uVar5 & 1) != 0) {
          if (param_1[0x20] == 0) goto LAB_03afe87c;
          FUN_039264e4(param_1[0x20],*plVar6,0);
        }
        FUN_03afc0f8(param_1);
        FUN_03afc178(param_1);
      }
      else {
        if (param_1[0x20] == 0) goto LAB_03afe87c;
        FUN_039264e4(param_1[0x20],*plVar6,0);
      }
    }
LAB_03afe7f4:
    if (param_1[0x20] == 0) goto LAB_03afe87c;
    iVar2 = FUN_039265e4(param_1[0x20],0);
    if (iVar2 == 0) {
      return;
    }
    lVar12 = param_1[0x20];
joined_r0x03afe80c:
    if (lVar12 == 0) goto LAB_03afe87c;
  }
  else {
    if (lVar12 == 0) goto LAB_03afe84c;
    if ((char)param_1[0x32] == '\0') {
      uVar7 = FUN_039264a8(lVar12,0);
      FUN_03afbcf0(param_1,uVar7,1);
      lVar12 = param_1[0x20];
      goto joined_r0x03afe80c;
    }
  }
  iVar2 = FUN_039265e4(lVar12,0);
  if (iVar2 == 2) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    if (param_1[0x20] == 0) {
LAB_03afe87c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar2 = FUN_039265e4(param_1[0x20],0);
    if (iVar2 == 1) {
LAB_03afe844:
      FUN_03aff198(param_1);
    }
  }
LAB_03afe84c:
  (**(code **)(*param_1 + 0x388))(param_1,0,*(undefined8 *)(*param_1 + 0x390));
  return;
}


