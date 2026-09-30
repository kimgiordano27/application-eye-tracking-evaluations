/*
FUNCTION_NAME: FUN_02e3a2cc
ENTRY_POINT: 02e3a2cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


long FUN_02e3a2cc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_34;
  
  if ((DAT_03ff0239 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_4864);
    thunk_FUN_01ad9084(StringLiteral_4865);
    thunk_FUN_01ad9084(StringLiteral_4866);
    thunk_FUN_01ad9084(StringLiteral_4867);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4868);
    DAT_03ff0239 = 1;
  }
  iVar1 = *(int *)(param_1 + 0xcc);
  FUN_02e3a8b4(param_1);
  if ((iVar1 == 4) && (*(int *)(param_1 + 0xcc) != 4)) {
    local_34 = *(int *)(param_1 + 0xcc);
    uVar3 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_4867,&local_34);
    uVar3 = FUN_02ede300(*(undefined8 *)StringLiteral_4868,uVar3,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
    FUN_038f2acc(uVar3,0);
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  switch(param_2) {
  default:
    puVar9 = (undefined8 *)(param_1 + 0x78);
    puVar8 = (undefined4 *)(param_1 + 0xa0);
    puVar10 = (undefined4 *)(param_1 + 0xa4);
    break;
  case 2:
    puVar9 = (undefined8 *)(param_1 + 0x68);
    puVar8 = (undefined4 *)(param_1 + 0x98);
    puVar10 = (undefined4 *)(param_1 + 0x9c);
    break;
  case 3:
    puVar8 = (undefined4 *)(param_1 + 0xa8);
    puVar10 = (undefined4 *)(param_1 + 0xac);
    puVar9 = (undefined8 *)(param_1 + 0x80);
    break;
  case 4:
    puVar8 = (undefined4 *)(param_1 + 0xb0);
    puVar10 = (undefined4 *)(param_1 + 0xb4);
    puVar9 = (undefined8 *)(param_1 + 0x88);
    break;
  case 5:
    puVar9 = (undefined8 *)(param_1 + 0x90);
    puVar8 = (undefined4 *)(param_1 + 0xb8);
    puVar10 = (undefined4 *)(param_1 + 0xbc);
    break;
  case 6:
    puVar8 = (undefined4 *)(param_1 + 0x98);
    puVar10 = (undefined4 *)(param_1 + 0x9c);
    puVar9 = (undefined8 *)(param_1 + 0x70);
  }
  uVar3 = *puVar9;
  uVar12 = *puVar8;
  uVar13 = *puVar10;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
  }
  if (param_5 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x158);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x158) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x158),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x168);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x168) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x168),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x148);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x148),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x178);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x178);
      goto joined_r0x02e3a638;
    }
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x160);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x160) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x160),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x170);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x170) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x170),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x150) == 0) goto LAB_02e3a87c;
      FUN_0391b78c(*(long *)(param_1 + 0x150),0,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x180);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x180);
joined_r0x02e3a638:
      if (lVar5 == 0) goto LAB_02e3a87c;
      FUN_0391b78c(lVar5,0,0);
    }
  }
  lVar5 = 0;
  switch(*(undefined4 *)(param_1 + 0xcc)) {
  case 0:
  case 4:
    lVar5 = 0x148;
    if (param_5 != 0) {
      lVar5 = 0x150;
    }
    lVar5 = *(long *)(param_1 + lVar5);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar5,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0391c2b8(param_1,0);
      if (lVar5 == 0) goto LAB_02e3a87c;
      lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_4866);
      if (param_5 == 0) {
        plVar6 = (long *)(param_1 + 0x148);
      }
      else {
        plVar6 = (long *)(param_1 + 0x150);
      }
LAB_02e3a7c8:
      *plVar6 = lVar5;
      thunk_FUN_01b4f09c(plVar6,lVar5);
    }
    break;
  case 1:
    lVar5 = 0x158;
    if (param_5 != 0) {
      lVar5 = 0x160;
    }
    lVar5 = *(long *)(param_1 + lVar5);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar5,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0391c2b8(param_1,0);
      if ((lVar5 == 0) ||
         (lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_4865), lVar5 == 0))
      goto LAB_02e3a87c;
      *(undefined1 *)(lVar5 + 0x174) = *(undefined1 *)(param_1 + 0x41);
      if (param_5 == 0) {
        plVar6 = (long *)(param_1 + 0x158);
      }
      else {
        plVar6 = (long *)(param_1 + 0x160);
      }
      goto LAB_02e3a7c8;
    }
    break;
  case 2:
    break;
  case 3:
    lVar5 = 0x178;
    if (param_5 != 0) {
      lVar5 = 0x180;
    }
    lVar5 = *(long *)(param_1 + lVar5);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar5,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0391c2b8(param_1,0);
      if ((lVar5 == 0) ||
         (lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_4864), lVar5 == 0))
      goto LAB_02e3a87c;
      *(undefined1 *)(lVar5 + 0x180) = *(undefined1 *)(param_1 + 0xe0);
      if (param_5 == 0) {
        plVar6 = (long *)(param_1 + 0x178);
      }
      else {
        plVar6 = (long *)(param_1 + 0x180);
      }
      goto LAB_02e3a7c8;
    }
    break;
  default:
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar3 = thunk_FUN_01afaadc();
    FUN_02fd91a4(uVar3,0);
    uVar11 = thunk_FUN_01ad9084(StringLiteral_4869);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar3,uVar11);
  }
  if (*(char *)(param_1 + 200) != '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0xc0);
    uVar13 = *(undefined4 *)(param_1 + 0xc4);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_0391f968(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    if (lVar5 != 0) goto LAB_02e3a850;
  }
  else if (lVar5 != 0) {
    uVar7 = 4;
    if (param_5 != 0) {
      uVar7 = 5;
    }
    *(undefined4 *)(lVar5 + 0x140) = uVar12;
    *(undefined4 *)(lVar5 + 0x144) = uVar13;
    *(int *)(lVar5 + 0x20) = param_5;
    *(undefined4 *)(lVar5 + 0x128) = uVar7;
    *(undefined8 *)(lVar5 + 0x148) = uVar3;
    thunk_FUN_01b4f09c(lVar5 + 0x148,uVar3);
    FUN_0391b78c(lVar5,1,0);
    *(undefined4 *)(lVar5 + 0x158) = param_2;
LAB_02e3a850:
    *(undefined8 *)(lVar5 + 0x150) = *(undefined8 *)(param_1 + 0x50);
    thunk_FUN_01b4f09c(lVar5 + 0x150);
    return lVar5;
  }
LAB_02e3a87c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


