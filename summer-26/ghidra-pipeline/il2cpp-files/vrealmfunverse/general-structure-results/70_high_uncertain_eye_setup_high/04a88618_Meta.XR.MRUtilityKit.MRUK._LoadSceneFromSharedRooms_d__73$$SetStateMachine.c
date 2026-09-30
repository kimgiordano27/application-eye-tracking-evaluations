/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromSharedRooms>d__73$$SetStateMachine
ENTRY_POINT: 04a88618
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromSharedRooms>d__73__SetStateMachine(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint in_w10;
  long lVar9;
  int *piVar10;
  long in_x13;
  int unaff_w21;
  long unaff_x22;
  long *plVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  uint uVar12;
  undefined8 unaff_x28;
  int iVar13;
  uint uStack000000000000000c;
  
  uVar12 = *(int *)(param_1 + 0x20) - 1;
  uStack000000000000000c = in_w10;
  if (-1 < (int)uVar12) {
    if (in_x13 == 0) goto LAB_04a888b0;
    uVar4 = *(undefined8 *)(in_x13 + 0x18);
    iVar13 = 0;
    lVar9 = in_x13 + 0x20;
    do {
      if ((uint)uVar4 <= uVar12) goto LAB_04a88870;
      if (*(int *)(lVar9 + (ulong)uVar12 * 0x18) == unaff_w21) {
        plVar11 = *(long **)(unaff_x26 + 0x30);
        if (plVar11 == (long *)0x0) goto LAB_04a888b0;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
        lVar5 = lVar9 + (ulong)uVar12 * 0x18;
        uVar4 = *(undefined8 *)(lVar5 + 8);
        uVar2 = *(undefined8 *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02b76218(lVar3);
        }
        lVar5 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04a886e0;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar1 = (undefined8 *)FUN_02b7654c(plVar11,lVar3,0);
LAB_04a886e0:
        uVar8 = (*(code *)*puVar1)(plVar11,uVar4,uVar2);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar4 = *(undefined8 *)(in_x13 + 0x18);
      }
      if ((int)(uint)uVar4 <= iVar13) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar4 = thunk_FUN_02b79644();
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,unaff_x22);
      }
      if ((uint)uVar4 <= uVar12) goto LAB_04a88870;
      iVar13 = iVar13 + 1;
      uVar12 = *(uint *)(lVar9 + (ulong)uVar12 * 0x18 + 4);
    } while (-1 < (int)uVar12);
  }
  uVar12 = *(uint *)(unaff_x26 + 0x28);
  if ((int)uVar12 < 0) {
    if (in_x13 == 0) goto LAB_04a888b0;
    uVar12 = *(uint *)(unaff_x26 + 0x24);
    uVar7 = *(uint *)(in_x13 + 0x18);
    if (uVar12 == uVar7) {
      FUN_04a88388(unaff_x26,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180))
      ;
      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a888b0;
      uVar12 = *(uint *)(unaff_x26 + 0x24);
      in_x13 = *(long *)(unaff_x26 + 0x18);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
      *(uint *)(unaff_x26 + 0x24) = uVar12 + 1;
      if (in_x13 == 0) goto LAB_04a888b0;
      iVar13 = 0;
      iVar6 = (int)uVar4;
      if (iVar6 != 0) {
        iVar13 = unaff_w21 / iVar6;
      }
      uStack000000000000000c = unaff_w21 - iVar13 * iVar6;
      uVar7 = *(uint *)(in_x13 + 0x18);
    }
    else {
      *(uint *)(unaff_x26 + 0x24) = uVar12 + 1;
    }
  }
  else {
    if (in_x13 == 0) goto LAB_04a888b0;
    uVar7 = *(uint *)(in_x13 + 0x18);
    if (uVar7 <= uVar12) goto LAB_04a88870;
    *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(in_x13 + (ulong)uVar12 * 0x18 + 0x24);
  }
  if (uVar12 < uVar7) {
    piVar10 = (int *)(in_x13 + 0x20 + (long)(int)uVar12 * 0x18);
    *(undefined8 *)(piVar10 + 2) = unaff_x25;
    *(undefined8 *)(piVar10 + 4) = unaff_x28;
    lVar9 = *(long *)(unaff_x26 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar9 == 0) {
LAB_04a888b0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((uStack000000000000000c < *(uint *)(lVar9 + 0x18)) && (uVar12 < *(uint *)(in_x13 + 0x18))) {
      lVar9 = lVar9 + (ulong)uStack000000000000000c * 4;
      *(int *)(in_x13 + 0x20 + (long)(int)uVar12 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1;
      *(uint *)(lVar9 + 0x20) = uVar12 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a88870:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


