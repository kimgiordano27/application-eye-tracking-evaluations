/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_type_set
ENTRY_POINT: 078ad53c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_type_set
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 *unaff_x23;
  
                    /* try { // try from 078ad544 to 079ad54f has its CatchHandler @ 078ad75c */
  FUN_05e38d24(param_2,param_3,**(undefined8 **)(param_1 + 0x3f0),0);
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 078ad568 to 079ad56f has its CatchHandler @ 078ad7c4 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Action<TimeSpan>_TypeInfo) {
                    /* try { // try from 078ad5b0 to 079ad5bb has its CatchHandler @ 078ad77c */
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_078ad5b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 078ad594 to 079ad59b has its CatchHandler @ 078ad790 */
    puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_078ad5b4:
    (*(code *)*puVar1)();
    plVar6 = *(long **)(unaff_x19 + 0x98);
    uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
    FUN_05e38d24();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Collections_Generic_List<Identity>_TypeInfo)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
            ;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_03ac43c4(plVar6,*(long *)System_Collections_Generic_List<Identity>_TypeInfo,0);

      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_set
      :
      (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
      FUN_078ad680();
      FUN_078ad708();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


