/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_edit_message_t_language_get
ENTRY_POINT: 09029d34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09029e84) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_edit_message_t_language_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_09029d68;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_044822ac();
                    /* try { // try from 09029d58 to 09129d5f has its CatchHandler @ 0902a0e4 */
LAB_09029d68:
                    /* try { // try from 09029d68 to 09129d7b has its CatchHandler @ 09029e08 */
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar3 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0)
        goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_edit_message_t;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_09029e18;
      }
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 09029d84 to 09129e03 has its CatchHandler @ 09029e0c */
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_09029d1c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_09029d1c:
      (*(code *)*puVar1)();
      FUN_07442978();
      param_1 = *unaff_x20;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_09029e18:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_09029e4c;
    }
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_session_edit_message_t:
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_09029e4c:
  (*(code *)*puVar1)();
  return;
}


