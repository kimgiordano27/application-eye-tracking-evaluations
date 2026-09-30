/*
FUNCTION_NAME: FUN_01c0f718
ENTRY_POINT: 01c0f718
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x01c10544) */
/* WARNING: Removing unreachable block (ram,0x01c10784) */
/* WARNING: Removing unreachable block (ram,0x01c0fd58) */
/* WARNING: Removing unreachable block (ram,0x01c10760) */
/* WARNING: Removing unreachable block (ram,0x01c1040c) */
/* WARNING: Removing unreachable block (ram,0x01c102ac) */
/* WARNING: Removing unreachable block (ram,0x01c10770) */
/* WARNING: Removing unreachable block (ram,0x01c10190) */
/* WARNING: Removing unreachable block (ram,0x01c10268) */
/* WARNING: Removing unreachable block (ram,0x01c1026c) */
/* WARNING: Removing unreachable block (ram,0x01c10370) */
/* WARNING: Removing unreachable block (ram,0x01c104f4) */

void FUN_01c0f718(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03fed3f8 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_5__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_89__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    DAT_03fed3f8 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03922f24(uVar21,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if ((param_2 != 0) && (lVar11 = FUN_0391c2b8(param_2,0), lVar11 != 0)) {
      iVar9 = FUN_0391faf0(lVar11,0);
      if (iVar9 != 0xd) {
        lVar11 = FUN_0391c2b8(param_2,0);
        if (lVar11 == 0) goto LAB_01c1072c;
        iVar9 = FUN_0391faf0(lVar11,0);
        if (iVar9 != 3) {
          lVar11 = FUN_0391c2b8(param_2,0);
          if (lVar11 == 0) goto LAB_01c1072c;
          iVar9 = FUN_0391faf0(lVar11,0);
          if (iVar9 != 0xe) {
            lVar11 = FUN_0391c2b8(param_2,0);
            if (lVar11 == 0) goto LAB_01c1072c;
            iVar9 = FUN_0391faf0(lVar11,0);
            if (iVar9 != 0x14) {
              return;
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      lVar11 = FUN_0391c27c(param_2,0);
      if (lVar11 != 0) {
        lVar11 = FUN_0391c2b8(lVar11,0);
        puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
        iVar9 = 10;
        do {
          if (lVar11 == 0) goto LAB_01c1072c;
          uVar21 = FUN_01ed712c(lVar11,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar10 = FUN_0391f968(uVar21,0,0);
          if ((uVar10 & 1) != 0) {
            *(long *)(param_1 + 0x40) = lVar11;
            thunk_FUN_01b4f09c((long *)(param_1 + 0x40),lVar11);
            break;
          }
          uVar21 = FUN_01ed712c(lVar11,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar10 = FUN_03922f24(uVar21,0,0);
          if ((uVar10 & 1) != 0) {
            lVar11 = FUN_0391fab4(lVar11,0);
            if ((lVar11 == 0) || (lVar11 = FUN_03928c2c(lVar11,0), lVar11 == 0)) goto LAB_01c1072c;
            lVar11 = FUN_0391c2b8(lVar11,0);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_89__;
        if (*(long *)(param_1 + 0x40) != 0) {
          uVar21 = FUN_01ed712c(*(long *)(param_1 + 0x40),
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_89__
                               );
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar10 = FUN_0391f968(uVar21,0,0);
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(param_1 + 0x40) == 0) ||
               (lVar11 = FUN_01ed712c(*(long *)(param_1 + 0x40),*(undefined8 *)puVar4), lVar11 == 0)
               ) goto LAB_01c1072c;
            uVar21 = FUN_038fe7c0(lVar11,0);
            lVar11 = FUN_01ec6884(uVar21,*(undefined8 *)
                                          Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_5__
                                 );
            if (lVar11 == 0) goto LAB_01c1072c;
            FUN_02b5a400(&local_b8,lVar11,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                        );
            puVar5 = Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            puVar4 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
            uStack_78 = uStack_b0;
            local_80 = local_b8;
            local_70 = local_a8;
            while (uVar10 = FUN_02739b98(&local_80,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
              lVar11 = *(long *)(param_1 + 0x48);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)puVar5;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                *puVar18 = local_70;
                thunk_FUN_01b4f09c(puVar18);
              }
              else {
                FUN_02b599e4(lVar11,local_70,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_02739b94(&local_80,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
          }
          if ((*(long *)(param_1 + 0x40) != 0) &&
             (lVar11 = FUN_0391fab4(*(long *)(param_1 + 0x40),0), lVar11 != 0)) {
            plVar12 = (long *)FUN_0392a954(lVar11,0);
            puVar8 = Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
            puVar7 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
            puVar6 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__;
            puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
            puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            do {
              lVar11 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_01c0fb8c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,0);
LAB_01c0fb8c:
              uVar10 = (*(code *)*puVar18)(plVar12,puVar18[1]);
              puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
              if ((uVar10 & 1) == 0) {
                plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                if (plVar12 == (long *)0x0) {
                  return;
                }
                lVar11 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar10 == 0) goto LAB_01c10654;
                piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_01c1063c;
              }
              lVar11 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_01c0fbf0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,1);
LAB_01c0fbf0:
              plVar13 = (long *)(*(code *)*puVar18)(plVar12,puVar18[1]);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01b4841c(plVar13);
              }
              uVar21 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar6);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_0391f968(uVar21,0,0);
              if ((uVar10 & 1) != 0) {
                lVar11 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar6);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar21 = FUN_038fe7c0(lVar11,0);
                lVar11 = FUN_01ec6884(uVar21,*(undefined8 *)
                                              Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_5__
                                     );
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                FUN_02b5a400(&local_b8,lVar11,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                            );
                uStack_78 = uStack_b0;
                local_80 = local_b8;
                local_70 = local_a8;
                while (uVar10 = FUN_02739b98(&local_80,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
                  lVar11 = *(long *)(param_1 + 0x48);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  lVar17 = *(long *)(lVar11 + 0x10);
                  lVar19 = *(long *)puVar8;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar18 = local_70;
                    thunk_FUN_01b4f09c(puVar18);
                  }
                  else {
                    FUN_02b599e4(lVar11,local_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                FUN_02739b94(&local_80,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__
                            );
              }
              plVar13 = (long *)FUN_0392a954(plVar13,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
LAB_01c0fd70:
              lVar11 = *plVar13;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_01c0fdc0;
                  }
                  uVar10 = uVar10 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar4,0);
LAB_01c0fdc0:
              uVar10 = (*(code *)*puVar18)(plVar13,puVar18[1]);
              if ((uVar10 & 1) != 0) {
                lVar11 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar10 != 0) {
                  piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                      puVar18 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                      goto LAB_01c0fe24;
                    }
                    uVar10 = uVar10 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar4,1);
LAB_01c0fe24:
                plVar14 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b4841c(plVar14);
                }
                uVar21 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar6);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = FUN_0391f968(uVar21,0,0);
                if ((uVar10 & 1) != 0) {
                  lVar11 = FUN_01e8a9f8(plVar14,*(undefined8 *)puVar6);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  uVar21 = FUN_038fe7c0(lVar11,0);
                  lVar11 = FUN_01ec6884(uVar21,*(undefined8 *)
                                                Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_5__
                                       );
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  FUN_02b5a400(&local_b8,lVar11,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                              );
                  uStack_78 = uStack_b0;
                  local_80 = local_b8;
                  local_70 = local_a8;
                  while (uVar10 = FUN_02739b98(&local_80,*(undefined8 *)puVar7), (uVar10 & 1) != 0)
                  {
                    lVar11 = *(long *)(param_1 + 0x48);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    lVar17 = *(long *)(lVar11 + 0x10);
                    lVar19 = *(long *)puVar8;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar18 = local_70;
                      thunk_FUN_01b4f09c(puVar18);
                    }
                    else {
                      FUN_02b599e4(lVar11,local_70,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                    plVar15 = (long *)FUN_0392a954(plVar14,0);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
LAB_01c0ff78:
                    lVar11 = *plVar15;
                    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar10 != 0) {
                      piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                          puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_01c0ffc4;
                        }
                        uVar10 = uVar10 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar18 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar4,0);
LAB_01c0ffc4:
                    uVar10 = (*(code *)*puVar18)(plVar15,puVar18[1]);
                    if ((uVar10 & 1) != 0) {
                      lVar11 = *plVar15;
                      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar10 != 0) {
                        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                            puVar18 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                            goto LAB_01c10024;
                          }
                          uVar10 = uVar10 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar18 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar4,1);
LAB_01c10024:
                      plVar16 = (long *)(*(code *)*puVar18)(plVar15,puVar18[1]);
                      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b4841c(plVar16);
                      }
                      uVar21 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar6);
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar10 = FUN_0391f968(uVar21,0,0);
                      if ((uVar10 & 1) != 0) {
                        lVar11 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar6);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01b48178();
                        }
                        uVar21 = FUN_038fe7c0(lVar11,0);
                        lVar11 = FUN_01ec6884(uVar21,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3Field_<>c_<DescribeFields>b__0_5__
                                             );
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01b48178();
                        }
                        FUN_02b5a400(&local_b8,lVar11,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                                    );
                        uStack_98 = uStack_b0;
                        local_a0 = local_b8;
                        local_90 = local_a8;
                        while (uVar10 = FUN_02739b98(&local_a0,*(undefined8 *)puVar7),
                              (uVar10 & 1) != 0) {
                          lVar11 = *(long *)(param_1 + 0x48);
                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          lVar17 = *(long *)(lVar11 + 0x10);
                          lVar19 = *(long *)puVar8;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01b48178();
                          }
                          uVar2 = *(uint *)(lVar11 + 0x18);
                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                            puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                            *puVar18 = local_90;
                            thunk_FUN_01b4f09c(puVar18);
                          }
                          else {
                            FUN_02b599e4(lVar11,local_90,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                        FUN_02739b94(&local_a0,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__
                                    );
                      }
                      goto LAB_01c0ff78;
                    }
                    plVar15 = (long *)thunk_FUN_01afa9e0(plVar15,*(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                    if (plVar15 != (long *)0x0) {
                      lVar11 = *plVar15;
                      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar10 != 0) {
                        piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) ==
                              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__)
                          {
                            puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                            goto LAB_01c10250;
                          }
                          uVar10 = uVar10 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar18 = (undefined8 *)
                                FUN_01ae9f78(plVar15,*(long *)
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                             ,0);
LAB_01c10250:
                      (*(code *)*puVar18)(plVar15,puVar18[1]);
                    }
                  }
                  FUN_02739b94(&local_80,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__
                              );
                }
                goto LAB_01c0fd70;
              }
              plVar13 = (long *)thunk_FUN_01afa9e0(plVar13,*(undefined8 *)
                                                                                                                        
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
              if (plVar13 != (long *)0x0) {
                lVar11 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar10 != 0) {
                  piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) ==
                        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                      puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_01c104d8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)
                          FUN_01ae9f78(plVar13,*(long *)
                                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                       ,0);
LAB_01c104d8:
                (*(code *)*puVar18)(plVar13,puVar18[1]);
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_01c1072c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar20 = piVar20 + 4;
    if (uVar10 == 0) break;
LAB_01c1063c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01c10670;
    }
  }
LAB_01c10654:
  puVar18 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar3,0);
LAB_01c10670:
  (*(code *)*puVar18)(plVar12,puVar18[1]);
  return;
}


