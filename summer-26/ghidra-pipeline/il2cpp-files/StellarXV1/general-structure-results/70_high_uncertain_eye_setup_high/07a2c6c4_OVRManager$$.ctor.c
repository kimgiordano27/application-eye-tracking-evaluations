/*
FUNCTION_NAME: OVRManager$$.ctor
ENTRY_POINT: 07a2c6c4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  puVar2 = PTR_DAT_09285bb0;
                    /* try { // try from 07a2c6e0 to 07b2c6eb has its CatchHandler @ 07a2c71c */
  if ((DAT_098951f6 & 1) == 0) {
    FUN_04077588(PTR_DAT_092edca8);
    FUN_04077588(PTR_DAT_092f0160);
                    /* try { // try from 07a2c708 to 07b2c70b has its CatchHandler @ 07a2c73c */
    FUN_04077588(PTR_DAT_09285bb0);
                    /* try { // try from 07a2c70c to 07b2c70f has its CatchHandler @ 07a2c730 */
                    /* try { // try from 07a2c710 to 07b2c713 has its CatchHandler @ 07a2c72c */
    DAT_098951f6 = 1;
  }
                    /* try { // try from 07a2c714 to 07b2c717 has its CatchHandler @ 07a2c728 */
                    /* try { // try from 07a2c718 to 07b2c71b has its CatchHandler @ 07a2c724 */
  uVar9 = *(undefined8 *)(param_1 + 0xd0);
                    /* catch() { ... } // from try @ 07a2c6e0 with catch @ 07a2c71c */
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
                    /* catch() { ... } // from try @ 07a2c6bc with catch @ 07a2c720 */
  local_48 = 0;
                    /* catch() { ... } // from try @ 07a2c718 with catch @ 07a2c724 */
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
                    /* catch() { ... } // from try @ 07a2c714 with catch @ 07a2c728 */
  local_50 = 0;
  uStack_4c = 0;
                    /* catch() { ... } // from try @ 07a2c710 with catch @ 07a2c72c */
  *(undefined1 *)(param_1 + 0x179) = 0;
                    /* catch() { ... } // from try @ 07a2c70c with catch @ 07a2c730 */
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 07a2c630 with catch @ 07a2c734 */
    thunk_FUN_040d65a8();
  }
                    /* catch() { ... } // from try @ 07a2c680 with catch @ 07a2c738 */
                    /* catch() { ... } // from try @ 07a2c708 with catch @ 07a2c73c */
                    /* catch() { ... } // from try @ 07a2c648 with catch @ 07a2c740 */
  uVar5 = FUN_089cc398(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
LAB_07a2c880:
    *(undefined1 *)(param_1 + 0x179) = 1;
    return;
  }
                    /* try { // try from 07a2c74c to 07b2c74f has its CatchHandler @ 07a2c884 */
  FUN_07a2c89c(param_1,*(undefined8 *)(param_1 + 0xd0));
  FUN_07a274bc(&local_60,param_1);
  puVar2 = PTR_DAT_092edca8;
                    /* try { // try from 07a2c764 to 07b2c767 has its CatchHandler @ 07a2c890 */
  plVar10 = *(long **)(param_1 + 0x198);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 07a2c788 to 07b2c793 has its CatchHandler @ 07a2c4c0 */
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092edca8) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_07a2c7c4;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 07a2c79c to 07b2c7a3 has its CatchHandler @ 07a2c888 */
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092edca8,3);
                    /* try { // try from 07a2c7b0 to 07b2c7b3 has its CatchHandler @ 07a2c4c0 */
LAB_07a2c7c4:
                    /* try { // try from 07a2c7c4 to 07b2c7cf has its CatchHandler @ 07a2c874 */
    uStack_2c = CONCAT44(local_48,uStack_4c);
    uStack_38 = uStack_58;
    local_40 = local_60;
    uStack_34 = uStack_54;
    uStack_30 = local_50;
                    /* try { // try from 07a2c7dc to 07b2c7df has its CatchHandler @ 07a2c870 */
    (*(code *)*puVar6)(plVar10,&local_40,puVar6[1]);
    plVar10 = *(long **)(param_1 + 0x198);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_07a2c840;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar2,5);
LAB_07a2c840:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar3 = FUN_07a26e80(param_1,*(undefined8 *)(param_1 + 0xd0));
      uVar4 = FUN_07a275d0(param_1,*(undefined8 *)(param_1 + 0xd0));
      uVar3 = (*(uint *)(param_1 + 400) | uVar3) & (uVar4 ^ 0xffffffff);
      *(uint *)(param_1 + 400) = uVar3;
      if (uVar4 == 0) {
        return;
      }
      if (uVar3 != 0) {
        return;
      }
      goto LAB_07a2c880;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


