/*
FUNCTION_NAME: FUN_05e48208
ENTRY_POINT: 05e48208
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e48208(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_0675e2d0;
                    /* try { // try from 05e4820c to 05f48217 has its CatchHandler @ 05e48600 */
                    /* try { // try from 05e48218 to 05f48223 has its CatchHandler @ 05e485fc */
                    /* try { // try from 05e48224 to 05f4822f has its CatchHandler @ 05e48698 */
  if ((DAT_06b836c8 & 1) == 0) {
                    /* try { // try from 05e48230 to 05f4823b has its CatchHandler @ 05e485f8 */
    FUN_02d6084c(Method_System_Array_Resize<int>__);
                    /* try { // try from 05e4823c to 05f48247 has its CatchHandler @ 05e485f4 */
    FUN_02d6084c(PTR_DAT_0675e2d0);
                    /* try { // try from 05e48248 to 05f48253 has its CatchHandler @ 05e48694 */
    FUN_02d6084c(PTR_DAT_06767708);
                    /* try { // try from 05e48254 to 05f4825f has its CatchHandler @ 05e48690 */
    FUN_02d6084c(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
                    /* try { // try from 05e48260 to 05f4826b has its CatchHandler @ 05e485f0 */
    DAT_06b836c8 = 1;
  }
                    /* try { // try from 05e4826c to 05f48277 has its CatchHandler @ 05e485ec */
  plVar3 = (long *)FUN_02d60934(*(undefined8 *)puVar1,5);
  puVar1 = PTR_DAT_0675e258;
                    /* try { // try from 05e48278 to 05f48283 has its CatchHandler @ 05e485e8 */
  local_34 = *param_1;
                    /* try { // try from 05e48284 to 05f4828f has its CatchHandler @ 05e485e4 */
                    /* try { // try from 05e48290 to 05f4829b has its CatchHandler @ 05e485e0 */
  lVar4 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05e45d70 with catch @ 05e48448 */
    FUN_02d60ae8();
  }
                    /* try { // try from 05e4829c to 05f482a7 has its CatchHandler @ 05e4868c */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_05e4843c:
    uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,0);
  }
  puVar2 = PTR_DAT_06767708;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02dd37b4(plVar3 + 4,lVar4);
    local_40 = *(undefined8 *)(param_1 + 1);
    lVar4 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&local_40);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_05e4843c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_02dd37b4(plVar3 + 5,lVar4);
      local_44 = param_1[3];
      lVar4 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_44);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_05e4843c;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_02dd37b4(plVar3 + 6,lVar4);
        local_50 = *(undefined8 *)(param_1 + 4);
        lVar4 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x80),&local_50);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_05e4843c;
        puVar1 = Method_System_Array_Resize<int>__;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_02dd37b4(plVar3 + 7,lVar4);
          local_54 = param_1[6];
          lVar4 = thunk_FUN_02d9d164(*(undefined8 *)puVar1,&local_54);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_05e4843c;
          puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_02dd37b4(plVar3 + 8,lVar4);
            FUN_04e8e72c(*(undefined8 *)puVar1,plVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


