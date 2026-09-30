/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 0566fc94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fea4) */

void OVRPlugin__IsMixedRealityInitialized(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000068;
  
  puVar1 = PTR_DAT_06a0f1a0;
  if ((DAT_06dbc64f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_List<CrossingCornerClass>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<CustomAttributeData>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<DataColumn>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(System_Collections_Generic_List<ERTerrain>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<DataRelation>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<InputDeviceDescription>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<InputEventPtr>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<InspectedData>_TypeInfo);
    DAT_06dbc64f = 1;
  }
  in_stack_00000068 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000038 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_00000068 = FUN_0564de84(4,0);
  lVar5 = *(long *)(param_1 + 0x168);
  in_stack_00000028 = &stack0x00000068;
  in_stack_00000020 = 0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar8 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar8) {
    FUN_0550afb4(*(undefined8 *)(lVar5 + 0x10),0,iVar8,0);
    lVar5 = *(long *)(param_1 + 0x168);
  }
  FUN_0566fa88(param_1,param_2,lVar5);
  if (*(long *)(param_1 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000008,*(long *)(param_1 + 0x168),
               *(undefined8 *)System_Collections_Generic_List<DataRelation>_TypeInfo);
  puVar2 = System_Collections_Generic_List<CustomAttributeData>_TypeInfo;
  puVar1 = System_Collections_Generic_List<CrossingCornerClass>_TypeInfo;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000040;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000008 = 0;
  while (uVar3 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*in_stack_00000050 + 0x218))
              (in_stack_00000050,*(undefined8 *)(*in_stack_00000050 + 0x220));
  }
  FUN_05156800(in_stack_00000010,*(undefined8 *)puVar1);
  puVar2 = System_Collections_Generic_List<InspectedData>_TypeInfo;
  puVar1 = System_Collections_Generic_List<InputDeviceDescription>_TypeInfo;
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar8 = *(int *)(param_2 + 0x18);
  if (-1 < iVar8 + -1) {
    do {
      if (*(long *)(param_1 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar8 = iVar8 + -1;
      lVar5 = FUN_0400ff1c(*(long *)(param_1 + 0x168),iVar8,*(undefined8 *)puVar2);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(lVar5 + 0x70) == '\0') {
        FUN_0401187c(param_2,iVar8,*(undefined8 *)puVar1);
      }
    } while (0 < iVar8);
  }
  plVar7 = (long *)*in_stack_00000028;
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0566ff64;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_0566ff64:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


