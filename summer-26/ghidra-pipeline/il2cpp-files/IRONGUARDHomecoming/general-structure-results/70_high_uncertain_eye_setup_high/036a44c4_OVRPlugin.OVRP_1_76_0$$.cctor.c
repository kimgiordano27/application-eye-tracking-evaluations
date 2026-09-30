/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$.cctor
ENTRY_POINT: 036a44c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_76_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036a436c with catch @ 036a44c4
                        */
    if ((bool)in_ZR) {
                    /* try { // try from 036a44e8 to 037a44eb has its CatchHandler @ 036a4510 */
                    /* try { // try from 036a44ec to 037a4513 has its CatchHandler @ 036a42ec */
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_036a44f0;
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036a43b0 with catch @ 036a44c8
                        */
    in_x9 = in_x9 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036a43c4 with catch @ 036a44cc
                        */
    in_x10 = in_x10 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036a449c with catch @ 036a44d0
                        */
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x21,param_3,0);
LAB_036a44f0:
        puVar3 = (uint *)(*(code *)*puVar2)(unaff_x21,unaff_x20 & 0xffffffff,puVar2[1]);
        uVar1 = *puVar3;
        if (-1 < (int)uVar1) {
          lVar4 = *(long *)(unaff_x19 + 0x18);
                    /* catch() { ... } // from try @ 036a44e8 with catch @ 036a4510 */
                    /* try { // try from 036a4514 to 037a451f has its CatchHandler @ 036a4534 */
          if ((lVar4 == 0) || (lVar5 = *(long *)(unaff_x19 + 0x10), lVar5 == 0)) goto LAB_036a4588;
                    /* try { // try from 036a4520 to 037a452b has its CatchHandler @ 036a42ec */
                    /* try { // try from 036a452c to 037a4533 has its CatchHandler @ 036a4534 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036a4514 with catch @ 036a4534
                       catch(type#2 @ 00000000) { ... } // from try @ 036a452c with catch @ 036a4534
                        */
          if (((uint)*(ulong *)(lVar4 + 0x18) <= uVar1) ||
             ((*(uint *)(lVar5 + 0x18) <= unaff_x20 ||
              ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x20)))) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          FUN_03667194(lVar4 + (ulong)uVar1 * unaff_x23 + 0x20,lVar5 + unaff_x20 * unaff_x23 + 0x20,
                       lVar4 + unaff_x20 * unaff_x23 + 0x20,0);
        }
        do {
          unaff_x20 = unaff_x20 + 1;
          if (unaff_x20 == 0x18) {
            *(undefined4 *)(unaff_x19 + 0x44) = 0;
            return;
          }
        } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
        unaff_x21 = *(long **)(unaff_x19 + 0x38);
        if (unaff_x21 == (long *)0x0) {
LAB_036a4588:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_1 = *unaff_x21;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


