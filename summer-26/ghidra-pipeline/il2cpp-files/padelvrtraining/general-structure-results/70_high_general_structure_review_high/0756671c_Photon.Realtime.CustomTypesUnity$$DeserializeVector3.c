/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 0756671c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector3(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_08a0ff80();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar6 = FUN_07575268(0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_0757541c(0);
  bVar3 = FUN_0759eea0(0);
  puVar2 = PTR_DAT_09225500;
                    /* try { // try from 07566768 to 0766676f has its CatchHandler @ 07566854 */
  lVar10 = *(long *)PTR_DAT_09225500;
  if (*(int *)(lVar10 + 0xe0) == 0) {
                    /* try { // try from 07566778 to 0766677f has its CatchHandler @ 07566850 */
    thunk_FUN_03db619c(lVar10);
    lVar10 = *(long *)puVar2;
  }
                    /* try { // try from 07566784 to 07666797 has its CatchHandler @ 0756684c */
  plVar7 = *(long **)(*(byte **)(lVar10 + 0xb8) + 0x38);
  **(byte **)(lVar10 + 0xb8) = bVar3 & 1;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar10);
                    /* try { // try from 075667a0 to 076667af has its CatchHandler @ 07566848 */
      plVar7 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_07566ad0;
    }
    iVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    if (unaff_x19 == (long *)0x0) goto LAB_07566ad0;
    lVar10 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 075667dc to 076667df has its CatchHandler @ 07566840 */
                    /* try { // try from 075667e0 to 076667f3 has its CatchHandler @ 07566844 */
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09225480) {
                    /* try { // try from 0756686c to 0766686f has its CatchHandler @ 07566890 */
                    /* try { // try from 07566870 to 07666897 has its CatchHandler @ 0756658c */
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_07566874;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 075667f4 to 0766686b has its CatchHandler @ 0756658c */
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370();
LAB_07566874:
    iVar5 = (*(code *)*puVar8)();
    if (iVar4 != iVar5) {
      lVar10 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 0756686c with catch @ 07566890 */
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c();
                    /* try { // try from 07566898 to 0766689f has its CatchHandler @ 075668b4 */
        lVar10 = *(long *)puVar2;
      }
                    /* try { // try from 075668a0 to 076668ab has its CatchHandler @ 0756658c */
      plVar7 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_07566ad0;
                    /* try { // try from 075668ac to 076668b3 has its CatchHandler @ 075668b4 */
      (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07566898 with catch @ 075668b4
                       catch(type#2 @ 00000000) { ... } // from try @ 075668ac with catch @ 075668b4
                        */
      puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *puVar8 = 0;
      thunk_FUN_03d1023c(puVar8,0);
    }
  }
  puVar1 = PTR_DAT_09225480;
  if (unaff_x19 != (long *)0x0) {
    lVar10 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09225480) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_07566924;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03d8f370();
LAB_07566924:
    iVar4 = (*(code *)*puVar8)();
    if (iVar4 != 0) {
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_07566a40;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_03d8f370();
LAB_07566a40:
      in_stack_00000018 = (*(code *)*puVar8)();
      in_stack_00000008 = *(undefined8 *)PTR_DAT_09228940;
      in_stack_00000010 = 0xffffffffffffffff;
      uVar9 = FUN_071af138(&stack0x00000008,0);
      uVar9 = FUN_06fc5244(*(undefined8 *)PTR_DAT_09228958,uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_091a1120);
      }
      FUN_08a106ac(uVar9,0);
      return;
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar10 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x38) == 0) {
      uVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09228948);
      FUN_074e1f80();
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar10 = *(long *)puVar2;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x38);
      *puVar8 = uVar9;
      thunk_FUN_03d1023c(puVar8,uVar9);
      lVar10 = *(long *)puVar2;
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar10 = *(long *)puVar2;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07566a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x188))();
      return;
    }
  }
LAB_07566ad0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


