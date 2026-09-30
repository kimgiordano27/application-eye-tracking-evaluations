/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 0572987c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_058572c8(param_2,**(undefined8 **)(param_1 + 0xf18),param_4,0);
  if ((*(long *)(unaff_x19 + 0x50) != 0) && (1 < *(uint *)(unaff_x19 + 0x6c))) {
    FUN_058572c8();
  }
  uVar1 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x20 + 0x40),0);
  if ((uVar1 & 1) != 0) {
    FUN_058572c8();
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x78);
    *(long *)(*(long *)(unaff_x19 + 0x88) + 0x28) = unaff_x19;
    if (lVar2 == 0) goto LAB_0572997c;
    uVar1 = FUN_05825608(lVar2,0);
    if ((uVar1 & 1) == 0) {
      FUN_058572c8();
    }
    FUN_05727d7c();
  }
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar1 = FUN_05825608(*(long *)(unaff_x19 + 0x78),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_05729b28();
    return;
  }
LAB_0572997c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


