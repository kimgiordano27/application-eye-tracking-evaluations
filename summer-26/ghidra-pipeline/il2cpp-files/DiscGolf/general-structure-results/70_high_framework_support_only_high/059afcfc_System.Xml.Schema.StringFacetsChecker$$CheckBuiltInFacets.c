/*
FUNCTION_NAME: System.Xml.Schema.StringFacetsChecker$$CheckBuiltInFacets
ENTRY_POINT: 059afcfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x059affa4) */
/* WARNING: Removing unreachable block (ram,0x059affa8) */
/* WARNING: Removing unreachable block (ram,0x059b00c8) */
/* WARNING: Removing unreachable block (ram,0x059b00bc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Xml_Schema_StringFacetsChecker__CheckBuiltInFacets
               (long param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 local_50;
  long *local_48;
  ulong uStack_38;
  undefined *puVar9;
  
  uStack_38 = param_4;
  if ((DAT_06dc1494 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ac28);
    FUN_02d965b8(PTR_DAT_069fc268);
    FUN_02d965b8(PTR_DAT_06a181b8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
                );
    DAT_06dc1494 = 1;
  }
  puVar9 = PTR_DAT_069fbff0;
  local_50 = 0;
  local_48 = (long *)0x0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    puVar9 = PTR_DAT_06a18bb8;
LAB_059b0090:
    uVar8 = thunk_FUN_02dfd288(puVar9);
    FUN_0544bf54(uVar7,uVar8,0);
    uVar8 = thunk_FUN_02dfd288(OVRPlugin_OVRP_0_5_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar8);
  }
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    puVar9 = PTR_DAT_06a212f8;
    goto LAB_059b0090;
  }
  if (param_3 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    puVar9 = 
    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64LiftedToNull_TypeInfo;
    goto LAB_059b0090;
  }
  plVar4 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a181b8);
  FUN_054b8968(plVar4,param_2,3,1,1,0x1000,0,0);
  local_48 = plVar4;
  if ((param_4 & 0xff) == 0) {
    lVar5 = FUN_059a62fc(param_1,param_3,0);
  }
  else {
    uVar2 = FUN_043301c8(&uStack_38,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
                        );
    lVar5 = FUN_059a64c4(param_1,param_3,uVar2,0);
  }
  local_50 = FUN_054a7a14(param_2,0);
  puVar1 = PTR_DAT_069fc268;
  if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc268);
  }
  iVar3 = FUN_054c51c0(&local_50,0);
  if (0x7bb < iVar3) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar3 = FUN_054c51c0(&local_50,0);
    if (iVar3 < 0x83c) goto LAB_059afeb8;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_054c6540(&local_50,0x7bc,1,1,0,0,0,0);
LAB_059afeb8:
  uVar7 = local_50;
  if (*(int *)(*(long *)PTR_DAT_06a0ac28 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar14 = FUN_054cede0(uVar7,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_059a9774(lVar5,auVar14._0_8_,auVar14._8_8_,0);
  plVar4 = (long *)FUN_059a99f4(lVar5,0);
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_054af9c4(local_48,plVar4,0);
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    lVar10 = *(long *)puVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_059aff8c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar4,lVar10,0);
LAB_059aff8c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  plVar4 = local_48;
  if (local_48 != (long *)0x0) {
    lVar11 = *local_48;
    lVar10 = *(long *)puVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_059b0004;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(local_48,lVar10,0);
LAB_059b0004:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return lVar5;
}


