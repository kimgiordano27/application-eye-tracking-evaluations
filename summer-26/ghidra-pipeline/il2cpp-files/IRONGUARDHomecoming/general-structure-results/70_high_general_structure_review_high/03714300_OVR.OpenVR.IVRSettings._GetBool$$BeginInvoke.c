/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetBool$$BeginInvoke
ENTRY_POINT: 03714300
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void OVR_OpenVR_IVRSettings__GetBool__BeginInvoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  ulong uVar9;
  uint unaff_w22;
  long lVar10;
  long *unaff_x25;
  
  thunk_FUN_01f51358();
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__1__;
  if (0 < (int)unaff_w22) {
    uVar9 = 0;
    do {
      lVar10 = *unaff_x20;
      FUN_035c41f0(uVar9,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x25);
      }
      uVar4 = FUN_036f0418();
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                    /* try { // try from 03714370 to 03814413 has its CatchHandler @ 03714370
                       catch() { ... } // from try @ 03714370 with catch @ 03714370
                       catch() { ... } // from try @ 03714434 with catch @ 03714370
                       catch() { ... } // from try @ 0371445c with catch @ 03714370
                       catch() { ... } // from try @ 03714484 with catch @ 03714370
                       catch() { ... } // from try @ 037144c4 with catch @ 03714370 */
      FUN_03714128(uVar5,uVar4);
      if (lVar10 == 0) {
LAB_03714404:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_03714404;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar5;
        thunk_FUN_01f51358(puVar6,uVar5);
      }
      else {
        FUN_030f2bb4(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = uVar9 + 1;
    } while (unaff_w22 != uVar9);
  }
  return;
}


