/*
FUNCTION_NAME: FUN_039774a4
ENTRY_POINT: 039774a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


long FUN_039774a4(undefined4 param_1,long param_2,ulong param_3,uint param_4,int param_5,
                 undefined1 *param_6)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long local_68;
  
  if ((DAT_03ffc5e3 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dacdc0);
    thunk_FUN_01ad9084(PTR_DAT_03dacdc8);
    thunk_FUN_01ad9084(PTR_DAT_03dacdb8);
    thunk_FUN_01ad9084(StringLiteral_669);
    thunk_FUN_01ad9084(PTR_DAT_03dacc80);
    thunk_FUN_01ad9084(PTR_DAT_03dacc88);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc5e3 = 1;
  }
  puVar5 = PTR_DAT_03dacdc8;
  *param_6 = 0;
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_68 = 0;
  if (((param_4 >> 1 & 1) == 0) && (param_5 == 400)) {
    if (param_2 == 0) goto LAB_039778e4;
LAB_03977710:
    lVar8 = *(long *)(param_2 + 0x130);
    if (lVar8 == 0) {
      FUN_0396d9c4(param_2);
      lVar8 = *(long *)(param_2 + 0x130);
    }
    if (lVar8 == 0) goto LAB_039778e4;
    uVar9 = FUN_02630bd0(lVar8,param_1,&local_68,*(undefined8 *)puVar5);
    if ((uVar9 & 1) != 0) {
      if (local_68 == 0) {
LAB_039778e4:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar12 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(uVar12,0,0);
      if ((uVar9 & 1) != 0) {
        return local_68;
      }
      lVar8 = *(long *)(param_2 + 0x130);
      if (lVar8 == 0) {
        FUN_0396d9c4(param_2);
        lVar8 = *(long *)(param_2 + 0x130);
      }
      if (lVar8 == 0) goto LAB_039778e4;
      FUN_026308cc(lVar8,param_1,*(undefined8 *)PTR_DAT_03dacdc0);
    }
    if ((((1 < *(int *)(param_2 + 0xa8) - 1U) ||
         (uVar9 = FUN_03970e38(param_2,param_1,&local_68,0), lVar8 = local_68, (uVar9 & 1) == 0)) &&
        (puVar6 = PTR_DAT_03dacc88, puVar5 = StringLiteral_669,
        puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar8 = 0,
        local_68 == 0)) && ((param_3 & 1) != 0)) {
      lVar8 = *(long *)(param_2 + 0x178);
      if ((lVar8 != 0) && (iVar3 = *(int *)(lVar8 + 0x18), 0 < iVar3)) {
        iVar11 = 0;
        do {
          lVar10 = FUN_02b59714(lVar8,iVar11,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar4);
          }
          uVar9 = FUN_03922f24(lVar10,0,0);
          if ((uVar9 & 1) == 0) {
            if (lVar10 == 0) goto LAB_039778e4;
            iVar7 = *(int *)(lVar10 + 0x20);
            if (iVar7 == 0) {
              iVar7 = FUN_03922ce0(lVar10,0);
              *(int *)(lVar10 + 0x20) = iVar7;
            }
            if (**(long **)(*(long *)PTR_DAT_03dacdb8 + 0xb8) == 0) goto LAB_039778e4;
            uVar9 = FUN_028f8a44(**(long **)(*(long *)PTR_DAT_03dacdb8 + 0xb8),iVar7,
                                 *(undefined8 *)puVar5);
            if (((uVar9 & 1) != 0) &&
               (local_68 = FUN_039774a4(param_1,lVar10,1,param_4,param_5,param_6), local_68 != 0)) {
              return local_68;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar3 != iVar11);
      }
      lVar8 = 0;
    }
  }
  else {
    if (param_2 == 0) goto LAB_039778e4;
    lVar8 = *(long *)(param_2 + 0x180);
    if (param_5 < 0x191) {
      if (param_5 < 0xc9) {
        lVar10 = 2;
        if (param_5 != 200) {
          lVar10 = 4;
        }
        if (param_5 == 100) {
          lVar10 = 1;
        }
      }
      else {
        lVar10 = 3;
        if (param_5 != 300) {
          lVar10 = 4;
        }
      }
    }
    else if (param_5 < 0x259) {
      lVar1 = 6;
      if (param_5 != 600) {
        lVar1 = 4;
      }
      lVar10 = 5;
      if (param_5 != 500) {
        lVar10 = lVar1;
      }
    }
    else if (param_5 == 700) {
      lVar10 = 7;
    }
    else if (param_5 == 800) {
      lVar10 = 8;
    }
    else if (param_5 == 900) {
      lVar10 = 9;
    }
    else {
      lVar10 = 4;
    }
    if (lVar8 == 0) goto LAB_039778e4;
    if (*(uint *)(lVar8 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar8 = lVar8 + lVar10 * 0x10;
    plVar2 = (long *)(lVar8 + 0x20);
    if ((param_4 & 2) != 0) {
      plVar2 = (long *)(lVar8 + 0x28);
    }
    lVar8 = *plVar2;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_0391f968(lVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_03977710;
    if (lVar8 == 0) goto LAB_039778e4;
    lVar10 = *(long *)(lVar8 + 0x130);
    if (lVar10 == 0) {
      FUN_0396d9c4(lVar8);
      lVar10 = *(long *)(lVar8 + 0x130);
    }
    if (lVar10 == 0) goto LAB_039778e4;
    uVar9 = FUN_02630bd0(lVar10,param_1,&local_68,*(undefined8 *)puVar5);
    if ((uVar9 & 1) == 0) {
LAB_039776dc:
      if ((1 < *(int *)(lVar8 + 0xa8) - 1U) ||
         (uVar9 = FUN_03970e38(lVar8,param_1,&local_68,0), (uVar9 & 1) == 0)) goto LAB_03977710;
    }
    else {
      if (local_68 == 0) goto LAB_039778e4;
      uVar12 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(uVar12,0,0);
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(lVar8 + 0x130);
        if (lVar10 == 0) {
          FUN_0396d9c4(lVar8);
          lVar10 = *(long *)(lVar8 + 0x130);
        }
        if (lVar10 == 0) goto LAB_039778e4;
        FUN_026308cc(lVar10,param_1,*(undefined8 *)PTR_DAT_03dacdc0);
        goto LAB_039776dc;
      }
    }
    *param_6 = 1;
    lVar8 = local_68;
  }
  return lVar8;
}


