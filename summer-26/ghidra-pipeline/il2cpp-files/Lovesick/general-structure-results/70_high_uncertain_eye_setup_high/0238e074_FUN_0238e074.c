/*
FUNCTION_NAME: FUN_0238e074
ENTRY_POINT: 0238e074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0238e074(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_03781e35 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__);
    thunk_FUN_00d48444(Method_OVRPlugin_RectfPair_set_Item__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ParameterBox_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1fb0);
    DAT_03781e35 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    lVar6 = *(long *)Method_OVRPlugin_RectfPair_set_Item__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
    }
    puVar2 = PTR_DAT_033f1fb0;
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      if ((int)plVar9[3] == 0) {
LAB_0238e25c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (plVar9[4] == 0) {
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1fb0);
        puVar3 = 
        System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ParameterBox_TypeInfo;
        if (lVar8 != 0) {
          uVar4 = 0;
          do {
            FUN_01320e50(lVar8,*(undefined8 *)puVar3);
            if (plVar9 == (long *)0x0) break;
            lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar6 == 0) {
              uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar5,0);
            }
            if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_0238e25c;
            plVar9[uVar4 + 4] = lVar8;
            if (uVar4 == 1) goto LAB_0238e1c0;
            plVar9 = *(long **)(param_1 + 0x18);
            uVar4 = uVar4 + 1;
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          } while (lVar8 != 0);
        }
      }
      else {
LAB_0238e1c0:
        puVar2 = Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
        lVar8 = 0;
        while (lVar6 = *(long *)(param_1 + 0x18), lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= (uint)lVar8) goto LAB_0238e25c;
          lVar6 = *(long *)(lVar6 + lVar8 * 8 + 0x20);
          if (lVar6 == 0) break;
          lVar7 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
          if ((uVar4 & 1) == 0) {
            *(undefined4 *)(lVar6 + 0x18) = 0;
          }
          else {
            iVar1 = *(int *)(lVar6 + 0x18);
            *(undefined4 *)(lVar6 + 0x18) = 0;
            if (0 < iVar1) {
              FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
            }
          }
          lVar8 = lVar8 + 1;
          if ((int)lVar8 == 2) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


