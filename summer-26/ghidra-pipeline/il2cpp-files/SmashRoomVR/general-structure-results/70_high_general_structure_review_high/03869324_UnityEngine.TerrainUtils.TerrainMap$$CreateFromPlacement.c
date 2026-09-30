/*
FUNCTION_NAME: UnityEngine.TerrainUtils.TerrainMap$$CreateFromPlacement
ENTRY_POINT: 03869324
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_TerrainUtils_TerrainMap__CreateFromPlacement(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar15;
  long *plVar16;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  thunk_FUN_01ad9084();
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
  *(undefined1 *)(unaff_x21 + 0x6d3) = 1;
  puVar5 = StringLiteral_362;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  if (unaff_x19 == 0) goto LAB_038694b0;
  lVar10 = *(long *)(unaff_x19 + 0x50);
  uVar6 = FUN_03b26064();
  puVar2 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0xf0);
    if (lVar7 != 0) {
      iVar15 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar15) goto LAB_038694b4;
        lVar11 = *(long *)(unaff_x20 + 200);
        if (lVar11 != 0) {
          uVar8 = FUN_02b59714(lVar7,iVar15,*(undefined8 *)puVar2);
          if (lVar11 == 0) break;
          (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),uVar8);
          lVar7 = *(long *)(unaff_x19 + 0xf0);
          if (lVar7 == 0) break;
        }
        uVar8 = FUN_02b59714(lVar7,iVar15,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar5);
        }
        if (DAT_03ff6dc0 == '\0') {
          thunk_FUN_01ad9084(puVar5);
          DAT_03ff6dc0 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01ecfb94(uVar8);
        lVar7 = *(long *)(unaff_x19 + 0xf0);
        iVar15 = iVar15 + 1;
      } while (lVar7 != 0);
    }
    goto LAB_038694b0;
  }
LAB_038694b4:
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(lVar10,0,0);
  if ((uVar9 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(uVar8,0,0);
    if ((uVar9 & 1) != 0) goto LAB_03869514;
  }
  else {
LAB_03869514:
    puVar4 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
    puVar3 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__;
    if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_038694b0;
    FUN_02b5a400(&stack0x00000018,*(long *)(unaff_x19 + 0xf0),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    while (uVar9 = FUN_02739b98(&stack0x00000030,*(undefined8 *)puVar4), uVar8 = in_stack_00000040,
          (uVar9 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + 0xa8);
      if (lVar7 != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),in_stack_00000040);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(puVar5);
        DAT_03ff1eb4 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar8);
    }
    FUN_02739b94(&stack0x00000030,*(undefined8 *)puVar3);
    lVar7 = *(long *)(unaff_x19 + 0xf0);
    if (lVar7 == 0) goto LAB_038694b0;
    iVar15 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar15) {
      FUN_03062488(*(undefined8 *)(lVar7 + 0x10),0,iVar15,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(lVar10,0,0);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20),0);
      return;
    }
  }
  plVar16 = (long *)(unaff_x19 + 0x20);
  lVar7 = *plVar16;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(lVar7,lVar10,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar7 = FUN_03b2b53c(*plVar16,lVar10,0);
  lVar11 = *plVar16;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar9 = FUN_0391f968(lVar11,0,0);
  if ((uVar9 & 1) == 0) {
LAB_03869834:
    *plVar16 = lVar10;
    thunk_FUN_01b4f09c(plVar16,lVar10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_0391f968(lVar10,0,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (lVar10 != 0) {
      lVar10 = FUN_0391fab4(lVar10,0);
      puVar3 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
      while( true ) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar9 = FUN_0391f968(lVar10,0,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        if (lVar10 == 0) break;
        uVar8 = FUN_0391c2b8(lVar10,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar9 = FUN_0391f968(uVar8,lVar7,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        uVar8 = FUN_0391c2b8(lVar10,0);
        lVar11 = *(long *)(unaff_x20 + 0xa0);
        if (lVar11 != 0) {
          if (lVar11 == 0) break;
          (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),uVar8);
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff6dc1 == '\0') {
          thunk_FUN_01ad9084(puVar5);
          DAT_03ff6dc1 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01ecfb94(uVar8);
        if ((uVar6 & 1) != 0) {
          lVar11 = *(long *)(unaff_x20 + 200);
          if (lVar11 != 0) {
            if (lVar11 == 0) break;
            (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),uVar8);
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff6dc0 == '\0') {
            thunk_FUN_01ad9084(puVar5);
            DAT_03ff6dc0 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01ecfb94(uVar8);
        }
        lVar11 = *(long *)(unaff_x19 + 0xf0);
        if (lVar11 == 0) break;
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)puVar3;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar13 = uVar8;
          thunk_FUN_01b4f09c(puVar13,uVar8);
        }
        else {
          FUN_02b599e4(lVar11,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = FUN_03928c2c(lVar10,0);
      }
    }
  }
  else if (*plVar16 != 0) {
    lVar11 = FUN_0391fab4(*plVar16,0);
    do {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(lVar11,0,0);
      if ((uVar9 & 1) == 0) goto LAB_03869834;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(lVar7,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar7 == 0) break;
        uVar8 = FUN_0391fab4(lVar7,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar9 = FUN_03922f24(uVar8,lVar11,0);
        if ((uVar9 & 1) != 0) goto LAB_03869834;
      }
      if (lVar11 == 0) break;
      uVar8 = FUN_0391c2b8(lVar11,0);
      lVar12 = *(long *)(unaff_x20 + 0xa8);
      if (lVar12 != 0) {
        if (lVar12 == 0) break;
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),uVar8);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(puVar5);
        DAT_03ff1eb4 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar8);
      if (*(long *)(unaff_x19 + 0xf0) == 0) break;
      FUN_02b5ae30(*(long *)(unaff_x19 + 0xf0),uVar8,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                  );
      lVar11 = FUN_03928c2c(lVar11,0);
    } while( true );
  }
LAB_038694b0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


