/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$ClearChildren
ENTRY_POINT: 037a2960
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x037a2ac4) */

void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__ClearChildren
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  do {
    if ((bool)in_ZR) {
                    /* try { // try from 037a2988 to 038a2993 has its CatchHandler @ 037a29a8 */
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_037a298c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_037a298c:
                    /* try { // try from 037a2994 to 038a29c3 has its CatchHandler @ 037a2808 */
        (*(code *)*puVar1)(&stack0x00000030);
        in_stack_00000068 = in_stack_00000038;
        in_stack_00000060 = in_stack_00000030;
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 037a2988 with catch @ 037a29a8
                        */
        in_stack_00000080 = in_stack_00000050;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 037a2914 with catch @ 037a29ac
                        */
        if (unaff_w24 == 0) {
          unaff_x22[4] = in_stack_00000050;
          unaff_x22[1] = in_stack_00000038;
          *unaff_x22 = in_stack_00000030;
          unaff_x22[3] = in_stack_00000048;
          unaff_x22[2] = in_stack_00000040;
          thunk_FUN_02dd37b4();
        }
        else {
          lVar2 = *(long *)(unaff_x21 + 0x30);
                    /* try { // try from 037a29c4 to 038a29db has its CatchHandler @ 037a2ab4 */
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 037a2ab8 to 038a2abb has its CatchHandler @ 037a2ac4 */
            FUN_02d60ae8();
          }
                    /* try { // try from 037a29dc to 038a2aa3 has its CatchHandler @ 037a2808 */
          if (*(uint *)(lVar2 + 0x18) <= unaff_w24 - 1U) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 037a29c4 with catch @ 037a2ab4
                       catch() { ... } // from try @ 037a2aa4 with catch @ 037a2ab4 */
            FUN_02d60af0();
          }
          lVar2 = lVar2 + (int)(unaff_w24 - 1U) * unaff_x26;
          *(undefined8 *)(lVar2 + 0x40) = in_stack_00000050;
          *(undefined8 *)(lVar2 + 0x28) = in_stack_00000038;
          *(undefined8 *)(lVar2 + 0x20) = in_stack_00000030;
          *(undefined8 *)(lVar2 + 0x38) = in_stack_00000048;
          *(undefined8 *)(lVar2 + 0x30) = in_stack_00000040;
          thunk_FUN_02dd37b4(lVar2 + 0x20,0);
        }
        unaff_w24 = unaff_w24 + 1;
        lVar2 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_037a2908;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_037a2908:
        uVar3 = (*(code *)*puVar1)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          lVar2 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_037a2a6c;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_037a2a54;
        }
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02d9a2e0();
        }
        param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_02d9a2e0(param_3);
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_037a2a54:
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_037a2a88;
    }
  }
LAB_037a2a6c:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_037a2a88:
  (*(code *)*puVar1)();
                    /* try { // try from 037a2aa4 to 038a2ab3 has its CatchHandler @ 037a2ab4 */
  return;
}


