/*
FUNCTION_NAME: FUN_0899f3bc
ENTRY_POINT: 0899f3bc
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2
*/


void FUN_0899f3bc(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_096a43dc & 1) == 0) {
    FUN_03f13384(UnityEngine_InputSystem_Controls_ButtonControl_var);
    FUN_03f13384(UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
    FUN_03f13384(PTR_DAT_09120a40);
    FUN_03f13384(UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var);
    FUN_03f13384(System_ComponentModel_ByteConverter_var);
    FUN_03f13384(Sirenix_Serialization_ByteSerializer_var);
    FUN_03f13384(UnityEngine_Events_CachedInvokableCall<T>_var);
    FUN_03f13384(System_Globalization_CalendarData_var);
    FUN_03f13384(System_Linq_Expressions_Interpreter_CallInstruction_var);
    FUN_03f13384(PTR_DAT_09120a48);
    FUN_03f13384(PTR_DAT_091a6388);
    FUN_03f13384(PTR_DAT_091a63b0);
    FUN_03f13384(PTR_DAT_091a63c8);
    DAT_096a43dc = 1;
  }
  if ((param_2 == 0) || (plVar4 = (long *)FUN_08a90a9c(param_2,0), plVar4 == (long *)0x0)) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_09120a48 + 0x130);
  if (*(byte *)(*plVar4 + 0x130) < bVar1) {
    return;
  }
  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09120a48) {
    return;
  }
  if (param_1 == (long *)0x0) goto LAB_0899f738;
  lVar8 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09120a40) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_0899f53c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f4b594(param_1,*(long *)PTR_DAT_09120a40,2);
LAB_0899f53c:
  uVar9 = (*(code *)*puVar5)(param_1,puVar5[1]);
  puVar2 = UnityEngine_InputSystem_Controls_ButtonControl_var;
  lVar8 = *(long *)(param_2 + 0xa0);
  uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var);
  if ((uVar9 & 1) == 0) {
    FUN_072310c8(uVar6,param_1,*(undefined8 *)UnityEngine_Events_CachedInvokableCall<T>_var,0);
    puVar3 = UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var;
    uVar7 = thunk_FUN_03f4e68c(*(undefined8 *)
                                UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
    FUN_05053738(uVar7,param_1,*(undefined8 *)Sirenix_Serialization_ByteSerializer_var,0);
    if (lVar8 == 0) goto LAB_0899f738;
    FUN_08a8c9f0(lVar8,*(undefined8 *)PTR_DAT_091a63c8,uVar6,uVar7,0,0);
    lVar8 = *(long *)(param_2 + 0xa0);
    uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
    FUN_072310c8(uVar6,param_1,*(undefined8 *)System_ComponentModel_ByteConverter_var,0);
    uVar7 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
    FUN_05053738(uVar7,param_1,
                 *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,0);
    if (lVar8 == 0) goto LAB_0899f738;
    FUN_08a8c9f0(lVar8,*(undefined8 *)PTR_DAT_091a6388,uVar6,uVar7,0,0);
    lVar8 = *(long *)(param_2 + 0xa0);
    uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
    FUN_072310c8(uVar6,param_1,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_CallInstruction_var,0);
    uVar7 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
    FUN_05053738(uVar7,param_1,*(undefined8 *)System_Globalization_CalendarData_var,0);
    puVar5 = (undefined8 *)PTR_DAT_091a63b0;
  }
  else {
    FUN_072310c8(uVar6,param_1,*(undefined8 *)System_ComponentModel_ByteConverter_var,0);
    uVar7 = thunk_FUN_03f4e68c(*(undefined8 *)
                                UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
    FUN_05053738(uVar7,param_1,
                 *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,0);
    puVar5 = (undefined8 *)PTR_DAT_091a6388;
  }
  if (lVar8 != 0) {
    FUN_08a8c9f0(lVar8,*puVar5,uVar6,uVar7,0,0);
    return;
  }
LAB_0899f738:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


