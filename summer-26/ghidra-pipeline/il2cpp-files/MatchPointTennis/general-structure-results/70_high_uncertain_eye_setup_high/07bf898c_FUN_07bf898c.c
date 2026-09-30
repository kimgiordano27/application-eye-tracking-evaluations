/*
FUNCTION_NAME: FUN_07bf898c
ENTRY_POINT: 07bf898c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_07bf898c(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_5c;
  
  if ((DAT_0a526275 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7f8);
    FUN_04447ba8(PTR_DAT_09f1e538);
                    /* try { // try from 07bf89cc to 07cf89d3 has its CatchHandler @ 07bf8b50 */
    FUN_04447ba8(PTR_DAT_09f4d930);
    DAT_0a526275 = 1;
  }
  if (*(char *)(param_1 + 0x1c8) != '\0') {
                    /* try { // try from 07bf89e8 to 07cf8a07 has its CatchHandler @ 07bf8b68 */
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x188);
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
                    /* try { // try from 07bf8a20 to 07cf8a27 has its CatchHandler @ 07bf8b4c */
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    uVar14 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x180) = uVar13;
                    /* try { // try from 07bf8a3c to 07cf8a5b has its CatchHandler @ 07bf8b64 */
    *(undefined4 *)(param_1 + 0x188) = uVar14;
    return;
  }
  lVar8 = *(long *)(param_1 + 0xd0);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                    /* try { // try from 07bf8a74 to 07cf8a7b has its CatchHandler @ 07bf8b48 */
    thunk_FUN_044a54b4();
  }
  uVar4 = FUN_0952c404(lVar8,0,0);
  puVar3 = PTR_DAT_09f4e7f8;
  puVar2 = PTR_DAT_09f4d930;
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 07bf8bbc to 07cf8bd3 has its CatchHandler @ 07bf8c34 */
    if ((*(long *)(param_1 + 0x1a8) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x10), lVar10 != 0)) {
      OVRPlugin_OVRP_0_1_2___cctor(lVar10,*(undefined8 *)(param_1 + 0x1b0),0);
      if (*(long *)(param_1 + 0x1a8) != 0) {
                    /* try { // try from 07bf8bd4 to 07cf8c23 has its CatchHandler @ 07bf8734 */
        FUN_07bf8dfc(*(long *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0));
        uVar4 = FUN_07bf8010(param_1);
        puVar2 = PTR_DAT_09f1e740;
        if ((uVar4 & 1) == 0) {
LAB_07bf8c80:
          lVar8 = *(long *)(param_1 + 0x170);
          if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07bf8cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
            ;
            return;
          }
        }
        else {
          lVar10 = *(long *)(param_1 + 0x1a0);
          if (lVar10 != 0) {
            uVar4 = 0;
            do {
              if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)uVar4) goto LAB_07bf8c80;
              if (*(uint *)(lVar10 + 0x18) <= (uint)uVar4) goto LAB_07bf8df8;
              lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
                    /* try { // try from 07bf8c24 to 07cf8c33 has its CatchHandler @ 07bf8c34 */
              if ((lVar10 == 0) || (lVar8 == 0)) break;
              cVar1 = *(char *)(lVar10 + 0x10);
              uVar13 = *(undefined8 *)(lVar8 + 0xd8);
                    /* catch() { ... } // from try @ 07bf8bbc with catch @ 07bf8c34
                       catch() { ... } // from try @ 07bf8c24 with catch @ 07bf8c34 */
              if (DAT_0a51bf43 == '\0') {
                    /* try { // try from 07bf8c38 to 07cf8c3b has its CatchHandler @ 07bf8c44 */
                    /* try { // try from 07bf8c3c to 07cf8c47 has its CatchHandler @ 07bf8734 */
                FUN_04447ba8(puVar2);
                DAT_0a51bf43 = '\x01';
              }
                    /* catch() { ... } // from try @ 07bf8c38 with catch @ 07bf8c44 */
              puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
              if (cVar1 == '\0') {
                FUN_07bf7c1c(*puVar6,puVar6[1],puVar6[2],param_1,uVar4 & 0xffffffff,uVar13);
              }
              else {
                FUN_07bf86a8();
              }
              lVar10 = *(long *)(param_1 + 0x1a0);
              uVar4 = uVar4 + 1;
            } while (lVar10 != 0);
          }
        }
      }
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1a0);
                    /* try { // try from 07bf8a90 to 07cf8aaf has its CatchHandler @ 07bf8b60 */
    if (lVar8 != 0) {
      uVar9 = 0;
      do {
        uVar4 = *(ulong *)(lVar8 + 0x18);
        uVar7 = (uint)uVar4;
        if ((int)uVar7 <= (int)uVar9) {
          if ((int)uVar7 < 1) {
            return;
          }
          uVar9 = 0;
          goto LAB_07bf8cbc;
        }
        if (uVar7 <= uVar9) goto LAB_07bf8df8;
        lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
                    /* try { // try from 07bf8ac4 to 07cf8acb has its CatchHandler @ 07bf8b38 */
        if (lVar10 == 0) break;
        if (*(char *)(lVar10 + 0x10) != '\0') {
          *(undefined2 *)(lVar10 + 0x10) = 0x100;
          *(undefined4 *)(lVar10 + 0x2c) = 0;
          if (*(long *)(lVar10 + 0x18) == 0) break;
                    /* try { // try from 07bf8ae0 to 07cf8aff has its CatchHandler @ 07bf8b44 */
          lVar8 = FUN_04447c90(*(undefined8 *)puVar2,
                               *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x18));
          lVar5 = *(long *)(lVar10 + 0x18);
          if (lVar5 == 0) break;
          uVar4 = 0;
          puVar11 = (undefined8 *)(lVar8 + 0x20);
          while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07bf8df8;
                    /* try { // try from 07bf8b14 to 07cf8b17 has its CatchHandler @ 07bf8b90 */
                    /* try { // try from 07bf8b18 to 07cf8b1b has its CatchHandler @ 07bf8b8c */
            if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_07bf8df4;
                    /* try { // try from 07bf8b1c to 07cf8b1f has its CatchHandler @ 07bf8ba0 */
                    /* try { // try from 07bf8b20 to 07cf8b23 has its CatchHandler @ 07bf8b80 */
                    /* try { // try from 07bf8b24 to 07cf8b27 has its CatchHandler @ 07bf8b9c */
                    /* try { // try from 07bf8b28 to 07cf8b2b has its CatchHandler @ 07bf8b74 */
                    /* try { // try from 07bf8b2c to 07cf8b2f has its CatchHandler @ 07bf8b98 */
            FUN_07ca3aa4(&local_90,*(long *)(param_1 + 0x1b8),
                         *(undefined4 *)(lVar5 + uVar4 * 4 + 0x20),0);
                    /* try { // try from 07bf8b30 to 07cf8b33 has its CatchHandler @ 07bf8b5c */
            local_70 = local_90;
                    /* try { // try from 07bf8b34 to 07cf8b37 has its CatchHandler @ 07bf8b94 */
            uStack_5c = uStack_7c;
                    /* catch() { ... } // from try @ 07bf8ac4 with catch @ 07bf8b38
                       try { // try from 07bf8b38 to 07cf8bbb has its CatchHandler @ 07bf8734 */
                    /* catch() { ... } // from try @ 07bf8880 with catch @ 07bf8b3c */
                    /* catch() { ... } // from try @ 07bf88f0 with catch @ 07bf8b40 */
            if (lVar8 == 0) goto LAB_07bf8df4;
                    /* catch() { ... } // from try @ 07bf8ae0 with catch @ 07bf8b44 */
                    /* catch() { ... } // from try @ 07bf8a74 with catch @ 07bf8b48 */
                    /* catch() { ... } // from try @ 07bf8a20 with catch @ 07bf8b4c */
                    /* catch() { ... } // from try @ 07bf89cc with catch @ 07bf8b50 */
                    /* catch() { ... } // from try @ 07bf8844 with catch @ 07bf8b54 */
                    /* catch() { ... } // from try @ 07bf8834 with catch @ 07bf8b58 */
                    /* catch() { ... } // from try @ 07bf8b30 with catch @ 07bf8b5c */
            if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_07bf8df8;
                    /* catch() { ... } // from try @ 07bf8a90 with catch @ 07bf8b60 */
                    /* catch() { ... } // from try @ 07bf8a3c with catch @ 07bf8b64 */
                    /* catch() { ... } // from try @ 07bf89e8 with catch @ 07bf8b68 */
            uVar4 = uVar4 + 1;
                    /* catch() { ... } // from try @ 07bf88b4 with catch @ 07bf8b6c */
            *(undefined8 *)((long)puVar11 + 0x14) = uStack_7c;
            *(ulong *)((long)puVar11 + 0xc) = CONCAT44(uStack_80,uStack_84);
                    /* catch() { ... } // from try @ 07bf88a4 with catch @ 07bf8b70 */
            puVar11[1] = CONCAT44(uStack_84,uStack_88);
            *puVar11 = local_90;
                    /* catch() { ... } // from try @ 07bf8b28 with catch @ 07bf8b74 */
            lVar5 = *(long *)(lVar10 + 0x18);
                    /* catch() { ... } // from try @ 07bf891c with catch @ 07bf8b78 */
            puVar11 = (undefined8 *)((long)puVar11 + 0x1c);
            if (lVar5 == 0) goto LAB_07bf8df4;
          }
                    /* catch() { ... } // from try @ 07bf8b20 with catch @ 07bf8b80 */
                    /* catch() { ... } // from try @ 07bf896c with catch @ 07bf8b84 */
                    /* catch() { ... } // from try @ 07bf895c with catch @ 07bf8b88 */
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07bf8b18 with catch @ 07bf8b8c */
            thunk_FUN_044a54b4();
          }
                    /* catch() { ... } // from try @ 07bf8b14 with catch @ 07bf8b90 */
                    /* catch() { ... } // from try @ 07bf8820 with catch @ 07bf8b94
                       catch() { ... } // from try @ 07bf8b34 with catch @ 07bf8b94 */
                    /* catch() { ... } // from try @ 07bf8890 with catch @ 07bf8b98
                       catch() { ... } // from try @ 07bf8b2c with catch @ 07bf8b98 */
          uVar14 = FUN_07c2eab0(lVar8,0);
                    /* catch() { ... } // from try @ 07bf88f4 with catch @ 07bf8b9c
                       catch() { ... } // from try @ 07bf8b24 with catch @ 07bf8b9c */
          *(undefined4 *)(lVar10 + 0x28) = uVar14;
                    /* catch() { ... } // from try @ 07bf8950 with catch @ 07bf8ba0
                       catch() { ... } // from try @ 07bf8b1c with catch @ 07bf8ba0 */
          lVar8 = *(long *)(param_1 + 0x1a0);
        }
                    /* catch() { ... } // from try @ 07bf8854 with catch @ 07bf8ba4
                       catch() { ... } // from try @ 07bf88c4 with catch @ 07bf8ba4
                       catch() { ... } // from try @ 07bf892c with catch @ 07bf8ba4
                       catch() { ... } // from try @ 07bf897c with catch @ 07bf8ba4 */
        uVar9 = uVar9 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_07bf8df4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07bf8cbc:
  if ((uint)uVar4 <= uVar9) {
LAB_07bf8df8:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  lVar8 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_07bf8df4;
  if (*(char *)(lVar8 + 0x11) != '\0') {
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_07bf8df4;
    lVar10 = FUN_04447c90(*(undefined8 *)puVar2,*(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x18));
    lVar5 = *(long *)(lVar8 + 0x18);
    if (lVar5 == 0) goto LAB_07bf8df4;
    uVar4 = 0;
    puVar11 = (undefined8 *)(lVar10 + 0x20);
    while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18)) {
      if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07bf8df8;
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_07bf8df4;
      FUN_07ca3aa4(&local_90,*(long *)(param_1 + 0x1b8),*(undefined4 *)(lVar5 + uVar4 * 4 + 0x20),0)
      ;
      local_70 = local_90;
      uStack_5c = uStack_7c;
      if (lVar10 == 0) goto LAB_07bf8df4;
      if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_07bf8df8;
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)puVar11 + 0x14) = uStack_7c;
      *(ulong *)((long)puVar11 + 0xc) = CONCAT44(uStack_80,uStack_84);
      puVar11[1] = CONCAT44(uStack_84,uStack_88);
      *puVar11 = local_90;
      lVar5 = *(long *)(lVar8 + 0x18);
      puVar11 = (undefined8 *)((long)puVar11 + 0x1c);
      if (lVar5 == 0) goto LAB_07bf8df4;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar12 = (float)FUN_07c2eab0(lVar10,0);
    if (*(float *)(lVar8 + 0x28) - *(float *)(param_1 + 0x15c) <= fVar12) {
      *(undefined4 *)(lVar8 + 0x2c) = 0;
    }
    else {
      fVar12 = *(float *)(lVar8 + 0x2c) + *(float *)(param_1 + 0x1d0);
      *(float *)(lVar8 + 0x2c) = fVar12;
                    /* try { // try from 07bf8dc4 to 07cf8e67 has its CatchHandler @ 07bf8dc4
                       catch() { ... } // from try @ 07bf8dc4 with catch @ 07bf8dc4
                       catch() { ... } // from try @ 07bf8efc with catch @ 07bf8dc4
                       catch() { ... } // from try @ 07bf8fd4 with catch @ 07bf8dc4
                       catch() { ... } // from try @ 07bf9034 with catch @ 07bf8dc4
                       catch() { ... } // from try @ 07bf909c with catch @ 07bf8dc4 */
      if (fVar12 < *(float *)(param_1 + 0x160)) {
        return;
      }
      *(undefined1 *)(lVar8 + 0x11) = 0;
    }
  }
  lVar8 = *(long *)(param_1 + 0x1a0);
  if (lVar8 == 0) goto LAB_07bf8df4;
  uVar4 = (ulong)*(uint *)(lVar8 + 0x18);
  uVar9 = uVar9 + 1;
  if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) {
    return;
  }
  goto LAB_07bf8cbc;
}


