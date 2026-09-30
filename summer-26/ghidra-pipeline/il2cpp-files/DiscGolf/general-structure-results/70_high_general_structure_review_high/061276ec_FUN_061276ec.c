/*
FUNCTION_NAME: FUN_061276ec
ENTRY_POINT: 061276ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_061276ec(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_06dc66be & 1) == 0) {
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                );
    FUN_02d965b8(Method_UnityEngine_GameObject_TryGetComponent<Collider>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__);
    FUN_02d965b8(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__);
    DAT_06dc66be = 1;
  }
  iVar13 = *param_1;
  lVar11 = *(long *)(param_1 + 10);
  local_38 = 0;
  local_48 = 0;
  if (iVar13 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    iVar13 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0612785c:
    uVar5 = FUN_047e6288(&local_38,
                         *(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                        );
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
    ;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x48) + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
           ) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_061278dc;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                          ,0);
FUN_061278dc:
    lVar3 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if (lVar3 == 0) {
      thunk_FUN_02dfd288(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__);
      uVar5 = thunk_FUN_02dd3144();
      FUN_06127f80();
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar7);
    }
    if (*(long *)(lVar11 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x48) + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06127948;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar2,0);
LAB_06127948:
    uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                              );
    FUN_06121420(uVar8,uVar7,uVar5);
    lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                              );
    FUN_0612108c(lVar3,uVar8);
    if (iVar13 != 1) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = FUN_06122acc(lVar11,*(undefined4 *)(lVar3 + 0x10),lVar3);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_48 = FUN_0481d028(lVar3,*(undefined8 *)
                                     Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__
                             );
      uVar4 = FUN_047e6248(&local_48,
                           *(undefined8 *)
                            Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__)
      ;
      if ((uVar4 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xe) = local_48;
        LeanTween__value(param_1 + 0xe,0);
        FUN_03548b74(param_1 + 2,&local_48,param_1,
                     *(undefined8 *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
        return;
      }
      goto LAB_061279b0;
    }
  }
  else if (iVar13 != 1) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = FUN_061216c4(*(undefined8 *)(lVar11 + 0x10));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_0481d028(lVar3,*(undefined8 *)
                                   Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__
                           );
    uVar4 = FUN_047e6248(&local_38,
                         *(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      LeanTween__value(param_1 + 0xc,0);
      FUN_03548b74(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__);
      return;
    }
    goto LAB_0612785c;
  }
  local_48 = *(undefined8 *)(param_1 + 0xe);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -1;
LAB_061279b0:
  lVar3 = FUN_047e6288(&local_48,
                       *(undefined8 *)
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                      );
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar12 = *(long **)(lVar11 + 0x38);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar12;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_UnityEngine_GameObject_TryGetComponent<Collider>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06127aac;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar12,*(long *)Method_UnityEngine_GameObject_TryGetComponent<Collider>__,1
                       );
LAB_06127aac:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  plVar12 = *(long **)(lVar11 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar12;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_06127b18;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar12,*(long *)
                                 Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                        ,9);
LAB_06127b18:
  (*(code *)*puVar6)(plVar12,lVar3,puVar6[1]);
  FUN_06122f64(lVar11,1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined1 *)(lVar11 + 0x81) = *(undefined1 *)(lVar3 + 0x14);
    *(undefined4 *)(lVar11 + 0x84) = uVar1;
    FUN_061234ec(lVar11);
    *param_1 = -2;
    FUN_054102cc(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


