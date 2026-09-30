/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 052b675c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052b68bc) */

int OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *in_stack_00000018;
  int iStack000000000000002c;
  
code_r0x052b675c:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar3)(unaff_x20,puVar3[1]), iStack000000000000002c = unaff_w21,
        (uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
                    /* try { // try from 052b6790 to 053b6793 has its CatchHandler @ 052b67fc */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090(lVar2);
    }
                    /* try { // try from 052b67b0 to 053b67bf has its CatchHandler @ 052b6800 */
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 052b67cc to 053b67e7 has its CatchHandler @ 052b6804 */
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_052b67f8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,lVar2,0);
                    /* try { // try from 052b67e8 to 053b681b has its CatchHandler @ 052b6754 */
LAB_052b67f8:
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 052b6790 with catch @ 052b67fc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 052b67b0 with catch @ 052b6800
                        */
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 052b67cc with catch @ 052b6804
                        */
    unaff_w21 = unaff_w21 + 1;
    if (in_stack_00000018 == (long *)0x0) {
      iStack000000000000002c = unaff_w21;
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          in_x9 = (long)*piVar5;
          goto code_r0x052b675c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x22,0);
  }
                    /* try { // try from 052b681c to 053b6833 has its CatchHandler @ 052b68cc */
  if (in_stack_00000018 != (long *)0x0) {
    lVar2 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_052b6880;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*(long *)PTR_DAT_08488550,0);
LAB_052b6880:
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  }
  return iStack000000000000002c;
}


