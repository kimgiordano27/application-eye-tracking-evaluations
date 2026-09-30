/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$Invoke
ENTRY_POINT: 04a6f984
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__Invoke(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  
  iVar5 = *(int *)(unaff_x19 + 0x20);
  if (iVar5 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar4 = PTR_DAT_06313588;
    iVar5 = FUN_04d21b24(iVar5,0);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    lVar8 = FUN_02b3c908(lVar8,iVar5);
    lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,iVar5);
    iVar11 = *(int *)(unaff_x19 + 0x24);
    if (iVar11 < 1) {
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      uVar7 = 0;
      lVar10 = 0x20;
      do {
        lVar13 = *(long *)(unaff_x19 + 0x18);
        if (lVar13 == 0) {
LAB_04a6fb2c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_04a6fb28;
        if (-1 < *(int *)(lVar13 + lVar10)) {
          if (lVar8 == 0) goto LAB_04a6fb2c;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
LAB_04a6fb28:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar12 = (long)(int)uVar7;
          uVar14 = *(undefined8 *)(lVar13 + lVar10);
          lVar1 = lVar8 + lVar12 * 0x10;
          *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar13 + lVar10))[1];
          *(undefined8 *)(lVar1 + 0x20) = uVar14;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_04a6fb28;
          if (lVar6 == 0) goto LAB_04a6fb2c;
          iVar3 = (int)uVar14;
          iVar11 = 0;
          if (iVar5 != 0) {
            iVar11 = iVar3 / iVar5;
          }
          uVar2 = iVar3 - iVar11 * iVar5;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_04a6fb28;
          lVar13 = lVar6 + (long)(int)uVar2 * 4;
          uVar7 = uVar7 + 1;
          *(int *)(lVar8 + lVar12 * 0x10 + 0x24) = *(int *)(lVar13 + 0x20) + -1;
          *(uint *)(lVar13 + 0x20) = uVar7;
          iVar11 = *(int *)(unaff_x19 + 0x24);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar9 < (long)iVar11);
    }
    *(uint *)(unaff_x19 + 0x24) = uVar7;
    *(long *)(unaff_x19 + 0x18) = lVar8;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar8);
    *(long *)(unaff_x19 + 0x10) = lVar6;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar6);
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  }
  return;
}


