/*
FUNCTION_NAME: Unity.Services.Authentication.PlayerAccounts.BrowserUtils$$CreateBrowserUtils
ENTRY_POINT: 058c84d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Unity_Services_Authentication_PlayerAccounts_BrowserUtils__CreateBrowserUtils(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long in_stack_00000058;
  
  lVar2 = in_stack_00000058;
  puVar3 = (undefined8 *)Method_Unity_Properties_Property<Vector4,_float>__ctor__;
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if (in_stack_00000058 != 0) {
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Collections_Generic_Queue<Vector3>_Enqueue__ + 0x20) +
          0x135) & 1) == 0) {
      FUN_02b76218();
    }
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
    ;
    if (*(int *)(lVar2 + 8) != 0) {
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aaf678();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aaf678();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aabeb8();
      auVar4 = FUN_03aaf56c(&stack0x00000058,
                            *(undefined8 *)Method_Unity_Properties_Property<Vector3Int,_int>__ctor__
                           );
      auVar5 = FUN_03aaf56c();
      auVar6 = FUN_03aaf56c();
      auVar7 = FUN_03aabdac();
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Queue<Tuple<SendOrPostCallback,_object>>_get_Count__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cce464(auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,
                   auVar7._0_8_,auVar7._8_8_);
      FUN_03aaf678();
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aaf678();
      lVar2 = *unaff_x27;
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      FUN_03aabeb8(unaff_x28,*(undefined4 *)(lVar2 + 8),1,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>__ctor__);
      puVar3 = (undefined8 *)Method_Unity_Properties_Property<Vector4,_float>__ctor__;
    }
  }
  FUN_03aaf444(&stack0x00000058,*puVar3);
  return;
}


