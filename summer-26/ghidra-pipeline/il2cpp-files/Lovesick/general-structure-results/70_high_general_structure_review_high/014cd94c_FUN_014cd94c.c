/*
FUNCTION_NAME: FUN_014cd94c
ENTRY_POINT: 014cd94c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_014cd94c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 local_28;
  int local_24;
  
  if ((DAT_03776ea4 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Camera>_ToArray__);
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(StringLiteral_2136);
    thunk_FUN_00d48444(Method_System_Diagnostics_DiagnosticsConfigurationHandler__ctor__);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlSingle__ctor__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A01_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_System_Xml_Serialization_EnumMap_GetXmlName__);
    DAT_03776ea4 = 1;
  }
  puVar1 = Method_System_Data_SqlTypes_SqlSingle__ctor__;
  puVar3 = Method_System_Diagnostics_DiagnosticsConfigurationHandler__ctor__;
  puVar2 = Method_System_Collections_Generic_List<Camera>_ToArray__;
  if (*(int *)(param_1 + 0x20) == 1) {
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) {
      FUN_014cd720(param_1,*(undefined8 *)Method_System_Xml_Serialization_EnumMap_GetXmlName__);
      return;
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_List<Camera>_ToArray__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_014cda80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)Method_System_Collections_Generic_List<Camera>_ToArray__,
                          0);
FUN_014cda80:
    iVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A01_PostfixBurstDelegate_var
    ;
    if (iVar4 == 2) {
      if (*(int *)(param_1 + 0x20) == 2) {
        return;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                                );
      puVar2 = Method_System_IO_BinaryReader_ReadString__;
      if (lVar6 != 0) {
        FUN_012d1810(lVar6,param_1,*(undefined8 *)StringLiteral_2136,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014e0a9c(uVar11,lVar6,0);
        return;
      }
    }
    else {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_014cdb64;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_014cdb64:
        local_28 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_28);
        uVar7 = *(undefined8 *)puVar1;
        goto LAB_014cdb88;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_24 = *(int *)(param_1 + 0x20);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                               Method_System_Diagnostics_DiagnosticsConfigurationHandler__ctor__,
                              &local_24);
  uVar7 = *(undefined8 *)puVar1;
LAB_014cdb88:
  uVar11 = FUN_015f6780(uVar7,uVar11,0);
  FUN_014cd720(param_1,uVar11);
  return;
}


