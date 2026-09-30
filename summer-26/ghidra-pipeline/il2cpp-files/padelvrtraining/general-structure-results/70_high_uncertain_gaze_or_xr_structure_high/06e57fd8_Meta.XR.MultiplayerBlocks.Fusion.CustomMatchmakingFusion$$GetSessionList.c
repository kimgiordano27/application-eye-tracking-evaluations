/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion$$GetSessionList
ENTRY_POINT: 06e57fd8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion__GetSessionList(long param_1)

{
  long lVar1;
  int in_w9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar4;
  long unaff_x24;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    uVar4 = in_w11;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06e57f9c with catch @ 06e57fe0
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 06e57f88 with catch @ 06e57fe4
                        */
    if (*(uint *)(in_x10 + 0x18) <= uVar4 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w23 * (long)in_w9 + 0x20)) break;
    if (unaff_w22 <= uVar4) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      goto LAB_06e580a4;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar4 + 1;
    in_w11 = uVar4 + 1;
    unaff_w23 = uVar4;
  }
                    /* try { // try from 06e57ffc to 06f57fff has its CatchHandler @ 06e5800c */
  lVar1 = in_x10 + (long)(int)unaff_w23 * 0x68;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 06e57ffc with catch @ 06e5800c */
                    /* try { // try from 06e58018 to 06f58023 has its CatchHandler @ 06e58038 */
  memcpy(&stack0x00000008,(void *)(lVar1 + 0x30),0x58);
  *(undefined8 *)(unaff_x24 + 0x48) = 0;
  *(undefined8 *)(unaff_x24 + 0x40) = 0;
  *(undefined8 *)(unaff_x24 + 0x58) = 0;
  *(undefined8 *)(unaff_x24 + 0x50) = 0;
                    /* try { // try from 06e58024 to 06f5802f has its CatchHandler @ 06e57f74 */
  *(undefined8 *)(unaff_x24 + 0x38) = 0;
  *(undefined8 *)(unaff_x24 + 0x30) = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
                    /* try { // try from 06e58030 to 06f58037 has its CatchHandler @ 06e58038 */
  lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06e58018 with catch @ 06e58038
                       catch(type#2 @ 00000000) { ... } // from try @ 06e58030 with catch @ 06e58038
                        */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38);
  memcpy(&stack0x000000c8,&stack0x00000008,0x58);
  FUN_05811b48(&stack0x00000060,uVar3,&stack0x000000c8,uVar2);
  memcpy((void *)(unaff_x19 + 0x10),&stack0x00000060,0x60);
  thunk_FUN_03d1023c(unaff_x19 + 0x18,0);
  uVar4 = unaff_w23;
LAB_06e580a4:
  return uVar4 < unaff_w22;
}


