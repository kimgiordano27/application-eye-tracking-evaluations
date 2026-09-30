/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 063840ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long in_stack_00000030;
  
  do {
    pcVar1 = (code *)FUN_033d1b68();
    *(code **)(unaff_x24 + 0x288) = pcVar1;
    do {
      uVar2 = (*pcVar1)(unaff_x21);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_03fa1bc8(unaff_x21,*(undefined8 *)(unaff_x25 + 0xa08));
        if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar2 = FUN_07a11b14(uVar3,0);
        if ((uVar2 & 1) != 0) {
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          (**(code **)(unaff_x19 + 0x18))
                    (*(undefined8 *)(unaff_x19 + 0x40),uVar3,*(undefined8 *)(unaff_x19 + 0x28));
        }
      }
      do {
        uVar2 = FUN_05fd5b44(&stack0x00000020,*(undefined8 *)(unaff_x22 + 0xf40));
        unaff_x21 = in_stack_00000030;
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar2 = FUN_07a11b14(unaff_x21,0);
      } while ((uVar2 & 1) == 0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06384154 to 06484163 has its CatchHandler @ 06384500 */
        FUN_033d1d3c();
      }
      pcVar1 = *(code **)(unaff_x24 + 0x288);
    } while (pcVar1 != (code *)0x0);
  } while( true );
}


