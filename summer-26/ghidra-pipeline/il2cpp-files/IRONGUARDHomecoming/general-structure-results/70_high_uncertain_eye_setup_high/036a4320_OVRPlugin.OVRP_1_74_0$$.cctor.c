/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$.cctor
ENTRY_POINT: 036a4320
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  long lVar3;
  long in_x10;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_036a4358;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_036a4358:
      (*(code *)*puVar1)(unaff_x22,unaff_x21 & 0xffffffff,puVar1[1]);
                    /* try { // try from 036a436c to 037a4377 has its CatchHandler @ 036a44c4 */
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) {
LAB_036a4428:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 036a4388 to 037a438f has its CatchHandler @ 036a44c0 */
      uVar5 = *unaff_x24;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_036a442c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar2 = lVar2 + unaff_x21 * unaff_x25;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(unaff_x24 + 1);
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (((lVar2 == 0) || (unaff_x19 == 0)) || (lVar3 = *(long *)(unaff_x19 + 0x38), lVar3 == 0))
      goto LAB_036a4428;
      if ((*(uint *)(lVar3 + 0x18) <= unaff_x21) || (*(uint *)(lVar2 + 0x18) <= unaff_x21))
      goto LAB_036a442c;
      lVar3 = lVar3 + unaff_x21 * 0x10;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      lVar2 = lVar2 + unaff_x21 * unaff_x25;
      unaff_x21 = unaff_x21 + 1;
      *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar2 + 0x2c) = uVar5;
      if (unaff_x21 == 0x18) {
        return;
      }
      unaff_x22 = *(long **)(unaff_x20 + 0x38);
      if (unaff_x22 == (long *)0x0) goto LAB_036a4428;
      param_1 = *unaff_x22;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


