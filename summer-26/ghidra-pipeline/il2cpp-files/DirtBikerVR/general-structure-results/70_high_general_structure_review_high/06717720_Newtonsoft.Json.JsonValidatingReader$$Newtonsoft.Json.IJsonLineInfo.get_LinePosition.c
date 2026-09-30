/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 06717720
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06717a74) */

void Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  uint uVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auVar5 [16];
  unkbyte10 Var6;
  long *in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  uint3 uStack0000000000000088;
  undefined5 uStack000000000000008b;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  Var6 = (**(code **)(param_1 + 0x338))();
                    /* try { // try from 06717730 to 06817747 has its CatchHandler @ 06717890 */
                    /* try { // try from 06717748 to 06817777 has its CatchHandler @ 06717898 */
  if (*(int *)(*(long *)PTR_DAT_08496150 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  _uStack0000000000000088 = 0;
  in_stack_00000080 = (long)Var6;
  thunk_FUN_03afed3c(&stack0x00000080,(long)Var6);
  uStack0000000000000088 = (uint3)(ushort)((unkuint10)Var6 >> 0x40);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = _uStack0000000000000088;
  *unaff_x23 = in_stack_00000080;
                    /* try { // try from 06717778 to 0681784f has its CatchHandler @ 067173b0 */
  thunk_FUN_03afed3c(&stack0x00000090,0);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = unaff_x23[1];
  *unaff_x23 = *unaff_x23;
  thunk_FUN_03afed3c(&stack0x00000090,0);
  in_stack_00000058 = unaff_x23[1];
  in_stack_00000050 = *unaff_x23;
  uVar3 = FUN_0667a944(&stack0x00000050,0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000078._4_4_ = 1;
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043ec0c0(unaff_x19 + 2,&stack0x00000050);
    uVar4 = 5;
  }
  else {
    FUN_0667aa84(&stack0x00000050,0);
    lVar2 = in_stack_00000070;
    puVar1 = PTR_DAT_084a8400;
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined4 *)(in_stack_00000070 + 0x44) = 0;
    auVar5 = FUN_05691ae0(unaff_x19 + 0xc,*(undefined8 *)puVar1);
    FUN_067141e8(lVar2,auVar5._0_8_,auVar5._8_8_);
    uVar4 = 0x1c;
  }
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000028 == 0) || (lVar2 = FUN_0671211c(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_067b8700(lVar2,0);
  }
  if ((uVar4 < 0x1d) && ((1 << (ulong)uVar4 & 0x10100001U) != 0)) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  return;
}


