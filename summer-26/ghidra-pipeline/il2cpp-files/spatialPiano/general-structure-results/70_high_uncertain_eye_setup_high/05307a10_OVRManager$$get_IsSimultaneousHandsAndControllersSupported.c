/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 05307a10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported
               (long param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float fVar11;
  float unaff_s13;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
                    /* try { // try from 05307a10 to 05407a17 has its CatchHandler @ 05307844 */
                    /* try { // try from 05307a18 to 05407a1b has its CatchHandler @ 05307a1c */
  fVar7 = SQRT(param_3 + param_2);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0530793c with catch @ 05307a1c
                       catch(type#1 @ 06402238) { ... } // from try @ 05307a18 with catch @ 05307a1c
                       try { // try from 05307a1c to 05407a3f has its CatchHandler @ 05307844 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05307964 with catch @ 05307a20
                        */
  if (fVar7 <= *(float *)(param_1 + 0x6e4)) {
    if (DAT_06bb42c1 == '\0') {
                    /* try { // try from 05307a40 to 05407a43 has its CatchHandler @ 05307a50 */
      FUN_02f08768(PTR_DAT_067c8f78);
                    /* catch() { ... } // from try @ 05307a40 with catch @ 05307a50 */
      DAT_06bb42c1 = '\x01';
    }
                    /* try { // try from 05307a54 to 05407a5b has its CatchHandler @ 05307a64 */
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
                    /* try { // try from 05307a5c to 05407a67 has its CatchHandler @ 05307844 */
    fVar10 = *pfVar2;
    fVar11 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05307a0c with catch @ 05307a24
                        */
    fVar10 = unaff_s11 / fVar7;
    fVar11 = unaff_s12 / fVar7;
    fVar7 = unaff_s13 / fVar7;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05307a54 with catch @ 05307a64
                        */
  if (*(char *)(unaff_x20 + 0x2c4) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    *(undefined1 *)(unaff_x20 + 0x2c4) = 1;
  }
  lVar3 = *(long *)(*unaff_x21 + 0xb8);
  uVar9 = *(undefined4 *)(lVar3 + 0x18);
  uVar8 = FUN_060df8a0(fVar10,fVar11,fVar7,uVar9,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  FUN_060fda18(unaff_s10,unaff_s9,uStack0000000000000000,uVar8,fVar11,fVar7,uVar9,&stack0x00000020,0
              );
  uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  uStack000000000000004c = uStack000000000000002c;
  in_stack_00000050 = in_stack_00000030;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_05307b58;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_02f421d0(plVar6,*(long *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                        ,2);
LAB_05307b58:
  (*(code *)*puVar1)((undefined1 *)((long)&stack0x00000000 + 4),plVar6,&stack0x00000040,puVar1[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *(undefined8 *)(unaff_x19 + 0x144) = uStack0000000000000004;
  *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  return;
}


