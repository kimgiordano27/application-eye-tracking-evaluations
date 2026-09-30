/*
FUNCTION_NAME: FUN_0442126c
ENTRY_POINT: 0442126c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0442126c(int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_470 [544];
  undefined1 auStack_250 [544];
  int local_24;
  
  local_24 = 0;
  if (-1 < param_2) {
    iVar1 = *param_1;
    if (param_2 < iVar1) {
                    /* try { // try from 04421294 to 04521307 has its CatchHandler @ 04421294
                       catch() { ... } // from try @ 04421294 with catch @ 04421294
                       catch() { ... } // from try @ 04421540 with catch @ 04421294
                       catch() { ... } // from try @ 04421588 with catch @ 04421294
                       catch() { ... } // from try @ 044215f4 with catch @ 04421294 */
      local_24 = iVar1 + -1;
      if (param_2 == 0) {
        if (1 < iVar1) {
          lVar2 = *(long *)(param_1 + 0x8a);
          if (lVar2 != 0) {
            if (iVar1 - 2U < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 04421308 to 04521347 has its CatchHandler @ 044215b0 */
              memmove(param_1 + 2,(void *)(lVar2 + (ulong)(iVar1 - 2U) * 0x220 + 0x20),0x220);
              thunk_FUN_0329bf60(param_1 + 8,0);
              lVar2 = *(long *)(param_1 + 0x8a);
              memset(auStack_250,0,0x220);
              if (lVar2 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor;
                    /* try { // try from 04421354 to 0452136b has its CatchHandler @ 044215a8 */
              memcpy(auStack_470,auStack_250,0x220);
              if ((uint)((long)iVar1 + -2) < *(uint *)(lVar2 + 0x18)) {
                lVar2 = lVar2 + ((long)iVar1 + -2) * 0x220;
                memcpy((void *)(lVar2 + 0x20),auStack_470,0x220);
                thunk_FUN_0329bf60(lVar2 + 0x38,0);
                goto LAB_04421388;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        memset(param_1 + 2,0,0x220);
      }
      else {
        lVar2 = *(long *)(param_3 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 0x8a);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        FUN_03d0dcdc(uVar4,&local_24,param_2 + -1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200));
      }
LAB_04421388:
      *param_1 = *param_1 + -1;
      return;
    }
  }
  thunk_FUN_03257e30(PTR_DAT_0759e028);
  uVar4 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(PTR_DAT_0759c148);
  FUN_05d7734c(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar4,param_3);
}


