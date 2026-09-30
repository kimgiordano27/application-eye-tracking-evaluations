/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 05827998
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long in_x3;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  undefined1 auVar14 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  iVar3 = FUN_0360f354(&stack0x00000010,0);
  iVar4 = FUN_0360f368(&stack0x00000010,0);
  lVar12 = *(long *)(*(long *)(*(long *)(in_x3 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_02feb2c4(lVar12);
  }
  plVar6 = (long *)FUN_02fe9340(lVar12,iVar4 * iVar3);
  iVar3 = *(int *)(unaff_x19 + 0x14);
  if (0 < iVar3) {
    iVar11 = *(int *)(unaff_x19 + 0x10);
    iVar4 = 0;
    do {
      if (0 < iVar11) {
        iVar3 = 0;
        do {
          uVar7 = FUN_0360f2c4(&stack0x00000010,iVar3,iVar4,0);
          iVar2 = iStack0000000000000014;
          iVar11 = iStack0000000000000010;
          if ((uVar7 & 1) != 0) {
            iVar5 = FUN_0360f354(&stack0x00000010,0);
            lVar12 = *(long *)(unaff_x19 + 0x18);
            if (lVar12 == 0) goto LAB_05827c48;
            uVar1 = iVar3 + iVar4 * *(int *)(unaff_x19 + 0x10);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05827c44;
            if (plVar6 == (long *)0x0) goto LAB_05827c48;
            lVar12 = *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar8 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_05827c4c;
            uVar1 = iVar3 + (iVar5 * (iVar4 - iVar2) - iVar11);
            if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_05827c44;
            plVar6[(long)(int)uVar1 + 4] = lVar12;
            thunk_FUN_03048534(plVar6 + (long)(int)uVar1 + 4,lVar12);
          }
          iVar11 = *(int *)(unaff_x19 + 0x10);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar11);
        iVar3 = *(int *)(unaff_x19 + 0x14);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (plVar6 != (long *)0x0) {
    if (0 < (int)plVar6[3]) {
      lVar12 = 0;
      uVar7 = 0;
      uVar13 = plVar6[3] & 0xffffffff;
      do {
        if (uVar13 <= uVar7) {
LAB_05827c44:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        if (plVar6[uVar7 + 4] == 0) {
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(in_x3 + 0x20) + 0xc0) + 0x48) + 0x135) & 1)
              == 0) {
            FUN_02feb2c4();
          }
          lVar8 = thunk_FUN_0301080c();
          FUN_041427c8(lVar8,*(undefined8 *)(*(long *)(*(long *)(in_x3 + 0x20) + 0xc0) + 0x50));
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_03010710(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_05827c4c:
            uVar10 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                               ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar10,0);
          }
          if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_05827c44;
          plVar6[uVar7 + 4] = lVar8;
          thunk_FUN_03048534((long)plVar6 + lVar12 + 0x20,lVar8);
        }
        uVar13 = (ulong)*(uint *)(plVar6 + 3);
        uVar7 = uVar7 + 1;
        lVar12 = lVar12 + 8;
      } while ((long)uVar7 < (long)(int)*(uint *)(plVar6 + 3));
    }
    uVar7 = FUN_0360f354(&stack0x00000010,0);
    lVar12 = FUN_0360f368(&stack0x00000010,0);
    *(long *)(unaff_x19 + 0x18) = (long)plVar6;
    *(ulong *)(unaff_x19 + 0x10) = uVar7 & 0xffffffff | lVar12 << 0x20;
    thunk_FUN_03048534((long *)(unaff_x19 + 0x18),plVar6);
    iVar3 = iStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x18);
      FUN_0360f354(&stack0x00000010,0);
      FUN_0360f368(&stack0x00000010,0);
      FUN_0360f2b8();
      if (lVar12 != 0) {
        do {
          auVar14 = FUN_0360f980(lVar12 + 0x28,CONCAT44(-iStack0000000000000014,-iVar3),0);
          auVar14 = FUN_0360f548(auVar14._0_8_,auVar14._8_8_,uStack0000000000000000,
                                 uStack0000000000000008,0);
          *(undefined1 (*) [16])(lVar12 + 0x28) = auVar14;
          lVar12 = *(long *)(lVar12 + 0x18);
        } while (lVar12 != 0);
      }
      return;
    }
  }
LAB_05827c48:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


