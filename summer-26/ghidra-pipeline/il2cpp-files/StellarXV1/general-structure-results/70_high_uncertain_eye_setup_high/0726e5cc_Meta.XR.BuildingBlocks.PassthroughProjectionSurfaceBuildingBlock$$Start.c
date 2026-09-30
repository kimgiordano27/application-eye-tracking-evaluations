/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.PassthroughProjectionSurfaceBuildingBlock$$Start
ENTRY_POINT: 0726e5cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_PassthroughProjectionSurfaceBuildingBlock__Start(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  char in_NG;
  char in_OV;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint in_stack_00000008;
  uint uStack000000000000000c;
  
  uStack000000000000000c = unaff_w20;
  if (in_NG == in_OV) {
    uVar12 = 0;
    do {
      uVar5 = *(uint *)(unaff_x22 + 0x30);
      if (uVar5 == 0x10) {
        lVar9 = *(long *)(unaff_x22 + 0x20);
        if (lVar9 == 0) goto LAB_0726e780;
        uVar5 = 0;
        while( true ) {
          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_0726e784;
          uVar1 = *(byte *)(lVar9 + (int)uVar5 + 0x20) + 1;
          *(char *)(lVar9 + (int)uVar5 + 0x20) = (char)uVar1;
          lVar9 = *(long *)(unaff_x22 + 0x20);
          if (uVar1 >> 8 == 0) break;
          uVar5 = uVar5 + 1;
          if (lVar9 == 0) goto LAB_0726e780;
        }
        plVar10 = *(long **)(unaff_x22 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_0726e780;
        lVar6 = *plVar10;
        uVar2 = *(undefined4 *)(unaff_x22 + 0x10);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092abcf8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_0726e698;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092abcf8,3);
LAB_0726e698:
        (*(code *)*puVar4)(plVar10,lVar9,0,uVar2,uVar11,0,puVar4[1]);
        uVar5 = 0;
        *(undefined4 *)(unaff_x22 + 0x30) = 0;
      }
      if (unaff_x23 == 0) goto LAB_0726e780;
      uVar7 = uVar12 + (unaff_x24 & 0xffffffff);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar7) {
LAB_0726e784:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar9 = *(long *)(unaff_x22 + 0x28);
      bVar3 = *(byte *)(unaff_x23 + (int)uVar7 + 0x20);
      *(uint *)(unaff_x22 + 0x30) = uVar5 + 1;
      if (lVar9 == 0) goto LAB_0726e780;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_0726e784;
      if (unaff_x21 == 0) goto LAB_0726e780;
      uVar7 = uVar12 + in_stack_00000008;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_0726e784;
      uVar12 = uVar12 + 1;
      *(byte *)(unaff_x21 + (int)uVar7 + 0x20) = *(byte *)(lVar9 + (int)uVar5 + 0x20) ^ bVar3;
    } while (uVar12 != unaff_w20);
  }
  if (*(char *)(unaff_x22 + 0x50) != '\0') {
    if (*(long *)(unaff_x22 + 0x40) == 0) {
LAB_0726e780:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_075180c8();
  }
  return uStack000000000000000c;
}


