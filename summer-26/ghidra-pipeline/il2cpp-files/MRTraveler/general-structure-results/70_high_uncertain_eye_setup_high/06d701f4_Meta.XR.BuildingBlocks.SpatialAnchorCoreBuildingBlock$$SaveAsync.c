/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$SaveAsync
ENTRY_POINT: 06d701f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__SaveAsync(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  int iVar11;
  long *unaff_x24;
  long *unaff_x25;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  iVar3 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  puVar2 = PTR_DAT_08e85458;
  puVar1 = PTR_DAT_08e71508;
  if (0 < iVar3) {
    iVar11 = 0;
    iVar12 = 0;
    do {
      lVar8 = *unaff_x25;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06d70280;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d70280:
      uVar5 = (*(code *)*puVar4)();
      auVar13 = FUN_06d74c8c(unaff_x24,uVar5);
      uVar9 = auVar13._8_8_;
      lVar8 = auVar13._0_8_;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x50) != '\0')) {
        lVar6 = FUN_07454b34(unaff_x24,uVar9,0);
        (**(code **)(*unaff_x24 + 600))
                  (unaff_x24,uVar9 & 0xffffffff,*(undefined8 *)(*unaff_x24 + 0x260));
        if (in_stack_00000058 == 0) goto LAB_06d7040c;
        if (iVar11 < *(int *)(in_stack_00000058 + 0x18)) {
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          auVar14 = FUN_085decd4(in_stack_00000050,0,0);
          if ((auVar14._0_8_ & 1) != 0) {
            lVar7 = *(long *)puVar2;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar7 = *(long *)puVar2;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar7 == 0) {
LAB_06d7040c:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(uint *)(lVar7 + 0x18) <= auVar13._8_4_) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            if (in_stack_00000050 == 0) goto LAB_06d7040c;
            auVar14 = UnityEngine_UI_Button_<OnFinishSubmit>d__9__MoveNext
                                (in_stack_00000050,
                                 *(undefined4 *)(lVar7 + ((long)(uVar9 << 0x20) >> 0x1e) + 0x20),0);
          }
          if (lVar6 == 0) {
            FUN_06d74d64(auVar14._0_8_,auVar14._8_8_,in_stack_00000038,in_stack_00000040,
                         in_stack_00000048,in_stack_00000058,iVar11,lVar8);
          }
          else {
            FUN_06d74e94(auVar14._0_8_,auVar14._8_8_,in_stack_00000038,in_stack_00000040,
                         in_stack_00000048,in_stack_00000058,lVar6,iVar11);
          }
          iVar11 = iVar11 + 1;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar3);
  }
  return;
}


