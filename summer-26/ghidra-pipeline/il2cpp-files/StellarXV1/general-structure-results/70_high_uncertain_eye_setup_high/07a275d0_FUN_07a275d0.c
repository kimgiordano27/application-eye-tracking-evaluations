/*
FUNCTION_NAME: FUN_07a275d0
ENTRY_POINT: 07a275d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_07a275d0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
                    /* try { // try from 07a275d4 to 07b275d7 has its CatchHandler @ 07a27618 */
                    /* try { // try from 07a275d8 to 07b275df has its CatchHandler @ 07a27620 */
                    /* try { // try from 07a275e0 to 07b275e3 has its CatchHandler @ 07a2761c */
                    /* try { // try from 07a275e4 to 07b275e7 has its CatchHandler @ 07a27170 */
                    /* try { // try from 07a275e8 to 07b275eb has its CatchHandler @ 07a2761c */
                    /* catch() { ... } // from try @ 07a274f0 with catch @ 07a275ec
                       try { // try from 07a275ec to 07b27643 has its CatchHandler @ 07a27170 */
  if ((DAT_098951e6 & 1) == 0) {
                    /* catch() { ... } // from try @ 07a274d8 with catch @ 07a275f8 */
                    /* catch() { ... } // from try @ 07a27394 with catch @ 07a275fc */
                    /* catch() { ... } // from try @ 07a27490 with catch @ 07a27600 */
    FUN_04077588(PTR_DAT_092ecfe0);
                    /* catch() { ... } // from try @ 07a273a4 with catch @ 07a27604 */
                    /* catch() { ... } // from try @ 07a273c8 with catch @ 07a27608 */
                    /* catch() { ... } // from try @ 07a2744c with catch @ 07a2760c */
    FUN_04077588(PTR_DAT_092ecfe8);
                    /* catch() { ... } // from try @ 07a27544 with catch @ 07a27614 */
                    /* catch() { ... } // from try @ 07a275d4 with catch @ 07a27618 */
    FUN_04077588(PTR_DAT_092ecfc8);
                    /* catch() { ... } // from try @ 07a275e0 with catch @ 07a2761c
                       catch() { ... } // from try @ 07a275e8 with catch @ 07a2761c */
                    /* catch() { ... } // from try @ 07a275d8 with catch @ 07a27620 */
    DAT_098951e6 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_1 == (long *)0x0) {
LAB_07a27b3c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *param_1;
                    /* try { // try from 07a27644 to 07b27647 has its CatchHandler @ 07a27660 */
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 07a27648 to 07b27663 has its CatchHandler @ 07a27170 */
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 07a27644 with catch @ 07a27660 */
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092ecfc8) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_07a27690;
      }
                    /* try { // try from 07a27664 to 07b2766b has its CatchHandler @ 07a27674 */
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
                    /* try { // try from 07a2766c to 07b27677 has its CatchHandler @ 07a27170 */
    } while (uVar11 != 0);
  }
                    /* catch() { ... } // from try @ 07a27664 with catch @ 07a27674 */
                    /* try { // try from 07a27678 to 07b2781b has its CatchHandler @ 07a27678
                       catch() { ... } // from try @ 07a27678 with catch @ 07a27678
                       catch() { ... } // from try @ 07a27968 with catch @ 07a27678
                       catch() { ... } // from try @ 07a279f8 with catch @ 07a27678
                       catch() { ... } // from try @ 07a27a1c with catch @ 07a27678 */
  puVar8 = (undefined8 *)FUN_040b1e00(param_1,*(long *)PTR_DAT_092ecfc8,4);
LAB_07a27690:
  lVar9 = (*(code *)*puVar8)(param_1,puVar8[1]);
  if (lVar9 == 0) goto LAB_07a27b3c;
  uVar3 = FUN_07a4b988(lVar9,0);
  uVar4 = OVRPlugin__GetBoundaryVisibility(lVar9,0);
  puVar2 = PTR_DAT_092ecfe8;
  if (param_2 == (long *)0x0) goto LAB_07a27b3c;
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092ecfe8) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_07a2771c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092ecfe8,7);
LAB_07a2771c:
  iVar5 = (*(code *)*puVar8)(param_2,puVar8[1]);
  puVar1 = PTR_DAT_092ecfe0;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_092ecfe0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_09895267 == '\0') {
      FUN_04077588(PTR_DAT_092ecfe0);
      DAT_09895267 = '\x01';
    }
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *(long *)puVar1;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
    uStack_58 = *(undefined8 *)(lVar10 + 0x38);
    local_60 = *(undefined8 *)(lVar10 + 0x30);
    local_50 = *(undefined8 *)(lVar10 + 0x40);
    uVar11 = FUN_07a4ba94(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (DAT_09895267 == '\0') {
        FUN_04077588(PTR_DAT_092ecfe0);
        DAT_09895267 = '\x01';
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 07a2781c to 07b2781f has its CatchHandler @ 07a279c8 */
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
                    /* try { // try from 07a2782c to 07b27833 has its CatchHandler @ 07a279d0 */
      uStack_78 = *(undefined8 *)(lVar10 + 0x38);
      local_80 = *(undefined8 *)(lVar10 + 0x30);
      local_70 = *(undefined8 *)(lVar10 + 0x40);
      uVar11 = FUN_07a4ba94(lVar9,&local_80,uVar4,0);
      if ((uVar11 & 1) == 0) {
        return 3;
      }
    }
                    /* try { // try from 07a27850 to 07b278d3 has its CatchHandler @ 07a279d4 */
    return 0;
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_07a27868;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,7);
LAB_07a27868:
  uVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_07a2be08(param_1,uVar6);
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_07a278d4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,8);
LAB_07a278d4:
                    /* try { // try from 07a278d4 to 07b2790b has its CatchHandler @ 07a279d8 */
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_07a4ba94(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
                    /* try { // try from 07a27918 to 07b2794f has its CatchHandler @ 07a279cc */
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    /* try { // try from 07a27960 to 07b27967 has its CatchHandler @ 07a279c4 */
                    /* try { // try from 07a27968 to 07b279f3 has its CatchHandler @ 07a27678 */
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_07a2796c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,8);
LAB_07a2796c:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar7 = FUN_07a4bf8c(lVar9,&local_80,0);
      uVar7 = uVar7 & 1;
      goto LAB_07a279a0;
    }
  }
  uVar7 = 0;
LAB_07a279a0:
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_07a279f0;
      }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a27960 with catch @ 07a279c4
                        */
      uVar11 = uVar11 - 1;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a2781c with catch @ 07a279c8
                        */
      piVar12 = piVar12 + 4;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a27918 with catch @ 07a279cc
                        */
    } while (uVar11 != 0);
  }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a2782c with catch @ 07a279d0
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a27850 with catch @ 07a279d4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a278d4 with catch @ 07a279d8
                        */
  puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,7);
LAB_07a279f0:
                    /* try { // try from 07a279f4 to 07b279f7 has its CatchHandler @ 07a27a10 */
                    /* try { // try from 07a279f8 to 07b27a13 has its CatchHandler @ 07a27678 */
  uVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_07a2beb8(param_1,uVar3);
  uVar13 = uVar7;
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
                    /* catch() { ... } // from try @ 07a279f4 with catch @ 07a27a10 */
                    /* try { // try from 07a27a14 to 07b27a1b has its CatchHandler @ 07a27a24 */
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 07a27a1c to 07b27a27 has its CatchHandler @ 07a27678 */
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a27a14 with catch @ 07a27a24
                        */
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_07a27a5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,9);
LAB_07a27a5c:
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_07a4ba94(lVar9,&local_60,uVar4,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_07a27ae4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,9);
LAB_07a27ae4:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar11 = FUN_07a4c360(lVar9,&local_80,0);
      uVar13 = uVar7 | 2;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar7;
      }
    }
  }
  return uVar13;
}


