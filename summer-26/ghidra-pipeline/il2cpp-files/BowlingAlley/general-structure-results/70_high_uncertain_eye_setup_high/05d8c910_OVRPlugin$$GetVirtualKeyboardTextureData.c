/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 05d8c910
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardTextureData(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  float unaff_w26;
  float unaff_w27;
  int unaff_w28;
  undefined8 *unaff_x29;
  float fVar7;
  undefined8 in_stack_00000008;
  
  while (param_1 != 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8c8fc with catch @ 05d8c91c
                        */
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05d8c938 with catch @ 05d8c9c4
                       catch() { ... } // from try @ 05d8c9b4 with catch @ 05d8c9c4 */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8c8f4 with catch @ 05d8c920
                        */
    fVar7 = *(float *)(param_1 + unaff_x22 * 4 + 0x20) * unaff_w26;
                    /* try { // try from 05d8c938 to 05e8c94f has its CatchHandler @ 05d8c9c4 */
    iVar6 = unaff_w28;
    if (fVar7 != unaff_w27) {
      iVar6 = (int)fVar7;
    }
    if (0 < iVar6) {
      do {
                    /* try { // try from 05d8c950 to 05e8c9b3 has its CatchHandler @ 05d8c8dc */
        param_2 = FUN_057a19ac(param_2,*unaff_x29,0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar3 = FUN_057a19ac(param_2,*unaff_x21,0);
    puVar1 = PTR_DAT_072798c8;
    unaff_x22 = unaff_x22 + 1;
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar5 == 0)) break;
    if ((long)*(int *)(lVar5 + 0x18) <= (long)unaff_x22) {
      FUN_05d89d30();
      uVar4 = FUN_057aa92c(uVar3,*(undefined8 *)puVar1,0);
      if ((uVar4 & 1) != 0) {
        FUN_05d8a1f4(uVar3);
      }
                    /* try { // try from 05d8c9b4 to 05e8c9c3 has its CatchHandler @ 05d8c9c4 */
      return;
    }
    in_stack_00000008 = *unaff_x23;
    uVar2 = FUN_059596b4(&stack0x00000008,0);
    uVar3 = FUN_057a19ac(uVar3,uVar2,0);
    param_2 = FUN_057a19ac(uVar3,*unaff_x25,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


