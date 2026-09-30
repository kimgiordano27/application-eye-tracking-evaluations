/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$GetDataType
ENTRY_POINT: 05ba5ca4
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_16;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__GetDataType
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  FUN_03a13dc8(param_5,*param_1);
  puVar2 = PTR_DAT_065c8c40;
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 == 0) goto LAB_05ba5fdc;
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar12 = 0;
    uVar6 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ba5fe8 to 05ca6007 has its CatchHandler @ 05ba615c */
        FUN_02ce7c84();
      }
      lVar9 = *(long *)(lVar11 + 0x20 + uVar12 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_05ef59b8(lVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (((lVar9 == 0) ||
            (lVar9 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar9,0),
            lVar9 == 0)) || (uVar13 = FUN_05f01910(lVar9,0), unaff_x21 == 0)) goto LAB_05ba5fdc;
        lVar9 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_05ba5fdc;
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + 0x20) = uVar13;
          *(int *)(lVar9 + 0x24) = (int)param_3;
          *(undefined4 *)(lVar9 + 0x28) = param_4;
        }
        else {
          FUN_03a14600();
        }
      }
      uVar6 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  if (unaff_x21 == 0) goto LAB_05ba5fdc;
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x21 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar12 = FUN_05ef739c(uVar10,0,0);
  if ((uVar12 & 1) == 0) {
    plVar5 = *(long **)(unaff_x19 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_05ba5fdc;
                    /* try { // try from 05ba5de4 to 05ca5deb has its CatchHandler @ 05ba6124 */
    iVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    iVar8 = *(int *)(unaff_x19 + 0x50);
    if (iVar4 != iVar8) goto LAB_05ba5df8;
  }
  else {
    iVar8 = *(int *)(unaff_x19 + 0x50);
LAB_05ba5df8:
                    /* try { // try from 05ba5e04 to 05ca5e0b has its CatchHandler @ 05ba6118 */
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cbe88);
                    /* try { // try from 05ba5e18 to 05ca5e1f has its CatchHandler @ 05ba6120 */
    FUN_05edac08(uVar10,iVar8,1,0x14,0,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar10;
  }
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ee5d8);
  FUN_038d88a4(lVar11,*(undefined8 *)PTR_DAT_065ee5e0);
  FUN_03a15074();
  puVar3 = PTR_DAT_065ee588;
  puVar2 = PTR_DAT_065cbf50;
                    /* try { // try from 05ba5e70 to 05ca5e9b has its CatchHandler @ 05ba6178 */
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  _uStack0000000000000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while (uVar12 = FUN_0482dcbc(&stack0x00000020,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar7 = *(long *)puVar3;
                    /* try { // try from 05ba5ea8 to 05ca5eaf has its CatchHandler @ 05ba6148 */
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
                    /* try { // try from 05ba5ecc to 05ca5ed3 has its CatchHandler @ 05ba6128 */
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar9 + 0x20) = uStack0000000000000030;
      *(undefined4 *)(lVar9 + 0x24) = uStack0000000000000034;
      *(undefined4 *)(lVar9 + 0x28) = uStack0000000000000038;
      *(undefined4 *)(lVar9 + 0x2c) = 0x3f800000;
    }
    else {
                    /* try { // try from 05ba5eec to 05ca5f0b has its CatchHandler @ 05ba6174 */
      FUN_038d90d4(lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
  FUN_0482dcb8(&stack0x00000020,*(undefined8 *)PTR_DAT_065cbf48);
  lVar7 = *(long *)(unaff_x19 + 0x48);
  lVar9 = FUN_05ef2cf0();
  if (lVar9 != 0) {
                    /* try { // try from 05ba5f28 to 05ca5f33 has its CatchHandler @ 05ba6144 */
    uVar10 = FUN_05efa158(lVar9,0);
    uVar10 = FUN_04db00f0(uVar10,*(undefined8 *)PTR_DAT_0663fc10,0);
                    /* try { // try from 05ba5f40 to 05ca5f5f has its CatchHandler @ 05ba6168 */
    if (lVar7 != 0) {
      FUN_05efa208(lVar7,uVar10,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_05ed85f8(*(long *)(unaff_x19 + 0x48),0,0);
                    /* try { // try from 05ba5f7c to 05ca5f87 has its CatchHandler @ 05ba6140 */
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (FUN_05ed84ac(*(long *)(unaff_x19 + 0x48),0,0), lVar11 != 0)) {
          lVar9 = *(long *)(unaff_x19 + 0x48);
                    /* try { // try from 05ba5f94 to 05ca5fb3 has its CatchHandler @ 05ba6164 */
          uVar10 = FUN_038dab60(lVar11,*(undefined8 *)PTR_DAT_06638208);
          if (lVar9 != 0) {
            FUN_05edb078(lVar9,uVar10,0,0);
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              FUN_05edb618(*(long *)(unaff_x19 + 0x48),0);
                    /* try { // try from 05ba5fd0 to 05ca5fdb has its CatchHandler @ 05ba612c */
              return;
            }
          }
        }
      }
    }
  }
LAB_05ba5fdc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


