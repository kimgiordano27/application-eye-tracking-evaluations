/*
FUNCTION_NAME: System.Nullable<ImmutableArray<NamespaceDefinitionHandle>>$$UnboxExact
ENTRY_POINT: 05a5765c
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Nullable<ImmutableArray<NamespaceDefinitionHandle>>__UnboxExact(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  
  FUN_03f13384(&DAT_093067c8);
  *(undefined1 *)(unaff_x23 + 0xbfc) = 1;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  if (*unaff_x20 != 0) {
    if (0x3f < *(int *)((long)unaff_x20 + 0xc)) {
      thunk_FUN_03f786f8(&DAT_092c3ef0);
      uVar1 = thunk_FUN_03f4e68c();
      uVar2 = thunk_FUN_03f786f8(&DAT_09346580);
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar1);
    }
    if (*(int *)((long)unaff_x20 + 0xc) < 2) {
      *unaff_x20 = 0;
    }
    else {
      FUN_049ce464();
      *unaff_x20 = 0;
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
  }
  return;
}


