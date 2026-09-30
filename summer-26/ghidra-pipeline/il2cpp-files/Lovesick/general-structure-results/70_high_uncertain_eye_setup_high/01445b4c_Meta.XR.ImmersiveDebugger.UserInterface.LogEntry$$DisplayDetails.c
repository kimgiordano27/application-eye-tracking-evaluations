/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry$$DisplayDetails
ENTRY_POINT: 01445b4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__DisplayDetails(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  undefined8 *unaff_x21;
  long lVar11;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(StringLiteral_10415);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<DataTable>_Contains__);
  thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_PowerAssign__);
  thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa42) = 1;
  plVar7 = (long *)thunk_FUN_00d62348(*unaff_x21);
  puVar4 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
  if (plVar7 != (long *)0x0) {
    FUN_0160aa4c(plVar7,0);
    lVar11 = *(long *)puVar4;
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 == 0) {
      FUN_00d59478(lVar11);
      lVar9 = *(long *)(lVar11 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = Method_System_Collections_Generic_List<DataTable>_Contains__;
    lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    FUN_0160dd60(plVar7,*(undefined8 *)puVar1,**(undefined8 **)(lVar9 + 0xb8),0);
    puVar6 = StringLiteral_10415;
    puVar5 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
    ;
    puVar3 = Method_System_Linq_Expressions_Expression_PowerAssign__;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
    puVar1 = System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
    lVar9 = *(long *)(unaff_x19 + 0x18);
    if (lVar9 != 0) {
      iVar10 = 0;
      do {
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 == 0) break;
        if (*(int *)(lVar9 + 0x18) <= iVar10) {
          lVar11 = *(long *)puVar4;
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
            FUN_00d59478(lVar11);
            lVar9 = *(long *)(lVar11 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          FUN_0160dd60(plVar7,*(undefined8 *)puVar6,**(undefined8 **)(lVar9 + 0xb8),0);
          lVar9 = *(long *)(unaff_x19 + 0x18);
          if (lVar9 != 0) {
            iVar10 = 0;
            goto LAB_01445d04;
          }
          break;
        }
        FUN_0132138c(lVar9,iVar10,&stack0x00000008,*(undefined8 *)puVar2);
        if (in_stack_00000008 == 0) break;
        uVar8 = FUN_0268b6ac(in_stack_00000008,0);
        FUN_0160d178(plVar7,*(undefined8 *)puVar3,uVar8,0);
        lVar9 = *(long *)(unaff_x19 + 0x18);
        iVar10 = iVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  goto LAB_01445d54;
  while( true ) {
    if (*(int *)(lVar9 + 0x18) <= iVar10) {
      FUN_0160c430(plVar7,*(undefined8 *)puVar1,0);
      (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      return;
    }
    FUN_0132138c(lVar9,iVar10,&stack0x00000008,*(undefined8 *)puVar5);
    if (in_stack_00000008 == 0) break;
    uVar8 = FUN_0144461c();
    FUN_0160d178(plVar7,*(undefined8 *)puVar3,uVar8,0);
    lVar9 = *(long *)(unaff_x19 + 0x18);
    iVar10 = iVar10 + 1;
    if (lVar9 == 0) break;
LAB_01445d04:
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 == 0) break;
  }
LAB_01445d54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


