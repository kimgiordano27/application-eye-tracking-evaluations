/*
FUNCTION_NAME: System.TermInfoDriver$$SetCursorPosition
ENTRY_POINT: 030bace4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


void System_TermInfoDriver__SetCursorPosition(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  long lVar6;
  ulong local_40;
  undefined8 uStack_38;
  undefined *puVar4;
  
  if ((DAT_03ef40e4 & 1) == 0) {
    FUN_01c5c92c(PTR_System_ParameterizedStrings_FormatParam___TypeInfo_03cc2750);
    DAT_03ef40e4 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    System_TermInfoDriver__Init(param_1);
  }
  System_TermInfoDriver__CheckWindowDimensions(param_1);
  if ((int)param_2 < 0) {
LAB_030bae18:
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar5 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(PTR_StringLiteral_8850_03cc2758);
    puVar4 = PTR_StringLiteral_6203_03cc2760;
  }
  else {
    if (*(int *)(param_1 + 0x7c) <= (int)param_2) goto LAB_030bae18;
    if (-1 < (int)param_3) {
      if ((int)param_3 < *(int *)(param_1 + 0x78)) {
        lVar6 = *(long *)(param_1 + 200);
        if (lVar6 != 0) {
          lVar1 = FUN_01c5ca18(*(undefined8 *)
                                PTR_System_ParameterizedStrings_FormatParam___TypeInfo_03cc2750,2);
          uStack_38 = 0;
          local_40 = (ulong)param_3;
          thunk_FUN_01cc8040((ulong)&local_40 | 8,0);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          if (*(int *)(lVar1 + 0x18) != 0) {
            *(undefined8 *)(lVar1 + 0x28) = uStack_38;
            *(ulong *)(lVar1 + 0x20) = local_40;
            thunk_FUN_01cc8040(lVar1 + 0x28,0);
            uStack_38 = 0;
            local_40 = (ulong)param_2;
            thunk_FUN_01cc8040((ulong)&local_40 | 8,0);
            if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar1 + 0x38) = uStack_38;
              *(ulong *)(lVar1 + 0x30) = local_40;
              thunk_FUN_01cc8040(lVar1 + 0x38,0);
              uVar2 = System_ParameterizedStrings__Evaluate(lVar6,lVar1);
              System_TermInfoDriver__WriteConsole(param_1,uVar2);
              *(uint *)(param_1 + 0x18) = param_2;
              *(uint *)(param_1 + 0x1c) = param_3;
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        thunk_FUN_01cb9718(PTR_System_NotSupportedException_TypeInfo_03cb5c28);
        uVar5 = thunk_FUN_01c8fc48();
        uVar2 = thunk_FUN_01cb9718(PTR_StringLiteral_5642_03cc2780);
        System_NotSupportedException___ctor(uVar5,uVar2,0);
        goto LAB_030bae8c;
      }
    }
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar5 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(PTR_StringLiteral_9926_03cc2768);
    puVar4 = PTR_StringLiteral_6202_03cc2770;
  }
  uVar3 = thunk_FUN_01cb9718(puVar4);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar2,uVar3,0);
LAB_030bae8c:
  uVar2 = thunk_FUN_01cb9718(PTR_Method_System_TermInfoDriver_SetCursorPosition___03cc2778);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar5,uVar2);
}


