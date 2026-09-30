/*
FUNCTION_NAME: FUN_01498a10
ENTRY_POINT: 01498a10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01498ecc) */
/* WARNING: Removing unreachable block (ram,0x01498d00) */
/* WARNING: Removing unreachable block (ram,0x01498d04) */
/* WARNING: Removing unreachable block (ram,0x01498ea8) */
/* WARNING: Removing unreachable block (ram,0x01498d98) */

void FUN_01498a10(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_03776c5b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__
                      );
    thunk_FUN_00d48444(System_SystemException_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<CwShaderBundle_ShaderVariant>_MoveNext__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_DebugContext_LogWarning__);
    thunk_FUN_00d48444(StringLiteral_1859);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<DateFormatHandling>__ctor__);
    thunk_FUN_00d48444(StringLiteral_9846);
    thunk_FUN_00d48444(PTR_DAT_033eaee8);
    thunk_FUN_00d48444(TMPro_MaterialReferenceManager_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7764);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_58_0_TypeInfo);
    DAT_03776c5b = 1;
  }
  plVar12 = (long *)System_SystemException_TypeInfo;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  iVar16 = *param_1;
  lVar15 = *(long *)(param_1 + 8);
  if (iVar16 == 0) {
    local_68 = *(undefined8 *)(param_1 + 0xc);
    iVar16 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)(lVar15 + 0x10) != 0) || (*(char *)(lVar15 + 0x28) != '\0')) goto LAB_01498dac;
    plVar13 = *(long **)(lVar15 + 0x18);
    *(undefined1 *)(lVar15 + 0x28) = 1;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *plVar13;
    uVar14 = *(undefined8 *)(param_1 + 10);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_033eaee8) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_01498e00;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar13,*(long *)PTR_DAT_033eaee8,2);
LAB_01498e00:
    lVar9 = (*(code *)*puVar8)(plVar13,uVar14,puVar8[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_68 = FUN_013bdbc4(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
    uVar10 = FUN_013ba28c(&local_68,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                         );
    if ((uVar10 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_68;
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(param_1 + 2,&local_68,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__
                  );
      return;
    }
  }
  FUN_013ba2d0(&local_68,&local_b8,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
              );
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(long *)(lVar15 + 0x10) = local_b8;
  if (local_b8 == 0) {
    *(undefined1 *)(lVar15 + 0x28) = 0;
  }
  else {
    if (*(long *)(local_b8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(*(long *)(local_b8 + 0x30),&local_b8,*(undefined8 *)StringLiteral_7764);
    puVar7 = StringLiteral_9846;
    puVar6 = StringLiteral_1859;
    puVar5 = Method_System_Nullable<DateFormatHandling>__ctor__;
    puVar4 = 
    Method_System_Collections_Generic_List_Enumerator<CwShaderBundle_ShaderVariant>_MoveNext__;
    puVar3 = Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__;
    puVar2 = TMPro_MaterialReferenceManager_TypeInfo;
    puVar1 = System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo;
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      lVar9 = FUN_00bc269c(&local_80,*(undefined8 *)puVar7);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(*(long *)(lVar9 + 0x28),&local_b8,*(undefined8 *)puVar2);
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
      while (uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        lVar9 = FUN_00bc27a4(&local_a0,*(undefined8 *)puVar5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_0129aa60(*(long *)(lVar15 + 0x30),*(undefined8 *)(lVar9 + 0x18),
                              *(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0129a054(*(long *)(lVar15 + 0x30),*(undefined8 *)(lVar9 + 0x18),
                       *(undefined8 *)(lVar9 + 0x20),*(undefined8 *)puVar1);
        }
      }
      if (iVar16 < 0) {
        FUN_012b8948(&local_a0,*(undefined8 *)Method_Sirenix_Serialization_DebugContext_LogWarning__
                    );
      }
    }
    if (iVar16 < 0) {
      FUN_012b8948(&local_80,*(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo);
    }
    *(undefined2 *)(lVar15 + 0x28) = 0x100;
    plVar12 = (long *)System_SystemException_TypeInfo;
  }
LAB_01498dac:
  *param_1 = -2;
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(param_1 + 2,0);
  return;
}


