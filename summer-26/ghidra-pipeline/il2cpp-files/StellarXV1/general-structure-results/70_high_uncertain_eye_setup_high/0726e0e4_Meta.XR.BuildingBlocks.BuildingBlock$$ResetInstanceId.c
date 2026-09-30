/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$ResetInstanceId
ENTRY_POINT: 0726e0e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_BuildingBlocks_BuildingBlock__ResetInstanceId(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar6;
  int in_w8;
  long in_x9;
  long in_x10;
  long lVar7;
  long lVar8;
  uint uVar9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w23;
  undefined *puVar5;
  
  while (lVar7 = *(long *)(unaff_x20 + 0x88), lVar7 != 0) {
    iVar2 = (int)in_x10;
    if (*(uint *)(lVar7 + 0x18) <= (uint)(in_w8 + iVar2)) goto LAB_0726e264;
    lVar8 = lVar7 + in_x9 + in_x10;
    in_x10 = in_x10 + 1;
    *(undefined1 *)(lVar7 + iVar2 + 0x20) = *(undefined1 *)(lVar8 + 0x20);
    uVar6 = (ulong)*(int *)(unaff_x20 + 0x94);
    if ((long)uVar6 <= in_x9 + in_x10) {
      in_w8 = *(int *)(unaff_x20 + 0x90);
      lVar7 = *(long *)(unaff_x20 + 0x88);
      do {
        *(undefined4 *)(unaff_x20 + 0x90) = 0;
        *(int *)(unaff_x20 + 0x94) = (int)uVar6 - in_w8;
        do {
          iVar2 = FUN_0726e2b0(*(undefined8 *)(unaff_x20 + 0x78),lVar7);
          iVar2 = *(int *)(unaff_x20 + 0x94) + iVar2;
          iVar1 = iVar2 - *(int *)(unaff_x20 + 0x90);
          *(int *)(unaff_x20 + 0x94) = iVar2;
          if (iVar1 < 0x1a) {
            if (iVar1 < 0xb) {
              if (iVar1 != 10) {
                thunk_FUN_040dedf8(PTR_DAT_09285a20);
                uVar3 = thunk_FUN_040b4efc();
                puVar5 = PTR_DAT_092c1048;
                goto LAB_0726e284;
              }
            }
            else {
              iVar2 = FUN_0726e40c();
              unaff_w19 = iVar2 + unaff_w19;
            }
            if ((*(long *)(unaff_x20 + 0x80) == 0) || (lVar7 = FUN_0726e508(), lVar7 == 0))
            goto LAB_0726e260;
            uVar6 = 0;
            goto LAB_0726e1f4;
          }
          iVar2 = FUN_0726e40c();
          unaff_w19 = iVar2 + unaff_w19;
          if (unaff_w23 <= unaff_w19) {
            return unaff_w19;
          }
          lVar7 = *(long *)(unaff_x20 + 0x88);
          if (lVar7 == 0) goto LAB_0726e260;
          in_w8 = *(int *)(unaff_x20 + 0x90);
          uVar9 = *(uint *)(unaff_x20 + 0x94);
          uVar6 = (ulong)uVar9;
        } while ((int)((in_w8 - uVar9) + 0x1a) <= (int)(*(int *)(lVar7 + 0x18) - uVar9));
      } while ((int)uVar9 <= in_w8);
      in_x9 = (long)in_w8;
      in_x10 = 0;
    }
  }
LAB_0726e260:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0726e1f4:
  if (*(uint *)(lVar7 + 0x18) == uVar6) {
LAB_0726e264:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  lVar8 = *(long *)(unaff_x20 + 0x88);
  if (lVar8 == 0) goto LAB_0726e260;
  uVar9 = (int)uVar6 + *(int *)(unaff_x20 + 0x90);
  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0726e264;
  if (*(char *)(lVar7 + 0x20 + uVar6) != *(char *)(lVar8 + (int)uVar9 + 0x20)) {
    thunk_FUN_040dedf8(PTR_DAT_09285a20);
    uVar3 = thunk_FUN_040b4efc();
    puVar5 = PTR_DAT_092c1050;
LAB_0726e284:
    uVar4 = thunk_FUN_040dedf8(puVar5);
    FUN_076b16a0(uVar3,uVar4,0);
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c1058);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,uVar4);
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == 10) {
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    thunk_FUN_040ec700(unaff_x20 + 0x88,0);
    return unaff_w19;
  }
  goto LAB_0726e1f4;
}


