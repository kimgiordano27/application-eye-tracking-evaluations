/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 03135418
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar2 = (long *)thunk_FUN_01de26bc();
  if (plVar2 == (long *)0x0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_01e10808();
    FUN_03137ce0();
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03135504;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,lVar5,0);
LAB_03135504:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 031355b8 to 032355bb has its CatchHandler @ 031355bc */
      lVar5 = FUN_01dde7f8();
    }
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 031355b8 with catch @ 031355bc
                       try { // try from 031355bc to 032355df has its CatchHandler @ 03135364 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03135590 with catch @ 031355c0
                        */
    if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0313551c with catch @ 031355c4
                        */
      thunk_FUN_01dc4f30();
    }
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03135594 with catch @ 031355c8
                        */
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8();
    }
                    /* try { // try from 031355e0 to 032355f7 has its CatchHandler @ 0313562c */
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 031355f8 to 0323561b has its CatchHandler @ 03135364 */
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
                    /* try { // try from 0313551c to 0323555f has its CatchHandler @ 031355c4 */
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8();
  }
  uVar4 = FUN_01d7d9bc(lVar5,iVar1);
  puVar3 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_01e10808(puVar3,uVar4);
  uVar4 = *puVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_03135610;
      }
                    /* try { // try from 03135590 to 03235593 has its CatchHandler @ 031355c0 */
      uVar7 = uVar7 - 1;
                    /* try { // try from 03135594 to 032355a7 has its CatchHandler @ 031355c8 */
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,lVar5,5);
                    /* try { // try from 031355a8 to 032355b7 has its CatchHandler @ 03135364 */
LAB_03135610:
                    /* try { // try from 0313561c to 0323562b has its CatchHandler @ 0313562c */
  (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


