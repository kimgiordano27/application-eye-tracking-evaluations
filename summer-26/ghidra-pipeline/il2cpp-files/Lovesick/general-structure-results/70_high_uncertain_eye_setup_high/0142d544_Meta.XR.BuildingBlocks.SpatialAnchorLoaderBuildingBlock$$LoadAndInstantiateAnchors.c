/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLoaderBuildingBlock$$LoadAndInstantiateAnchors
ENTRY_POINT: 0142d544
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte Meta_XR_BuildingBlocks_SpatialAnchorLoaderBuildingBlock__LoadAndInstantiateAnchors
               (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint in_w8;
  long unaff_x19;
  int unaff_w26;
  byte unaff_w28;
  undefined8 *unaff_x29;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  uint uStack0000000000000070;
  long in_stack_00000088;
  
  uStack0000000000000070 = in_w8 & 1;
  do {
    if (*(int *)(param_1 + 0x18) <= unaff_w26) {
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return unaff_w28 & 1;
    }
    FUN_0132138c(param_1,unaff_w26,&stack0x00000088,*unaff_x29);
    if ((in_stack_00000088 == 0) || (*(long *)(in_stack_00000088 + 0x38) == 0)) break;
    if (0 < *(int *)(*(long *)(in_stack_00000088 + 0x38) + 0x18)) {
      if (*(long *)(unaff_x19 + 0x98) == 0) break;
      FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w26,&stack0x00000088,*unaff_x29);
      if (in_stack_00000088 == 0) break;
      *(undefined1 *)(in_stack_00000088 + 0x40) = 1;
      if (*(long *)(unaff_x19 + 0x98) == 0) break;
      FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w26,&stack0x00000088,*unaff_x29);
      if ((in_stack_00000088 == 0) || (*(long *)(in_stack_00000088 + 0x38) == 0)) break;
      uVar2 = FUN_01325140(*(long *)(in_stack_00000088 + 0x38),
                           *(undefined8 *)
                            Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo)
      ;
      if ((unaff_w28 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w26,&stack0x00000088,*unaff_x29);
        if ((in_stack_00000088 == 0) ||
           (plVar3 = *(long **)(in_stack_00000088 + 0x10), plVar3 == (long *)0x0)) break;
        uVar1 = (**(code **)(*plVar3 + 0x8c8))
                          (plVar3,uVar2,uStack0000000000000048 & 1,uStack000000000000004c & 1,
                           uStack0000000000000050 & 1,uStack0000000000000054 & 1,
                           uStack0000000000000058 & 1,uStack000000000000005c & 1);
        uVar1 = uVar1 & 1;
      }
      unaff_w28 = uVar1 != 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    unaff_w26 = unaff_w26 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


