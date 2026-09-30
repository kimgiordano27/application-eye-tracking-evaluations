/*
FUNCTION_NAME: FUN_06129130
ENTRY_POINT: 06129130
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_06129130(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_06dc66c3 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_FromJson__)
    ;
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_GetConcreteType__
                );
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOfJsonConverter_CanConvert__
                );
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOfJsonConverter_WriteJson__
                );
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__);
    FUN_02d965b8(PTR_DAT_069fcc80);
    FUN_02d965b8(PTR_DAT_069fdd10);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__);
    FUN_02d965b8(PTR_DAT_069fdd18);
    FUN_02d965b8(PTR_DAT_069fcca8);
    FUN_02d965b8(PTR_DAT_06a15750);
    FUN_02d965b8(PTR_DAT_06a15758);
    FUN_02d965b8(PTR_DAT_06a15748);
    FUN_02d965b8(PTR_DAT_069fdd20);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__);
    FUN_02d965b8(PTR_DAT_069fccb8);
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_DeserializeIntoActualObject__
                );
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_DeserializeIntoActualObject__
                );
    DAT_06dc66c3 = 1;
  }
  puVar1 = PTR_DAT_069fe788;
  iVar13 = *param_1;
  local_48 = 0;
  lVar9 = *(long *)(param_1 + 8);
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (1 < iVar13 - 2U) {
    if (iVar13 == 0) {
      local_48 = *(undefined8 *)(param_1 + 0xe);
      iVar13 = -1;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
LAB_061292d4:
      FUN_0540fba8(&local_48,0);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 10) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_50 = FUN_04816c54(lVar4,*(undefined8 *)PTR_DAT_069fdd20);
      uVar7 = FUN_047e5d94(&local_50,*(undefined8 *)PTR_DAT_069fdd18);
      if ((uVar7 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x10) = local_50;
        LeanTween__value(param_1 + 0x10,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_035370c8(param_1 + 2,&local_50,param_1,
                     *(undefined8 *)
                      Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_FromJson__
                    );
        return;
      }
    }
    else {
      if (iVar13 != 1) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar9 + 0x80) != '\0') goto LAB_06129808;
        if (*(int *)(lVar9 + 0x28) == 1) goto LAB_06129348;
        lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_DeserializeIntoActualObject__
                                  );
        FUN_0552aca4(lVar4,0);
        plVar10 = (long *)(param_1 + 10);
        *plVar10 = lVar4;
        LeanTween__value(plVar10,lVar4);
        lVar4 = *plVar10;
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a15748);
        FUN_047e7284(uVar11,*(undefined8 *)PTR_DAT_06a15750);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        puVar5 = (undefined8 *)(lVar4 + 0x10);
        *puVar5 = uVar11;
        LeanTween__value(puVar5,uVar11);
        lVar4 = *plVar10;
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
        FUN_054521e8(uVar11,lVar4,
                     *(undefined8 *)
                      Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_DeserializeIntoActualObject__
                     ,0);
        FUN_0612250c(lVar9,uVar11);
        lVar4 = FUN_06123370(lVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        local_48 = FUN_0555c32c(lVar4,0);
        uVar7 = FUN_0540fae0(&local_48,0);
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0xe) = local_48;
          LeanTween__value(param_1 + 0xe,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0353897c(param_1 + 2,&local_48,param_1,
                       *(undefined8 *)
                        Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOfJsonConverter_WriteJson__
                      );
          return;
        }
        goto LAB_061292d4;
      }
      local_50 = *(undefined8 *)(param_1 + 0x10);
      iVar13 = -1;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
    }
    FUN_047e5dd4(&local_50,*(undefined8 *)PTR_DAT_069fdd10);
    piVar8 = param_1 + 10;
    piVar8[0] = 0;
    piVar8[1] = 0;
    LeanTween__value(piVar8,0);
  }
LAB_06129348:
  if (iVar13 == 2) {
    local_58 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_061293c4:
    uVar11 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc80);
    puVar2 = Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar10;
    uVar12 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_061295c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                          ,2);
LAB_061295c0:
    uVar7 = (*(code *)*puVar5)(plVar10,uVar12,puVar5[1]);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0xc) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x50);
        thunk_FUN_02dfd288(
                          Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_FromJson__
                          );
        uVar11 = thunk_FUN_02dd3144();
        FUN_06129c38(uVar11,uVar12);
        uVar12 = thunk_FUN_02dfd288(
                                   Method_Unity_Services_CloudSave_Internal_Models_GetItems400Response_GetConcreteType__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar11,uVar12);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar10;
    uVar12 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_06129630;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar2,3);
LAB_06129630:
    bVar3 = (*(code *)*puVar5)(plVar10,uVar12,puVar5[1]);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                              );
    FUN_0552aca4(lVar4,0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x50);
    LeanTween__value();
    *(undefined8 *)(lVar4 + 0x18) = uVar11;
    LeanTween__value((undefined8 *)(lVar4 + 0x18),uVar11);
    lVar6 = *(long *)(param_1 + 0xc);
    *(byte *)(lVar4 + 0x20) = bVar3 & 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar11 = *(undefined8 *)
              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar6 + 0x58);
    lVar6 = thunk_FUN_02dd3144(uVar11);
    FUN_0612113c(lVar6,lVar4);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_06122acc(lVar9,*(undefined4 *)(lVar6 + 0x10),lVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_60 = FUN_0481d028(lVar4,*(undefined8 *)
                                   Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__
                           );
    uVar7 = FUN_047e6248(&local_60,
                         *(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__);
    if ((uVar7 & 1) == 0) {
      *param_1 = 3;
      *(undefined8 *)(param_1 + 0x14) = local_60;
      LeanTween__value(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0353761c(param_1 + 2,&local_60,param_1,
                   *(undefined8 *)
                    Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOfJsonConverter_CanConvert__
                  );
      return;
    }
  }
  else {
    if (iVar13 != 3) {
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = FUN_06122080();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_58 = FUN_0481d028(lVar4,*(undefined8 *)PTR_DAT_069fccb8);
      uVar7 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca8);
      if ((uVar7 & 1) == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0x12) = local_58;
        LeanTween__value(param_1 + 0x12,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0353761c(param_1 + 2,&local_58,param_1,
                     *(undefined8 *)
                      Method_Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_GetConcreteType__
                    );
        return;
      }
      goto LAB_061293c4;
    }
    local_60 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  lVar4 = FUN_047e6288(&local_60,
                       *(undefined8 *)
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                      );
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x60) = *(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x10)
  ;
  LeanTween__value();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar10 = *(long **)(lVar9 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  uVar11 = *(undefined8 *)(param_1 + 0xc);
  uVar12 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionMediator__TryPrepareLocomotion;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                        ,4);
UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionMediator__TryPrepareLocomotion:
  (*(code *)*puVar5)(plVar10,uVar11,uVar12,puVar5[1]);
LAB_06129808:
  lVar9 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(param_1 + 2,0);
  return;
}


