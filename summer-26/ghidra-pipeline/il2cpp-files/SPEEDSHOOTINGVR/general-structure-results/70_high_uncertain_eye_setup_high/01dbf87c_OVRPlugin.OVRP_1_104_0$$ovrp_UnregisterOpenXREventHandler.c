/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_UnregisterOpenXREventHandler
ENTRY_POINT: 01dbf87c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_UnregisterOpenXREventHandler(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  bool bVar8;
  
  do {
    uVar2 = FUN_01db86c8();
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 01dbf890 to 01ebf973 has its CatchHandler @ 01dbf890
                       catch() { ... } // from try @ 01dbf890 with catch @ 01dbf890
                       catch() { ... } // from try @ 01dbfec4 with catch @ 01dbf890
                       catch() { ... } // from try @ 01dbff18 with catch @ 01dbf890
                       catch() { ... } // from try @ 01dbff5c with catch @ 01dbf890
                       catch() { ... } // from try @ 01dc002c with catch @ 01dbf890
                       catch() { ... } // from try @ 01dc00e8 with catch @ 01dbf890
                       catch() { ... } // from try @ 01dc017c with catch @ 01dbf890 */
      uVar2 = FUN_01db86c8(unaff_x23,0);
      if ((uVar2 & 1) == 0) {
        FUN_01dbbf60(unaff_x23);
        uVar2 = FUN_01db86c8();
        if ((uVar2 & 1) != 0) {
          FUN_01db751c(unaff_x23);
        }
        bVar8 = false;
        goto LAB_01dbf8ac;
      }
      FUN_01dbfacc();
    }
    do {
      bVar8 = true;
LAB_01dbf8ac:
      unaff_w22 = unaff_w22 + 1;
      if (unaff_w22 == unaff_w21) {
        return;
      }
      lVar6 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01dbf85c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbf85c:
      unaff_x23 = (*(code *)*puVar1)();
      if (unaff_x23 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar3 = thunk_FUN_010400dc();
        uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a1f0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0234d418);
        FUN_01c5e198(uVar3,uVar4,uVar5,0);
        uVar4 = thunk_FUN_010303a8(PTR_DAT_0235aa30);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar3,uVar4);
      }
    } while (bVar8);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  } while( true );
}


