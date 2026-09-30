/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 01a056bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRManager__GetCurrentInputSubsystem(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
                    /* catch() { ... } // from try @ 01a056b0 with catch @ 01a056bc */
                    /* catch() { ... } // from try @ 01a056a8 with catch @ 01a056c0 */
                    /* catch() { ... } // from try @ 01a056a4 with catch @ 01a056c4 */
                    /* catch() { ... } // from try @ 01a056a0 with catch @ 01a056c8 */
  if ((*(byte *)(unaff_x21 + 0x947) & 1) == 0) {
                    /* catch() { ... } // from try @ 01a053f0 with catch @ 01a056cc */
                    /* catch() { ... } // from try @ 01a05394 with catch @ 01a056d0 */
                    /* catch() { ... } // from try @ 01a0551c with catch @ 01a056d4 */
    thunk_FUN_00d48444(Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__);
                    /* catch() { ... } // from try @ 01a054b8 with catch @ 01a056d8 */
                    /* catch() { ... } // from try @ 01a05454 with catch @ 01a056dc */
                    /* catch() { ... } // from try @ 01a05584 with catch @ 01a056e0 */
    thunk_FUN_00d48444(StringLiteral_6259);
    *(undefined1 *)(unaff_x21 + 0x947) = 1;
  }
  puVar1 = Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
                    /* try { // try from 01a056f8 to 01b056fb has its CatchHandler @ 01a05774 */
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_01a05754;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 01a05738 to 01b0575f has its CatchHandler @ 01a05780 */
    puVar3 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__
                          ,4);
LAB_01a05754:
    lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
                    /* try { // try from 01a05760 to 01b0576b has its CatchHandler @ 01a05244 */
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
                    /* try { // try from 01a0576c to 01b05773 has its CatchHandler @ 01a05780 */
      if (*(char *)(lVar4 + 0x10) == '\0') {
        bVar2 = true;
      }
      else {
                    /* catch() { ... } // from try @ 01a056f8 with catch @ 01a05774 */
        bVar2 = *(long *)(lVar4 + 0x18) == 0;
                    /* catch() { ... } // from try @ 01a05738 with catch @ 01a05780
                       catch() { ... } // from try @ 01a0576c with catch @ 01a05780 */
      }
      lVar5 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_01a057d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(param_2,lVar4,4);
LAB_01a057d8:
      lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (bVar2) {
        if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02666fdc(&stack0x00000020,0);
        in_stack_00000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = (undefined4)uStack0000000000000034;
        in_stack_00000058 = SUB84(uStack0000000000000034,4);
        uStack000000000000004c = uStack000000000000002c;
        in_stack_00000050 = uStack0000000000000030;
        puVar3 = (undefined8 *)register0x00000008;
        if (lVar4 != 0) {
LAB_01a058a4:
          in_stack_00000040 = in_stack_00000020;
          in_stack_00000048 = uStack0000000000000028;
          in_stack_00000050 = uStack0000000000000030;
          FUN_01a0bdbc(puVar3,lVar4,&stack0x00000040);
          uVar9 = *(undefined8 *)((long)puVar3 + 0xc);
          uVar11 = puVar3[1];
          uVar10 = *puVar3;
          *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
          *(undefined8 *)((long)param_1 + 0xc) = uVar9;
          param_1[1] = uVar11;
          *param_1 = uVar10;
          return;
        }
      }
      else {
        lVar6 = *param_2;
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_01a0587c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(param_2,lVar5,3);
LAB_01a0587c:
        (*(code *)*puVar3)(&stack0x00000020,param_2,puVar3[1]);
        in_stack_00000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack0000000000000054 = (undefined4)uStack0000000000000034;
        in_stack_00000058 = SUB84(uStack0000000000000034,4);
        uStack000000000000004c = uStack000000000000002c;
        in_stack_00000050 = uStack0000000000000030;
        if (lVar4 != 0) {
          puVar3 = &stack0x00000020;
          goto LAB_01a058a4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


