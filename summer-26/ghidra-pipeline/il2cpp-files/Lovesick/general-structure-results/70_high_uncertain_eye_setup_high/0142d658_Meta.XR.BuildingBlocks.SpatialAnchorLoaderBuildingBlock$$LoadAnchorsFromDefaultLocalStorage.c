/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLoaderBuildingBlock$$LoadAnchorsFromDefaultLocalStorage
ENTRY_POINT: 0142d658
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_SpatialAnchorLoaderBuildingBlock__LoadAnchorsFromDefaultLocalStorage
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000088;
  
  while( true ) {
    FUN_0132138c(param_1,unaff_w26,&stack0x00000088,param_4);
    if ((in_stack_00000088 == 0) ||
       (plVar2 = *(long **)(in_stack_00000088 + 0x10), plVar2 == (long *)0x0)) break;
    uVar1 = (**(code **)(*plVar2 + 0x8c8))
                      (plVar2,unaff_x27,unaff_w25,unaff_w24,unaff_w23,unaff_w22,unaff_w21,unaff_w20)
    ;
    uVar1 = uVar1 & 1;
    while( true ) {
      do {
        lVar3 = *(long *)(unaff_x19 + 0x98);
        unaff_w26 = unaff_w26 + 1;
        if (lVar3 == 0) goto LAB_0142d704;
        if (*(int *)(lVar3 + 0x18) <= unaff_w26) {
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return uVar1 != 0;
        }
        FUN_0132138c(lVar3,unaff_w26,&stack0x00000088,*unaff_x29);
        if ((in_stack_00000088 == 0) || (*(long *)(in_stack_00000088 + 0x38) == 0))
        goto LAB_0142d704;
      } while (*(int *)(*(long *)(in_stack_00000088 + 0x38) + 0x18) < 1);
      if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_0142d704;
      FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w26,&stack0x00000088,*unaff_x29);
      if (in_stack_00000088 == 0) goto LAB_0142d704;
      *(undefined1 *)(in_stack_00000088 + 0x40) = 1;
      if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_0142d704;
      FUN_0132138c(*(long *)(unaff_x19 + 0x98),unaff_w26,&stack0x00000088,*unaff_x29);
      if ((in_stack_00000088 == 0) || (*(long *)(in_stack_00000088 + 0x38) == 0)) goto LAB_0142d704;
      unaff_x27 = FUN_01325140(*(long *)(in_stack_00000088 + 0x38),
                               *(undefined8 *)
                                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                              );
      if (uVar1 != 0) break;
      uVar1 = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    if (param_1 == 0) break;
    param_4 = *unaff_x29;
  }
LAB_0142d704:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


