/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent$$Create<object>
ENTRY_POINT: 01035074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent__Create<object>(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_01323390(param_1,&stack0x00000010);
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000020;
  while( true ) {
    uVar1 = FUN_012b894c(&stack0x00000040,*unaff_x27);
    if ((uVar1 & 1) == 0) {
      FUN_012b8948(&stack0x00000040,*unaff_x26);
      if (*(char *)(unaff_x19 + 0x98) != '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        FUN_0268ace8(*(long *)(unaff_x19 + 0x90),1,0);
        if (*(long *)(unaff_x19 + 0x88) != 0) {
          FUN_01323390(*(long *)(unaff_x19 + 0x88),&stack0x00000028,*(undefined8 *)StringLiteral_635
                      );
          while( true ) {
            uVar1 = FUN_012b894c(&stack0x00000028,*unaff_x23);
            if ((uVar1 & 1) == 0) {
              FUN_012b8948(&stack0x00000028,
                           *(undefined8 *)
                            Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                          );
              return;
            }
            lVar2 = FUN_00ac2bf8(&stack0x00000028,*unaff_x24);
            if (lVar2 == 0) break;
            FUN_0268ace8(lVar2,0,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = FUN_00ac6198(&stack0x00000040,*unaff_x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) break;
    uVar5 = *(undefined8 *)(lVar2 + 0x58);
    lVar3 = thunk_FUN_00d62348(*unaff_x29);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar3);
    plVar4 = (long *)FUN_017b76bc(uVar5,lVar3,0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    else {
      lVar3 = *unaff_x29;
      if (*plVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      *(long **)(lVar2 + 0x58) = plVar4;
      if (*plVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


