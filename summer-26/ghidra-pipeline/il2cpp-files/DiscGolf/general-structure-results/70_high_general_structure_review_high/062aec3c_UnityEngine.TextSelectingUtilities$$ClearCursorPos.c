/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$ClearCursorPos
ENTRY_POINT: 062aec3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextSelectingUtilities__ClearCursorPos(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8(Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__);
  FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__);
  FUN_02d965b8(PTR_DAT_069fb990);
  FUN_02d965b8(Method_Unity_Services_Vivox_Mint_Http_ResponseHandler_HandleAsyncResponse<string>__);
  FUN_02d965b8(Method_Unity_Services_Vivox_Mint_Http_ResponseHandler_CreateHttpException__);
  FUN_02d965b8(Method_Unity_Services_Vivox_Mint_Http_ResponseHandler_CreateOneOfException__);
  FUN_02d965b8(Method_Unity_Services_Vivox_Mint_Http_ResponseHandler_HandleAsyncResponse__);
  FUN_02d965b8(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
  FUN_02d965b8(Method_Unity_Properties_PropertyPath_get_Item__);
  FUN_02d965b8(Method_System_MonoCustomAttrs_IsDefined__);
  FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_CheckKind__);
  FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_GetHashCode__);
  FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_ToString__);
  FUN_02d965b8(Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__);
  FUN_02d965b8(Method_System_IO_MonoLinqHelper_ToArray<string>__);
  *(undefined1 *)(unaff_x21 + 0x6c7) = 1;
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_069fb990;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2))
    {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_06350670();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    puVar1 = Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__;
    plVar4 = (long *)thunk_FUN_02dd3048();
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_062aedb8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,0);
LAB_062aedb8:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__);
      FUN_0494d298();
      if (lVar2 == 0) goto LAB_062af054;
      FUN_049503d0(lVar2,uVar6,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__);
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_062aee64;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,1);
LAB_062aee64:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
      FUN_0494d298();
      if (lVar2 == 0) goto LAB_062af054;
      FUN_049503d0(lVar2,uVar6,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<string>__);
    }
    puVar1 = Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__;
    plVar4 = (long *)thunk_FUN_02dd3048();
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar2 = *(long *)puVar1;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_062aef3c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,0);
LAB_062aef3c:
      lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__);
      FUN_0494d298();
      if (lVar2 != 0) {
        FUN_049503d0(lVar2,uVar6,*(undefined8 *)Method_Unity_Properties_PropertyPathPart_ToString__)
        ;
        lVar7 = *plVar4;
        lVar2 = *(long *)puVar1;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_062aefe8;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,1);
LAB_062aefe8:
        lVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_Unity_Properties_PropertyPathPart_CheckKind__);
        FUN_0494d298();
        if (lVar2 != 0) {
          FUN_049503d0(lVar2,uVar6,
                       *(undefined8 *)Method_Unity_Properties_PropertyPathPart_GetHashCode__);
          return;
        }
      }
LAB_062af054:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return;
}


