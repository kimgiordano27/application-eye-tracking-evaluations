/*
FUNCTION_NAME: FUN_026e9e78
ENTRY_POINT: 026e9e78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026ea110) */

void FUN_026e9e78(long param_1,long param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  char local_44 [4];
  
  local_44[0] = '\0';
  if (0 < param_4) {
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(*(long *)(param_1 + 0x70) + 0xa0) == '\0') {
      FUN_026bd4c4(param_1,param_2,param_3,param_4,0);
    }
    else {
      local_44[0] = '\0';
      FUN_027e0bd8(param_1,local_44,0);
                    /* try { // try from 026e9ecc to 027e9ecf has its CatchHandler @ 026e9f0c */
      iVar3 = 0;
      param_4 = param_4 + param_3;
      uVar4 = param_3;
      do {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* try { // try from 026e9efc to 027e9eff has its CatchHandler @ 026e9f10 */
        uVar1 = *(undefined2 *)(param_2 + (long)(int)param_3 * 2 + 0x20);
                    /* try { // try from 026e9f00 to 027e9f27 has its CatchHandler @ 026e9e3c */
        uVar2 = FUN_027c5734(*(long *)(param_1 + 0x70),uVar1,0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 026e9ecc with catch @ 026e9f0c
                        */
        param_3 = param_3 + 1;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 026e9efc with catch @ 026e9f10
                        */
        if ((uVar2 & 1) == 0) {
          iVar3 = iVar3 + 1;
        }
        else {
          if (0 < iVar3) {
                    /* try { // try from 026e9f28 to 027e9f5b has its CatchHandler @ 026e9fa4 */
            FUN_026bd4c4(param_1,param_2,uVar4,iVar3,0);
            iVar3 = 0;
          }
          if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_027c5504(*(long *)(param_1 + 0x70),uVar1,0);
          uVar4 = param_3;
        }
                    /* try { // try from 026e9f5c to 027e9f93 has its CatchHandler @ 026e9e3c */
      } while ((int)param_3 < param_4);
                    /* catch() { ... } // from try @ 026e9f28 with catch @ 026e9fa4
                       catch() { ... } // from try @ 026e9f94 with catch @ 026e9fa4 */
      if (0 < iVar3) {
                    /* try { // try from 026e9fa8 to 027e9fab has its CatchHandler @ 026e9fb4 */
                    /* try { // try from 026e9fac to 027e9fb7 has its CatchHandler @ 026e9e3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026e9fa8 with catch @ 026e9fb4
                        */
        FUN_026bd4c4(param_1,param_2,uVar4,iVar3,0);
      }
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
      }
    }
  }
  return;
}


