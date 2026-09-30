/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.SmoothRigidBodiesGraphicalMotion.__codegen__OnCreate_00000A68$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0326af5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnCreate_00000A68_PostfixBurstDelegate__Invoke
          (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  int in_stack_00000028;
  undefined2 uStack000000000000002c;
  
                    /* try { // try from 0326af68 to 0336af6b has its CatchHandler @ 0326af98 */
                    /* try { // try from 0326af6c to 0336afcb has its CatchHandler @ 0326aa2c */
  if ((DAT_0412c8b2 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(Koenigz_PerfectCulling_IO_BitStreamWriter_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(VRM_BlendShapeMerger_TypeInfo);
    FUN_01ab69ac(MS_Internal_Xml_XPath_BooleanExpr_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_BooleanExpression_TypeInfo);
    FUN_01ab69ac(MS_Internal_Xml_XPath_BooleanFunctions_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<long,_double>_TypeInfo);
    DAT_0412c8b2 = 1;
  }
  uStack000000000000002c = 0;
  iVar1 = param_1[1];
  if (iVar1 == 1) {
    in_stack_00000018 = *param_1;
    puVar6 = (undefined8 *)Mono_CSharp_BooleanExpression_TypeInfo;
    if (in_stack_00000018 != 0x39) {
      in_stack_00000008 = *(undefined8 *)Koenigz_PerfectCulling_IO_BitStreamWriter_TypeInfo;
      in_stack_00000010 = 0xffffffffffffffff;
      lVar5 = FUN_027a62b8(&stack0x00000008,0);
      if (lVar5 != 0) {
        uVar2 = FUN_025b8a2c(lVar5,0,0);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc02b0);
        }
        uStack000000000000002c = FUN_026b8614(uVar2,0);
        uVar4 = FUN_026a4094(&stack0x0000002c,0);
        uVar3 = FUN_025c262c(lVar5,1,0);
        uVar4 = FUN_025b1328(uVar4,uVar3,0);
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if (iVar1 != 9) {
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,iVar1);
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)VRM_BlendShapeMerger_TypeInfo,&stack0x00000008);
      in_stack_00000028 = *param_1;
      uVar3 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000028);
      uVar4 = FUN_025be86c(*(undefined8 *)MS_Internal_Xml_XPath_BooleanFunctions_TypeInfo,uVar4,
                           uVar3,0);
      return uVar4;
    }
    puVar6 = (undefined8 *)Unity_Properties_TypeConverter<long,_double>_TypeInfo;
    if (*param_1 != 1) {
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*param_1);
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
      uVar4 = FUN_025b4d3c(*(undefined8 *)MS_Internal_Xml_XPath_BooleanExpr_TypeInfo,uVar4,0);
      return uVar4;
    }
  }
  return *puVar6;
}


