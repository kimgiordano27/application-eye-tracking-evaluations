/*
FUNCTION_NAME: FUN_036d2150
ENTRY_POINT: 036d2150
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


long FUN_036d2150(undefined4 param_1,long param_2,ulong param_3,uint param_4,int param_5,
                 undefined1 *param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long local_68;
  
  if ((DAT_03ff759f & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9d1d0);
    thunk_FUN_01ad9084(StringLiteral_669);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb10);
    thunk_FUN_01ad9084(PTR_DAT_03d9d0d0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb18);
    DAT_03ff759f = 1;
  }
  puVar2 = PTR_DAT_03d9d1d0;
  *param_6 = 0;
  local_68 = 0;
  if (((param_4 >> 1 & 1) == 0) && (param_5 == 400)) {
    if (param_2 == 0) goto LAB_036d250c;
  }
  else {
    if (param_2 == 0) goto LAB_036d250c;
    lVar4 = *(long *)(param_2 + 0x198);
    if (param_5 < 0x191) {
      if (param_5 < 0xc9) {
        lVar6 = 2;
        if (param_5 != 200) {
          lVar6 = 4;
        }
        if (param_5 == 100) {
          lVar6 = 1;
        }
      }
      else {
        lVar6 = 3;
        if (param_5 != 300) {
          lVar6 = 4;
        }
      }
    }
    else if (param_5 < 0x259) {
      lVar7 = 6;
      if (param_5 != 600) {
        lVar7 = 4;
      }
      lVar6 = 5;
      if (param_5 != 500) {
        lVar6 = lVar7;
      }
    }
    else if (param_5 == 700) {
      lVar6 = 7;
    }
    else if (param_5 == 800) {
      lVar6 = 8;
    }
    else if (param_5 == 900) {
      lVar6 = 9;
    }
    else {
      lVar6 = 4;
    }
    if (lVar4 == 0) goto LAB_036d250c;
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar4 = lVar4 + lVar6 * 0x10;
    plVar8 = (long *)(lVar4 + 0x20);
    if ((param_4 & 2) != 0) {
      plVar8 = (long *)(lVar4 + 0x28);
    }
    lVar4 = *plVar8;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_036d250c;
      lVar6 = *(long *)(lVar4 + 200);
      if (lVar6 == 0) {
        FUN_036c8114(lVar4);
        lVar6 = *(long *)(lVar4 + 200);
        if (lVar6 == 0) goto LAB_036d250c;
      }
      uVar5 = FUN_02630bd0(lVar6,param_1,&local_68,*(undefined8 *)puVar2);
      if (((uVar5 & 1) != 0) ||
         ((*(int *)(lVar4 + 0x48) == 1 &&
          (uVar5 = FUN_036cb280(lVar4,param_1,&local_68), (uVar5 & 1) != 0)))) {
        *param_6 = 1;
        return local_68;
      }
    }
  }
  lVar4 = *(long *)(param_2 + 200);
  if (lVar4 == 0) {
    FUN_036c8114(param_2);
    lVar4 = *(long *)(param_2 + 200);
    if (lVar4 == 0) {
LAB_036d250c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  uVar5 = FUN_02630bd0(lVar4,param_1,&local_68,*(undefined8 *)puVar2);
  lVar4 = local_68;
  if ((((uVar5 & 1) == 0) &&
      (((*(int *)(param_2 + 0x48) != 1 ||
        (uVar5 = FUN_036cb280(param_2,param_1,&local_68), lVar4 = local_68, (uVar5 & 1) == 0)) &&
       (puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar4 = 0,
       local_68 == 0)))) && ((param_3 & 1) != 0)) {
    lVar4 = *(long *)(param_2 + 0x138);
    if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x18), 0 < iVar1)) {
      iVar9 = 0;
      do {
        lVar6 = FUN_02b59714(lVar4,iVar9,*(undefined8 *)PTR_DAT_03d9d0d0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar5 = FUN_03922f24(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) goto LAB_036d250c;
          iVar3 = *(int *)(lVar6 + 0x18);
          plVar8 = (long *)PTR_DAT_03d9cb18;
          if (iVar3 == 0) {
            iVar3 = FUN_03922ce0(lVar6,0);
            plVar8 = (long *)PTR_DAT_03d9cb18;
            *(int *)(lVar6 + 0x18) = iVar3;
          }
          lVar7 = *plVar8;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar7 = *plVar8;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) goto LAB_036d250c;
          uVar5 = FUN_028f8a44(lVar7,iVar3,*(undefined8 *)StringLiteral_669);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_2 + 0x1c0) == 0) goto LAB_036d250c;
            FUN_028f8a44(*(long *)(param_2 + 0x1c0),iVar3,*(undefined8 *)StringLiteral_669);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            local_68 = FUN_036d2150(param_1,lVar6,1,param_4,param_5,param_6);
            if (local_68 != 0) {
              return local_68;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar1 != iVar9);
    }
    lVar4 = 0;
  }
  return lVar4;
}


