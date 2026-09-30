/*
FUNCTION_NAME: FUN_0512bc50
ENTRY_POINT: 0512bc50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0512bc50(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 0512bc5c to 0522bc5f has its CatchHandler @ 0512bc68 */
                    /* catch() { ... } // from try @ 0512bc5c with catch @ 0512bc68 */
                    /* try { // try from 0512bc6c to 0522bc73 has its CatchHandler @ 0512bc90 */
                    /* try { // try from 0512bc74 to 0522bc93 has its CatchHandler @ 0512b9bc */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_040b1b28(param_4);
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_2 == (long *)0x0) {
LAB_0512be68:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0512bc6c with catch @ 0512bc90
                        */
                    /* try { // try from 0512bc94 to 0522bdab has its CatchHandler @ 0512bc94
                       catch() { ... } // from try @ 0512bc94 with catch @ 0512bc94
                       catch() { ... } // from try @ 0512bde0 with catch @ 0512bc94
                       catch() { ... } // from try @ 0512be4c with catch @ 0512bc94
                       catch() { ... } // from try @ 0512bf54 with catch @ 0512bc94 */
  local_38 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  if ((int)param_1[0x14] <= (int)param_1[2]) {
                    /* try { // try from 0512bdac to 0522bdb3 has its CatchHandler @ 0512bf1c */
    lVar2 = thunk_FUN_04096bb4(*(undefined8 *)
                                (*param_1 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x50) * 0x10
                                + 0x140));
                    /* try { // try from 0512bdd0 to 0522bddf has its CatchHandler @ 0512bf20 */
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,&local_38,lVar2);
    return;
  }
  uVar1 = FUN_0514d610(&local_38,&local_40,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
LAB_0512bd94:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_04a84cd0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_0512be68;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_38,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_0512bd94;
    }
    FUN_08a59870(&local_50,param_1,param_2,0);
                    /* try { // try from 0512be18 to 0522be27 has its CatchHandler @ 0512bf18 */
    System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>
              (param_1,&local_38,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_08a598c0(&local_50,0);
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
                    /* try { // try from 0512be40 to 0522be4b has its CatchHandler @ 0512bf20 */
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
                    /* try { // try from 0512be4c to 0522bf3b has its CatchHandler @ 0512bc94 */
      (**(code **)(*param_2 + 0x228))(param_2,param_3,local_38,*(undefined8 *)(*param_2 + 0x230));
    }
  }
                    /* try { // try from 0512bde0 to 0522be17 has its CatchHandler @ 0512bc94 */
  return;
}


