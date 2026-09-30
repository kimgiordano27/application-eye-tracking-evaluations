/*
FUNCTION_NAME: FUN_01dfb5d0
ENTRY_POINT: 01dfb5d0
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


/* WARNING: Removing unreachable block (ram,0x01dfb808) */

void FUN_01dfb5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  
  puVar3 = Method_System_Collections_SortedList_KeyList_IndexOf__;
  puVar2 = Method_System_Runtime_CompilerServices_TaskAwaiter<MRUK_LoadDeviceResult>_GetResult__;
  puVar1 = Method_System_Collections_Generic_List<VisualElement>_AddRange__;
  if ((DAT_0377f9ca & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(UnityEngine_UIElements_MouseMoveEvent_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>_AddRange__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<JobHandle>_Dispose__);
    thunk_FUN_00d48444(Method_System_Collections_SortedList_KeyList_IndexOf__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<MRUK_LoadDeviceResult>_GetResult__
                      );
    DAT_0377f9ca = 1;
  }
  uVar4 = FUN_01600424(*(undefined8 *)puVar3,param_2,*(undefined8 *)puVar2,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_Unity_Collections_NativeArray<JobHandle>_Dispose__;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
  ;
  if (lVar5 != 0) {
    FUN_016ddb2c(lVar5,uVar4,0);
    local_34[0] = 0;
    plVar6 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_34);
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = StringLiteral_10310;
    if (plVar7 != (long *)0x0) {
      FUN_01f292fc(plVar7,lVar5,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)UnityEngine_UIElements_MouseMoveEvent_TypeInfo) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_01dfb744;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)UnityEngine_UIElements_MouseMoveEvent_TypeInfo,1);
LAB_01dfb744:
      (*(code *)*puVar8)(plVar6,plVar7,puVar8[1]);
      lVar5 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01dfb7a4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01dfb7a4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar6 != (long *)0x0) {
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar6);
        }
        puVar9 = (undefined2 *)thunk_FUN_00d624a0();
        local_38[0] = *puVar9;
        thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_38);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


