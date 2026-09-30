/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 01f90ad4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__IsMrcActivated(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar5;
  
  thunk_FUN_01279b34(PTR_DAT_027c1b40);
  thunk_FUN_01279b34(PTR_DAT_027bca20);
  thunk_FUN_01279b34(PTR_DAT_027b46b8);
                    /* try { // try from 01f90afc to 02090c03 has its CatchHandler @ 01f90978 */
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x21 + 0xef2) = 1;
  uVar3 = FUN_01ee5028();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar5 = thunk_FUN_0124bba8();
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1b48);
    FUN_01e75914(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1b60);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar4);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar2 = (**(code **)(*unaff_x19 + 0x198))();
  if (iVar2 == 2) {
    uVar5 = *(undefined8 *)PTR_DAT_027c1b40;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar5);
    bVar1 = *(byte *)(*(long *)PTR_DAT_027bca20 + 0x130);
                    /* try { // try from 01f90c04 to 02090c07 has its CatchHandler @ 01f90c18 */
                    /* try { // try from 01f90c08 to 02090c0b has its CatchHandler @ 01f90c1c */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f90a9c with catch @ 01f90c0c
                       try { // try from 01f90c0c to 02090c3b has its CatchHandler @ 01f90978 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f90a6c with catch @ 01f90c10
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f90a58 with catch @ 01f90c14
                        */
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027bca20)
       ) {
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f90c04 with catch @ 01f90c18
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f90aa0 with catch @ 01f90c1c
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f90c08 with catch @ 01f90c1c
                        */
      FUN_01f90644();
      return;
    }
  }
  else {
    if (iVar2 != 0x10) {
                    /* try { // try from 01f90c3c to 02090c3f has its CatchHandler @ 01f90c54 */
      uVar5 = *(undefined8 *)PTR_DAT_027c1b40;
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
                    /* catch() { ... } // from try @ 01f90c3c with catch @ 01f90c54 */
      FUN_01f7d8a0(uVar5);
                    /* try { // try from 01f90c60 to 02090c6b has its CatchHandler @ 01f90c80 */
                    /* try { // try from 01f90c6c to 02090c77 has its CatchHandler @ 01f90978 */
      uVar5 = (**(code **)(*unaff_x19 + 0x208))();
                    /* try { // try from 01f90c78 to 02090c7f has its CatchHandler @ 01f90c80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f90c60 with catch @ 01f90c80
                       catch(type#2 @ 00000000) { ... } // from try @ 01f90c78 with catch @ 01f90c80
                        */
      thunk_FUN_0124baac(uVar5,*(undefined8 *)PTR_DAT_027c1b38);
      return;
    }
    uVar5 = *(undefined8 *)PTR_DAT_027c1b40;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar5);
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b46b8 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b46b8)
       ) {
      FUN_01f90598();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60();
}


