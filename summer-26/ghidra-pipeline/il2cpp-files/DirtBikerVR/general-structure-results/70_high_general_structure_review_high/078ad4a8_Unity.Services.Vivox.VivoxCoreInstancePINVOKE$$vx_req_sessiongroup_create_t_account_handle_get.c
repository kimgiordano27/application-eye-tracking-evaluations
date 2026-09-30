/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_account_handle_get
ENTRY_POINT: 078ad4a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_account_handle_get
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar7;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  
  thunk_FUN_03afed3c();
                    /* try { // try from 078ad4ac to 079ad4b7 has its CatchHandler @ 078ad78c */
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x26;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x25;
  thunk_FUN_03afed3c();
                    /* try { // try from 078ad4cc to 079ad4e3 has its CatchHandler @ 078ad7bc */
  *(undefined8 *)(unaff_x19 + 0x80) = unaff_x24;
  thunk_FUN_03afed3c();
  puVar7 = (undefined8 *)(unaff_x19 + 0x88);
  *puVar7 = unaff_x23;
  thunk_FUN_03afed3c(puVar7);
                    /* try { // try from 078ad4f0 to 079ad4f3 has its CatchHandler @ 078ad7d4 */
  *(undefined8 *)(unaff_x19 + 0x90) = unaff_x21;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x98) = unaff_x22;
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
                    /* try { // try from 078ad51c to 079ad523 has its CatchHandler @ 078ad768 */
  thunk_FUN_03afed3c();
  puVar1 = PTR_DAT_0848aa88;
  plVar6 = (long *)*puVar7;
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848aa88);
  FUN_05e38d24();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Action<TimeSpan>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_078ad5b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)System_Action<TimeSpan>_TypeInfo,1);
LAB_078ad5b4:
    (*(code *)*puVar7)(plVar6,uVar2,puVar7[1]);
    plVar6 = *(long **)(unaff_x19 + 0x98);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_05e38d24();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Collections_Generic_List<Identity>_TypeInfo)
          {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
            ;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_03ac43c4(plVar6,*(long *)System_Collections_Generic_List<Identity>_TypeInfo,0);

      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
      :
      (*(code *)*puVar7)(plVar6,uVar2,puVar7[1]);
      FUN_078ad680();
      FUN_078ad708();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


