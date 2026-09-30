/*
FUNCTION_NAME: OVRVirtualKeyboard$$SendVirtualKeyboardInput
ENTRY_POINT: 01a84ac8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRVirtualKeyboard__SendVirtualKeyboardInput(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  long *unaff_x23;
  long *in_stack_00000008;
  
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(StringLiteral_4199);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(Method_System_Nullable<InputControlScheme>_get_Value__);
  thunk_FUN_00d48444(StringLiteral_2154);
  thunk_FUN_00d48444(Method_UnityEngine_NoAllocHelpers_SafeLength<int>__);
  *(undefined1 *)(unaff_x20 + 0xce6) = 1;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_01a84ff4;
    uVar3 = FUN_02689f60(*(long *)(unaff_x19 + 0x78),0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar4 = FUN_0268fd4c(*(long *)(unaff_x19 + 0x78),0), lVar4 == 0)) goto LAB_01a84ff4;
      uVar3 = FUN_0268ad68(lVar4,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
  }
  FUN_01a85008();
  uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_System_Collections_Generic_List_Enumerator<MaterialPropertyVector>_Dispose__;
  uVar3 = FUN_02681b9c(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
LAB_01a84bf8:
    plVar6 = (long *)0x0;
  }
  else {
    if (((*(long *)(unaff_x19 + 0x18) == 0) ||
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x28), lVar4 == 0)) ||
       (lVar4 = FUN_0268fd4c(lVar4,0), lVar4 == 0)) goto LAB_01a84ff4;
    uVar3 = FUN_0268ad68(lVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_01a84bf8;
    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x28), lVar4 == 0)) goto LAB_01a84ff4;
    FUN_010c2c5c(lVar4,&stack0x00000008,*(undefined8 *)puVar1);
    plVar6 = in_stack_00000008;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(plVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_01a84ff4;
    uVar3 = FUN_02689f60(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_01a84c34;
  }
  else {
LAB_01a84c34:
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_02681b9c();
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if ((unaff_x21 == 0) || (lVar4 = FUN_0268fd4c(), lVar4 == 0)) goto LAB_01a84ff4;
      uVar3 = FUN_0268ad68(lVar4,0);
      plVar6 = (long *)0x0;
      if ((uVar3 & 1) != 0) {
        FUN_010c2c5c();
        plVar6 = in_stack_00000008;
      }
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(plVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_01a84ff4;
    uVar3 = FUN_02689f60(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_01a84ccc;
  }
  else {
LAB_01a84ccc:
    lVar4 = FUN_0268532c(0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x23);
    }
    uVar3 = FUN_02681b9c(lVar4,0,0);
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if ((lVar4 == 0) || (lVar5 = FUN_0268fd4c(lVar4,0), lVar5 == 0)) goto LAB_01a84ff4;
      uVar3 = FUN_0268ad68(lVar5,0);
      plVar6 = (long *)0x0;
      if ((uVar3 & 1) != 0) {
        FUN_010c2c5c(lVar4,&stack0x00000008,*(undefined8 *)puVar1);
        plVar6 = in_stack_00000008;
      }
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(plVar6,0,0);
  plVar8 = plVar6;
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_01a84ff4;
    uVar3 = FUN_02689f60(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_01a84d74;
  }
  else {
LAB_01a84d74:
    puVar1 = StringLiteral_4199;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_0112f9d4(0,*(undefined8 *)puVar1);
    puVar1 = StringLiteral_3257;
    if (lVar4 == 0) goto LAB_01a84ff4;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar3 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar3) goto LAB_01a84ff8;
        plVar8 = *(long **)(lVar4 + 0x20 + uVar3 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else if (*plVar8 != *(long *)puVar1) {
          plVar8 = (long *)0x0;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_02681b9c(plVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (plVar8 == (long *)0x0) goto LAB_01a84ff4;
          uVar7 = FUN_02689f60(plVar8,0);
          if ((uVar7 & 1) != 0) {
            lVar5 = FUN_0268fd4c(plVar8,0);
            if (lVar5 == 0) goto LAB_01a84ff4;
            uVar7 = FUN_0268ad68(lVar5,0);
            if ((uVar7 & 1) != 0) break;
          }
        }
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar3 = uVar3 + 1;
        plVar8 = plVar6;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = StringLiteral_302;
  uVar3 = FUN_0268b4e0(plVar8,0,0);
  if ((uVar3 & 1) != 0) {
LAB_01a84fb8:
    puVar2 = StringLiteral_2154;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar2,0);
    return;
  }
  if (plVar8 != (long *)0x0) {
    uVar3 = FUN_02689f60(plVar8,0);
    if ((uVar3 & 1) == 0) goto LAB_01a84fb8;
    plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
    lVar4 = FUN_0268fd4c(plVar8,0);
    if ((lVar4 != 0) && (lVar4 = FUN_0268b6ac(lVar4,0), plVar6 != (long *)0x0)) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_01a84ff8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[4] = lVar4;
      puVar2 = Method_System_Nullable<InputControlScheme>_get_Value__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(*(undefined8 *)puVar2,plVar6,0);
      *(long **)(unaff_x19 + 0x78) = plVar8;
      lVar4 = FUN_0268fd4c(plVar8,0);
      if (lVar4 != 0) {
        lVar4 = FUN_010e5800(lVar4,*(undefined8 *)
                                    Method_OVRTask_FromResult<OVRResult<OVRPlugin_Result>>__);
        *(long *)(unaff_x19 + 0x80) = lVar4;
        puVar1 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x20) = unaff_x19;
          lVar5 = *(long *)puVar1;
          lVar4 = *(long *)(lVar5 + 0x38);
          if (lVar4 == 0) {
            FUN_00d59478(lVar5);
            lVar4 = *(long *)(lVar5 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar1 = Method_UnityEngine_NoAllocHelpers_SafeLength<int>__;
          lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          FUN_02660fcc(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
          return;
        }
      }
    }
  }
LAB_01a84ff4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


