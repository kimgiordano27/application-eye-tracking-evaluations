/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 048f4954
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined4 in_stack_00000008;
  
  puVar3 = (undefined8 *)FUN_02eea86c();
  (*(code *)*puVar3)();
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
                    /* try { // try from 048f49c0 to 049f4a03 has its CatchHandler @ 048f4a68 */
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x15) * 0x10 + 0x138);
        goto LAB_048f49cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_048f49cc:
  (*(code *)*puVar3)();
  uVar6 = FUN_04cfc11c(unaff_x22 + 0x58);
  if ((uVar6 & 1) != 0) {
    FUN_04cfc3bc(unaff_x22 + 0x58,in_stack_00000008,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe0));
    if ((unaff_x19 == 0) ||
       (plVar4 = (long *)FUN_068c3600(), puVar1 = PTR_DAT_06d3b070, plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 048f4a34 to 049f4a37 has its CatchHandler @ 048f4a64 */
    lVar5 = *plVar4;
                    /* try { // try from 048f4a38 to 049f4a4b has its CatchHandler @ 048f4a6c */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 048f4a4c to 049f4a5b has its CatchHandler @ 048f4808 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 048f4a5c to 049f4a5f has its CatchHandler @ 048f4a60 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d3b070) {
                    /* try { // try from 048f4a84 to 049f4a9b has its CatchHandler @ 048f4ad0 */
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x16) * 0x10 + 0x138);
          goto LAB_048f4a8c;
        }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 048f4a5c with catch @ 048f4a60
                       try { // try from 048f4a60 to 049f4a83 has its CatchHandler @ 048f4808 */
        uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 048f4a34 with catch @ 048f4a64
                        */
        piVar7 = piVar7 + 4;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 048f49c0 with catch @ 048f4a68
                        */
      } while (uVar6 != 0);
    }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 048f4a38 with catch @ 048f4a6c
                        */
    puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d3b070,0x16);
LAB_048f4a8c:
    iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar5 = *plVar4;
                    /* try { // try from 048f4a9c to 049f4abf has its CatchHandler @ 048f4808 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 048f4ad4 with catch @ 048f4ae0
                        */
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
          goto LAB_048f4aec;
        }
                    /* try { // try from 048f4ac0 to 049f4acf has its CatchHandler @ 048f4ad0 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* catch() { ... } // from try @ 048f4a84 with catch @ 048f4ad0
                       catch() { ... } // from try @ 048f4ac0 with catch @ 048f4ad0 */
                    /* try { // try from 048f4ad4 to 049f4ad7 has its CatchHandler @ 048f4ae0 */
    puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar1,0x17);
                    /* try { // try from 048f4ad8 to 049f4ae3 has its CatchHandler @ 048f4808 */
LAB_048f4aec:
    (*(code *)*puVar3)(plVar4,iVar2 + -1,puVar3[1]);
  }
  return;
}


