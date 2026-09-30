/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 0713f95c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  short unaff_w23;
  short unaff_w24;
  short unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  int unaff_w28;
  uint unaff_w29;
  int iStack000000000000000c;
  
code_r0x0713f95c:
  uVar1 = FUN_06fcd2c8();
  if ((((5 < (ushort)(uVar1 + unaff_w25)) && (4 < (ushort)(uVar1 + unaff_w24))) &&
      (0xb < (ushort)(uVar1 + unaff_w23))) &&
     ((5 < (ushort)(uVar1 + 7) && (0x10 < (ushort)(uVar1 + 0x221))))) {
    if (unaff_w26 < uVar1) {
      if ((unaff_w27 + (uint)uVar1 < 0x1b) &&
         ((unaff_w28 << (ulong)(unaff_w27 + (uint)uVar1 & 0x1f) & unaff_w29) != 0))
      goto LAB_0713fa38;
    }
    else if ((uVar1 - 0x340 < 2) || (uVar1 == unaff_w26)) goto LAB_0713fa38;
    do {
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
        return;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar3 = FUN_070d3404();
      if (iVar3 != 0xb) {
        if (iVar3 != 0xe) goto code_r0x0713f948;
        sVar2 = FUN_06fcd2c8();
        if (sVar2 == 0) break;
      }
      uVar1 = FUN_06fcd2c8();
      if (0x7f < uVar1) break;
    } while( true );
  }
  goto LAB_0713fa38;
code_r0x0713f948:
  if (iVar3 - 0x10U < 2) {
LAB_0713fa38:
    iStack000000000000000c = unaff_w19 + unaff_w21;
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091a0d08);
    uVar4 = thunk_FUN_03d2eb70(uVar4,&stack0x0000000c);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_09211b38);
    uVar4 = FUN_06fc1fb4(uVar5,uVar4,0);
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar5 = thunk_FUN_03d2ef40();
    FUN_070cb7ec(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_09211b40);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,uVar4);
  }
  goto code_r0x0713f95c;
}


