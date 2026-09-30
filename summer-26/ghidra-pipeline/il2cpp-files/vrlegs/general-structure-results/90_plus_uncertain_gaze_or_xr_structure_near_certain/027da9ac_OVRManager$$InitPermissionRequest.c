/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 027da9ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027daaf8) */
/* WARNING: Removing unreachable block (ram,0x027daac8) */

void OVRManager__InitPermissionRequest(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  ulong in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uVar3 = thunk_FUN_01a6ca08(*(undefined8 *)(param_1 + 0xd48));
  uVar4 = thunk_FUN_01a6848c(uVar3,*(undefined8 *)*unaff_x24);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *unaff_x24;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 027dab54 to 028dac13 has its CatchHandler @ 027daee0 */
    __cxa_throw(puVar6,&PTR_PTR_03abd138,0);
  }
                    /* try { // try from 027da9c4 to 028da9cb has its CatchHandler @ 027daed0 */
  uVar3 = *unaff_x24;
  __cxa_end_catch();
  if ((in_stack_00000000 & 0x100000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(uVar3);
  }
  if (in_stack_00000008 == 0) {
                    /* try { // try from 027da9dc to 028da9eb has its CatchHandler @ 027daec4 */
    thunk_FUN_01a6ca08(PTR_DAT_03cfccd8);
    in_stack_00000008 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcce0);
                    /* try { // try from 027daa00 to 028daa0b has its CatchHandler @ 027daed4 */
    FUN_0221f418(in_stack_00000008,uVar5);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfcce8);
  FUN_0221fb48(in_stack_00000008,uVar3,uVar5);
                    /* try { // try from 027daa2c to 028daa67 has its CatchHandler @ 027daee8 */
  do {
    while (unaff_w28 = unaff_w28 + -1, -1 < unaff_w28) {
      lVar2 = FUN_02090b14(unaff_x27,unaff_w28,*unaff_x21);
      thunk_FUN_01a4b338();
      *unaff_x22 = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar2 = *unaff_x22;
      thunk_FUN_01a4b338();
      if (lVar2 != 0) {
        in_stack_00000030 = unaff_x27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (&stack0x00000030,unaff_x27);
        plVar7 = (long *)*unaff_x22;
        iStack0000000000000038 = unaff_w28;
        thunk_FUN_01a4b338();
        if ((plVar7 == (long *)0x0) || (*plVar7 != *unaff_x26)) {
          FUN_027dac50();
        }
        else {
          plVar7 = (long *)plVar7[6];
          uVar3 = thunk_FUN_01a89e68(*unaff_x25);
          FUN_027d71d8();
          in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
          in_stack_00000020 = in_stack_00000030;
          uVar5 = thunk_FUN_01a89a98(*unaff_x20,&stack0x00000020);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,uVar5,*(undefined8 *)(*plVar7 + 0x180));
          uVar1 = FUN_027b7b34(0);
          thunk_FUN_01a4b338();
          *(undefined4 *)(unaff_x19 + 0x24) = uVar1;
        }
      }
    }
    unaff_x27 = FUN_02090b68(unaff_x27,*(undefined8 *)PTR_DAT_03cfccc8);
    while (unaff_x27 == 0) {
      do {
        in_stack_00000018 = in_stack_00000018 + 1;
        if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)in_stack_00000018) {
          thunk_FUN_01a4b338();
          *(undefined4 *)(unaff_x19 + 0x20) = 3;
          thunk_FUN_01a4b338();
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
                    /* try { // try from 027daaa8 to 028daabf has its CatchHandler @ 027daed8 */
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x19 + 0x30),0);
          thunk_FUN_01a4b338(0);
          if (in_stack_00000008 != 0) {
                    /* try { // try from 027dab04 to 028dab2b has its CatchHandler @ 027daedc */
            thunk_FUN_01a6ca08(PTR_DAT_03cd8af8);
            uVar3 = thunk_FUN_01a89e68();
            FUN_026b21f8(uVar3,in_stack_00000008,0);
            uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfccf0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 027dab34 to 028dab3f has its CatchHandler @ 027daebc */
            FUN_01ab6b14(uVar3,uVar5);
          }
                    /* try { // try from 027daae0 to 028daae7 has its CatchHandler @ 027daeb8 */
          return;
        }
        if (*(uint *)(in_stack_00000010 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar2 = *(long *)(in_stack_00000010 + in_stack_00000018 * 8 + 0x20);
        thunk_FUN_01a4b338();
      } while (lVar2 == 0);
      unaff_x27 = FUN_02090c70(lVar2,*(undefined8 *)PTR_DAT_03cfccd0);
    }
    unaff_w28 = FUN_02090b4c(unaff_x27,*(undefined8 *)PTR_DAT_03cfccc0);
  } while( true );
}


