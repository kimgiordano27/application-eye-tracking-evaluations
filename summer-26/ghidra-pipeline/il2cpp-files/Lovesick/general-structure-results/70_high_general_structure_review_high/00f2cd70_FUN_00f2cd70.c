/*
FUNCTION_NAME: FUN_00f2cd70
ENTRY_POINT: 00f2cd70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_00f2cd70(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 local_78;
  undefined8 local_68;
  
  if ((DAT_037755c9 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_5294);
    thunk_FUN_00d48444(StringLiteral_8630);
    thunk_FUN_00d48444(System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_TResult>_var);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<string>_Contains__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    thunk_FUN_00d48444(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_232);
    DAT_037755c9 = 1;
  }
  puVar11 = StringLiteral_5294;
  puVar10 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  puVar9 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__;
  puVar8 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  puVar7 = System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo;
  puVar6 = Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo;
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_PostfixBurstDelegate_var
  ;
  puVar4 = System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_TResult>_var;
  local_68 = 0;
  local_78 = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  if (lVar12 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = iVar1;
    do {
      iVar2 = *(int *)(lVar12 + 0x10);
      if (iVar2 <= iVar3) {
LAB_00f2cedc:
        lVar12 = FUN_01601d40(lVar12,iVar1,*(int *)(param_1 + 0x10) - iVar1,0);
        if (lVar12 == 0) break;
        uVar13 = FUN_0160472c(lVar12,*(undefined8 *)puVar8,0);
        if (((((uVar13 & 1) == 0) &&
             (uVar13 = FUN_0160472c(lVar12,*(undefined8 *)puVar4,0), (uVar13 & 1) == 0)) &&
            (uVar13 = FUN_0160472c(lVar12,*(undefined8 *)puVar9,0), (uVar13 & 1) == 0)) &&
           (((uVar13 = thunk_FUN_015fe514(lVar12,*(undefined8 *)puVar5,0), (uVar13 & 1) == 0 &&
             (uVar13 = thunk_FUN_015fe514(lVar12,*(undefined8 *)puVar6,0), (uVar13 & 1) == 0)) &&
            (uVar13 = thunk_FUN_015fe514(lVar12,*(undefined8 *)
                                                 Method_System_Collections_Generic_HashSet<string>_Contains__
                                         ,0), (uVar13 & 1) == 0)))) {
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01731954(0);
          uVar13 = FUN_01770c3c(lVar12,0x1ff,uVar14,&local_78,0);
          uVar14 = local_78;
          if ((uVar13 & 1) == 0) {
            *param_2 = 0;
            uVar14 = *(undefined8 *)StringLiteral_8630;
LAB_00f2cff8:
            uVar14 = FUN_015f5b28(uVar14,lVar12,0);
            uVar14 = FUN_00f2ba44(param_1,uVar14);
            return uVar14;
          }
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          if (lVar12 == 0) break;
          FUN_00f2a4bc(lVar12,uVar14);
          *param_2 = lVar12;
        }
        else {
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01731954(0);
          uVar13 = FUN_01756bd0(lVar12,0x1ff,uVar14,&local_68,0);
          uVar14 = local_68;
          if ((uVar13 & 1) == 0) {
            *param_2 = 0;
            uVar14 = *(undefined8 *)puVar11;
            goto LAB_00f2cff8;
          }
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          if (lVar12 == 0) break;
          FUN_00f2a450(uVar14);
          *param_2 = lVar12;
        }
        puVar4 = StringLiteral_232;
        lVar12 = *(long *)StringLiteral_232;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *(long *)puVar4;
        }
        return *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
      }
      *(int *)(param_1 + 0x10) = iVar3 + 1;
      if ((iVar3 < -1) || (iVar2 <= iVar3 + 1)) goto LAB_00f2cedc;
      uVar13 = FUN_00f2bd34(param_1,0);
      uVar13 = FUN_00f2ccec(uVar13,uVar13 & 0xffffffff);
      if ((uVar13 & 1) != 0) {
        lVar12 = *(long *)(param_1 + 0x18);
        if (lVar12 != 0) goto LAB_00f2cedc;
        break;
      }
      lVar12 = *(long *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x10);
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


