/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 0625c000
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(void)

{
  bool in_CY;
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (in_CY) {
    FUN_06389a4c();
  }
  uVar1 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth
                    (*(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x20 + 0x40),0);
  if ((uVar1 & 1) != 0) {
    FUN_06389a4c();
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x78);
    *(long *)(*(long *)(unaff_x19 + 0x88) + 0x28) = unaff_x19;
    if (lVar2 == 0) goto LAB_0625c0e0;
    uVar1 = FUN_06357d8c(lVar2,0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 0625c07c to 0635c083 has its CatchHandler @ 0625c2c4 */
      FUN_06389a4c();
    }
    FUN_0625a4e0();
  }
  if (*(long *)(unaff_x19 + 0x78) != 0) {
                    /* try { // try from 0625c0a8 to 0635c0b7 has its CatchHandler @ 0625c2cc */
    uVar1 = FUN_06357d8c(*(long *)(unaff_x19 + 0x78),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
                    /* try { // try from 0625c0d8 to 0635c0e7 has its CatchHandler @ 0625c2b8 */
    FUN_0625c28c();
    return;
  }
LAB_0625c0e0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


