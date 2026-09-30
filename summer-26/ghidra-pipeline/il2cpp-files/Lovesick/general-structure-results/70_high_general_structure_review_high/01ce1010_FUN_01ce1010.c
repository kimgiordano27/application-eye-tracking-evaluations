/*
FUNCTION_NAME: FUN_01ce1010
ENTRY_POINT: 01ce1010
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01ce1010(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0377f0ac & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<ulong>__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_ConvertInt32__
                      );
    thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass111_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0448);
    thunk_FUN_00d48444(Method_System_Xml_HtmlUtf8RawTextWriter_WriteCharEntity__);
    thunk_FUN_00d48444(PTR_DAT_033ee8a0);
    thunk_FUN_00d48444(StringLiteral_9254);
    DAT_0377f0ac = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_033ee8a0 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033ee8a0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2);
    }
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_9254);
  if (lVar5 != 0) {
    FUN_01cd6d00();
    *(long *)(lVar5 + 0x40) = param_1;
    uVar6 = FUN_01cd6efc(lVar5,param_2);
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar5 = *(long *)(*(long *)(lVar5 + 0x18) + 0x18);
      if (lVar5 != 0) {
        lVar5 = FUN_012998a8(lVar5,*(undefined8 *)
                                    Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<ulong>__
                            );
        puVar4 = 
        Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_ConvertInt32__;
        puVar3 = Meta_WitAi_Requests_VRequest_<>c__DisplayClass111_0_TypeInfo;
        puVar2 = PTR_DAT_033f0448;
        if (lVar5 == 0) goto LAB_01ce11c4;
        FUN_01311764(lVar5,&local_58,
                     *(undefined8 *)Method_System_Xml_HtmlUtf8RawTextWriter_WriteCharEntity__);
        while (uVar7 = FUN_012c2b80(&local_58,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
          uVar8 = FUN_00c3eacc(&local_58,*(undefined8 *)puVar2);
          FUN_01cd76a0(param_1,uVar8);
          FUN_01cd79cc(param_1,uVar8);
        }
        FUN_012c2b7c(&local_58,*(undefined8 *)puVar4);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_01cd111c(*(long *)(param_1 + 0x10),uVar6);
        return;
      }
    }
  }
LAB_01ce11c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


