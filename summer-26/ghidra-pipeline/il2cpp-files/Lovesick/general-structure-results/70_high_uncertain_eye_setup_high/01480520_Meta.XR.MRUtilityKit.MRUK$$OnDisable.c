/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnDisable
ENTRY_POINT: 01480520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUK__OnDisable(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  long unaff_x23;
  ulong uVar10;
  undefined8 in_stack_00000008;
  
  uVar7 = in_stack_00000008._4_4_;
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x1e0));
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__);
  *(undefined1 *)(unaff_x19 + 0xb69) = 1;
  if (unaff_x22 != 0) {
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_12507,
                                  *(undefined4 *)(unaff_x22 + 0x18));
    iVar3 = FUN_01c8fac0();
    *unaff_x20 = iVar3;
    if (plVar4 != (long *)0x0) {
      if (0 < (int)plVar4[3]) {
        uVar10 = 0;
        do {
          iVar3 = *unaff_x20;
          FUN_0132138c();
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11275);
          if ((lVar5 == 0) || (FUN_017b46ec(lVar5,0), unaff_x23 == 0)) goto LAB_014807ac;
          FUN_0132138c();
          *(undefined1 *)(lVar5 + 0x10) = in_stack_00000008._4_1_;
          FUN_0132138c();
          *(uint *)(lVar5 + 0x14) = uVar7;
          if (unaff_x21 == 0) goto LAB_014807ac;
          FUN_0132138c();
          *(uint *)(lVar5 + 0x18) = uVar7 << (ulong)(iVar3 - uVar7 & 0x1f);
          FUN_0132138c();
          *(int *)(lVar5 + 0x1c) = ~(-1 << (ulong)(uVar7 & 0x1f)) << (ulong)(iVar3 - uVar7 & 0x1f);
          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar6 == 0) {
            uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar9,0);
          }
          uVar8 = *(uint *)(plVar4 + 3);
          if (uVar8 <= uVar10) goto LAB_014807b0;
          plVar4[uVar10 + 4] = lVar5;
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)uVar8);
      }
      puVar2 = Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
      lVar5 = *(long *)Method_UnityEngine_InputSystem_InputActionState_ReadValue<float>__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar2;
      }
      puVar1 = Method_System_Collections_Generic_List<RadioButton>_get_Count__;
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar2;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar6 == 0) goto LAB_014807ac;
        FUN_01267c10(lVar6,uVar9,
                     *(undefined8 *)
                      Method_System_Linq_Enumerable_FirstOrDefault<DebugUIHandlerWidget>__,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
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


