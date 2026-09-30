/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetBestPoseFromRaycastDebugger>b__58_0
ENTRY_POINT: 06df5d7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetBestPoseFromRaycastDebugger>b__58_0(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar8;
  long *plVar9;
  long *in_stack_00000078;
  long in_stack_00000080;
  
                    /* catch() { ... } // from try @ 06df5b38 with catch @ 06df5d7c */
                    /* catch() { ... } // from try @ 06df5abc with catch @ 06df5d80 */
                    /* catch() { ... } // from try @ 06df59d8 with catch @ 06df5d84 */
  FUN_03c8f898(PTR_DAT_08e91cc8);
                    /* catch() { ... } // from try @ 06df58bc with catch @ 06df5d88 */
                    /* catch() { ... } // from try @ 06df5a94 with catch @ 06df5d8c */
                    /* catch() { ... } // from try @ 06df5a54 with catch @ 06df5d90 */
  FUN_03c8f898(PTR_DAT_08e92088);
                    /* catch() { ... } // from try @ 06df5cd8 with catch @ 06df5d94 */
                    /* catch() { ... } // from try @ 06df5ae4 with catch @ 06df5d98 */
                    /* catch() { ... } // from try @ 06df5a3c with catch @ 06df5d9c */
  FUN_03c8f898(PTR_DAT_08e920e0);
                    /* catch() { ... } // from try @ 06df5cd0 with catch @ 06df5da0 */
                    /* catch() { ... } // from try @ 06df5a74 with catch @ 06df5da4 */
  *(undefined1 *)(unaff_x23 + 0xe59) = 1;
                    /* catch() { ... } // from try @ 06df5cc8 with catch @ 06df5da8 */
                    /* catch() { ... } // from try @ 06df59b4 with catch @ 06df5dac */
  in_stack_00000080 = 0;
                    /* catch() { ... } // from try @ 06df5a18 with catch @ 06df5db0 */
  in_stack_00000078 = (long *)0x0;
                    /* catch() { ... } // from try @ 06df5cc0 with catch @ 06df5db4 */
                    /* catch() { ... } // from try @ 06df59f0 with catch @ 06df5db8 */
  if (*(char *)((long)unaff_x19 + 0x32) != '\0') {
    return;
  }
  uVar2 = FUN_06e137e8();
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* try { // try from 06df5dd4 to 06ef5dd7 has its CatchHandler @ 06df611c */
  if (*(char *)((long)unaff_x19 + 0x31) == '\0') {
                    /* try { // try from 06df5dd8 to 06ef5e73 has its CatchHandler @ 06df5290 */
    (**(code **)(*unaff_x19 + 0x338))();
  }
  (**(code **)(*unaff_x19 + 0x318))();
  (**(code **)(*unaff_x19 + 0x328))();
  uVar2 = FUN_06f74e14(unaff_x19[9],0);
  if ((uVar2 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar3 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    }
                    /* try { // try from 06df5e74 to 06ef5e7b has its CatchHandler @ 06df61e8 */
    uVar2 = FUN_06e136ac(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* try { // try from 06df5e88 to 06ef5e93 has its CatchHandler @ 06df61e4 */
      iVar1 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if ((0 < iVar1) && (unaff_x19[0x16] != 0)) {
        lVar8 = unaff_x19[0x19];
        uVar4 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
                    /* try { // try from 06df5ebc to 06ef5f2b has its CatchHandler @ 06df61ec */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30(uVar4,uVar4);
        }
        FUN_05212f00(lVar8,uVar4,*(undefined8 *)PTR_DAT_08e920f0);
        lVar8 = unaff_x19[0x19];
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df5dd4 with catch @ 06df611c */
          FUN_03c8fb30();
        }
        if (0 < *(int *)(lVar8 + 0x18)) {
          lVar6 = unaff_x19[0x16];
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),lVar8,*(undefined8 *)(lVar6 + 0x28));
          lVar8 = unaff_x19[0x19];
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          iVar1 = *(int *)(lVar8 + 0x18);
          *(undefined4 *)(lVar8 + 0x18) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (0 < iVar1) {
                    /* try { // try from 06df5f2c to 06ef603f has its CatchHandler @ 06df5290 */
            FUN_071245a8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
          }
        }
      }
    }
    if ((((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) && (unaff_x19[0x15] != 0)) &&
       (plVar9 = (long *)unaff_x19[0x17], plVar9 != (long *)0x0)) {
      lVar8 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e920e8) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06df5fa8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e920e8,1);
LAB_06df5fa8:
      (*(code *)*puVar5)(plVar9);
    }
    if (unaff_x19[0x18] != 0) {
      uVar2 = FUN_06e136ac(plVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (unaff_x21 != 0) {
          if ((long *)unaff_x19[0x18] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
                    /* try { // try from 06df6098 to 06ef60ab has its CatchHandler @ 06df6260 */
          (**(code **)(*(long *)unaff_x19[0x18] + 0x388))();
        }
      }
      else {
        in_stack_00000080 = 0;
        in_stack_00000078 = plVar3;
        thunk_FUN_03d233cc(&stack0x00000078,plVar3);
        in_stack_00000080 = unaff_x21;
        thunk_FUN_03d233cc(&stack0x00000080);
        if (*(int *)(*(long *)PTR_DAT_08e91cc8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
                    /* try { // try from 06df6040 to 06ef6047 has its CatchHandler @ 06df6260 */
                    /* try { // try from 06df6048 to 06ef605f has its CatchHandler @ 06df5290 */
        lVar8 = FUN_06dedc44();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar3 = (long *)unaff_x19[0x18];
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06df57a4 with catch @ 06df6110
                       try { // try from 06df6110 to 06ef6187 has its CatchHandler @ 06df5290 */
          FUN_03c8fb30();
        }
                    /* try { // try from 06df6060 to 06ef6063 has its CatchHandler @ 06df60ec */
                    /* try { // try from 06df6064 to 06ef6097 has its CatchHandler @ 06df5290 */
        (**(code **)(*plVar3 + 0x388))
                  (plVar3,lVar8,0,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar3 + 0x390));
      }
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 06df60ac to 06ef60af has its CatchHandler @ 06df61e0 */
                    /* try { // try from 06df60b0 to 06ef60b7 has its CatchHandler @ 06df61f0 */
                    /* try { // try from 06df60b8 to 06ef60bf has its CatchHandler @ 06df6168 */
    plVar3 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
                    /* try { // try from 06df60c0 to 06ef60c3 has its CatchHandler @ 06df6158 */
    if (plVar3 == (long *)0x0) {
      return;
    }
                    /* try { // try from 06df60c4 to 06ef60c7 has its CatchHandler @ 06df6150 */
                    /* try { // try from 06df60c8 to 06ef60cb has its CatchHandler @ 06df613c */
                    /* try { // try from 06df60cc to 06ef60d3 has its CatchHandler @ 06df6130 */
    uVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
                    /* try { // try from 06df60d4 to 06ef60d7 has its CatchHandler @ 06df6128 */
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
                    /* try { // try from 06df60d8 to 06ef60e3 has its CatchHandler @ 06df5290 */
                    /* try { // try from 06df60e4 to 06ef610f has its CatchHandler @ 06df6260 */
  (**(code **)(*unaff_x19 + 0x358))();
                    /* catch() { ... } // from try @ 06df6060 with catch @ 06df60ec */
  return;
}


