/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.AvatarBehaviourFusion$$Spawned
ENTRY_POINT: 052f37b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_AvatarBehaviourFusion__Spawned(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  uint uVar13;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3de98);
    FUN_02f07e70(PTR_DAT_06d094e0);
    FUN_02f07e70(PTR_DAT_06d094e8);
    FUN_02f07e70(PTR_DAT_06d09248);
    FUN_02f07e70(PTR_DAT_06d01fb8);
    FUN_02f07e70(PTR_DAT_06d12750);
    FUN_02f07e70(PTR_DAT_06d3dea0);
                    /* try { // try from 052f3814 to 053f383b has its CatchHandler @ 052f3978 */
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d0b520);
    FUN_02f07e70(PTR_DAT_06d3dea8);
    FUN_02f07e70(PTR_DAT_06d3deb0);
    *(undefined1 *)(unaff_x20 + 0x1e2) = 1;
  }
  lVar6 = FUN_037f22a4(param_2,*unaff_x21);
  puVar5 = PTR_DAT_06d3deb0;
  puVar4 = PTR_DAT_06d12750;
  puVar3 = PTR_DAT_06d0b520;
  puVar2 = PTR_DAT_06d094e8;
  if (lVar6 != 0) {
                    /* try { // try from 052f3858 to 053f38b7 has its CatchHandler @ 052f397c */
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar12 = *(long *)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar12 == 0) || (lVar7 = FUN_066c67ec(lVar12,0), lVar7 == 0)) goto LAB_052f3a2c;
        uVar8 = FUN_03a8638c(lVar7,*(undefined8 *)PTR_DAT_06d09248);
                    /* try { // try from 052f38cc to 053f38db has its CatchHandler @ 052f3974 */
        if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                    /* try { // try from 052f38dc to 053f3963 has its CatchHandler @ 052f370c */
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
        }
        uVar9 = FUN_066cd30c(uVar8,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_2 + 0x30) == 0) goto LAB_052f3a2c;
          FUN_05242864(*(long *)(param_2 + 0x30),uVar8,*(undefined8 *)PTR_DAT_06d3dea0);
        }
        lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
        FUN_066c9ce0(lVar10,*(undefined8 *)PTR_DAT_06d3dea8,0);
        if (lVar10 == 0) goto LAB_052f3a2c;
        lVar11 = FUN_066c9a48(lVar10,0);
        uVar8 = FUN_066c9a48(lVar7,0);
        if (lVar11 == 0) goto LAB_052f3a2c;
        FUN_066d51ec(lVar11,uVar8,0,0);
        lVar7 = FUN_03a862a4(lVar10,*(undefined8 *)PTR_DAT_06d094e0);
        uVar8 = FUN_066a6534(lVar12,0);
        if (lVar7 == 0) goto LAB_052f3a2c;
        FUN_066a6570(lVar7,uVar8,0);
        lVar12 = FUN_03a862a4(lVar10,*(undefined8 *)puVar2);
        uVar8 = FUN_03b659e4(*(undefined8 *)puVar5,*(undefined8 *)puVar3);
        if (lVar12 == 0) goto LAB_052f3a2c;
        FUN_066a1d74(lVar12,uVar8,0);
        if (*(long *)(param_2 + 0x28) == 0) goto LAB_052f3a2c;
        FUN_05242864(*(long *)(param_2 + 0x28),lVar10,*(undefined8 *)puVar4);
        FUN_066c9b04(lVar10,0,0);
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return;
  }
LAB_052f3a2c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


