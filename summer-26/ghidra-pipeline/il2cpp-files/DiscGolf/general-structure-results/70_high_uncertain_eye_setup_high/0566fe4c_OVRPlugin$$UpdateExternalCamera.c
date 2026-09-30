/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 0566fe4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566fea4) */

void OVRPlugin__UpdateExternalCamera(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  int iVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  int in_stack_00000038;
  long *in_stack_00000050;
  
  uVar2 = thunk_FUN_02dfd288();
                    /* catch() { ... } // from try @ 0566fe48 with catch @ 0566fe58 */
                    /* try { // try from 0566fe5c to 0576fe63 has its CatchHandler @ 0566fe6c */
  uVar3 = thunk_FUN_02df8d3c(uVar2,*(undefined8 *)*unaff_x21);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_066567d8,0);
  }
                    /* try { // try from 0566fe64 to 0576fe6f has its CatchHandler @ 0566fc64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0566fe5c with catch @ 0566fe6c
                        */
  *(undefined8 *)(unaff_x26 + (long)in_stack_00000038 * 8) = *unaff_x21;
  __cxa_end_catch();
  while (uVar3 = FUN_05156804(&stack0x00000040,*unaff_x25), (uVar3 & 1) != 0) {
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*in_stack_00000050 + 0x218))
              (in_stack_00000050,*(undefined8 *)(*in_stack_00000050 + 0x220));
  }
  FUN_05156800(in_stack_00000010,*unaff_x24);
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
  plVar7 = (long *)*in_stack_00000028;
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
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


