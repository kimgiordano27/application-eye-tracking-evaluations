/*
FUNCTION_NAME: FUN_0214bdb8
ENTRY_POINT: 0214bdb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0214bdb8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0214bdd8 to 0224bddf has its CatchHandler @ 0214bf00 */
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0214be58:
    uVar3 = FUN_0214934c(param_1 + 0x80);
    if ((uVar3 & 1) != 0) {
      memcpy((void *)(param_1 + 0x18),(void *)(param_1 + 0x98),0x50);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_0214be84;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 0214bde8 to 0224bdef has its CatchHandler @ 0214befc */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 0214bdf4 to 0224be03 has its CatchHandler @ 0214be08 */
    uVar3 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0x70),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar4 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar5 = thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<SongManager>__);
                    /* try { // try from 0214bed4 to 0224bee3 has its CatchHandler @ 0214bee4 */
      FUN_016ec5b8(uVar4,uVar5,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0214bed4 with catch @ 0214bee4
                        */
      uVar5 = thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0214be24 with catch @ 0214bee8
                        */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0214bef0 to 0224bef3 has its CatchHandler @ 0214bf64 */
      FUN_00da5038(uVar4,uVar5);
    }
    lVar6 = *(long *)(param_1 + 0x70);
                    /* try { // try from 0214be04 to 0224be23 has its CatchHandler @ 0214bd0c */
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0214bdf4 with catch @ 0214be08
                        */
    local_50 = 0;
    uStack_4c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_40 = 0;
    local_3c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_80 = 0;
    uStack_7c = 0;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0214bef4 to 0224bf1b has its CatchHandler @ 0214bd0c */
      FUN_00da518c();
    }
    uVar1 = *(undefined4 *)(lVar6 + 0x10);
    uStack_34 = 0;
    uStack_30 = 0;
                    /* try { // try from 0214be24 to 0224be37 has its CatchHandler @ 0214bee8 */
    local_3c = 0;
    uStack_38 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_54 = 0;
    local_50 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_74 = 0;
    local_70 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
                    /* try { // try from 0214be3c to 0224be3f has its CatchHandler @ 0214bef8 */
    *(long *)(param_1 + 0x80) = lVar6;
                    /* try { // try from 0214be40 to 0224bed3 has its CatchHandler @ 0214bd0c */
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    memcpy((void *)(param_1 + 0x94),&local_80,0x54);
    goto LAB_0214be58;
  }
  uVar4 = 0;
LAB_0214be84:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


