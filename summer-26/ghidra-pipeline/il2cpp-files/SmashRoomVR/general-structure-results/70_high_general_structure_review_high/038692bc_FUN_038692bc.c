/*
FUNCTION_NAME: FUN_038692bc
ENTRY_POINT: 038692bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_038692bc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03ff86d3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d95948);
    thunk_FUN_01ad9084(PTR_DAT_03d95950);
    thunk_FUN_01ad9084(PTR_DAT_03d95958);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff86d3 = 1;
  }
  puVar6 = StringLiteral_362;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_2 == 0) goto LAB_038694b0;
  lVar11 = *(long *)(param_2 + 0x50);
  uVar7 = FUN_03b26064(param_2,0);
  puVar3 = PTR_DAT_03d95958;
  puVar2 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0xf0);
    if (lVar8 != 0) {
      iVar16 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar16) goto LAB_038694b4;
        lVar12 = *(long *)(param_1 + 200);
        if (lVar12 != 0) {
          uVar9 = FUN_02b59714(lVar8,iVar16,*(undefined8 *)puVar2);
          if (lVar12 == 0) break;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
          lVar8 = *(long *)(param_2 + 0xf0);
          if (lVar8 == 0) break;
        }
        uVar9 = FUN_02b59714(lVar8,iVar16,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar6);
        }
        if (DAT_03ff6dc0 == '\0') {
          thunk_FUN_01ad9084(puVar6);
          DAT_03ff6dc0 = '\x01';
        }
        lVar8 = *(long *)puVar6;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar8 = *(long *)puVar6;
        }
        FUN_01ecfb94(uVar9,param_2,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
        lVar8 = *(long *)(param_2 + 0xf0);
        iVar16 = iVar16 + 1;
      } while (lVar8 != 0);
    }
    goto LAB_038694b0;
  }
LAB_038694b4:
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = PTR_DAT_03d95950;
  uVar10 = FUN_03922f24(lVar11,0,0);
  if ((uVar10 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03922f24(uVar9,0,0);
    if ((uVar10 & 1) != 0) goto LAB_03869514;
  }
  else {
LAB_03869514:
    puVar5 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
    puVar4 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__;
    if (*(long *)(param_2 + 0xf0) == 0) goto LAB_038694b0;
    FUN_02b5a400(&local_98,*(long *)(param_2 + 0xf0),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar10 = FUN_02739b98(&local_80,*(undefined8 *)puVar5), uVar9 = local_70,
          (uVar10 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0xa8);
      if (lVar8 != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),local_70,param_2,*(undefined8 *)(lVar8 + 0x28));
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(puVar6);
        DAT_03ff1eb4 = '\x01';
      }
      lVar8 = *(long *)puVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar6;
      }
      FUN_01ecfb94(uVar9,param_2,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                   *(undefined8 *)puVar3);
    }
    FUN_02739b94(&local_80,*(undefined8 *)puVar4);
    lVar8 = *(long *)(param_2 + 0xf0);
    if (lVar8 == 0) goto LAB_038694b0;
    iVar16 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_03062488(*(undefined8 *)(lVar8 + 0x10),0,iVar16,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03922f24(lVar11,0,0);
    if ((uVar10 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x20) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
      return;
    }
  }
  plVar17 = (long *)(param_2 + 0x20);
  lVar8 = *plVar17;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03922f24(lVar8,lVar11,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar8 = FUN_03b2b53c(*plVar17,lVar11,0);
  lVar12 = *plVar17;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar10 = FUN_0391f968(lVar12,0,0);
  if ((uVar10 & 1) == 0) {
LAB_03869834:
    *plVar17 = lVar11;
    thunk_FUN_01b4f09c(plVar17,lVar11);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_0391f968(lVar11,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (lVar11 != 0) {
      lVar11 = FUN_0391fab4(lVar11,0);
      puVar3 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
      while( true ) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0391f968(lVar11,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (lVar11 == 0) break;
        uVar9 = FUN_0391c2b8(lVar11,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar10 = FUN_0391f968(uVar9,lVar8,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        uVar9 = FUN_0391c2b8(lVar11,0);
        lVar12 = *(long *)(param_1 + 0xa0);
        if (lVar12 != 0) {
          if (lVar12 == 0) break;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff6dc1 == '\0') {
          thunk_FUN_01ad9084(puVar6);
          DAT_03ff6dc1 = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *(long *)puVar6;
        }
        FUN_01ecfb94(uVar9,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                     *(undefined8 *)PTR_DAT_03d95948);
        if ((uVar7 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 200);
          if (lVar12 != 0) {
            if (lVar12 == 0) break;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff6dc0 == '\0') {
            thunk_FUN_01ad9084(puVar6);
            DAT_03ff6dc0 = '\x01';
          }
          lVar12 = *(long *)puVar6;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *(long *)puVar6;
          }
          FUN_01ecfb94(uVar9,param_2,**(undefined8 **)(lVar12 + 0xb8),
                       *(undefined8 *)PTR_DAT_03d95958);
        }
        lVar12 = *(long *)(param_2 + 0xf0);
        if (lVar12 == 0) break;
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)puVar3;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar9;
          thunk_FUN_01b4f09c(puVar14,uVar9);
        }
        else {
          FUN_02b599e4(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = FUN_03928c2c(lVar11,0);
      }
    }
  }
  else if (*plVar17 != 0) {
    lVar12 = FUN_0391fab4(*plVar17,0);
    do {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_0391f968(lVar12,0,0);
      if ((uVar10 & 1) == 0) goto LAB_03869834;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_0391f968(lVar8,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar8 == 0) break;
        uVar9 = FUN_0391fab4(lVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar10 = FUN_03922f24(uVar9,lVar12,0);
        if ((uVar10 & 1) != 0) goto LAB_03869834;
      }
      if (lVar12 == 0) break;
      uVar9 = FUN_0391c2b8(lVar12,0);
      lVar13 = *(long *)(param_1 + 0xa8);
      if (lVar13 != 0) {
        if (lVar13 == 0) break;
        (**(code **)(lVar13 + 0x18))
                  (*(undefined8 *)(lVar13 + 0x40),uVar9,param_2,*(undefined8 *)(lVar13 + 0x28));
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(puVar6);
        DAT_03ff1eb4 = '\x01';
      }
      lVar13 = *(long *)puVar6;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar13 = *(long *)puVar6;
      }
      FUN_01ecfb94(uVar9,param_2,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                   *(undefined8 *)puVar3);
      if (*(long *)(param_2 + 0xf0) == 0) break;
      FUN_02b5ae30(*(long *)(param_2 + 0xf0),uVar9,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                  );
      lVar12 = FUN_03928c2c(lVar12,0);
    } while( true );
  }
LAB_038694b0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


