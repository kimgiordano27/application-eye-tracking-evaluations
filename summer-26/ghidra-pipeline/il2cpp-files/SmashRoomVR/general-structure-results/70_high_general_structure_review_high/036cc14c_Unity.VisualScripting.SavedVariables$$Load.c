/*
FUNCTION_NAME: Unity.VisualScripting.SavedVariables$$Load
ENTRY_POINT: 036cc14c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


bool Unity_VisualScripting_SavedVariables__Load(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int iVar10;
  undefined8 *unaff_x29;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  
code_r0x036cc14c:
  uVar4 = thunk_FUN_01afaadc(*param_1);
  FUN_028f7840(uVar4,*(undefined8 *)StringLiteral_679);
  lVar5 = *unaff_x19;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *unaff_x19;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40);
  *puVar6 = uVar4;
  thunk_FUN_01b4f09c(puVar6,uVar4);
  do {
    lVar5 = *unaff_x19;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *unaff_x19;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    uVar3 = FUN_03922ce0();
    if (lVar5 == 0) {
LAB_036cc53c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_028f8a44(lVar5,uVar3,*unaff_x21);
    lVar5 = *(long *)(unaff_x23 + 0x138);
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
      iVar10 = 0;
      do {
        uVar4 = FUN_02b59714(lVar5,iVar10,*unaff_x29);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar7 = FUN_0391f968(uVar4,0,0);
        if ((uVar7 & 1) == 0) break;
        if ((*(long *)(unaff_x23 + 0x138) == 0) ||
           (lVar5 = FUN_02b59714(*(long *)(unaff_x23 + 0x138),iVar10,*unaff_x29), lVar5 == 0))
        goto LAB_036cc53c;
        uVar3 = FUN_03922ce0(lVar5,0);
        lVar8 = *unaff_x19;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar8);
          lVar8 = *unaff_x19;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
        if (lVar8 == 0) goto LAB_036cc53c;
        uVar7 = FUN_028f8a44(lVar8,uVar3,*unaff_x21);
        if (((uVar7 & 1) != 0) &&
           (uVar7 = FUN_036cbb68(lVar5,unaff_w25,1,unaff_w20 & 1), (uVar7 & 1) != 0))
        goto LAB_036cc4c8;
        lVar5 = *(long *)(unaff_x23 + 0x138);
        if (lVar5 == 0) goto LAB_036cc53c;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar5 + 0x18));
    }
    lVar5 = FUN_036fba04(0);
    if (lVar5 != 0) {
      lVar5 = FUN_036fba04(0);
      if (lVar5 == 0) goto LAB_036cc53c;
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar5 = FUN_036fba04(0);
        if (lVar5 == 0) goto LAB_036cc53c;
        iVar10 = 0;
        while (iVar10 < *(int *)(lVar5 + 0x18)) {
          lVar5 = FUN_036fba04(0);
          if (lVar5 == 0) goto LAB_036cc53c;
          uVar4 = FUN_02b59714(lVar5,iVar10,*unaff_x29);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar7 = FUN_0391f968(uVar4,0,0);
          if ((uVar7 & 1) == 0) break;
          lVar5 = FUN_036fba04(0);
          if ((lVar5 == 0) || (lVar5 = FUN_02b59714(lVar5,iVar10,*unaff_x29), lVar5 == 0))
          goto LAB_036cc53c;
          uVar3 = FUN_03922ce0(lVar5,0);
          lVar8 = *unaff_x19;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar8);
            lVar8 = *unaff_x19;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
          if (lVar8 == 0) goto LAB_036cc53c;
          uVar7 = FUN_028f8a44(lVar8,uVar3,*unaff_x21);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = FUN_036cbb68(lVar5,unaff_w25,1,unaff_w20 & 1), (uVar7 & 1) != 0))
          goto LAB_036cc4c8;
          iVar10 = iVar10 + 1;
          lVar5 = FUN_036fba04(0);
          if (lVar5 == 0) goto LAB_036cc53c;
        }
      }
    }
    uVar4 = FUN_036fb8e4(0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_0391f968(uVar4,0,0);
    if ((uVar7 & 1) == 0) goto LAB_036cc468;
    lVar5 = FUN_036fb8e4(0);
    if (lVar5 == 0) goto LAB_036cc53c;
    uVar3 = FUN_03922ce0(lVar5,0);
    lVar8 = *unaff_x19;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar8);
      lVar8 = *unaff_x19;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
    if (lVar8 == 0) goto LAB_036cc53c;
    uVar7 = FUN_028f8a44(lVar8,uVar3,*unaff_x21);
    if ((uVar7 & 1) == 0) goto LAB_036cc468;
    uVar7 = FUN_036cbb68(lVar5,unaff_w25,1,unaff_w20 & 1);
    if ((uVar7 & 1) == 0) goto LAB_036cc468;
LAB_036cc4c8:
    do {
      unaff_w24 = unaff_w24 + 1;
      if (*(int *)(unaff_x22 + 0x10) <= unaff_w24) {
        lVar5 = *(long *)(unaff_x23 + 0x208);
        if (lVar5 != 0) {
          bVar1 = *(int *)(lVar5 + 0x18) < 1;
          if (!bVar1) {
            uVar4 = FUN_02bce948(lVar5,*(undefined8 *)PTR_DAT_03d97038);
            *in_stack_00000008 = uVar4;
            thunk_FUN_01b4f09c(in_stack_00000008,uVar4);
          }
          return bVar1;
        }
        goto LAB_036cc53c;
      }
      uVar2 = FUN_02ee1ff0();
      if (*(long *)(unaff_x23 + 200) == 0) goto LAB_036cc53c;
      unaff_w25 = uVar2 & 0xffff;
      uVar7 = FUN_0262f638(*(long *)(unaff_x23 + 200),unaff_w25,*(undefined8 *)PTR_DAT_03d9d110);
    } while (((uVar7 & 1) != 0) ||
            ((((unaff_w20 & 1) != 0 && (*(int *)(unaff_x23 + 0x48) == 1)) &&
             (uVar7 = FUN_036cb280(), (uVar7 & 1) != 0))));
    if ((in_stack_00000010 & 0x100000000) == 0) {
LAB_036cc468:
      lVar5 = *(long *)(unaff_x23 + 0x208);
      if (lVar5 == 0) goto LAB_036cc53c;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_03d97158;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_036cc53c;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(uint *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = unaff_w25;
      }
      else {
        FUN_02bccf6c(lVar5,unaff_w25,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_036cc4c8;
    }
    lVar5 = *unaff_x19;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *unaff_x19;
    }
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    param_1 = (undefined8 *)StringLiteral_678;
    if (lVar8 == 0) goto code_r0x036cc14c;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x40);
      if (lVar8 == 0) goto LAB_036cc53c;
    }
    FUN_028f7ed4(lVar8,*(undefined8 *)StringLiteral_3528);
  } while( true );
}


