/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 05670988
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__InitializeInsightPassthrough(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  char unaff_w26;
  long unaff_x27;
  undefined4 unaff_s9;
  undefined4 uStack000000000000003c;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Collections_Generic_List<IntPtr>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<IntegratedSubsystem>_TypeInfo);
                    /* try { // try from 056709a4 to 057709ab has its CatchHandler @ 05670a60 */
  FUN_02d965b8(System_Collections_Generic_List<IntegratedSubsystemDescriptor>_TypeInfo);
  FUN_02d965b8(System_Func<FileInfo,_DateTime>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<InternedString>_TypeInfo);
                    /* try { // try from 056709cc to 057709e3 has its CatchHandler @ 05670a64 */
  FUN_02d965b8(System_Collections_Generic_List<InterpretedFrameInfo>_TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x652) = 1;
  if (*(long *)(unaff_x20 + 0x170) != 0) {
                    /* try { // try from 056709e4 to 05770a7f has its CatchHandler @ 056707c4 */
    uVar1 = FUN_04e937e4();
    if ((uVar1 & 1) == 0) {
      uStack000000000000003c = unaff_s9;
      if ((unaff_w26 == '\0') && (DAT_06db4dff == '\0')) {
        FUN_02d965b8(PTR_DAT_069fb978);
        DAT_06db4dff = '\x01';
      }
      uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<InternedString>_TypeInfo);
      FUN_0563f7c8(uStack000000000000003c);
      if (*(long *)(unaff_x20 + 0x170) != 0) {
        FUN_04e935dc();
        *(undefined1 *)(unaff_x20 + 0x179) = 1;
        return uVar2;
      }
    }
    else {
      uVar2 = FUN_05362cb4(*(undefined8 *)
                            System_Collections_Generic_List<InterpretedFrameInfo>_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630bbe4(uVar2,0);
      if (*(long *)(unaff_x20 + 0x170) != 0) {
        uVar2 = FUN_04e93570();
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


