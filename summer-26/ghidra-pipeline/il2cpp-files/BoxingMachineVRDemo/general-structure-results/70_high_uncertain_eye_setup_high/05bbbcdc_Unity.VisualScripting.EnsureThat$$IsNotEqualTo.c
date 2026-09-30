/*
FUNCTION_NAME: Unity.VisualScripting.EnsureThat$$IsNotEqualTo
ENTRY_POINT: 05bbbcdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_VisualScripting_EnsureThat__IsNotEqualTo(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
                    /* try { // try from 05bbbcdc to 05cbbcdf has its CatchHandler @ 05bbbd00 */
                    /* try { // try from 05bbbce0 to 05cbbd07 has its CatchHandler @ 05bbba5c */
  FUN_05bba4d4();
  puVar2 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__;
  puVar1 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__;
  if (unaff_x22 != 0) {
    if (0 < *(int *)(unaff_x22 + 0x18)) {
                    /* catch() { ... } // from try @ 05bbbcdc with catch @ 05bbbd00 */
                    /* try { // try from 05bbbd08 to 05cbbd0f has its CatchHandler @ 05bbbd24 */
                    /* try { // try from 05bbbd10 to 05cbbd1b has its CatchHandler @ 05bbba5c */
                    /* try { // try from 05bbbd1c to 05cbbd23 has its CatchHandler @ 05bbbd24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbbd08 with catch @ 05bbbd24
                       catch(type#2 @ 00000000) { ... } // from try @ 05bbbd1c with catch @ 05bbbd24
                        */
      FUN_05bba508();
                    /* try { // try from 05bbbd28 to 05cbbe2b has its CatchHandler @ 05bbbd28
                       catch() { ... } // from try @ 05bbbd28 with catch @ 05bbbd28
                       catch() { ... } // from try @ 05bbbe74 with catch @ 05bbbd28
                       catch() { ... } // from try @ 05bbbec0 with catch @ 05bbbd28
                       catch() { ... } // from try @ 05bbbeec with catch @ 05bbbd28
                       catch() { ... } // from try @ 05bbbf1c with catch @ 05bbbd28 */
      FUN_05bba4d4();
      FUN_03aaceb0();
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000040 = in_stack_00000010;
      while (uVar4 = FUN_04a7a4a0(&stack0x00000030,*(undefined8 *)puVar2), lVar3 = in_stack_00000040
            , (uVar4 & 1) != 0) {
        FUN_05bba4d4();
        FUN_05bba508();
        FUN_05bba4d4();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_05bb4b44(lVar3);
        FUN_05bbaf34();
        FUN_05bba4d4();
        FUN_05bbaf34();
        FUN_05bba4d4();
      }
      FUN_04a7a49c(&stack0x00000030,*(undefined8 *)puVar1);
      FUN_05bbaf34();
      FUN_05bba4d4();
    }
    puVar2 = 
    Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
    ;
    puVar1 = Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__;
    if (unaff_x20 != 0) {
      if (0 < *(int *)(unaff_x20 + 0x18)) {
                    /* try { // try from 05bbbe2c to 05cbbe2f has its CatchHandler @ 05bbbec0 */
        FUN_05bba508();
        FUN_05bba4d4();
                    /* try { // try from 05bbbe3c to 05cbbe4b has its CatchHandler @ 05bbbed0 */
        FUN_03aaceb0(&stack0x00000018);
        while (uVar4 = FUN_04a7a4a0(&stack0x00000018,*(undefined8 *)puVar2),
              lVar3 = in_stack_00000028, (uVar4 & 1) != 0) {
          FUN_05bba4d4();
          FUN_05bba508();
          FUN_05bba4d4();
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_05bb4964(lVar3);
          FUN_05bbaf34();
          FUN_05bba4d4();
          FUN_05bbaf34();
          FUN_05bba4d4();
        }
        FUN_04a7a49c(&stack0x00000018,*(undefined8 *)puVar1);
        FUN_05bbaf34();
        FUN_05bba4d4();
      }
      FUN_05bbaf34();
      FUN_05bba4d4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05bbbf1c to 05cbbf27 has its CatchHandler @ 05bbbd28 */
  FUN_02d60ae8();
}


