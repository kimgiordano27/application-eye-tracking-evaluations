/*
FUNCTION_NAME: FUN_03b2b6b0
ENTRY_POINT: 03b2b6b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_03b2b6b0(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_03ffdbbd & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2339);
    thunk_FUN_01ad9084(PTR_DAT_03d95948);
    thunk_FUN_01ad9084(PTR_DAT_03d95950);
    thunk_FUN_01ad9084(PTR_DAT_03d95958);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(PTR_DAT_03db72e8);
    thunk_FUN_01ad9084(PTR_DAT_03db72f0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
                      );
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
    DAT_03ffdbbd = 1;
  }
  plVar15 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03922f24(param_3,0,0);
  if ((uVar8 & 1) == 0) {
    if (param_2 == 0) goto LAB_03b2c164;
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar10,0,0);
    if ((uVar8 & 1) != 0) goto LAB_03b2b7e8;
  }
  else {
    if (param_2 == 0) goto LAB_03b2c164;
LAB_03b2b7e8:
    puVar6 = PTR_DAT_03d95958;
    puVar5 = PTR_DAT_03d95950;
    puVar4 = StringLiteral_362;
    puVar3 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
    lVar9 = *(long *)(param_2 + 0xf0);
    if (lVar9 == 0) goto LAB_03b2c164;
    iVar1 = *(int *)(lVar9 + 0x18);
    if (0 < iVar1) {
      iVar16 = 0;
      do {
        *(undefined1 *)(param_2 + 0x17c) = 1;
        if (lVar9 == 0) goto LAB_03b2c164;
        uVar10 = FUN_02b59714(lVar9,iVar16,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar4);
        }
        if (DAT_03ff6dc0 == '\0') {
          thunk_FUN_01ad9084(puVar4);
          DAT_03ff6dc0 = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *(long *)puVar4;
        }
        FUN_01ecfb94(uVar10,param_2,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar6);
        if (*(long *)(param_2 + 0xf0) == 0) goto LAB_03b2c164;
        uVar10 = FUN_02b59714(*(long *)(param_2 + 0xf0),iVar16,*(undefined8 *)puVar3);
        if (DAT_03ff1eb4 == '\0') {
          thunk_FUN_01ad9084(puVar4);
          DAT_03ff1eb4 = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *(long *)puVar4;
        }
        FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),
                     *(undefined8 *)puVar5);
        lVar9 = *(long *)(param_2 + 0xf0);
        iVar16 = iVar16 + 1;
      } while (iVar1 != iVar16);
      plVar15 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (lVar9 == 0) goto LAB_03b2c164;
    }
    iVar1 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_03062488(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
    }
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(param_3,0,0);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x20) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
      return;
    }
  }
  plVar17 = (long *)(param_2 + 0x20);
  lVar9 = *plVar17;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03922f24(lVar9,param_3,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03923030(param_3,0);
    puVar5 = PTR_DAT_03d95958;
    puVar4 = StringLiteral_362;
    puVar3 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
    if ((uVar8 & 1) != 0) {
      if (*(float *)(param_2 + 0x10c) * *(float *)(param_2 + 0x10c) +
          *(float *)(param_2 + 0x110) * *(float *)(param_2 + 0x110) <= 0.0) {
        return;
      }
      lVar9 = *(long *)(param_2 + 0xf0);
      if (lVar9 != 0) {
        iVar1 = *(int *)(lVar9 + 0x18);
        if (iVar1 < 1) {
          return;
        }
        iVar16 = 0;
        do {
          uVar10 = FUN_02b59714(lVar9,iVar16,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar4);
          }
          if (DAT_03ff6dc0 == '\0') {
            thunk_FUN_01ad9084(puVar4);
            DAT_03ff6dc0 = '\x01';
          }
          lVar9 = *(long *)puVar4;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *(long *)puVar4;
          }
          FUN_01ecfb94(uVar10,param_2,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar5);
          iVar16 = iVar16 + 1;
          if (iVar1 == iVar16) {
            return;
          }
          lVar9 = *(long *)(param_2 + 0xf0);
        } while (lVar9 != 0);
      }
      goto LAB_03b2c164;
    }
  }
  lVar9 = FUN_03b2b53c(*plVar17,param_3);
  if (param_3 == 0) {
LAB_03b2c164:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar11 = (long *)FUN_01ed770c(param_3,*(undefined8 *)PTR_DAT_03db72e8);
  if (plVar11 == (long *)0x0) {
    local_68 = 0;
  }
  else {
    bVar7 = *(byte *)(*(long *)StringLiteral_2339 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar7) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)StringLiteral_2339)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c();
    }
    local_68 = FUN_0391c2b8(plVar11,0);
  }
  lVar18 = *plVar17;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(lVar18,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar17 == 0) goto LAB_03b2c164;
    lVar18 = FUN_0391fab4(*plVar17,0);
    puVar3 = StringLiteral_362;
    while( true ) {
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(lVar18,0,0);
      if ((uVar8 & 1) == 0) break;
      if (*(char *)(param_1 + 0x28) == '\0') {
LAB_03b2bc00:
        if (lVar18 == 0) goto LAB_03b2c164;
        uVar10 = FUN_0391c2b8(lVar18,0);
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar15);
        }
        uVar8 = FUN_03922f24(local_68,uVar10,0);
        if ((uVar8 & 1) != 0) break;
      }
      else {
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_0391f968(lVar9,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar9 == 0) goto LAB_03b2c164;
          uVar10 = FUN_0391fab4(lVar9,0);
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*plVar15);
          }
          uVar8 = FUN_03922f24(uVar10,lVar18,0);
          if ((uVar8 & 1) != 0) break;
        }
        if (*(char *)(param_1 + 0x28) == '\0') goto LAB_03b2bc00;
        if (lVar18 == 0) goto LAB_03b2c164;
      }
      uVar10 = FUN_0391c2b8(lVar18,0);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*plVar15);
      }
      uVar8 = FUN_0391f968(uVar10,lVar9,0);
      if ((uVar8 & 1) == 0) {
        bVar7 = 0;
      }
      else {
        lVar19 = *plVar17;
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        bVar7 = FUN_0391f968(lVar19,param_3,0);
        bVar7 = bVar7 & 1;
      }
      *(byte *)(param_2 + 0x17c) = bVar7;
      uVar10 = FUN_0391c2b8(lVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      if (DAT_03ff6dc0 == '\0') {
        thunk_FUN_01ad9084(puVar3);
        DAT_03ff6dc0 = '\x01';
      }
      lVar19 = *(long *)puVar3;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *(long *)puVar3;
      }
      FUN_01ecfb94(uVar10,param_2,**(undefined8 **)(lVar19 + 0xb8),*(undefined8 *)PTR_DAT_03d95958);
      uVar10 = FUN_0391c2b8(lVar18,0);
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(puVar3);
        DAT_03ff1eb4 = '\x01';
      }
      lVar19 = *(long *)puVar3;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *(long *)puVar3;
      }
      FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x10),
                   *(undefined8 *)PTR_DAT_03d95950);
      lVar19 = *(long *)(param_2 + 0xf0);
      uVar10 = FUN_0391c2b8(lVar18,0);
      if (lVar19 == 0) goto LAB_03b2c164;
      FUN_02b5ae30(lVar19,uVar10,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                  );
      if (*(char *)(param_1 + 0x28) != '\0') {
        lVar18 = FUN_03928c2c(lVar18,0);
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(lVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) goto LAB_03b2c164;
        uVar10 = FUN_0391fab4(lVar9,0);
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar15);
        }
        uVar8 = FUN_03922f24(uVar10,lVar18,0);
        if ((uVar8 & 1) != 0) break;
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        if (lVar18 == 0) goto LAB_03b2c164;
        lVar18 = FUN_03928c2c(lVar18,0);
      }
    }
  }
  lVar18 = *plVar17;
  *plVar17 = param_3;
  thunk_FUN_01b4f09c(plVar17,param_3);
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(param_3,0,0);
  if ((uVar8 & 1) != 0) {
    lVar19 = FUN_0391fab4(param_3,0);
    puVar4 = StringLiteral_362;
    puVar3 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
    while( true ) {
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(lVar19,0,0);
      if ((uVar8 & 1) == 0) break;
      if (lVar19 == 0) goto LAB_03b2c164;
      uVar10 = FUN_0391c2b8(lVar19,0);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*plVar15);
      }
      uVar8 = FUN_03922f24(uVar10,lVar9,0);
      if ((uVar8 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x17d) = 0;
      }
      else {
        uVar10 = FUN_0391c2b8(lVar19,0);
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar15);
        }
        bVar7 = FUN_0391f968(uVar10,lVar18,0);
        *(byte *)(param_2 + 0x17d) = bVar7 & 1;
        if ((*(char *)(param_1 + 0x28) != '\0') && ((bVar7 & 1) != 0)) {
          return;
        }
      }
      uVar10 = FUN_0391c2b8(lVar19,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar4);
      }
      if (DAT_03ff6dc1 == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03ff6dc1 = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *(long *)puVar4;
      }
      FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                   *(undefined8 *)PTR_DAT_03d95948);
      uVar10 = FUN_0391c2b8(lVar19,0);
      if (DAT_03ff6dc0 == '\0') {
        thunk_FUN_01ad9084(puVar4);
        DAT_03ff6dc0 = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *(long *)puVar4;
      }
      FUN_01ecfb94(uVar10,param_2,**(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_03d95958);
      lVar12 = *(long *)(param_2 + 0xf0);
      uVar10 = FUN_0391c2b8(lVar19,0);
      if (lVar12 == 0) goto LAB_03b2c164;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)puVar3;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_03b2c164;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
        thunk_FUN_01b4f09c();
      }
      else {
        FUN_02b599e4(lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        lVar12 = FUN_0391c2b8(lVar19,0);
        if (lVar12 == 0) goto LAB_03b2c164;
        lVar12 = FUN_01ed712c(lVar12,*(undefined8 *)PTR_DAT_03db72f0);
        if (lVar12 != 0) {
          return;
        }
        if (*(char *)(param_1 + 0x28) != '\0') goto LAB_03b2c0b4;
      }
      else {
LAB_03b2c0b4:
        lVar19 = FUN_03928c2c(lVar19,0);
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(lVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) goto LAB_03b2c164;
        uVar10 = FUN_0391fab4(lVar9,0);
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar15);
        }
        uVar8 = FUN_03922f24(uVar10,lVar19,0);
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        if (lVar19 == 0) goto LAB_03b2c164;
        lVar19 = FUN_03928c2c(lVar19,0);
      }
    }
  }
  return;
}


