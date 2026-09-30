/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 06383fc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if ((*(byte *)(unaff_x21 + 0x9f3) & 1) == 0) {
    FUN_0335b6c8(&DAT_083e5f38,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5f40,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5f48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840ca08,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f0f48,1);
                    /* try { // try from 06384034 to 06484097 has its CatchHandler @ 06384034
                       catch() { ... } // from try @ 06384034 with catch @ 06384034
                       catch() { ... } // from try @ 063840ac with catch @ 06384034
                       catch() { ... } // from try @ 06384164 with catch @ 06384034
                       catch() { ... } // from try @ 06384210 with catch @ 06384034
                       catch() { ... } // from try @ 063844ac with catch @ 06384034
                       catch() { ... } // from try @ 06384538 with catch @ 06384034
                       catch() { ... } // from try @ 06384588 with catch @ 06384034
                       catch() { ... } // from try @ 063845f8 with catch @ 06384034 */
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x9f3) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000008 = 0;
    FUN_05fd5ad4(&stack0x00000008,*(long *)(param_1 + 0x20),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f0f48 + 0x20) + 0xc0) + 0x138));
                    /* try { // try from 06384098 to 064840ab has its CatchHandler @ 06384504 */
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      do {
                    /* try { // try from 063840ac to 064840c7 has its CatchHandler @ 06384034 */
        uVar2 = FUN_05fd5b44(&stack0x00000020,DAT_083e5f40);
        lVar1 = in_stack_00000030;
        if ((uVar2 & 1) == 0) {
          return;
        }
                    /* try { // try from 063840c8 to 064840d7 has its CatchHandler @ 063844f4 */
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar2 = FUN_07a11b14(lVar1,0);
      } while ((uVar2 & 1) == 0);
      if (lVar1 == 0) break;
      if (DAT_086ef288 == (code *)0x0) {
        DAT_086ef288 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
      }
      uVar2 = (*DAT_086ef288)(lVar1);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_03fa1bc8(lVar1,DAT_0840ca08);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar2 = FUN_07a11b14(uVar3,0);
        if ((uVar2 & 1) != 0) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),uVar3,*(undefined8 *)(param_2 + 0x28));
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


