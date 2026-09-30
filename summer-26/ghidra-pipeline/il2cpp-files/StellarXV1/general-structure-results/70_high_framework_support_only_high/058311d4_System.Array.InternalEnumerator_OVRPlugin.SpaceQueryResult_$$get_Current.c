/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 058311d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
                    /* catch() { ... } // from try @ 058311cc with catch @ 058311d8 */
                    /* try { // try from 058311dc to 059311e3 has its CatchHandler @ 058311ec */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 058311e4 to 059311ef has its CatchHandler @ 05831050 */
    lVar2 = FUN_040b1acc();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 058311dc with catch @ 058311ec
                        */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  if ((uint)unaff_x27 < *(uint *)(unaff_x24 + 3)) {
    FUN_04077538(lVar2,unaff_x25 + (ulong)*(uint *)(*unaff_x24 + 0x104) * unaff_x27);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    puVar3 = (undefined4 *)thunk_FUN_040d6b00();
    uVar1 = *puVar3;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    thunk_FUN_040d6b00();
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_03b2ebac();
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar1;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


