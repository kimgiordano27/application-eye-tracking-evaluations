/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 0368d854
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__SetClientColorDesc(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  while( true ) {
    uStack0000000000000008 = unaff_x19[1];
    uStack0000000000000000 = *unaff_x19;
    uStack0000000000000010 = param_1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0368d640 with catch @ 0368d86c
                        */
    uVar4 = FUN_03666924();
    if ((uVar4 & 1) == 0) break;
    do {
      do {
        unaff_w22 = unaff_w22 + 1;
        lVar5 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0368d75c;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0368d75c:
        unaff_w23 = (*(code *)*puVar1)();
        if (unaff_w23 <= unaff_w22) goto LAB_0368d880;
        lVar5 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0368d7c0;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0368d7c0:
        plVar2 = (long *)(*(code *)*puVar1)();
      } while (plVar2 == (long *)0x0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      lVar5 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0368d838;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x28,0);
LAB_0368d838:
      uVar4 = (*(code *)*puVar1)(plVar2,uVar3,&stack0x00000018,puVar1[1]);
    } while ((uVar4 & 1) == 0);
    param_1 = unaff_x19[2];
  }
LAB_0368d880:
                    /* try { // try from 0368d884 to 0378d8b7 has its CatchHandler @ 0368d8e0 */
  return unaff_w23 <= unaff_w22;
}


