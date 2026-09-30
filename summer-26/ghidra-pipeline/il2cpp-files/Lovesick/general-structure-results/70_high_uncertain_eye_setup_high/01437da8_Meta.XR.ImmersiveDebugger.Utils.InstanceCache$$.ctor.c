/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$.ctor
ENTRY_POINT: 01437da8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_InstanceCache___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *plVar9;
  int iStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  while( true ) {
    *(undefined4 *)(unaff_x29 + 0x10) = unaff_w21;
    *(undefined4 *)(unaff_x29 + 0x14) = 0;
    *(int *)(unaff_x29 + 0x18) = unaff_w24;
    *(int *)(unaff_x29 + 0x1c) = iStack0000000000000018;
                    /* try { // try from 01437db4 to 01537dc3 has its CatchHandler @ 01437dd8 */
    *(long *)(unaff_x28 + 0x20) = unaff_x29;
    plVar9 = *(long **)(unaff_x27 + 0x18);
    if (plVar9 == (long *)0x0) break;
                    /* try { // try from 01437dc4 to 01537dcf has its CatchHandler @ 01437b08 */
    lVar5 = thunk_FUN_00d6225c(unaff_x28,*(undefined8 *)(*plVar9 + 0x40));
                    /* try { // try from 01437dd0 to 01537dd7 has its CatchHandler @ 01437dd8 */
    if (lVar5 == 0) {
LAB_01437f64:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01437db4 with catch @ 01437dd8
                       catch(type#2 @ 00000000) { ... } // from try @ 01437dd0 with catch @ 01437dd8
                        */
    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01437f60;
    plVar9[5] = unaff_x28;
    plVar9 = *(long **)(unaff_x27 + 0x18);
    if (plVar9 == (long *)0x0) break;
    lVar5 = thunk_FUN_00d6225c(unaff_x26,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar5 == 0) goto LAB_01437f64;
    if (((int)plVar9[3] == 0) || (plVar9[4] = unaff_x26, *(uint *)(unaff_x25 + 0x18) <= unaff_x19))
    {
LAB_01437f60:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_0143773c(unaff_x27,*(undefined8 *)(unaff_x20 + unaff_x19 * 8),0);
    unaff_w22 = unaff_w22 + 1;
    iStack000000000000001c = unaff_w22;
    do {
      unaff_x19 = unaff_x19 + 1;
      if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x19) {
        if (in_stack_00000010 != 0) {
          *(float *)(in_stack_00000010 + 0x34) =
               (float)(iStack0000000000000004 * iStack0000000000000000 * unaff_w22);
          *(int *)(in_stack_00000010 + 0x38) = unaff_w22;
          *(long *)(in_stack_00000010 + 0x20) = unaff_x27;
          puVar4 = StringLiteral_11956;
          puVar3 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          puVar2 = 
          Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_get_Item__;
          if (3 < *(int *)(in_stack_00000008 + 0x10)) {
            uVar6 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
            uVar7 = FUN_017840ac((float *)(in_stack_00000010 + 0x34),0);
            uVar6 = FUN_0160073c(*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar2,uVar7,0);
            lVar8 = *(long *)puVar3;
            lVar5 = *(long *)(lVar8 + 0x38);
            if (lVar5 == 0) {
              FUN_00d59478(lVar8);
              lVar5 = *(long *)(lVar8 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
              lVar5 = FUN_00d5941c();
            }
            FUN_013f38b0(uVar6,**(undefined8 **)(lVar5 + 0xb8),0);
          }
          return 1;
        }
        goto LAB_01437f5c;
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x19) goto LAB_01437f60;
      lVar5 = FUN_0143773c(unaff_x27,*(undefined8 *)(unaff_x20 + unaff_x19 * 8),0);
    } while (lVar5 != 0);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x19) goto LAB_01437f60;
    lVar5 = *(long *)(unaff_x20 + unaff_x19 * 8);
    if (lVar5 == 0) break;
    if ((unaff_w24 < *(int *)(lVar5 + 0x1c)) && (iStack0000000000000018 < *(int *)(lVar5 + 0x20))) {
      return 0;
    }
    lVar5 = thunk_FUN_00d62348(*unaff_x23);
    if (lVar5 == 0) break;
    FUN_014376d0(lVar5,0);
    if (*(long *)(unaff_x27 + 0x20) == 0) break;
    iVar1 = *(int *)(*(long *)(unaff_x27 + 0x20) + 0x18);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
    if (lVar8 == 0) break;
    FUN_017b46ec(lVar8,0);
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(int *)(lVar8 + 0x18) = iVar1 + unaff_w24;
    *(int *)(lVar8 + 0x1c) = iStack0000000000000018;
    *(long *)(lVar5 + 0x20) = lVar8;
    unaff_x28 = thunk_FUN_00d62348(*unaff_x23);
    if (unaff_x28 == 0) break;
    FUN_014376d0(unaff_x28,1);
    if (*(long *)(unaff_x27 + 0x20) == 0) break;
    unaff_w21 = *(undefined4 *)(*(long *)(unaff_x27 + 0x20) + 0x18);
    unaff_x29 = thunk_FUN_00d62348(*(undefined8 *)System_Security_Cryptography_TailStream_TypeInfo);
    if (unaff_x29 == 0) break;
    FUN_017b46ec(unaff_x29,0);
    unaff_x26 = unaff_x27;
    unaff_x27 = lVar5;
  }
LAB_01437f5c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


