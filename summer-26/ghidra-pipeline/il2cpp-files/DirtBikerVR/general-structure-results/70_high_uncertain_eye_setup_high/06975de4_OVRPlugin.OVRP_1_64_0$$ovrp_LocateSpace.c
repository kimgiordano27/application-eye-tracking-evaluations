/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$ovrp_LocateSpace
ENTRY_POINT: 06975de4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_64_0__ovrp_LocateSpace(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 *puVar4;
  undefined8 *unaff_x26;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    uStack0000000000000038 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000000;
    uStack0000000000000040 = in_stack_00000010;
    uStack0000000000000054 = CONCAT44(in_stack_00000028,uStack0000000000000024);
    uVar9 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    uStack0000000000000048 = uStack0000000000000018;
    uStack000000000000004c = uStack000000000000001c;
    uStack0000000000000050 = uStack0000000000000020;
    puVar4 = unaff_x26;
    do {
      do {
        unaff_x23 = unaff_x23 + 1;
        unaff_x26 = (undefined8 *)((long)puVar4 + 0x2c);
        if (unaff_x25 == unaff_x23) {
          if (unaff_s12 != 3.4028235e+38) {
            unaff_x19[1] = uStack0000000000000038;
            *unaff_x19 = uStack0000000000000030;
            unaff_x19[3] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
            unaff_x19[2] = uStack0000000000000040;
                    /* try { // try from 06975e18 to 06a75e43 has its CatchHandler @ 06976848 */
            *(undefined8 *)((long)unaff_x19 + 0x24) = uStack0000000000000054;
            *(ulong *)((long)unaff_x19 + 0x1c) =
                 CONCAT44(uStack0000000000000050,uStack000000000000004c);
          }
                    /* try { // try from 06975e44 to 06a75e63 has its CatchHandler @ 06976850 */
          return unaff_s12 != 3.4028235e+38;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        in_stack_00000028 = *(undefined4 *)((long)puVar4 + 0x54);
        in_stack_00000008 = *(undefined8 *)((long)puVar4 + 0x34);
        in_stack_00000000 = *unaff_x26;
        in_stack_00000010 = *(undefined8 *)((long)puVar4 + 0x3c);
        uStack0000000000000020 = (undefined4)*(undefined8 *)((long)puVar4 + 0x4c);
        uStack0000000000000024 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x4c) >> 0x20);
        uStack0000000000000018 = (undefined4)*(undefined8 *)((long)puVar4 + 0x44);
        uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x44) >> 0x20);
        if (*(long *)(unaff_x20 + 0x50) == 0) {
LAB_06975e50:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
        uVar7 = in_stack_00000010;
        uVar1 = FUN_07d2fce4();
        fVar6 = (float)uVar7;
        if (lVar3 == 0) goto LAB_06975e50;
        uVar2 = FUN_049d96b4(lVar3,uVar1,*unaff_x24);
        fVar8 = (float)uVar9;
        puVar4 = unaff_x26;
      } while ((uVar2 & 1) != 0);
      fVar5 = (float)FUN_07d2fd90();
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_06975e50;
      uVar9 = (ulong)(uint)(fVar8 - unaff_s9);
      fVar6 = (float)FUN_07cadd74(fVar5 - unaff_s11,fVar6 - unaff_s10,*(long *)(unaff_x20 + 0x58),0)
      ;
    } while ((((fVar6 < unaff_s14) || (unaff_s13 < fVar6)) || (unaff_s8 < (float)uVar9)) ||
            (((float)uVar9 < unaff_s15 || (fVar6 = (float)FUN_07d2fdc0(), unaff_s12 <= fVar6))));
    unaff_s12 = (float)FUN_07d2fdc0();
  } while( true );
}


