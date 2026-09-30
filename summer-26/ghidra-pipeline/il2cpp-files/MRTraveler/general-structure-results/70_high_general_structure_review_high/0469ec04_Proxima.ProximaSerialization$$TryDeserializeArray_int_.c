/*
FUNCTION_NAME: Proxima.ProximaSerialization$$TryDeserializeArray<int>
ENTRY_POINT: 0469ec04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Proxima_ProximaSerialization__TryDeserializeArray<int>(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *__src;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  void *unaff_x21;
  undefined8 uVar8;
  size_t unaff_x22;
  long unaff_x26;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 0469ebac with catch @ 0469ec04
                       catch() { ... } // from try @ 0469ebf4 with catch @ 0469ec04 */
                    /* try { // try from 0469ec08 to 0479ec0b has its CatchHandler @ 0469ec14 */
  plVar1 = (long *)FUN_0848f6e0(param_1,0);
                    /* try { // try from 0469ec0c to 0479ec17 has its CatchHandler @ 0469e9c8 */
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* catch() { ... } // from try @ 0469ec08 with catch @ 0469ec14 */
  lVar5 = *plVar1;
                    /* try { // try from 0469ec18 to 0479ec63 has its CatchHandler @ 0469ec18
                       catch() { ... } // from try @ 0469ec18 with catch @ 0469ec18
                       catch() { ... } // from try @ 0469edc4 with catch @ 0469ec18
                       catch() { ... } // from try @ 0469ee24 with catch @ 0469ec18
                       catch() { ... } // from try @ 0469ee6c with catch @ 0469ec18 */
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e80ff0) {
                    /* try { // try from 0469ec64 to 0479ec6b has its CatchHandler @ 0469edf4 */
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0469ec68;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar1,*(long *)PTR_DAT_08e80ff0,0);
LAB_0469ec68:
                    /* try { // try from 0469ec70 to 0479ec7f has its CatchHandler @ 0469ede8 */
  uVar3 = (*(code *)*puVar2)(plVar1);
  lVar5 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 0469ec8c to 0479ec9b has its CatchHandler @ 0469edf0 */
    lVar5 = FUN_03cf1244(lVar5);
  }
  lVar5 = thunk_FUN_03cf5138(uVar3,lVar5);
  if (lVar5 == 0) {
    FUN_036f8b10(uVar3);
    uVar3 = thunk_FUN_03d12a58(uVar3,0);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    thunk_FUN_03ce5214(PTR_DAT_08e695f0);
    FUN_036f8b20();
    uVar8 = FUN_0710fcf0(uVar8,0);
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e80ff8);
    uVar3 = FUN_06f75240(uVar4,uVar3,uVar8,0);
    thunk_FUN_03ce5214(PTR_DAT_08e80fd0);
    uVar8 = thunk_FUN_03cf5234();
    FUN_0848d3d4(uVar8,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar8);
  }
                    /* try { // try from 0469eca8 to 0479ecaf has its CatchHandler @ 0469ede4 */
  lVar5 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 0469ecb4 to 0479ecbf has its CatchHandler @ 0469ede0 */
    lVar5 = FUN_03cf1244(lVar5);
  }
  __src = (void *)FUN_03c8fa20(uVar3,lVar5);
  memcpy(unaff_x21,__src,unaff_x22);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


