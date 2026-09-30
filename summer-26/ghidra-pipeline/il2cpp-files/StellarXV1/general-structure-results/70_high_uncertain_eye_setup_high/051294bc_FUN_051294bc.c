/*
FUNCTION_NAME: FUN_051294bc
ENTRY_POINT: 051294bc
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


void FUN_051294bc(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_040b1b28(param_4);
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_2 == (long *)0x0) {
LAB_051296d4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 051296d4 to 0522970b has its CatchHandler @ 0512958c */
    FUN_04077830();
  }
  local_38 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  if ((int)param_1[0x14] <= (int)param_1[2]) {
    lVar2 = thunk_FUN_04096bb4(*(undefined8 *)
                                (*param_1 +
                                 (ulong)*(ushort *)
                                         (*(long *)(*(long *)(param_4 + 0x38) + 0x20) + 0x50) * 0x10
                                + 0x140));
    (**(code **)(lVar2 + 8))(param_1,param_2,param_3,&local_38,lVar2);
    return;
  }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05129430 with catch @ 05129530
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 051293c4 with catch @ 05129534
                        */
  uVar1 = FUN_0514d610(&local_38,&local_40,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 051293e8 with catch @ 05129538
                       catch(type#1 @ 08d635d8) { ... } // from try @ 05129458 with catch @ 05129538
                        */
  if ((uVar1 & 1) == 0) {
LAB_05129600:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
                    /* try { // try from 05129554 to 05229557 has its CatchHandler @ 05129560 */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
                    /* catch() { ... } // from try @ 05129554 with catch @ 05129560 */
                    /* try { // try from 05129564 to 0522956b has its CatchHandler @ 05129588 */
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
                    /* try { // try from 0512956c to 0522958b has its CatchHandler @ 051292ac */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05129564 with catch @ 05129588
                        */
                    /* try { // try from 0512958c to 0522969f has its CatchHandler @ 0512958c
                       catch() { ... } // from try @ 0512958c with catch @ 0512958c
                       catch() { ... } // from try @ 051296d4 with catch @ 0512958c
                       catch() { ... } // from try @ 05129740 with catch @ 0512958c
                       catch() { ... } // from try @ 05129848 with catch @ 0512958c */
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
      if (plVar3 == (long *)0x0) goto LAB_051296d4;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_38,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_05129600;
    }
    FUN_08a59870(&local_50,param_1,param_2,0);
    System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>
              (param_1,&local_38,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_08a598c0(&local_50,0);
                    /* try { // try from 051296a0 to 052296a7 has its CatchHandler @ 05129810 */
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
      (**(code **)(*param_2 + 0x228))(param_2,param_3,local_38,*(undefined8 *)(*param_2 + 0x230));
    }
  }
  return;
}


