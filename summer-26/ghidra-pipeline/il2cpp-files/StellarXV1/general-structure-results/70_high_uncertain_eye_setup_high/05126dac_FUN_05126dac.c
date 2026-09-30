/*
FUNCTION_NAME: FUN_05126dac
ENTRY_POINT: 05126dac
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


void FUN_05126dac(long *param_1,long *param_2,undefined8 param_3,long param_4)

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
LAB_05126fc4:
                    /* WARNING: Subroutine does not return */
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
  uVar1 = FUN_0514d610(&local_38,&local_40,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
  if ((uVar1 & 1) == 0) {
LAB_05126ef0:
    *(undefined4 *)((long)param_1 + 0xb4) = 4;
  }
  else {
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05126d2c with catch @ 05126e2c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05126cc0 with catch @ 05126e30
                        */
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05126ce4 with catch @ 05126e34
                       catch(type#1 @ 08d635d8) { ... } // from try @ 05126d54 with catch @ 05126e34
                        */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
                    /* try { // try from 05126e50 to 05226e53 has its CatchHandler @ 05126e5c */
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar4 + 0x20);
                    /* catch() { ... } // from try @ 05126e50 with catch @ 05126e5c */
                    /* try { // try from 05126e60 to 05226e67 has its CatchHandler @ 05126e84 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 05126e68 to 05226e87 has its CatchHandler @ 05126ba0 */
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05126e60 with catch @ 05126e84
                        */
                    /* try { // try from 05126e88 to 05226fa3 has its CatchHandler @ 05126e88
                       catch() { ... } // from try @ 05126e88 with catch @ 05126e88
                       catch() { ... } // from try @ 05126fd8 with catch @ 05126e88
                       catch() { ... } // from try @ 05127044 with catch @ 05126e88
                       catch() { ... } // from try @ 0512714c with catch @ 05126e88 */
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
      if (plVar3 == (long *)0x0) goto LAB_05126fc4;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_38,0,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar1 & 1) != 0) goto LAB_05126ef0;
    }
    FUN_08a59870(&local_50,param_1,param_2,0);
    System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>
              (param_1,&local_38,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x68));
    FUN_08a598c0(&local_50,0);
    uVar1 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (((uVar1 & 1) == 0) && ((char)param_1[0x16] == '\0')) {
      (**(code **)(*param_2 + 0x228))(param_2,param_3,local_38,*(undefined8 *)(*param_2 + 0x230));
    }
  }
  return;
}


