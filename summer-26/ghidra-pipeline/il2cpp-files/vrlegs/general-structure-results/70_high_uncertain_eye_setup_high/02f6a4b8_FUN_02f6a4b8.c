/*
FUNCTION_NAME: FUN_02f6a4b8
ENTRY_POINT: 02f6a4b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f6a7bc) */

undefined8 FUN_02f6a4b8(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  char local_64 [4];
  undefined8 local_58;
  
  if ((DAT_0412ac76 & 1) == 0) {
                    /* try { // try from 02f6a4e4 to 0306a4eb has its CatchHandler @ 02f6a5f8 */
                    /* try { // try from 02f6a4ec to 0306a4f3 has its CatchHandler @ 02f6a54c */
    FUN_01ab69ac(PTR_DAT_03d24c00);
                    /* try { // try from 02f6a4f4 to 0306a4f7 has its CatchHandler @ 02f6a53c */
                    /* try { // try from 02f6a4f8 to 0306a4fb has its CatchHandler @ 02f6a538 */
    FUN_01ab69ac(PTR_DAT_03d1fee8);
                    /* try { // try from 02f6a4fc to 0306a4ff has its CatchHandler @ 02f69f64 */
                    /* try { // try from 02f6a500 to 0306a503 has its CatchHandler @ 02f6a528 */
                    /* try { // try from 02f6a504 to 0306a517 has its CatchHandler @ 02f69f64 */
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d24c08);
                    /* try { // try from 02f6a518 to 0306a51b has its CatchHandler @ 02f6a524 */
                    /* try { // try from 02f6a51c to 0306a563 has its CatchHandler @ 02f69f64 */
    FUN_01ab69ac(PTR_DAT_03d24c10);
                    /* catch() { ... } // from try @ 02f6a518 with catch @ 02f6a524 */
                    /* catch() { ... } // from try @ 02f6a500 with catch @ 02f6a528 */
    FUN_01ab69ac(PTR_DAT_03d24c18);
                    /* catch() { ... } // from try @ 02f6a1e8 with catch @ 02f6a52c */
                    /* catch() { ... } // from try @ 02f6a1d0 with catch @ 02f6a530 */
    DAT_0412ac76 = 1;
  }
                    /* catch() { ... } // from try @ 02f6a1dc with catch @ 02f6a534 */
  puVar7 = PTR_DAT_03d24c18;
  puVar6 = PTR_DAT_03d24c10;
  puVar5 = PTR_DAT_03d24c08;
  puVar3 = PTR_DAT_03d1fee8;
  puVar2 = PTR_DAT_03cbeb18;
                    /* catch() { ... } // from try @ 02f6a4f8 with catch @ 02f6a538 */
                    /* catch() { ... } // from try @ 02f6a4f4 with catch @ 02f6a53c */
                    /* catch() { ... } // from try @ 02f6a408 with catch @ 02f6a540 */
                    /* catch() { ... } // from try @ 02f6a168 with catch @ 02f6a544 */
  local_58 = 0;
                    /* catch() { ... } // from try @ 02f6a10c with catch @ 02f6a548 */
  local_64[0] = '\0';
                    /* catch() { ... } // from try @ 02f6a4ec with catch @ 02f6a54c */
  lVar12 = param_1[9];
                    /* try { // try from 02f6a564 to 0306a567 has its CatchHandler @ 02f6a574 */
  do {
    lVar14 = param_1[10];
    if (lVar14 == 0) goto LAB_02f6a834;
    uVar1 = *(uint *)(param_1 + 0xb);
                    /* catch() { ... } // from try @ 02f6a564 with catch @ 02f6a574 */
                    /* try { // try from 02f6a57c to 0306a5ef has its CatchHandler @ 02f6a6c0 */
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar1) {
      local_64[0] = '\0';
      FUN_027e0bd8(param_1,local_64,0);
      (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      if (local_64[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
      }
      return 0;
    }
    if (*(char *)((long)param_1 + 0x5d) != '\0') {
      if ((int)uVar1 < 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03d24c20);
        uVar11 = thunk_FUN_01a89e68();
        FUN_02f79548(uVar11,0);
        uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d24c28);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,uVar13);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_02f6a838;
      lVar14 = *(long *)(lVar14 + (ulong)uVar1 * 8 + 0x20);
      if ((lVar14 == 0) || (plVar9 = (long *)param_1[0xf], plVar9 == (long *)0x0)) {
LAB_02f6a834:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar14 = (**(code **)(*plVar9 + 600))
                         (plVar9,*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(*plVar9 + 0x260));
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar15);
        lVar15 = *(long *)puVar3;
      }
      if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_02f6a834;
      uVar10 = FUN_02726974(**(long **)(lVar15 + 0xb8),0);
      if ((uVar10 & 1) != 0) {
                    /* catch() { ... } // from try @ 02f6a41c with catch @ 02f6a5f0
                       try { // try from 02f6a5f0 to 0306a617 has its CatchHandler @ 02f69f64 */
        lVar15 = param_1[10];
                    /* catch() { ... } // from try @ 02f6a3e0 with catch @ 02f6a5f4 */
        if (lVar15 == 0) goto LAB_02f6a834;
                    /* catch() { ... } // from try @ 02f6a4e4 with catch @ 02f6a5f8 */
                    /* catch() { ... } // from try @ 02f6a380 with catch @ 02f6a5fc */
                    /* catch() { ... } // from try @ 02f6a324 with catch @ 02f6a600 */
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0xb)) {
LAB_02f6a838:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(param_1 + 0xb) * 8 + 0x20);
                    /* try { // try from 02f6a618 to 0306a61b has its CatchHandler @ 02f6a62c */
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) goto LAB_02f6a834;
                    /* catch() { ... } // from try @ 02f6a618 with catch @ 02f6a62c */
        lVar15 = FUN_025bfd60(lVar15,0,*(int *)(lVar15 + 0x10) + -2,0);
        lVar16 = param_1[10];
        if (lVar16 == 0) goto LAB_02f6a834;
                    /* try { // try from 02f6a63c to 0306a6ab has its CatchHandler @ 02f6a6c0 */
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0xb)) goto LAB_02f6a838;
        lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0xb) * 8 + 0x20);
        if (lVar16 == 0) goto LAB_02f6a834;
        if ((*(byte *)(lVar16 + 0x18) >> 3 & 1) != 0) {
          if (lVar15 == 0) goto LAB_02f6a834;
          iVar8 = FUN_025c2f58(lVar15,0x20,0);
          if (iVar8 != -1) {
            uVar11 = FUN_025bfd60(lVar15,0,iVar8,0);
            lVar15 = FUN_025b1328(uVar11,*(undefined8 *)puVar6,0);
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 02f6a6ac to 0306a6b7 has its CatchHandler @ 02f69f64 */
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_02f651a8();
        if ((uVar10 & 1) != 0) {
                    /* try { // try from 02f6a6b8 to 0306a6bf has its CatchHandler @ 02f6a6c0 */
                    /* catch() { ... } // from try @ 02f6a57c with catch @ 02f6a6c0
                       catch() { ... } // from try @ 02f6a63c with catch @ 02f6a6c0
                       catch() { ... } // from try @ 02f6a6b8 with catch @ 02f6a6c0 */
          plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)puVar2,1);
          if (plVar9 == (long *)0x0) goto LAB_02f6a834;
          if ((lVar15 != 0) &&
             (lVar16 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0)) {
            uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar11,0);
          }
          if ((int)plVar9[3] == 0) goto LAB_02f6a838;
          plVar9[4] = lVar15;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar15);
          uVar11 = FUN_026780b0(*(undefined8 *)puVar5,plVar9,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar3);
          }
          FUN_02f6520c(param_1,uVar11,*(undefined8 *)puVar7);
        }
      }
      puVar4 = PTR_DAT_03d24c00;
      if ((char)lVar12 != '\0') {
        if (lVar14 != 0) {
          lVar12 = *(long *)PTR_DAT_03d24c00;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar12 = *(long *)puVar4;
          }
          (**(code **)(*param_1 + 0x308))
                    (param_1,lVar14,0,*(undefined4 *)(lVar14 + 0x18),
                     **(undefined8 **)(lVar12 + 0xb8),param_1,*(undefined8 *)(*param_1 + 0x310));
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*param_1 + 0x398))
                (param_1,lVar14,0,*(undefined4 *)(lVar14 + 0x18),*(undefined8 *)(*param_1 + 0x3a0));
    }
    local_58 = 0;
                    /* try { // try from 02f6a768 to 0306a8fb has its CatchHandler @ 02f6a768
                       catch() { ... } // from try @ 02f6a768 with catch @ 02f6a768
                       catch() { ... } // from try @ 02f6ac58 with catch @ 02f6a768
                       catch() { ... } // from try @ 02f6ad1c with catch @ 02f6a768
                       catch() { ... } // from try @ 02f6ad24 with catch @ 02f6a768
                       catch() { ... } // from try @ 02f6ad74 with catch @ 02f6a768
                       catch() { ... } // from try @ 02f6aeac with catch @ 02f6a768 */
    uVar10 = FUN_02f6aba8(param_1,&local_58);
    if ((uVar10 & 1) != 0) {
      return local_58;
    }
  } while( true );
}


