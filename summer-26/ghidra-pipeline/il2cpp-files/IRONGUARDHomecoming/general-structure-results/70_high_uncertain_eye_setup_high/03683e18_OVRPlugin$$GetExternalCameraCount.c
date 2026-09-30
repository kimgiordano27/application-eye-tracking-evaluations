/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 03683e18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetExternalCameraCount(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long in_x9;
  undefined4 *puVar8;
  int *in_x10;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
                    /* try { // try from 03683e24 to 03783e83 has its CatchHandler @ 03683b4c */
      puVar4 = (undefined8 *)FUN_01ecb238();
      goto LAB_03683e40;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_03683e40:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined4 *)(unaff_x19 + 0x50);
    puVar8 = (undefined4 *)(unaff_x19 + 0x54);
    puVar9 = (undefined4 *)(unaff_x19 + 0x58);
    puVar10 = (undefined4 *)(unaff_x19 + 0x5c);
  }
  else {
    puVar7 = (undefined4 *)(unaff_x19 + 0x40);
    puVar8 = (undefined4 *)(unaff_x19 + 0x44);
    puVar9 = (undefined4 *)(unaff_x19 + 0x48);
    puVar10 = (undefined4 *)(unaff_x19 + 0x4c);
  }
  if (unaff_x20 != (long *)0x0) {
                    /* try { // try from 03683e84 to 03783e93 has its CatchHandler @ 03683e94 */
                    /* catch() { ... } // from try @ 03683e0c with catch @ 03683e94
                       catch() { ... } // from try @ 03683e84 with catch @ 03683e94 */
                    /* try { // try from 03683e98 to 03783e9b has its CatchHandler @ 03683ea4 */
    (**(code **)(*unaff_x20 + 0x2a8))(*puVar7,*puVar8,*puVar9,*puVar10);
                    /* try { // try from 03683e9c to 03783ea7 has its CatchHandler @ 03683b4c */
    if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03683dec with catch @ 03683ea4
                       catch(type#2 @ 00000000) { ... } // from try @ 03683e98 with catch @ 03683ea4
                        */
      lVar6 = FUN_040703d4(*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar3 = FUN_0407eaa0(*(long *)(unaff_x19 + 0x20),0), lVar6 != 0)) {
        FUN_04073314(lVar6,0 < iVar3,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar6 = FUN_040703d4(*(long *)(unaff_x19 + 0x28),0), lVar6 != 0)) {
          FUN_04073314(lVar6,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


