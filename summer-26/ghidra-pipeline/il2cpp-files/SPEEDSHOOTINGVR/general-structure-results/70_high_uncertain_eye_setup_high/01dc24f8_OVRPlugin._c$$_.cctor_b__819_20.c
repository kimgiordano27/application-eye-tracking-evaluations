/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_20
ENTRY_POINT: 01dc24f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_<>c__<_cctor>b__819_20(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  ushort *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  int unaff_w24;
  byte *pbVar5;
  long *plVar6;
  byte *unaff_x26;
  ushort *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  long in_stack_00000000;
  ushort *in_stack_00000008;
  
  lVar3 = FUN_00fdc388(*param_1,1);
  plVar6 = (long *)0x0;
                    /* try { // try from 01dc250c to 01ec250f has its CatchHandler @ 01dc251c */
  pbVar5 = unaff_x21;
  puVar7 = unaff_x19;
  do {
                    /* catch() { ... } // from try @ 01dc250c with catch @ 01dc251c */
    pbVar9 = pbVar5;
    puVar8 = puVar7;
    pbVar2 = pbVar5;
    if (unaff_x26 <= pbVar5) goto joined_r0x01dc25ec;
    while( true ) {
      bVar1 = *pbVar9;
                    /* try { // try from 01dc2528 to 01ec2533 has its CatchHandler @ 01dc2548 */
      pbVar5 = pbVar9 + 1;
      if ((char)bVar1 < '\0') break;
                    /* try { // try from 01dc2534 to 01ec253f has its CatchHandler @ 01dc2194 */
      if (unaff_x19 + unaff_w24 <= puVar7) goto LAB_01dc25d4;
      puVar8 = puVar7 + 1;
                    /* try { // try from 01dc2540 to 01ec2547 has its CatchHandler @ 01dc2548 */
      *puVar7 = (ushort)bVar1;
      puVar7 = puVar8;
      pbVar9 = pbVar5;
      pbVar2 = unaff_x26;
                    /* catch() { ... } // from try @ 01dc2528 with catch @ 01dc2548
                       catch() { ... } // from try @ 01dc2540 with catch @ 01dc2548 */
      if (unaff_x26 == pbVar5) goto joined_r0x01dc25ec;
    }
    if (plVar6 == (long *)0x0) {
      if (unaff_x20 == 0) {
        plVar6 = *(long **)(in_stack_00000000 + 0x30);
        if (plVar6 == (long *)0x0) goto LAB_01dc2640;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      }
      else {
        plVar6 = (long *)FUN_01dc236c();
      }
      if (plVar6 == (long *)0x0) goto LAB_01dc2640;
      plVar6[2] = (long)unaff_x21;
      plVar6[3] = (long)(unaff_x19 + unaff_w24);
    }
    if (lVar3 == 0) {
LAB_01dc2640:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(byte *)(lVar3 + 0x20) = bVar1;
    in_stack_00000008 = puVar7;
    uVar4 = (**(code **)(*plVar6 + 0x1a8))
                      (plVar6,lVar3,pbVar5,&stack0x00000008,*(undefined8 *)(*plVar6 + 0x1b0));
    puVar7 = in_stack_00000008;
  } while ((uVar4 & 1) != 0);
  plVar6[2] = 0;
  (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
LAB_01dc25d4:
  FUN_01dd7354(in_stack_00000000);
  puVar8 = puVar7;
  pbVar2 = pbVar9;
joined_r0x01dc25ec:
  if (unaff_x20 != 0) {
    *(int *)(unaff_x20 + 0x2c) = (int)pbVar2 - (int)unaff_x21;
  }
  uVar4 = (long)puVar8 - (long)unaff_x19;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  return uVar4 >> 1;
}


