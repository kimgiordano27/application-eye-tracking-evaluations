/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 01a1c4ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__DestroyInsightPassthroughGeometryInstance(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
                    /* catch() { ... } // from try @ 01a1c314 with catch @ 01a1c4ac */
                    /* catch() { ... } // from try @ 01a1c228 with catch @ 01a1c4b0 */
  FUN_019aa6e4(param_1,param_2,0);
  in_stack_00000028 = in_stack_00000008;
                    /* catch() { ... } // from try @ 01a1c284 with catch @ 01a1c4b4 */
                    /* catch() { ... } // from try @ 01a1c244 with catch @ 01a1c4b8 */
                    /* catch() { ... } // from try @ 01a1c208 with catch @ 01a1c4bc */
                    /* catch() { ... } // from try @ 01a1c2fc with catch @ 01a1c4c0 */
                    /* catch() { ... } // from try @ 01a1c2ec with catch @ 01a1c4c4 */
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000030 = in_stack_00000010;
  FUN_019a77d4();
  in_stack_00000068 = in_stack_00000008;
                    /* try { // try from 01a1c4e0 to 01b1c4e3 has its CatchHandler @ 01a1c4f0 */
  in_stack_00000060 = in_stack_00000000;
  in_stack_00000070 = in_stack_00000010;
  plVar5 = *(long **)(unaff_x20 + 0x38);
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 01a1c4e0 with catch @ 01a1c4f0 */
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
                    /* try { // try from 01a1c500 to 01b1c53b has its CatchHandler @ 01a1c550 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)StringLiteral_1364) {
                    /* try { // try from 01a1c53c to 01b1c547 has its CatchHandler @ 01a1be7c */
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_01a1c548;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_1364,4);
LAB_01a1c548:
                    /* try { // try from 01a1c548 to 01b1c54f has its CatchHandler @ 01a1c550 */
                    /* catch() { ... } // from try @ 01a1c500 with catch @ 01a1c550
                       catch() { ... } // from try @ 01a1c548 with catch @ 01a1c550 */
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((lVar2 != 0) && (plVar5 = *(long **)(lVar2 + 0x20), plVar5 != (long *)0x0)) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)StringLiteral_6481) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
            goto LAB_01a1c5b8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_6481,0x12);
LAB_01a1c5b8:
      (*(code *)*puVar1)(plVar5,&stack0x00000040,puVar1[1]);
      plVar5 = *(long **)(unaff_x20 + 0x38);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                *(long *)Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
              goto LAB_01a1c628;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_00d59724(plVar5,*(long *)
                                      Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__
                              ,3);
LAB_01a1c628:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        FUN_019bd4d4(&stack0x00000040,&stack0x00000020,0);
        FUN_019bd4d4(&stack0x00000040,&stack0x00000060,0);
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *unaff_x19 = in_stack_00000040;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


