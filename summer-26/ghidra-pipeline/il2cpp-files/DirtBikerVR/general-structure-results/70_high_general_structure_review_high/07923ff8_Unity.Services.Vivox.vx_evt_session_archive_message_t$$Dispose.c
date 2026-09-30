/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_message_t$$Dispose
ENTRY_POINT: 07923ff8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_vx_evt_session_archive_message_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03a8a718();
  FUN_03a8a718(EasyRoads3Dv3_ERRoundabouts___TypeInfo);
  FUN_03a8a718(EasyRoads3Dv3_ERSideObjectInstance___TypeInfo);
  FUN_03a8a718(EasyRoads3Dv3_ERSideWalkInstanceScript___TypeInfo);
                    /* try { // try from 07924028 to 07a2404f has its CatchHandler @ 07924128 */
  FUN_03a8a718(PTR_DAT_084867c8);
  FUN_03a8a718(PTR_DAT_084890a0);
  FUN_03a8a718(PTR_DAT_08487bb0);
  *(undefined1 *)(unaff_x20 + 0xcd2) = 1;
  puVar2 = PTR_DAT_08487bb0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 0792405c to 07a2406b has its CatchHandler @ 0792411c */
                    /* try { // try from 0792406c to 07a24103 has its CatchHandler @ 07923ac0 */
  uVar7 = FUN_065cddf0(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08487bb0,
                       *(undefined8 *)(unaff_x19 + 0x18),0);
  puVar5 = EasyRoads3Dv3_ERRoundabouts___TypeInfo;
  puVar4 = EasyRoads3Dv3_ERModularRoad___TypeInfo;
  puVar3 = PTR_DAT_084890a0;
  puVar1 = PTR_DAT_084867c8;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)EasyRoads3Dv3_ERSideWalkInstanceScript___TypeInfo);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar8 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar5), lVar6 = in_stack_00000030,
          (uVar8 & 1) != 0) {
      lVar9 = FUN_03a8a804(*(undefined8 *)puVar1,5);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
                    /* try { // try from 07924104 to 07a24107 has its CatchHandler @ 07924124 */
      *(undefined8 *)(lVar9 + 0x20) = uVar7;
                    /* try { // try from 07924108 to 07a2410b has its CatchHandler @ 07924120 */
                    /* try { // try from 0792410c to 07a24147 has its CatchHandler @ 07923ac0 */
      thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),uVar7);
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0792405c with catch @ 0792411c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07924108 with catch @ 07924120
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07924104 with catch @ 07924124
                        */
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)puVar3;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07924028 with catch @ 07924128
                        */
      thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07923fc4 with catch @ 0792412c
                        */
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
      thunk_FUN_03afed3c();
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar2;
      thunk_FUN_03afed3c();
      if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar6 + 0x18);
      thunk_FUN_03afed3c();
      uVar7 = FUN_065ce45c(lVar9,0);
    }
    FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar4);
  }
  return uVar7;
}


