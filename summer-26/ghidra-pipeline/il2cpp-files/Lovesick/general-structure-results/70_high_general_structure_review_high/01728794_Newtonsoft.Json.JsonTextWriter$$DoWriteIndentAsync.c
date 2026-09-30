/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$DoWriteIndentAsync
ENTRY_POINT: 01728794
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4
*/


void Newtonsoft_Json_JsonTextWriter__DoWriteIndentAsync(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = StringLiteral_821;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_set_Item__;
  if ((DAT_03778abe & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_821);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_set_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_4243);
    DAT_03778abe = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar4 == 0) || (FUN_017211cc(lVar4,1,1,1,1,0xfffffde1,0x220,0x292e), plVar3 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
  puVar1 = StringLiteral_4243;
  if (lVar5 == 0) {
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


