/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$TrySerialize
ENTRY_POINT: 036d7b9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsTypeConverter__TrySerialize(void)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x19;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 in_stack_00000008;
  
  uVar10 = FUN_0391f968();
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)FUN_036d2ec0();
    if (plVar11 == (long *)0x0) goto LAB_036d7db0;
    uVar10 = (**(code **)(*plVar11 + 0x2f8))(plVar11,*(undefined8 *)(*plVar11 + 0x300));
    if ((uVar10 & 1) != 0) {
      uVar3 = FUN_036d34d0();
      FUN_03926528(uVar3 & 1,0);
    }
  }
  uVar10 = FUN_036d3614();
  if (((uVar10 & 1) == 0) && (*(char *)(unaff_x19 + 0x230) == '\0')) {
    iVar15 = *(int *)(unaff_x19 + 0x184);
    if (iVar15 != 2) {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    }
    else {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    }
    uVar12 = FUN_03926364(*(undefined8 *)(unaff_x19 + 0x220),*(undefined4 *)(unaff_x19 + 0x18c),
                          iVar15 == 1,*(int *)(unaff_x19 + 400) - 1U < 2,iVar15 == 2,0,uVar12,
                          *(undefined4 *)(unaff_x19 + 0x1ac));
    *(undefined8 *)(unaff_x19 + 0x100) = uVar12;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x100),uVar12);
    if (*(char *)(unaff_x19 + 0x2c8) != '\0') {
      FUN_036d6aac();
    }
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      iVar15 = *(int *)(unaff_x19 + 0x234);
      iVar4 = FUN_036d3064();
      iVar14 = *(int *)(unaff_x19 + 0x238);
      iVar5 = FUN_036d3064();
      if (iVar4 + iVar15 < iVar5 + iVar14) {
        iVar15 = *(int *)(unaff_x19 + 0x238);
        iVar4 = FUN_036d3064();
        iVar14 = *(int *)(unaff_x19 + 0x234);
      }
      else {
        iVar15 = *(int *)(unaff_x19 + 0x234);
        iVar4 = FUN_036d3064();
        iVar14 = *(int *)(unaff_x19 + 0x238);
      }
      iVar6 = FUN_036d3064();
      lVar13 = *(long *)(unaff_x19 + 0x100);
      iVar5 = *(int *)(unaff_x19 + 0x234);
      iVar7 = FUN_036d3064();
      iVar9 = *(int *)(unaff_x19 + 0x238);
      iVar8 = FUN_036d3064();
      lVar1 = 0x234;
      if (iVar8 + iVar9 <= iVar7 + iVar5) {
        lVar1 = 0x238;
      }
      iVar5 = *(int *)(unaff_x19 + lVar1);
      iVar9 = FUN_036d3064();
      in_stack_00000008 = 0;
      FUN_03921288(&stack0x00000008,iVar9 + iVar5,((iVar4 + iVar15) - iVar14) - iVar6,0);
      if (lVar13 == 0) {
LAB_036d7db0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0392676c(lVar13,in_stack_00000008,0);
    }
  }
  bVar2 = FUN_039262d0(0);
  *(byte *)(unaff_x19 + 0x2a9) = bVar2 & 1;
  *(undefined1 *)(unaff_x19 + 0x270) = 1;
  *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x220);
  thunk_FUN_01b4f09c(unaff_x19 + 0x290);
  *(undefined1 *)(unaff_x19 + 0x298) = 0;
  FUN_036d6a64();
  FUN_036d3a30();
  return;
}


