/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$Start
ENTRY_POINT: 0726e128
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_BuildingBlocks_BuildingBlock__Start(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  int in_w8;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int unaff_w19;
  long unaff_x20;
  int unaff_w23;
  undefined *puVar6;
  
  do {
    lVar7 = *(long *)(unaff_x20 + 0x88);
    do {
      *(undefined4 *)(unaff_x20 + 0x90) = 0;
      *(int *)(unaff_x20 + 0x94) = (int)param_3 - in_w8;
      do {
        iVar3 = FUN_0726e2b0(*(undefined8 *)(unaff_x20 + 0x78),lVar7);
        iVar3 = *(int *)(unaff_x20 + 0x94) + iVar3;
        iVar2 = iVar3 - *(int *)(unaff_x20 + 0x90);
        *(int *)(unaff_x20 + 0x94) = iVar3;
        if (iVar2 < 0x1a) {
          if (iVar2 < 0xb) {
            if (iVar2 != 10) {
              thunk_FUN_040dedf8(PTR_DAT_09285a20);
              uVar4 = thunk_FUN_040b4efc();
              puVar6 = PTR_DAT_092c1048;
              goto LAB_0726e284;
            }
          }
          else {
            iVar3 = FUN_0726e40c();
            unaff_w19 = iVar3 + unaff_w19;
          }
          if ((*(long *)(unaff_x20 + 0x80) == 0) || (lVar7 = FUN_0726e508(), lVar7 == 0))
          goto LAB_0726e260;
          uVar8 = 0;
          goto LAB_0726e1f4;
        }
        iVar3 = FUN_0726e40c();
        unaff_w19 = iVar3 + unaff_w19;
        if (unaff_w23 <= unaff_w19) {
          return unaff_w19;
        }
        lVar7 = *(long *)(unaff_x20 + 0x88);
        if (lVar7 == 0) goto LAB_0726e260;
        in_w8 = *(int *)(unaff_x20 + 0x90);
        uVar10 = *(uint *)(unaff_x20 + 0x94);
        param_3 = (ulong)uVar10;
      } while ((int)((in_w8 - uVar10) + 0x1a) <= (int)(*(int *)(lVar7 + 0x18) - uVar10));
    } while ((int)uVar10 <= in_w8);
    lVar7 = 0;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x88);
      if (lVar9 == 0) goto LAB_0726e260;
      iVar3 = (int)lVar7;
      if (*(uint *)(lVar9 + 0x18) <= (uint)(in_w8 + iVar3)) goto LAB_0726e264;
      lVar1 = lVar9 + in_w8 + lVar7;
      lVar7 = lVar7 + 1;
      *(undefined1 *)(lVar9 + iVar3 + 0x20) = *(undefined1 *)(lVar1 + 0x20);
      param_3 = (ulong)*(int *)(unaff_x20 + 0x94);
    } while (in_w8 + lVar7 < (long)param_3);
    in_w8 = *(int *)(unaff_x20 + 0x90);
  } while( true );
LAB_0726e1f4:
  if (*(uint *)(lVar7 + 0x18) == uVar8) {
LAB_0726e264:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  lVar9 = *(long *)(unaff_x20 + 0x88);
  if (lVar9 == 0) {
LAB_0726e260:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar10 = (int)uVar8 + *(int *)(unaff_x20 + 0x90);
  if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_0726e264;
  if (*(char *)(lVar7 + 0x20 + uVar8) != *(char *)(lVar9 + (int)uVar10 + 0x20)) {
    thunk_FUN_040dedf8(PTR_DAT_09285a20);
    uVar4 = thunk_FUN_040b4efc();
    puVar6 = PTR_DAT_092c1050;
LAB_0726e284:
    uVar5 = thunk_FUN_040dedf8(puVar6);
    FUN_076b16a0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c1058);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,uVar5);
  }
  uVar8 = uVar8 + 1;
  if (uVar8 == 10) {
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    thunk_FUN_040ec700(unaff_x20 + 0x88,0);
    return unaff_w19;
  }
  goto LAB_0726e1f4;
}


