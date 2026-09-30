/*
FUNCTION_NAME: FUN_02181fc0
ENTRY_POINT: 02181fc0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021829bc) */

void FUN_02181fc0(long param_1,undefined8 ****param_2,uint param_3,undefined8 ****param_4,
                 uint param_5,uint param_6,void *param_7,long param_8)

{
  bool bVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  undefined8 *__dest;
  long *plVar23;
  long alStack_120 [4];
  void *local_100;
  uint local_f4;
  void *local_f0;
  undefined8 ***local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 *local_d0;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 ***local_b8;
  ulong local_b0;
  long local_a8;
  uint local_a0;
  char local_9c [4];
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  char local_74 [4];
  long local_70;
  
                    /* try { // try from 02181fc0 to 02281fc3 has its CatchHandler @ 02182244 */
                    /* try { // try from 02181fe4 to 02281fe7 has its CatchHandler @ 021821f0 */
                    /* try { // try from 02181fe8 to 02282013 has its CatchHandler @ 02182218 */
  alStack_120[2] = tpidr_el0;
  local_70 = *(long *)(alStack_120[2] + 0x28);
  plVar23 = (long *)(param_8 + 0x20);
  local_b0 = (ulong)*(uint *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0x60) + 0xfc);
  local_e0 = (ulong)*(uint *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0x88) + 0xfc);
                    /* try { // try from 02182028 to 0228202b has its CatchHandler @ 02182244 */
                    /* try { // try from 0218202c to 02282033 has its CatchHandler @ 021821fc */
  uVar13 = local_b0 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)alStack_120 - uVar13);
  puVar20 = (undefined8 *)((long)__dest - uVar13);
                    /* try { // try from 02182044 to 02282067 has its CatchHandler @ 02182244 */
  uVar13 = local_e0 + 0xf & 0x1fffffff0;
  local_d0 = (undefined8 *)((long)puVar20 - uVar13);
  local_100 = (void *)((long)local_d0 - uVar13);
                    /* try { // try from 02182074 to 0228208b has its CatchHandler @ 021821f4 */
  local_c4 = param_3 & 0x7fffffff;
  local_9c[0] = '\0';
  alStack_120[1] = param_8;
  local_f4 = param_5;
  local_f0 = param_7;
  local_e8 = param_4;
  local_c0 = param_6;
  local_b8 = param_2;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_4;
  pppuStack_90 = param_2;
  while( true ) {
    lVar22 = *(long *)(local_a8 + 0x10);
    thunk_FUN_01a4b338();
                    /* try { // try from 02182098 to 022820bf has its CatchHandler @ 0218221c */
    if (((lVar22 == 0) || (lVar14 = *(long *)(lVar22 + 0x10), lVar14 == 0)) ||
       (lVar17 = *(long *)(lVar22 + 0x18), lVar17 == 0)) break;
    lVar7 = *(long *)(*(long *)(*plVar23 + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar21 = *(int *)(lVar14 + 0x18);
                    /* try { // try from 021820cc to 022820ef has its CatchHandler @ 02182244 */
    iVar3 = *(int *)(lVar17 + 0x18);
    local_9c[0] = '\0';
    iVar5 = 0;
    if (iVar21 != 0) {
      iVar5 = (int)local_c4 / iVar21;
    }
    uVar4 = local_c4 - iVar5 * iVar21;
    iVar21 = 0;
    if (iVar3 != 0) {
      iVar21 = (int)uVar4 / iVar3;
    }
    local_bc = uVar4 - iVar21 * iVar3;
    if ((local_c0 & 1) != 0) {
      lVar14 = *(long *)(lVar22 + 0x18);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* try { // try from 021820fc to 02282113 has its CatchHandler @ 02182230 */
      if (*(uint *)(lVar14 + 0x18) <= local_bc) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
                    /* try { // try from 02182114 to 0228215b has its CatchHandler @ 02181748 */
      FUN_027e0bd8(*(undefined8 *)(lVar14 + (ulong)local_bc * 8 + 0x20),local_9c,0);
    }
    lVar14 = *(long *)(local_a8 + 0x10);
    thunk_FUN_01a4b338();
    if (lVar22 == lVar14) {
      lVar14 = *(long *)(lVar22 + 0x10);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      local_d8 = (ulong)uVar4;
                    /* try { // try from 0218215c to 0228215f has its CatchHandler @ 021821d8 */
                    /* try { // try from 02182160 to 02282163 has its CatchHandler @ 0218220c */
                    /* try { // try from 02182164 to 02282167 has its CatchHandler @ 02182208 */
      lVar14 = *(long *)(lVar14 + local_d8 * 8 + 0x20);
      lVar17 = 0;
                    /* try { // try from 02182168 to 0228216b has its CatchHandler @ 02182204 */
      while (lVar7 = lVar14, lVar7 != 0) {
                    /* try { // try from 0218216c to 02282173 has its CatchHandler @ 02182228 */
                    /* try { // try from 02182174 to 02282177 has its CatchHandler @ 02182244 */
                    /* try { // try from 02182178 to 0228217b has its CatchHandler @ 021821f8 */
                    /* try { // try from 0218217c to 0228217f has its CatchHandler @ 021821f4 */
                    /* try { // try from 02182180 to 02282183 has its CatchHandler @ 02182244 */
                    /* try { // try from 02182184 to 02282187 has its CatchHandler @ 021821f0 */
                    /* try { // try from 02182188 to 0228218b has its CatchHandler @ 021821bc */
        puVar8 = (uint *)thunk_FUN_01a59484(lVar7,*(long *)(*(long *)(*(long *)(*plVar23 + 0xc0) +
                                                                     0xf8) + 0x80) + 0x60);
                    /* try { // try from 0218218c to 02282193 has its CatchHandler @ 021821ec */
                    /* try { // try from 02182194 to 02282197 has its CatchHandler @ 021821e8 */
                    /* try { // try from 02182198 to 0228219b has its CatchHandler @ 021821e0 */
        if (*puVar8 == local_a0) {
                    /* try { // try from 0218219c to 0228219f has its CatchHandler @ 02182244 */
                    /* try { // try from 021821a0 to 022821a3 has its CatchHandler @ 021821dc */
                    /* catch() { ... } // from try @ 02181bf8 with catch @ 021821a4
                       try { // try from 021821a4 to 0228225b has its CatchHandler @ 02181748 */
                    /* catch() { ... } // from try @ 02181e7c with catch @ 021821a8 */
          plVar19 = *(long **)(local_a8 + 0x18);
                    /* catch() { ... } // from try @ 02181bc0 with catch @ 021821ac */
                    /* catch() { ... } // from try @ 02181e9c with catch @ 021821b0 */
                    /* catch() { ... } // from try @ 02181be0 with catch @ 021821b4 */
                    /* catch() { ... } // from try @ 02181b30 with catch @ 021821b8 */
          pvVar9 = (void *)thunk_FUN_01a59484(lVar7,*(undefined8 *)
                                                     (*(long *)(*(long *)(*plVar23 + 0xc0) + 0xf8) +
                                                     0x80));
          uVar13 = local_b0;
                    /* catch() { ... } // from try @ 02182188 with catch @ 021821bc */
                    /* catch() { ... } // from try @ 02181dd0 with catch @ 021821c0 */
                    /* catch() { ... } // from try @ 02181fa0 with catch @ 021821c4 */
                    /* catch() { ... } // from try @ 02181e88 with catch @ 021821c8 */
                    /* catch() { ... } // from try @ 02181e40 with catch @ 021821cc */
          memcpy(__dest,pvVar9,local_b0);
                    /* catch() { ... } // from try @ 02181e08 with catch @ 021821d0 */
          lVar14 = *plVar23;
                    /* catch() { ... } // from try @ 02181f14 with catch @ 021821d4 */
                    /* catch() { ... } // from try @ 0218215c with catch @ 021821d8 */
                    /* catch() { ... } // from try @ 02181c40 with catch @ 021821dc
                       catch() { ... } // from try @ 021821a0 with catch @ 021821dc */
                    /* catch() { ... } // from try @ 02181bb0 with catch @ 021821e0
                       catch() { ... } // from try @ 02182198 with catch @ 021821e0 */
                    /* catch() { ... } // from try @ 02181c44 with catch @ 021821e4 */
                    /* catch() { ... } // from try @ 02181b68 with catch @ 021821e8
                       catch() { ... } // from try @ 02182194 with catch @ 021821e8 */
                    /* catch() { ... } // from try @ 02181b5c with catch @ 021821ec
                       catch() { ... } // from try @ 0218218c with catch @ 021821ec */
          ppppuVar2 = (undefined8 ****)local_b8;
                    /* catch() { ... } // from try @ 02181fe4 with catch @ 021821f0
                       catch() { ... } // from try @ 02182184 with catch @ 021821f0 */
                    /* catch() { ... } // from try @ 02182074 with catch @ 021821f4
                       catch() { ... } // from try @ 0218217c with catch @ 021821f4 */
          if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x60) + 0x28)) {
            ppppuVar2 = &pppuStack_90;
          }
                    /* catch() { ... } // from try @ 02181f94 with catch @ 021821f8
                       catch() { ... } // from try @ 02182178 with catch @ 021821f8 */
          memcpy(puVar20,ppppuVar2,uVar13);
                    /* catch() { ... } // from try @ 0218202c with catch @ 021821fc */
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* catch() { ... } // from try @ 02181e1c with catch @ 02182200 */
          lVar11 = *(long *)(lVar14 + 0xc0);
                    /* catch() { ... } // from try @ 02181df0 with catch @ 02182204
                       catch() { ... } // from try @ 02182168 with catch @ 02182204 */
          lVar14 = *(long *)(lVar11 + 0x20);
                    /* catch() { ... } // from try @ 02181f08 with catch @ 02182208
                       catch() { ... } // from try @ 02182164 with catch @ 02182208 */
                    /* catch() { ... } // from try @ 02181ee4 with catch @ 0218220c
                       catch() { ... } // from try @ 02182160 with catch @ 0218220c */
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 02181d00 with catch @ 02182210 */
                    /* catch() { ... } // from try @ 02181ce0 with catch @ 02182214 */
            lVar14 = FUN_01a46ff8(lVar14);
                    /* catch() { ... } // from try @ 02181fe8 with catch @ 02182218 */
                    /* catch() { ... } // from try @ 02182098 with catch @ 0218221c */
                    /* catch() { ... } // from try @ 02181f2c with catch @ 02182220 */
            lVar11 = *(long *)(*plVar23 + 0xc0);
          }
                    /* catch() { ... } // from try @ 02181cac with catch @ 02182224 */
                    /* catch() { ... } // from try @ 02181e6c with catch @ 02182228
                       catch() { ... } // from try @ 0218216c with catch @ 02182228 */
                    /* catch() { ... } // from try @ 02181a18 with catch @ 0218222c */
                    /* catch() { ... } // from try @ 021820fc with catch @ 02182230 */
                    /* catch() { ... } // from try @ 021819e8 with catch @ 02182234 */
          puVar15 = __dest;
          puVar18 = puVar20;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x60) + 0x28)) {
                    /* catch() { ... } // from try @ 021819ac with catch @ 02182238 */
            puVar15 = (undefined8 *)*__dest;
                    /* catch() { ... } // from try @ 02181d20 with catch @ 0218223c */
            puVar18 = (undefined8 *)*puVar20;
          }
                    /* catch() { ... } // from try @ 02181960 with catch @ 02182240 */
          lVar11 = *plVar19;
                    /* catch() { ... } // from try @ 02181a08 with catch @ 02182244
                       catch() { ... } // from try @ 02181a94 with catch @ 02182244
                       catch() { ... } // from try @ 02181c1c with catch @ 02182244
                       catch() { ... } // from try @ 02181c7c with catch @ 02182244
                       catch() { ... } // from try @ 02181eb4 with catch @ 02182244
                       catch() { ... } // from try @ 02181f70 with catch @ 02182244
                       catch() { ... } // from try @ 02181fc0 with catch @ 02182244
                       catch() { ... } // from try @ 02182028 with catch @ 02182244
                       catch() { ... } // from try @ 02182044 with catch @ 02182244
                       catch() { ... } // from try @ 021820cc with catch @ 02182244
                       catch() { ... } // from try @ 02182174 with catch @ 02182244
                       catch() { ... } // from try @ 02182180 with catch @ 02182244
                       catch() { ... } // from try @ 0218219c with catch @ 02182244 */
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
                    /* try { // try from 0218225c to 0228225f has its CatchHandler @ 02182270 */
              if (*(long *)(piVar12 + -2) == lVar14) {
                    /* try { // try from 0218227c to 02282287 has its CatchHandler @ 0218229c */
                lVar14 = lVar11 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_02182288;
              }
              uVar13 = uVar13 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar13 != 0);
          }
                    /* catch() { ... } // from try @ 0218225c with catch @ 02182270 */
          lVar14 = FUN_01a472ec(plVar19,lVar14,0);
LAB_02182288:
                    /* try { // try from 02182288 to 02282293 has its CatchHandler @ 02181748 */
          lVar14 = *(long *)(lVar14 + 8);
                    /* try { // try from 02182294 to 0228229b has its CatchHandler @ 0218229c */
          local_88 = puVar15;
          puStack_80 = puVar18;
                    /* catch() { ... } // from try @ 0218227c with catch @ 0218229c
                       catch() { ... } // from try @ 02182294 with catch @ 0218229c */
          (**(code **)(lVar14 + 0x10))
                    (*(undefined8 *)(lVar14 + 8),lVar14,plVar19,&local_88,local_74);
          if (local_74[0] != '\0') {
            if ((local_f4 & 1) == 0) {
              pvVar9 = (void *)thunk_FUN_01a59484(lVar7,*(long *)(*(long *)(*(long *)(*plVar23 +
                                                                                     0xc0) + 0xf8) +
                                                                 0x80) + 0x20);
              puVar15 = local_d0;
              uVar13 = local_e0;
              memcpy(local_d0,pvVar9,local_e0);
              memcpy(local_f0,puVar15,uVar13);
              lVar14 = *(long *)(*(long *)(*plVar23 + 0xc0) + 0x88);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01a46ff8();
              }
              FUN_01ab6954(lVar14,local_f0,local_d0);
            }
            else {
              lVar14 = *(long *)(*(long *)(*plVar23 + 0xc0) + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01a46ff8();
              }
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              lVar16 = *plVar23;
              lVar11 = *(long *)(lVar16 + 0xc0);
              lVar14 = *(long *)(lVar11 + 0x10);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01a46ff8();
                lVar16 = *plVar23;
                lVar11 = *(long *)(lVar16 + 0xc0);
              }
              puVar15 = local_d0;
              uVar13 = local_e0;
              if (**(char **)(lVar14 + 0xb8) == '\0') {
                pvVar9 = (void *)thunk_FUN_01a59484(lVar7,*(undefined8 *)
                                                           (*(long *)(lVar11 + 0xf8) + 0x80));
                memcpy(__dest,pvVar9,local_b0);
                lVar14 = *plVar23;
                ppppuVar2 = (undefined8 ****)local_e8;
                if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x88) + 0x28)) {
                  ppppuVar2 = &local_98;
                }
                memcpy(local_d0,ppppuVar2,local_e0);
                puVar15 = (undefined8 *)
                          thunk_FUN_01a59484(lVar7,*(long *)(*(long *)(*(long *)(lVar14 + 0xc0) +
                                                                      0xf8) + 0x80) + 0x40);
                lVar14 = *puVar15;
                thunk_FUN_01a4b338();
                if ((*(byte *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0xf8) + 0x135) & 1) == 0) {
                  FUN_01a46ff8();
                }
                uVar10 = thunk_FUN_01a89e68();
                lVar11 = *plVar23;
                lVar7 = *(long *)(lVar11 + 0xc0);
                if (*(int *)(*(long *)(lVar7 + 0x60) + 0x28) < 0) {
                  memcpy(puVar20,__dest,local_b0);
                  lVar7 = *(long *)(lVar11 + 0xc0);
                  puVar15 = puVar20;
                }
                else {
                  puVar15 = (undefined8 *)*__dest;
                }
                pvVar9 = local_100;
                if (*(int *)(*(long *)(lVar7 + 0x88) + 0x28) < 0) {
                  alStack_120[3] = lVar14;
                  memcpy(local_100,local_d0,local_e0);
                  lVar7 = *(long *)(lVar11 + 0xc0);
                  lVar14 = alStack_120[3];
                }
                else {
                  pvVar9 = (void *)*local_d0;
                }
                FUN_0223d31c(uVar10,puVar15,pvVar9,local_a0,lVar14,*(undefined8 *)(lVar7 + 0x1a0));
                if (lVar17 == 0) {
                  lVar14 = *(long *)(lVar22 + 0x10);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  FUN_02006a80(lVar14 + local_d8 * 8 + 0x20,uVar10,
                               *(undefined8 *)(*(long *)(*plVar23 + 0xc0) + 0x130));
                }
                else {
                  thunk_FUN_01a4b338();
                  FUN_018820a8(lVar17,*(long *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0xf8) + 0x80)
                                      + 0x40,uVar10);
                }
              }
              else {
                ppppuVar2 = (undefined8 ****)local_e8;
                if (-1 < *(int *)(*(long *)(lVar11 + 0x88) + 0x28)) {
                  ppppuVar2 = &local_98;
                }
                memcpy(local_d0,ppppuVar2,local_e0);
                FUN_01ab69d4(lVar7,*(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0xf8) + 0x80) +
                                   0x20,puVar15,uVar13 & 0xffffffff);
              }
              puVar15 = local_d0;
              uVar13 = local_e0;
              ppppuVar2 = (undefined8 ****)local_e8;
              if (-1 < *(int *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0x88) + 0x28)) {
                ppppuVar2 = &local_98;
              }
              memcpy(local_d0,ppppuVar2,local_e0);
              memcpy(local_f0,puVar15,uVar13);
              lVar14 = *(long *)(*(long *)(*plVar23 + 0xc0) + 0x88);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01a46ff8();
              }
              FUN_01ab6954(lVar14,local_f0,local_d0);
            }
            bVar1 = false;
            iVar21 = 0xd;
            goto LAB_0218277c;
          }
        }
        plVar19 = (long *)thunk_FUN_01a59484(lVar7,*(long *)(*(long *)(*(long *)(*plVar23 + 0xc0) +
                                                                      0xf8) + 0x80) + 0x40);
        lVar14 = *plVar19;
        thunk_FUN_01a4b338();
        lVar17 = lVar7;
      }
      lVar14 = *(long *)(lVar22 + 0x10);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar17 = *plVar23;
      ppppuVar2 = (undefined8 ****)local_b8;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x60) + 0x28)) {
        ppppuVar2 = &pppuStack_90;
      }
      memcpy(__dest,ppppuVar2,local_b0);
      ppppuVar2 = (undefined8 ****)local_e8;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x88) + 0x28)) {
        ppppuVar2 = &local_98;
      }
      memcpy(local_d0,ppppuVar2,local_e0);
      lVar7 = *(long *)(lVar22 + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar7 = *(undefined8 *)(lVar7 + local_d8 * 8 + 0x20);
      if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0xf8) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar10 = thunk_FUN_01a89e68();
      lVar11 = *plVar23;
      lVar17 = *(long *)(lVar11 + 0xc0);
      if (*(int *)(*(long *)(lVar17 + 0x60) + 0x28) < 0) {
        memcpy(puVar20,__dest,local_b0);
        lVar17 = *(long *)(lVar11 + 0xc0);
        puVar15 = puVar20;
      }
      else {
        puVar15 = (undefined8 *)*__dest;
      }
      pvVar9 = local_100;
      if (*(int *)(*(long *)(lVar17 + 0x88) + 0x28) < 0) {
        alStack_120[3] = lVar7;
        memcpy(local_100,local_d0,local_e0);
        lVar17 = *(long *)(lVar11 + 0xc0);
        lVar7 = alStack_120[3];
      }
      else {
        pvVar9 = (void *)*local_d0;
      }
      uVar6 = local_bc;
      FUN_0223d31c(uVar10,puVar15,pvVar9,local_a0,lVar7,*(undefined8 *)(lVar17 + 0x1a0));
      if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_02006a80(lVar14 + local_d8 * 8 + 0x20,uVar10,
                   *(undefined8 *)(*(long *)(*plVar23 + 0xc0) + 0x130));
      lVar14 = *(long *)(lVar22 + 0x20);
      thunk_FUN_01a4b338();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      piVar12 = (int *)(lVar14 + (ulong)uVar6 * 4 + 0x20);
      iVar21 = *piVar12;
      if (iVar21 == 0x7fffffff) {
        uVar10 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar10,alStack_120[1]);
      }
      *piVar12 = iVar21 + 1;
      lVar14 = *(long *)(lVar22 + 0x20);
      thunk_FUN_01a4b338();
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      iVar21 = 0x11;
      bVar1 = *(int *)(local_a8 + 0x24) < *(int *)(lVar14 + (ulong)uVar6 * 4 + 0x20);
    }
    else {
      bVar1 = false;
      iVar21 = 2;
    }
LAB_0218277c:
    if (local_9c[0] != '\0') {
      lVar14 = *(long *)(lVar22 + 0x18);
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= local_bc) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      OVRManager_<>c__<InitOVRManager>b__424_0
                (*(undefined8 *)(lVar14 + (ulong)local_bc * 8 + 0x20),0);
    }
    if (iVar21 != 2) {
      if ((iVar21 == 0x11) || (iVar21 == 0)) {
        if (bVar1) {
          FUN_02184fbc(local_a8,lVar22,*(undefined8 *)(*(long *)(*plVar23 + 0xc0) + 0x1a8));
        }
        puVar20 = local_d0;
        uVar13 = local_e0;
        ppppuVar2 = (undefined8 ****)local_e8;
        if (-1 < *(int *)(*(long *)(*(long *)(*plVar23 + 0xc0) + 0x88) + 0x28)) {
          ppppuVar2 = &local_98;
        }
        memcpy(local_d0,ppppuVar2,local_e0);
        memcpy(local_f0,puVar20,uVar13);
        lVar22 = *(long *)(*(long *)(*plVar23 + 0xc0) + 0x88);
        if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
          lVar22 = FUN_01a46ff8();
        }
        lVar14 = alStack_120[2];
        FUN_01ab6954(lVar22,local_f0,local_d0);
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
        lVar14 = alStack_120[2];
      }
      if (*(long *)(lVar14 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


