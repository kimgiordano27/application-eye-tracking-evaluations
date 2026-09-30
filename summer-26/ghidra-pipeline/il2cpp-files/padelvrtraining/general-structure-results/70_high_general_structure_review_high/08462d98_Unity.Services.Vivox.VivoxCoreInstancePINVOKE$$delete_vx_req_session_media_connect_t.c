/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_session_media_connect_t
ENTRY_POINT: 08462d98
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08462e2c) */

undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_media_connect_t(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x22;
  
  if (!in_ZR) {
                    /* try { // try from 08462dc4 to 08562dcb has its CatchHandler @ 08462dec */
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
                    /* try { // try from 08462dcc to 08562dcf has its CatchHandler @ 08462de8 */
                    /* try { // try from 08462dd0 to 08562e0f has its CatchHandler @ 08462a24 */
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 08462cf0 with catch @ 08462dd4 */
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 08462b80 with catch @ 08462de4 */
                    /* catch() { ... } // from try @ 08462dcc with catch @ 08462de8 */
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
                    /* try { // try from 08462e10 to 08562e13 has its CatchHandler @ 08462e34 */
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_base__set
            ;
          }
                    /* catch() { ... } // from try @ 08462dc4 with catch @ 08462dec */
          uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 08462b68 with catch @ 08462df0 */
          piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 08462c90 with catch @ 08462df4 */
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_base__set:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08462d64;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_08462d64:
    (*(code *)*puVar1)();
  }
  if (lVar6 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d540(lVar6);
}


