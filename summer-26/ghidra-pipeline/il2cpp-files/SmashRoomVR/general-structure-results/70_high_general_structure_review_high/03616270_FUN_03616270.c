/*
FUNCTION_NAME: FUN_03616270
ENTRY_POINT: 03616270
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_03616270(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_03d9a000;
  if ((DAT_03ff7199 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a000);
    thunk_FUN_01ad9084(PTR_DAT_03d9a008);
    thunk_FUN_01ad9084(StringLiteral_2693);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_430);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a010);
    thunk_FUN_01ad9084(PTR_DAT_03d9a018);
    thunk_FUN_01ad9084(PTR_DAT_03d9a020);
    thunk_FUN_01ad9084(PTR_DAT_03d9a028);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_103__);
    thunk_FUN_01ad9084(StringLiteral_13672);
    thunk_FUN_01ad9084(PTR_DAT_03d9a030);
    thunk_FUN_01ad9084(PTR_DAT_03d9a038);
    thunk_FUN_01ad9084(PTR_DAT_03d9a040);
    DAT_03ff7199 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  pcVar11 = *(char **)(lVar5 + 0xb8);
  if (*pcVar11 != '\0') {
    return;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    pcVar11 = *(char **)(*(long *)puVar3 + 0xb8);
  }
  *pcVar11 = '\x01';
  lVar5 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d9a010,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar6 = FUN_0391f968(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_03616988;
    bVar4 = FUN_038fed0c(lVar5,0);
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0x20) = bVar4 & 1;
  uVar7 = FUN_03616994();
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar12 = uVar7;
  thunk_FUN_01b4f09c(puVar12,uVar7);
  uVar7 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d9a020,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *puVar12 = uVar7;
  thunk_FUN_01b4f09c(puVar12,uVar7);
  puVar2 = StringLiteral_430;
  uVar7 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68),
                       *(undefined8 *)StringLiteral_430);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
  *puVar12 = uVar7;
  thunk_FUN_01b4f09c(puVar12,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a018);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar3;
    }
    uVar7 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x80),0);
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar8,uVar7,0);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
    *puVar12 = uVar8;
    thunk_FUN_01b4f09c(puVar12,uVar8);
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  uVar7 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x70),*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
  *puVar12 = uVar7;
  thunk_FUN_01b4f09c(puVar12,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a028);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar3;
    }
    uVar7 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x88),0);
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar8,uVar7,0);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
    *puVar12 = uVar8;
    thunk_FUN_01b4f09c(puVar12,uVar8);
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  uVar7 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
  *puVar12 = uVar7;
  thunk_FUN_01b4f09c(puVar12,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a040);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar3;
    }
    uVar7 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x78),0);
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar8,uVar7,0);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    *puVar12 = uVar8;
    thunk_FUN_01b4f09c(puVar12,uVar8);
  }
  uVar7 = *(undefined8 *)StringLiteral_2693;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_0304eec0(uVar7,0);
  plVar9 = (long *)FUN_0391a670(*(undefined8 *)PTR_DAT_03d9a030,uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__;
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
    *plVar10 = 0;
  }
  else {
    lVar5 = *(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
    ;
    bVar4 = *(byte *)(lVar5 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar4 - 1) * 8) != lVar5)) {
LAB_036167f0:
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar9);
    }
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
    *plVar10 = (long)plVar9;
    if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar4 - 1) * 8) != lVar5)) goto LAB_036167f0;
  }
  thunk_FUN_01b4f09c(plVar10,plVar9);
  lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  if (lVar5 != 0) {
    uVar7 = FUN_038ff1e0(lVar5,0);
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_038ff018(uVar8,uVar7,0);
    puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
    *puVar12 = uVar8;
    thunk_FUN_01b4f09c(puVar12,uVar8);
    lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
    if (lVar5 != 0) {
      FUN_03923d4c(lVar5,0x3d,0);
      lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      if (lVar5 != 0) {
        uVar6 = FUN_038ffa48(lVar5,*(undefined8 *)StringLiteral_13672,0);
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
          plVar9 = (long *)FUN_0391a5ec(*(undefined8 *)PTR_DAT_03d9a038,0);
          if (lVar5 == 0) goto LAB_03616988;
          if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)StringLiteral_2992)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar9);
          }
          FUN_038ff638(lVar5,plVar9,0);
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar3;
        }
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_103__;
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
        if (lVar5 != 0) {
          uVar6 = FUN_038ffa48(lVar5,*(undefined8 *)
                                      Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_103__
                               ,0);
          if ((uVar6 & 1) == 0) {
            return;
          }
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar5 = *(long *)puVar3;
          }
          lVar5 = *(long *)(lVar5 + 0xb8);
          if (*(long *)(lVar5 + 0x58) != 0) {
            FUN_038ff458(*(undefined4 *)(lVar5 + 4),*(undefined4 *)(lVar5 + 8),
                         *(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                         *(long *)(lVar5 + 0x58),*(undefined8 *)puVar1,0);
            return;
          }
        }
      }
    }
  }
LAB_03616988:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


