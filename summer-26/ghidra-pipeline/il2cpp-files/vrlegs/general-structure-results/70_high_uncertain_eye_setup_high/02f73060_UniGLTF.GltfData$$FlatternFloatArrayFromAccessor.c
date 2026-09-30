/*
FUNCTION_NAME: UniGLTF.GltfData$$FlatternFloatArrayFromAccessor
ENTRY_POINT: 02f73060
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f732f8) */
/* WARNING: Removing unreachable block (ram,0x02f731f4) */
/* WARNING: Removing unreachable block (ram,0x02f732ec) */
/* WARNING: Removing unreachable block (ram,0x02f73384) */
/* WARNING: Removing unreachable block (ram,0x02f732c8) */

long UniGLTF_GltfData__FlatternFloatArrayFromAccessor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int in_w8;
  long *unaff_x19;
  long *unaff_x23;
  double dVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (in_w8 != 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar6 = thunk_FUN_01a89e68();
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
                    /* try { // try from 02f73324 to 03073327 has its CatchHandler @ 02f73390 */
                    /* try { // try from 02f73328 to 0307336f has its CatchHandler @ 02f72888 */
    FUN_0276a4a8(uVar6,uVar9,0);
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d25040);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar9);
  }
  *(undefined1 *)((long)unaff_x19 + 0x61) = 1;
  puVar2 = PTR_DAT_03cbeeb0;
  if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = FUN_02745e48(0);
  unaff_x19[0xd] = lVar5;
  uVar3 = (**(code **)(*unaff_x19 + 0x298))();
  *(undefined4 *)((long)unaff_x19 + 0x74) = uVar3;
  iVar4 = (**(code **)(*unaff_x19 + 0x298))();
  if (iVar4 != -1) {
                    /* try { // try from 02f730d0 to 030730d7 has its CatchHandler @ 02f733c0 */
    iVar4 = (**(code **)(*unaff_x19 + 0x298))();
                    /* try { // try from 02f730d8 to 030730eb has its CatchHandler @ 02f7339c */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_02745e48(0);
                    /* try { // try from 02f730f4 to 030730f7 has its CatchHandler @ 02f73398 */
                    /* try { // try from 02f730f8 to 030730fb has its CatchHandler @ 02f733b4 */
                    /* try { // try from 02f730fc to 030730ff has its CatchHandler @ 02f733ac */
    in_stack_00000018 = FUN_027485e4(uVar6,unaff_x19[0xd],0);
                    /* try { // try from 02f73100 to 03073103 has its CatchHandler @ 02f733a0 */
                    /* try { // try from 02f73104 to 03073107 has its CatchHandler @ 02f72888 */
                    /* try { // try from 02f73108 to 03073123 has its CatchHandler @ 02f73398 */
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 02f73124 to 0307312b has its CatchHandler @ 02f72888 */
    dVar10 = (double)FUN_02784978(&stack0x00000018,0);
                    /* try { // try from 02f7312c to 0307312f has its CatchHandler @ 02f73394 */
                    /* try { // try from 02f73130 to 0307313f has its CatchHandler @ 02f72888 */
    iVar1 = -0x80000000;
                    /* try { // try from 02f73140 to 03073143 has its CatchHandler @ 02f73398 */
    if (dVar10 != INFINITY) {
      iVar1 = (int)dVar10;
    }
    *(int *)((long)unaff_x19 + 0x74) = iVar4 - iVar1;
    if (iVar4 - iVar1 < 1) {
      uVar6 = FUN_02f79d4c(0);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d25040);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02f73370 to 03073373 has its CatchHandler @ 02f7338c */
      FUN_01ab6b14(uVar6,uVar9);
    }
  }
                    /* try { // try from 02f7315c to 0307315f has its CatchHandler @ 02f73390 */
  iVar4 = FUN_02f73644();
                    /* try { // try from 02f73160 to 03073187 has its CatchHandler @ 02f7338c */
  if (iVar4 < 1) {
    FUN_02f73a88();
    if (unaff_x19[10] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f731cc with catch @ 02f73380 */
      FUN_01ab6c3c();
    }
    if ((*(byte *)(unaff_x19[10] + 0x1c) >> 1 & 1) == 0) {
      FUN_02f73644();
    }
    else {
      FUN_02f73644();
    }
    if (unaff_x19[0x15] != 0) {
      FUN_026779dc(unaff_x19[0x15],0);
    }
    FUN_02f7402c();
  }
  else if (iVar4 < 3) {
    lVar5 = unaff_x19[7];
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(lVar5,(long)&stack0x00000008 + 4,0);
    if ((int)unaff_x19[0x1b] < 3) {
                    /* try { // try from 02f731a0 to 030731a3 has its CatchHandler @ 02f73388 */
      lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f40);
                    /* try { // try from 02f731a4 to 030731cb has its CatchHandler @ 02f73384 */
      FUN_02f8321c(lVar7,0,0,0,0);
      unaff_x19[0x20] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x20,lVar7);
    }
                    /* try { // try from 02f731cc to 030731d7 has its CatchHandler @ 02f73380 */
    if (in_stack_00000008._4_1_ != '\0') {
                    /* try { // try from 02f731dc to 03073213 has its CatchHandler @ 02f7337c */
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
    }
    if (unaff_x19[0x20] != 0) {
      FUN_02f83a1c(unaff_x19[0x20],0);
    }
    if (unaff_x19[0x15] != 0) {
                    /* try { // try from 02f73214 to 03073323 has its CatchHandler @ 02f72888 */
      FUN_026779dc(unaff_x19[0x15],0);
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02f651a8();
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66dc0();
  }
  return unaff_x19[0x1d];
}


