/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 0316862c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000040 = param_2;
  uStack0000000000000050 = param_3;
  if (*(int *)(**(long **)(param_1 + 0x700) + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 0316864c to 0326864f has its CatchHandler @ 03168664 */
  uVar8 = FUN_03164e98(&stack0x00000040);
                    /* try { // try from 03168650 to 0326867b has its CatchHandler @ 03168628 */
  lVar2 = *unaff_x20;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0316864c with catch @ 03168664
                        */
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 0316867c to 0326867f has its CatchHandler @ 031686ac */
                    /* try { // try from 03168680 to 032686af has its CatchHandler @ 03168628 */
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80838) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_031686ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_031686ec:
  uVar8 = (*(code *)*puVar1)(uVar8,param_3,param_4);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_03165dd4(&stack0x00000020);
                    /* try { // try from 03168728 to 03268737 has its CatchHandler @ 03168800 */
    FUN_03168834(uVar8,param_3,param_4);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = unaff_s11;
      *(undefined4 *)(lVar2 + 0x54) = unaff_s10;
      *(undefined4 *)(lVar2 + 0x58) = unaff_s9;
      *(undefined4 *)(lVar2 + 0x5c) = unaff_s8;
      plVar6 = *(long **)(unaff_x19 + 0x48);
                    /* try { // try from 0316875c to 03268767 has its CatchHandler @ 0316880c */
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
                    /* try { // try from 0316876c to 03268777 has its CatchHandler @ 03168810 */
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13348) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_031687cc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_13348,0);
LAB_031687cc:
        uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x78) = uVar7;
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_030d0278(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
          FUN_03168ea4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


