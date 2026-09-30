/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$TryCalculateSurfacePose
ENTRY_POINT: 06e10218
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__TryCalculateSurfacePose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_03c8f898(PTR_DAT_08e92d28);
  FUN_03c8f898(PTR_DAT_08e92d30);
                    /* try { // try from 06e10234 to 06f10237 has its CatchHandler @ 06e10868 */
  FUN_03c8f898(PTR_DAT_08e92d20);
                    /* try { // try from 06e10244 to 06f10247 has its CatchHandler @ 06e10890 */
  FUN_03c8f898(PTR_DAT_08e92d38);
  FUN_03c8f898(PTR_DAT_08e92d40);
  FUN_03c8f898(PTR_DAT_08e92d48);
  FUN_03c8f898(PTR_DAT_08e92ce0);
                    /* try { // try from 06e1026c to 06f1028b has its CatchHandler @ 06e10864 */
  FUN_03c8f898(PTR_DAT_08e76e18);
  FUN_03c8f898(PTR_DAT_08e92d50);
  FUN_03c8f898(PTR_DAT_08e69770);
                    /* try { // try from 06e10290 to 06f1029b has its CatchHandler @ 06e10860 */
  FUN_03c8f898(PTR_DAT_08e90898);
  FUN_03c8f898(PTR_DAT_08e92d58);
                    /* try { // try from 06e102a8 to 06f102c7 has its CatchHandler @ 06e108c4 */
  FUN_03c8f898(PTR_DAT_08e92d60);
  *(undefined1 *)(unaff_x24 + 0xf76) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  lVar4 = thunk_FUN_03cf5234(*unaff_x23);
                    /* try { // try from 06e102d4 to 06f102f7 has its CatchHandler @ 06e108b8 */
  FUN_06a4d5c4(lVar4,*unaff_x19);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = FUN_06e11c68();
  puVar2 = PTR_DAT_08e92d30;
  puVar1 = PTR_DAT_08e92cc0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05213710(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_08e92d50);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar6 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)PTR_DAT_08e92d40);
    plVar3 = in_stack_00000030;
    if ((uVar6 & 1) == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e92d38);
      return lVar4;
    }
                    /* try { // try from 06e10340 to 06f10363 has its CatchHandler @ 06e10888 */
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *in_stack_00000030;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e92ce0) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06e1039c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(in_stack_00000030,*(long *)PTR_DAT_08e92ce0,0);
LAB_06e1039c:
                    /* try { // try from 06e103a4 to 06f103cb has its CatchHandler @ 06e108a8 */
    lVar5 = (*(code *)*puVar7)(plVar3,puVar7[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar6 = 0;
      uVar10 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar12 = *(undefined8 *)(lVar5 + 0x20 + uVar6 * 8);
                    /* try { // try from 06e103d8 to 06f103df has its CatchHandler @ 06e1088c */
        uVar10 = FUN_06f74e14(uVar12,0);
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 06e103e4 to 06f1044b has its CatchHandler @ 06e108c8 */
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar10 = FUN_06a4e574(lVar4,uVar12,*(undefined8 *)puVar1);
          if ((uVar10 & 1) == 0) {
            FUN_06a4e36c(lVar4,uVar12,plVar3,*(undefined8 *)puVar2);
          }
          else {
            lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
            thunk_FUN_03d233cc();
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar9 = (**(code **)(*unaff_x21 + 0x308))();
            if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
                    /* try { // try from 06e10464 to 06f1046b has its CatchHandler @ 06e10878 */
            *(undefined8 *)(lVar8 + 0x28) = uVar9;
            thunk_FUN_03d233cc();
                    /* try { // try from 06e10470 to 06f104d7 has its CatchHandler @ 06e108b0 */
            if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_08e92d60;
            thunk_FUN_03d233cc();
            if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            *(undefined8 *)(lVar8 + 0x38) = uVar12;
            thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x38),uVar12);
            if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_08e92d58;
            thunk_FUN_03d233cc();
                    /* try { // try from 06e104d8 to 06f10807 has its CatchHandler @ 06e0fcbc */
            uVar12 = FUN_06f74f38(lVar8,0);
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30(uVar12,uVar12);
            }
            FUN_06f84868();
          }
        }
        uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  } while( true );
}


