/*
FUNCTION_NAME: FUN_036d7324
ENTRY_POINT: 036d7324
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


void FUN_036d7324(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined2 local_44 [2];
  
  if ((DAT_03ff75d0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9d5c8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff75d0 = 1;
  }
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  local_44[0] = 0;
  if (*(char *)((long)param_1 + 0x271) == '\0') {
    if (((char)param_1[0x4e] == '\0') && (*(char *)((long)param_1 + 0x2cb) != '\0')) {
      if (*(int *)(*(long *)
                    Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03b26f4c(0);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar7 = FUN_0391f968(uVar8,0,0);
      lVar10 = 0;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar10 = FUN_03b26f4c(0);
        if (lVar10 == 0) goto LAB_036d79bc;
        lVar10 = *(long *)(lVar10 + 0x40);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03922f24(lVar10,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)((long)param_1 + 0x2ca) != '\0')) goto LAB_036d756c;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(lVar10,0,0);
      if ((uVar7 & 1) != 0) {
        uVar8 = FUN_0391c2b8(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar7 = FUN_0391f968(lVar10,uVar8,0);
        if ((uVar7 & 1) != 0) {
          lVar11 = param_1[0x5a];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_03922f24(lVar10,lVar11,0);
          if ((uVar7 & 1) != 0) {
            return;
          }
          param_1[0x5a] = lVar10;
          thunk_FUN_01b4f09c(param_1 + 0x5a,lVar10);
          lVar11 = param_1[0x2a];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_03923030(lVar11,0);
          if ((uVar7 & 1) != 0) {
            if (param_1[0x2a] == 0) goto LAB_036d79bc;
            uVar8 = FUN_0391c2b8(param_1[0x2a],0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar7 = FUN_03922f24(lVar10,uVar8,0);
            if ((uVar7 & 1) != 0) {
              return;
            }
          }
          if (*(char *)((long)param_1 + 0x2ca) != '\0') goto LAB_036d756c;
          if (lVar10 != 0) {
            uVar8 = FUN_01ed712c(lVar10,*(undefined8 *)PTR_DAT_03d9d5c8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar7 = FUN_0391f968(uVar8,0,0);
            if ((uVar7 & 1) == 0) {
              return;
            }
            goto LAB_036d756c;
          }
          goto LAB_036d79bc;
        }
      }
      if ((param_1[0x5e] != 0) && (iVar4 = FUN_0393a464(param_1[0x5e],0), iVar4 == 0)) {
        if (param_1[0x5e] == 0) goto LAB_036d79bc;
        iVar4 = FUN_0393a714(param_1[0x5e],0);
        if (iVar4 == 0) {
          fVar12 = (float)FUN_03925d1c(0);
          fVar13 = *(float *)(param_1 + 0x56);
          *(float *)(param_1 + 0x56) = fVar12;
          if (fVar12 < fVar13 + *(float *)((long)param_1 + 0x2b4)) {
LAB_036d756c:
            FUN_036d7db4(param_1);
            return;
          }
        }
      }
    }
  }
  else {
    if ((char)param_1[0x4e] == '\0') {
      FUN_036d79c0(param_1);
      *(undefined1 *)((long)param_1 + 0x271) = 0;
      return;
    }
    *(undefined1 *)((long)param_1 + 0x271) = 0;
  }
  uVar7 = FUN_036d70d8(param_1);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_036d3844(), (uVar7 & 1) == 0)) &&
     ((char)param_1[0x4e] != '\0')) {
    FUN_036d5d64(param_1);
    if (param_1[0x20] != 0) {
      iVar4 = FUN_039265e4(param_1[0x20],0);
      lVar10 = param_1[0x20];
      if (iVar4 == 0) {
        if (lVar10 == 0) goto LAB_036d79bc;
        lVar10 = FUN_039264a8(lVar10,0);
        uVar7 = FUN_02ee6670(param_1[0x44],lVar10,0);
        if ((uVar7 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x194) != '\0') {
            if (*(int *)(*(long *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar4 = UnityEngine_UIElements_StyleCache__SetValue(0);
            if (iVar4 == 0xb) {
              FUN_036d71dc(param_1);
            }
          }
        }
        else {
          plVar1 = param_1 + 0x44;
          if ((char)param_1[0x46] == '\0') {
            *plVar1 = *(long *)
                       Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
            thunk_FUN_01b4f09c(plVar1);
            puVar3 = 
            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
            ;
            if (lVar10 == 0) goto LAB_036d79bc;
            if (0 < *(int *)(lVar10 + 0x10)) {
              iVar4 = 0;
              do {
                uVar5 = FUN_02ee1ff0(lVar10,iVar4,0);
                uVar6 = 10;
                if ((uVar5 & 0xffff) != 3 && (uVar5 & 0xffff) != 0xd) {
                  uVar6 = uVar5;
                }
                local_44[0] = (undefined2)uVar6;
                lVar11 = param_1[0x3e];
                if (lVar11 == 0) {
                  if ((int)param_1[0x33] != 0) {
                    lVar11 = *plVar1;
                    if (lVar11 != 0) {
                      uVar6 = FUN_036d7e64(param_1,lVar11,*(undefined4 *)(lVar11 + 0x10));
                      goto LAB_036d7834;
                    }
                    goto LAB_036d79bc;
                  }
                }
                else {
                  lVar9 = *plVar1;
                  if (lVar9 == 0) goto LAB_036d79bc;
                  uVar6 = (**(code **)(lVar11 + 0x18))
                                    (*(undefined8 *)(lVar11 + 0x40),lVar9,
                                     *(undefined4 *)(lVar9 + 0x10),uVar6,
                                     *(undefined8 *)(lVar11 + 0x28));
LAB_036d7834:
                  local_44[0] = (undefined2)uVar6;
                }
                if (((uVar6 & 0xffff) == 10) && ((int)param_1[0x32] == 1)) {
                  if (param_1[0x20] == 0) goto LAB_036d79bc;
                  FUN_039264e4(param_1[0x20],param_1[0x44],0);
                  (**(code **)(*param_1 + 0x5c8))(param_1,0,*(undefined8 *)(*param_1 + 0x5d0));
                  goto LAB_036d798c;
                }
                if ((uVar6 & 0xffff) != 0) {
                  lVar11 = *plVar1;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar8 = FUN_02fcd73c(local_44,0);
                  lVar11 = FUN_02edd6e8(lVar11,uVar8,0);
                  *plVar1 = lVar11;
                  thunk_FUN_01b4f09c(plVar1,lVar11);
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(lVar10 + 0x10));
            }
            iVar4 = *(int *)((long)param_1 + 0x1ac);
            if (0 < iVar4) {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_036d79bc;
              if (iVar4 < *(int *)(lVar11 + 0x10)) {
                lVar11 = FUN_02ee8330(lVar11,0,iVar4,0);
                *plVar1 = lVar11;
                thunk_FUN_01b4f09c(plVar1,lVar11);
              }
            }
            FUN_036d71dc(param_1);
            uVar7 = FUN_02ee6670(param_1[0x44],lVar10,0);
            if ((uVar7 & 1) != 0) {
              if (param_1[0x20] == 0) goto LAB_036d79bc;
              FUN_039264e4(param_1[0x20],*plVar1,0);
            }
            FUN_036d3a30(param_1);
            FUN_036d3efc(param_1);
          }
          else {
            if (param_1[0x20] == 0) goto LAB_036d79bc;
            FUN_039264e4(param_1[0x20],*plVar1,0);
          }
        }
        if (param_1[0x20] == 0) {
          return;
        }
        iVar4 = FUN_039265e4(param_1[0x20],0);
        if (iVar4 == 0) {
          return;
        }
        if (param_1[0x20] == 0) goto LAB_036d79bc;
        iVar4 = FUN_039265e4(param_1[0x20],0);
        if (iVar4 == 2) {
          *(undefined1 *)(param_1 + 0x53) = 1;
        }
      }
      else if (lVar10 != 0) {
        if ((char)param_1[0x46] == '\0') {
          uVar8 = FUN_039264a8(lVar10,0);
          FUN_036d38e8(param_1,uVar8,1);
          lVar10 = param_1[0x20];
          if (lVar10 == 0) goto LAB_036d79bc;
        }
        iVar4 = FUN_039265e4(lVar10,0);
        if (iVar4 == 3) {
          FUN_036d7df0(param_1);
        }
        if (param_1[0x20] == 0) {
LAB_036d79bc:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar4 = FUN_039265e4(param_1[0x20],0);
        if (iVar4 == 2) {
          *(undefined1 *)((long)param_1 + 0x2cc) = 1;
          *(undefined1 *)(param_1 + 0x53) = 1;
          FUN_036d7df0(param_1);
        }
        if (param_1[0x20] == 0) goto LAB_036d79bc;
        iVar4 = FUN_039265e4(param_1[0x20],0);
        if (iVar4 == 1) {
          *(undefined1 *)((long)param_1 + 0x2cc) = 1;
          (**(code **)(*param_1 + 0x5c8))(param_1,0,*(undefined8 *)(*param_1 + 0x5d0));
          FUN_036d7df0(param_1);
        }
      }
    }
LAB_036d798c:
    (**(code **)(*param_1 + 0x388))(param_1,0,*(undefined8 *)(*param_1 + 0x390));
  }
  return;
}


