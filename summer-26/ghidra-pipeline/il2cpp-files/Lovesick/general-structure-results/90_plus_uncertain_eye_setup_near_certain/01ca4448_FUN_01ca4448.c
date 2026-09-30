/*
FUNCTION_NAME: FUN_01ca4448
ENTRY_POINT: 01ca4448
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01ca4448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 local_48;
  
  puVar3 = Method_System_Collections_Generic_List<RaycastResult>__ctor__;
  if ((DAT_0377ed51 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RaycastResult>__ctor__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakStaticFieldGetter__
                      );
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_UpdateRule__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__
                      );
    DAT_0377ed51 = 1;
  }
  puVar4 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  local_48 = 0;
  plVar6 = (long *)thunk_FUN_00d6225c(param_3,*(undefined8 *)puVar3);
  if ((plVar6 == (long *)0x0) &&
     (plVar6 = (long *)FUN_010c06e0(param_3,*(undefined8 *)puVar4), plVar6 == (long *)0x0))
  goto LAB_01ca4d40;
  lVar13 = *plVar6;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01ca4560;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_00d59724(plVar6,*(long *)
                                System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo,
                        0);
LAB_01ca4560:
  puVar1 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar2 = Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__;
  switch(iVar5) {
  case 0:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = FUN_01ca4d44(param_1,param_2);
    break;
  case 1:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca4888;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4888:
    uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca4e5c(param_1,param_2,uVar8);
    break;
  case 2:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca477c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca477c:
    uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca47dc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca47dc:
    uVar9 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca4fe8(param_1,param_2,uVar8,uVar9);
    break;
  case 3:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca4828;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4828:
    uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca48d0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca48d0:
    uVar9 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca4930;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4930:
    uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca51e0(param_1,param_2,uVar8,uVar9,uVar10);
    break;
  default:
    if (param_1 == 0) {
      if (iVar5 == 5) {
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4a68;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4a68:
        uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4b28;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4b28:
        uVar9 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4be8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4be8:
        uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4c98;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4c98:
        uVar11 = (*(code *)*puVar7)(plVar6,3,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4cf8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4cf8:
        uVar12 = (*(code *)*puVar7)(plVar6,4,puVar7[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        lVar13 = FUN_01ca4018(param_2,uVar8,uVar9,uVar10,uVar11,uVar12);
        return lVar13;
      }
      if (iVar5 == 4) {
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4a08;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4a08:
        uVar8 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4ac8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4ac8:
        uVar9 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4b88;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4b88:
        uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ca4c48;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_01ca4c48:
        uVar11 = (*(code *)*puVar7)(plVar6,3,puVar7[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        lVar13 = FUN_01ca3d94(param_2,uVar8,uVar9,uVar10,uVar11);
        return lVar13;
      }
    }
    FUN_01d00ed8(param_2,*(undefined8 *)
                          Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__
                 ,0);
    local_48 = FUN_010c06e0(plVar6,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_01c95d6c(param_2,*(undefined8 *)puVar2);
    FUN_01ca5694(param_1,param_2);
    FUN_01d038c4(param_2,6,&local_48,*(undefined8 *)puVar2,0);
    uVar8 = local_48;
    if (param_1 == 0) {
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Data_ForeignKeyConstraint_set_UpdateRule__);
      if (lVar13 == 0) goto LAB_01ca4d40;
      FUN_01cb9020(lVar13,param_2,uVar8,0);
    }
    else {
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakStaticFieldGetter__
                                 );
      if (lVar13 == 0) {
LAB_01ca4d40:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01cb91f8(lVar13,param_2,param_1,uVar8,0);
    }
  }
  return lVar13;
}


