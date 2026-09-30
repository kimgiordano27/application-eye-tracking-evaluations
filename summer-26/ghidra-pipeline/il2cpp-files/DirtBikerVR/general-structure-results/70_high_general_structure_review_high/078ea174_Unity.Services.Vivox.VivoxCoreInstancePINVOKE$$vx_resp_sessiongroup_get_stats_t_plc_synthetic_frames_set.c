/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_plc_synthetic_frames_set
ENTRY_POINT: 078ea174
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_plc_synthetic_frames_set
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb0a) = 1;
  lVar2 = FUN_078e9dec();
  puVar1 = UnityEngine_UIElements_TextValueField<float>_TypeInfo;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = *(undefined8 *)UnityEngine_UIElements_TextValueField<float>_TypeInfo;
  lVar3 = thunk_FUN_03ac73c0(lVar2,uVar8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(lVar2,uVar8);
  }
  lVar3 = *(long *)puVar1;
                    /* try { // try from 078ea1b8 to 079ea1bf has its CatchHandler @ 078ea2e4 */
  plVar4 = (long *)thunk_FUN_03ac73c0(lVar2,lVar3);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(lVar2,lVar3);
  }
  lVar2 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 078ea1d8 to 079ea1db has its CatchHandler @ 078ea2f8 */
                    /* try { // try from 078ea1e0 to 079ea1e7 has its CatchHandler @ 078ea2d8 */
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078ea210;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 078ea1ec to 079ea1f7 has its CatchHandler @ 078ea2d4 */
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,lVar3,0);
LAB_078ea210:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_min_latency_set();
  return;
}


