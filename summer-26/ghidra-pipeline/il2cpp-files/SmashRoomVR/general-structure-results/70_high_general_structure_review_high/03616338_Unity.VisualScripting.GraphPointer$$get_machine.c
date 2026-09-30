/*
FUNCTION_NAME: Unity.VisualScripting.GraphPointer$$get_machine
ENTRY_POINT: 03616338
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_GraphPointer__get_machine(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long *unaff_x21;
  
  thunk_FUN_01ad9084(PTR_DAT_03d9a030);
  thunk_FUN_01ad9084(PTR_DAT_03d9a038);
  thunk_FUN_01ad9084(PTR_DAT_03d9a040);
  *(undefined1 *)(unaff_x19 + 0x199) = 1;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *unaff_x21;
  }
  pcVar10 = *(char **)(lVar4 + 0xb8);
  if (*pcVar10 != '\0') {
    return;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    pcVar10 = *(char **)(*unaff_x21 + 0xb8);
  }
  *pcVar10 = '\x01';
  lVar4 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d9a010,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar5 = FUN_0391f968(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    if (lVar4 == 0) goto LAB_03616988;
    bVar3 = FUN_038fed0c(lVar4,0);
  }
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *unaff_x21;
  }
  *(byte *)(*(long *)(lVar4 + 0xb8) + 0x20) = bVar3 & 1;
  uVar6 = FUN_03616994();
  puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
  *puVar11 = uVar6;
  thunk_FUN_01b4f09c(puVar11,uVar6);
  uVar6 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d9a020,0);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
  *puVar11 = uVar6;
  thunk_FUN_01b4f09c(puVar11,uVar6);
  puVar2 = StringLiteral_430;
  uVar6 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x68),
                       *(undefined8 *)StringLiteral_430);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
  *puVar11 = uVar6;
  thunk_FUN_01b4f09c(puVar11,uVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a018);
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *unaff_x21;
    }
    uVar6 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x80),0);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar7,uVar6,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
    *puVar11 = uVar7;
    thunk_FUN_01b4f09c(puVar11,uVar7);
  }
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *unaff_x21;
  }
  uVar6 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x70),*(undefined8 *)puVar2);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
  *puVar11 = uVar6;
  thunk_FUN_01b4f09c(puVar11,uVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a028);
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *unaff_x21;
    }
    uVar6 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x88),0);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar7,uVar6,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
    *puVar11 = uVar7;
    thunk_FUN_01b4f09c(puVar11,uVar7);
  }
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *unaff_x21;
  }
  uVar6 = FUN_01f2f4f0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60),*(undefined8 *)puVar2);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
  *puVar11 = uVar6;
  thunk_FUN_01b4f09c(puVar11,uVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d9a008 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03616b84(*(undefined8 *)PTR_DAT_03d9a040);
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *unaff_x21;
    }
    uVar6 = FUN_038feca0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x78),0);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                              );
    FUN_038ff018(uVar7,uVar6,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
    *puVar11 = uVar7;
    thunk_FUN_01b4f09c(puVar11,uVar7);
  }
  uVar6 = *(undefined8 *)StringLiteral_2693;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0304eec0(uVar6,0);
  plVar8 = (long *)FUN_0391a670(*(undefined8 *)PTR_DAT_03d9a030,uVar6,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*unaff_x21);
  }
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__;
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
    *plVar9 = 0;
  }
  else {
    lVar4 = *(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
    ;
    bVar3 = *(byte *)(lVar4 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar3 - 1) * 8) != lVar4)) {
LAB_036167f0:
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar8);
    }
    plVar9 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
    *plVar9 = (long)plVar8;
    if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar3 - 1) * 8) != lVar4)) goto LAB_036167f0;
  }
  thunk_FUN_01b4f09c(plVar9,plVar8);
  lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
  if (lVar4 != 0) {
    uVar6 = FUN_038ff1e0(lVar4,0);
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_038ff018(uVar7,uVar6,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
    *puVar11 = uVar7;
    thunk_FUN_01b4f09c(puVar11,uVar7);
    lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
    if (lVar4 != 0) {
      FUN_03923d4c(lVar4,0x3d,0);
      lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
      if (lVar4 != 0) {
        uVar5 = FUN_038ffa48(lVar4,*(undefined8 *)StringLiteral_13672,0);
        if ((uVar5 & 1) != 0) {
          lVar4 = *unaff_x21;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar4 = *unaff_x21;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
          plVar8 = (long *)FUN_0391a5ec(*(undefined8 *)PTR_DAT_03d9a038,0);
          if (lVar4 == 0) goto LAB_03616988;
          if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)StringLiteral_2992)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar8);
          }
          FUN_038ff638(lVar4,plVar8,0);
        }
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *unaff_x21;
        }
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_103__;
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
        if (lVar4 != 0) {
          uVar5 = FUN_038ffa48(lVar4,*(undefined8 *)
                                      Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_103__
                               ,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          lVar4 = *unaff_x21;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar4 = *unaff_x21;
          }
          lVar4 = *(long *)(lVar4 + 0xb8);
          if (*(long *)(lVar4 + 0x58) != 0) {
            FUN_038ff458(*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8),
                         *(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                         *(long *)(lVar4 + 0x58),*(undefined8 *)puVar1,0);
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


