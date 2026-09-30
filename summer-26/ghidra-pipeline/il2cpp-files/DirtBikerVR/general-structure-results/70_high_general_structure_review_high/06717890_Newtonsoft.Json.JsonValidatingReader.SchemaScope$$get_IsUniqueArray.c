/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 06717890
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06717a74) */

void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  uint uVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  unkbyte10 Var5;
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
  
                    /* catch() { ... } // from try @ 06717730 with catch @ 06717890 */
  thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 067175cc with catch @ 06717894 */
  in_stack_00000058 = unaff_x23[1];
  in_stack_00000050 = *unaff_x23;
  uVar3 = FUN_0667a944(&stack0x00000050,0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000078._4_4_ = 3;
    *unaff_x19 = 3;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043ec0c0(unaff_x19 + 2,&stack0x00000050);
  }
  else {
    FUN_0667aa84(&stack0x00000050,0);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined4 *)(in_stack_00000070 + 0x44) = 0;
    plVar1 = *(long **)(in_stack_00000070 + 0x28);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    Var5 = (**(code **)(*plVar1 + 0x338))
                     (plVar1,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),
                      *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar1 + 0x340));
    if (*(int *)(*(long *)PTR_DAT_08496150 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    _uStack0000000000000088 = 0;
    in_stack_00000080 = (long)Var5;
    thunk_FUN_03afed3c(&stack0x00000080,(long)Var5);
    uStack0000000000000088 = (uint3)(ushort)((unkuint10)Var5 >> 0x40);
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    unaff_x23[1] = _uStack0000000000000088;
    *unaff_x23 = in_stack_00000080;
    thunk_FUN_03afed3c(&stack0x00000090,0);
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    unaff_x23[1] = unaff_x23[1];
    *unaff_x23 = *unaff_x23;
    thunk_FUN_03afed3c(&stack0x00000090,0);
    in_stack_00000058 = unaff_x23[1];
    in_stack_00000050 = *unaff_x23;
    uVar3 = FUN_0667a944(&stack0x00000050,0);
    if ((uVar3 & 1) != 0) {
      FUN_0667aa84(&stack0x00000050,0);
      uVar4 = 0x1c;
      goto LAB_06717574;
    }
    in_stack_00000078._4_4_ = 4;
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043ec0c0(unaff_x19 + 2,&stack0x00000050);
  }
  uVar4 = 5;
LAB_06717574:
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


