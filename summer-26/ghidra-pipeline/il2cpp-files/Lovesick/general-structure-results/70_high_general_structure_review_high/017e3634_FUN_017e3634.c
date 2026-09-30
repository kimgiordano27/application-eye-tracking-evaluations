/*
FUNCTION_NAME: FUN_017e3634
ENTRY_POINT: 017e3634
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_017e3634(void)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 017e3634 to 018e3637 has its CatchHandler @ 017e3648 */
  puVar1 = StringLiteral_5949;
                    /* catch() { ... } // from try @ 017e3634 with catch @ 017e3648 */
  if ((DAT_037791ee & 1) == 0) {
                    /* try { // try from 017e3658 to 018e3667 has its CatchHandler @ 017e367c */
    thunk_FUN_00d48444(StringLiteral_5949);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<Vector2>__);
                    /* try { // try from 017e3668 to 018e3673 has its CatchHandler @ 017e3538 */
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlBaseConverter_DecimalToUInt64__);
                    /* try { // try from 017e3674 to 018e367b has its CatchHandler @ 017e367c */
    DAT_037791ee = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017e3658 with catch @ 017e367c
                       catch(type#2 @ 00000000) { ... } // from try @ 017e3674 with catch @ 017e367c
                        */
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Xml_Schema_XmlBaseConverter_DecimalToUInt64__;
  if (lVar2 != 0) {
    FUN_017da020(lVar2,0,*(undefined8 *)
                          Method_FullSerializer_fsBaseConverter_SerializeMember<Vector2>__,0);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


