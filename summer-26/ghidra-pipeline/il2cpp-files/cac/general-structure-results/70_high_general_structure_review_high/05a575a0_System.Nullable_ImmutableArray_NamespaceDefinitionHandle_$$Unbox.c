/*
FUNCTION_NAME: System.Nullable<ImmutableArray<NamespaceDefinitionHandle>>$$Unbox
ENTRY_POINT: 05a575a0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Nullable<ImmutableArray<NamespaceDefinitionHandle>>__Unbox(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined *puVar4;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)((long)unaff_x20 + 0xc);
  if (iVar1 == 0) {
    thunk_FUN_03f786f8(&DAT_092c3ef0);
    uVar2 = thunk_FUN_03f4e68c();
    puVar4 = &DAT_09346588;
  }
  else {
    if (iVar1 < 0x40) {
      if (1 < iVar1) {
        FUN_08781964(param_1,iVar1,0);
        *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
      }
      *unaff_x20 = 0;
      return;
    }
    thunk_FUN_03f786f8(&DAT_092c3ef0);
    uVar2 = thunk_FUN_03f4e68c();
    puVar4 = &DAT_09346580;
  }
  uVar3 = thunk_FUN_03f786f8(puVar4);
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar2);
}


