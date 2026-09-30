/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
ENTRY_POINT: 0789e638
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_sessiongroup_handle_get
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *in_stack_00000008;
  
  if (param_2 != 1) {
                    /* try { // try from 0789e660 to 0799e663 has its CatchHandler @ 0789ed14 */
    FUN_0350b2a4();
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)*in_stack_00000008;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0789e59c to 0799e59f has its CatchHandler @ 0789ece0 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0789e5dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)PTR_DAT_08488550,0);
LAB_0789e5dc:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8(lVar6);
}


