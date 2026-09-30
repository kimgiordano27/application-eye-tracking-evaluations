/*
FUNCTION_NAME: OVRTask.MultiTaskData.<>c<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$<.cctor>b__5_2
ENTRY_POINT: 047a6bc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRTask_MultiTaskData_<>c<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__<_cctor>b__5_2
               (void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  
                    /* try { // try from 047a6bc0 to 048a6bc7 has its CatchHandler @ 047a6bd0 */
  lVar1 = *(long *)(unaff_x22 + 0x20);
                    /* try { // try from 047a6bc8 to 048a6bd3 has its CatchHandler @ 047a600c */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 047a6b50 with catch @ 047a6bd0
                       catch() { ... } // from try @ 047a6b88 with catch @ 047a6bd0
                       catch() { ... } // from try @ 047a6bc0 with catch @ 047a6bd0 */
    lVar1 = FUN_03ac4090();
  }
                    /* try { // try from 047a6bd4 to 048a7207 has its CatchHandler @ 047a6bd4
                       catch() { ... } // from try @ 047a6bd4 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a724c with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7294 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7350 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7618 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a76e8 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7720 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7758 with catch @ 047a6bd4
                       catch() { ... } // from try @ 047a7790 with catch @ 047a6bd4 */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_04447000(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,&stack0x00000030,&stack0x00000018,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_0548ef50();
      plVar2 = (long *)FUN_07d36da8(uVar4,0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08492fc8) {
            puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_047a6d2c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)PTR_DAT_08492fc8,0);
LAB_047a6d2c:
      (*(code *)*puVar5)(plVar2);
      return;
    }
  }
  System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_Vector4f>();
  return;
}


