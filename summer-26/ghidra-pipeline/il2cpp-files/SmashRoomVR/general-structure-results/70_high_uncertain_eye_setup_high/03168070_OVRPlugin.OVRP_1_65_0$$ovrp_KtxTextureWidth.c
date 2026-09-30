/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth
ENTRY_POINT: 03168070
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureWidth(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 *unaff_x22;
  
  puVar1 = PTR_DAT_03d80800;
  lVar4 = *unaff_x20;
                    /* try { // try from 03168078 to 03268083 has its CatchHandler @ 03167f8c */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 03168084 to 0326808b has its CatchHandler @ 0316808c */
  if (uVar5 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316806c with catch @ 0316808c
                       catch(type#2 @ 00000000) { ... } // from try @ 03168084 with catch @ 0316808c
                        */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80800) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_031680d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_031680d4:
  (*(code *)*puVar2)();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
    uVar3 = thunk_FUN_01afaadc(*unaff_x22);
    FUN_02518558();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03168164;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,0);
LAB_03168164:
                    /* WARNING: Could not recover jumptable at 0x0316817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


