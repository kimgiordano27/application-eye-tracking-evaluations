/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 0566fd68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fea4) */

void OVRPlugin__GetExternalCameraCount
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  int iVar8;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long lStack0000000000000020;
  undefined8 *puStack0000000000000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 uStack0000000000000068;
  
  lStack0000000000000020 = 0;
  puStack0000000000000028 = param_1;
  uStack0000000000000068 = param_2;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar8 = *(int *)(param_4 + 0x18);
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                    /* try { // try from 0566fd84 to 0576fd93 has its CatchHandler @ 0566fe2c */
  if (0 < iVar8) {
                    /* try { // try from 0566fd94 to 0576fe47 has its CatchHandler @ 0566fc64 */
    FUN_0550afb4(*(undefined8 *)(param_4 + 0x10),0,iVar8,0);
  }
  FUN_0566fa88();
  if (*(long *)(unaff_x20 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000008,*(long *)(unaff_x20 + 0x168),
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
  puVar1 = System_Collections_Generic_List<InspectedData>_TypeInfo;
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar8 = *(int *)(unaff_x19 + 0x18);
  if (-1 < iVar8 + -1) {
    do {
      if (*(long *)(unaff_x20 + 0x168) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar8 = iVar8 + -1;
      lVar4 = FUN_0400ff1c(*(long *)(unaff_x20 + 0x168),iVar8,*(undefined8 *)puVar1);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(lVar4 + 0x70) == '\0') {
        FUN_0401187c();
      }
    } while (0 < iVar8);
  }
  plVar7 = (long *)*puStack0000000000000028;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0566ff64;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_0566ff64:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  if (lStack0000000000000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


