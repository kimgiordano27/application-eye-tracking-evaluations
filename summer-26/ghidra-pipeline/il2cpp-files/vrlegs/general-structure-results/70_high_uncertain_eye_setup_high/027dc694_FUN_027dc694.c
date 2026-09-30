/*
FUNCTION_NAME: FUN_027dc694
ENTRY_POINT: 027dc694
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027dc8c8) */

int FUN_027dc694(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int local_48;
  char local_44 [4];
  
  if ((DAT_0412506b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf0d88);
    DAT_0412506b = 1;
  }
  local_44[0] = '\0';
  FUN_027dbec4(param_1);
  if (0 < param_2) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    local_44[0] = '\0';
    FUN_027e0bd8(uVar7,local_44,0);
    iVar8 = *(int *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    if (*(int *)(param_1 + 0x14) - iVar8 < param_2) {
      thunk_FUN_01a6ca08(PTR_DAT_03cfcdc0);
      uVar7 = thunk_FUN_01a89e68();
      FUN_027d7184();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfcdb8);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar6);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    thunk_FUN_01a4b338();
    param_2 = iVar8 + param_2;
                    /* try { // try from 027dc724 to 028dc733 has its CatchHandler @ 027dc768 */
    if ((param_2 == 1) || (iVar2 == 1)) {
      FUN_027e10a8(*(undefined8 *)(param_1 + 0x20),0);
    }
    else {
                    /* try { // try from 027dc734 to 028dc763 has its CatchHandler @ 027dc5a0 */
      if (1 < iVar2) {
        FUN_027e1160(*(undefined8 *)(param_1 + 0x20),0);
      }
    }
    puVar3 = PTR_DAT_03cf0d88;
    iVar10 = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 027dc764 to 028dc767 has its CatchHandler @ 027dc76c */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027dc724 with catch @ 027dc768
                       try { // try from 027dc768 to 028dc783 has its CatchHandler @ 027dc5a0 */
      iVar1 = param_2;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027dc764 with catch @ 027dc76c
                        */
      if (-1 < param_2 - iVar2) {
        iVar1 = iVar2;
      }
                    /* try { // try from 027dc784 to 028dc79b has its CatchHandler @ 027dc820 */
      while ((iVar10 = iVar1, 0 < param_2 - iVar2 &&
             (lVar9 = *(long *)(param_1 + 0x30), iVar10 = param_2, lVar9 != 0))) {
        FUN_027dc5a4(param_1,lVar9);
                    /* try { // try from 027dc79c to 028dc7c3 has its CatchHandler @ 027dc5a0 */
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_2 = param_2 + -1;
        FUN_027e5eb0(lVar9,0,0);
      }
    }
    thunk_FUN_01a4b338();
                    /* try { // try from 027dc7c4 to 028dc7d3 has its CatchHandler @ 027dc820 */
    lVar9 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar10;
    thunk_FUN_01a4b338();
                    /* try { // try from 027dc7d4 to 028dc823 has its CatchHandler @ 027dc5a0 */
    if (((0 < iVar10) && (iVar8 == 0)) && (lVar9 != 0)) {
      lVar9 = *(long *)(param_1 + 0x28);
      thunk_FUN_01a4b338();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de940(lVar9,0);
      iVar8 = 0;
    }
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
                    /* catch() { ... } // from try @ 027dc784 with catch @ 027dc820
                       catch() { ... } // from try @ 027dc7c4 with catch @ 027dc820 */
                    /* try { // try from 027dc824 to 028dc827 has its CatchHandler @ 027dc830 */
                    /* try { // try from 027dc828 to 028dc833 has its CatchHandler @ 027dc5a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027dc824 with catch @ 027dc830
                        */
    return iVar8;
  }
  local_48 = param_2;
  uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
  uVar7 = thunk_FUN_01a89a98(uVar7,&local_48);
  thunk_FUN_01a6ca08(PTR_DAT_03cf0d88);
  FUN_01876390();
  thunk_FUN_01a6ca08(PTR_DAT_03cfcda8);
  uVar6 = FUN_027db96c();
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar4 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcdb0);
  FUN_026af104(uVar4,uVar5,uVar7,uVar6,0);
  uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfcdb8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar7);
}


