/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnEnable
ENTRY_POINT: 01480490
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUK__OnEnable(long param_1,long param_2,long param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_64;
  
  if ((DAT_03776b69 & 1) == 0) {
    thunk_FUN_00d48444(Polenter_Serialization_Core_ComplexProperty_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RadioButton>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_12507);
    thunk_FUN_00d48444(StringLiteral_11275);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_11502);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<DebugUIHandlerWidget>__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
    DAT_03776b69 = 1;
  }
  if (param_2 != 0) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_12507,*(undefined4 *)(param_2 + 0x18)
                                 );
    iVar3 = FUN_01c8fac0(param_2,0);
    *param_4 = iVar3;
    puVar1 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    if (plVar4 != (long *)0x0) {
      if (0 < (int)plVar4[3]) {
        uVar10 = 0;
        do {
          iVar3 = *param_4;
          FUN_0132138c(param_2,uVar10 & 0xffffffff,&local_64,*(undefined8 *)puVar1);
          uVar7 = local_64;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11275);
          if ((lVar5 == 0) || (FUN_017b46ec(lVar5,0), param_1 == 0)) goto LAB_014807ac;
          FUN_0132138c(param_1,uVar10 & 0xffffffff,&local_64,*(undefined8 *)StringLiteral_11502);
          *(undefined1 *)(lVar5 + 0x10) = (undefined1)local_64;
          FUN_0132138c(param_2,uVar10 & 0xffffffff,&local_64,*(undefined8 *)puVar1);
          *(uint *)(lVar5 + 0x14) = local_64;
          if (param_3 == 0) goto LAB_014807ac;
          FUN_0132138c(param_3,uVar10 & 0xffffffff,&local_64,*(undefined8 *)puVar1);
          *(uint *)(lVar5 + 0x18) = local_64 << (ulong)(iVar3 - uVar7 & 0x1f);
          FUN_0132138c(param_2,uVar10 & 0xffffffff,&local_64,*(undefined8 *)puVar1);
          *(int *)(lVar5 + 0x1c) =
               ~(-1 << (ulong)(local_64 & 0x1f)) << (ulong)(iVar3 - uVar7 & 0x1f);
          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar6 == 0) {
            uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar9,0);
          }
          uVar7 = *(uint *)(plVar4 + 3);
          if (uVar7 <= uVar10) goto LAB_014807b0;
          plVar4[uVar10 + 4] = lVar5;
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)uVar7);
      }
      puVar1 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
      lVar5 = *(long *)Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      puVar2 = Method_System_Collections_Generic_List<RadioButton>_get_Count__;
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_014807ac;
        FUN_01267c10(lVar6,uVar9,
                     *(undefined8 *)
                      Method_System_Linq_Enumerable_FirstOrDefault<DebugUIHandlerWidget>__,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
      }
      FUN_010b0448(plVar4,lVar6,*(undefined8 *)Polenter_Serialization_Core_ComplexProperty_TypeInfo)
      ;
      uVar7 = (uint)plVar4[3];
      if (1 < (int)uVar7) {
        lVar5 = 0;
        do {
          uVar8 = (uint)lVar5;
          if (uVar7 <= uVar8 + 1) goto LAB_014807b0;
          lVar6 = plVar4[lVar5 + 5];
          if (lVar6 == 0) goto LAB_014807ac;
          if (0x1869e < *(int *)(lVar6 + 0x14)) break;
          if (uVar7 == uVar8) goto LAB_014807b0;
          if (plVar4[(long)(int)uVar8 + 4] == 0) goto LAB_014807ac;
          lVar5 = lVar5 + 1;
          *(long *)(plVar4[(long)(int)uVar8 + 4] + 0x20) = lVar6;
        } while ((int)lVar5 + 1 < (int)uVar7);
      }
      if (uVar7 != 0) {
        return plVar4[4];
      }
LAB_014807b0:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_014807ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


