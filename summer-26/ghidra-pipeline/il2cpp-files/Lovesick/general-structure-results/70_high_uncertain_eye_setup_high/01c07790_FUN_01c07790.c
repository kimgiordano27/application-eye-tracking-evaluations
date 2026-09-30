/*
FUNCTION_NAME: FUN_01c07790
ENTRY_POINT: 01c07790
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01c07790(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint local_34;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__;
  if ((DAT_0377e964 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    DAT_0377e964 = 1;
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
  puVar1 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
                    /* try { // try from 01c077f0 to 01d077ff has its CatchHandler @ 01c07804 */
  lVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,0x100);
  local_34 = 0;
  while( true ) {
                    /* catch() { ... } // from try @ 01c07718 with catch @ 01c07804
                       catch() { ... } // from try @ 01c077f0 with catch @ 01c07804 */
                    /* try { // try from 01c07808 to 01d0780b has its CatchHandler @ 01c07b40 */
                    /* try { // try from 01c0780c to 01d07827 has its CatchHandler @ 01c05858 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01c06238 with catch @ 01c07810 */
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01731954(0);
                    /* try { // try from 01c07828 to 01d0783f has its CatchHandler @ 01c07914 */
    lVar9 = FUN_0176ecf8(&local_34,*(undefined8 *)puVar3,uVar8,0);
    uVar4 = local_34;
    if (lVar9 == 0) break;
    lVar10 = (long)(int)local_34;
                    /* try { // try from 01c07840 to 01d078ff has its CatchHandler @ 01c05858 */
    uVar5 = FUN_015fa29c(lVar9,0,0);
    iVar6 = FUN_015fa29c(lVar9,1,0);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(uint *)(lVar7 + lVar10 * 4 + 0x20) = uVar5 & 0xffff | iVar6 << 0x10;
    local_34 = local_34 + 1;
    if (0xff < (int)local_34) {
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


