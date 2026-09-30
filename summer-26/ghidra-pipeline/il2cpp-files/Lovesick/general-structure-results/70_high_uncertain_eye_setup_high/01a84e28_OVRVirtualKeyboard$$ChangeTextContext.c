/*
FUNCTION_NAME: OVRVirtualKeyboard$$ChangeTextContext
ENTRY_POINT: 01a84e28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRVirtualKeyboard__ChangeTextContext(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  
  do {
    lVar3 = FUN_0268fd4c(param_1,param_2);
    if (lVar3 == 0) {
LAB_01a84ff4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = FUN_0268ad68(lVar3,0);
    if ((uVar4 & 1) != 0) {
LAB_01a84e54:
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar2 = StringLiteral_302;
      uVar4 = FUN_0268b4e0(unaff_x22,0,0);
      if ((uVar4 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_01a84ff4;
        uVar4 = FUN_02689f60(unaff_x22,0);
        if ((uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
          lVar3 = FUN_0268fd4c(unaff_x22,0);
          if ((lVar3 != 0) && (lVar3 = FUN_0268b6ac(lVar3,0), plVar5 != (long *)0x0)) {
            if ((lVar3 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar7,0);
            }
            if ((int)plVar5[3] == 0) {
LAB_01a84ff8:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar5[4] = lVar3;
            puVar1 = Method_System_Nullable<InputControlScheme>_get_Value__;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660fcc(*(undefined8 *)puVar1,plVar5,0);
            *(long **)(unaff_x19 + 0x78) = unaff_x22;
            lVar3 = FUN_0268fd4c(unaff_x22,0);
            if (lVar3 != 0) {
              lVar3 = FUN_010e5800(lVar3,*(undefined8 *)
                                          Method_OVRTask_FromResult<OVRResult<OVRPlugin_Result>>__);
              *(long *)(unaff_x19 + 0x80) = lVar3;
              puVar2 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x20) = unaff_x19;
                lVar6 = *(long *)puVar2;
                lVar3 = *(long *)(lVar6 + 0x38);
                if (lVar3 == 0) {
                  FUN_00d59478(lVar6);
                  lVar3 = *(long *)(lVar6 + 0x38);
                }
                lVar3 = *(long *)(lVar3 + 0x10);
                if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                  lVar3 = FUN_00d5941c();
                }
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                puVar2 = Method_UnityEngine_NoAllocHelpers_SafeLength<int>__;
                lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                  lVar3 = FUN_00d5941c();
                }
                FUN_02660fcc(*(undefined8 *)puVar2,**(undefined8 **)(lVar3 + 0xb8),0);
                return;
              }
            }
          }
          goto LAB_01a84ff4;
        }
      }
      puVar1 = StringLiteral_2154;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar1,0);
      return;
    }
    do {
      do {
        unaff_x24 = unaff_x24 + 1;
        unaff_x22 = unaff_x20;
        if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) goto LAB_01a84e54;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_01a84ff8;
        param_1 = *(long **)(unaff_x26 + unaff_x24 * 8);
        if (param_1 == (long *)0x0) {
          param_1 = (long *)0x0;
        }
        else if (*param_1 != *unaff_x25) {
          param_1 = (long *)0x0;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(param_1,0,0);
      } while ((uVar4 & 1) == 0);
      if (param_1 == (long *)0x0) goto LAB_01a84ff4;
      uVar4 = FUN_02689f60(param_1,0);
    } while ((uVar4 & 1) == 0);
    param_2 = 0;
    unaff_x22 = param_1;
  } while( true );
}


