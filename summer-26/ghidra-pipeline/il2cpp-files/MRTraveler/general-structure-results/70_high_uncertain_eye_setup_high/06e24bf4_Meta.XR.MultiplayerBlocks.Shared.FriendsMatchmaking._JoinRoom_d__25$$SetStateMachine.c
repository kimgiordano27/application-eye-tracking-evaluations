/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<JoinRoom>d__25$$SetStateMachine
ENTRY_POINT: 06e24bf4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e24dec) */
/* WARNING: Removing unreachable block (ram,0x06e24f40) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<JoinRoom>d__25__SetStateMachine
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(param_1);
  }
  lVar6 = FUN_0713670c();
  if (lVar6 != 0) {
    plVar7 = (long *)FUN_071273a8(lVar6,0);
    puVar4 = PTR_DAT_08e936b8;
    puVar2 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar13 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06e24c80;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar7,lVar6,0);
LAB_06e24c80:
      uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_08e6a288;
      if ((uVar14 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03cf5138(plVar7,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar7 == (long *)0x0) goto LAB_06e24de0;
        lVar6 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar14 == 0) goto LAB_06e24db8;
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_06e24da0;
      }
      lVar13 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_06e24ce0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar7,lVar6,1);
LAB_06e24ce0:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      puVar10 = (undefined4 *)thunk_FUN_03cf5388();
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *puVar10;
      uVar14 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),uVar1,*unaff_x26);
      if ((uVar14 & 1) == 0) {
        in_stack_00000000._4_4_ = uVar1;
        uVar11 = thunk_FUN_03cf4e64(*unaff_x27,(long)&stack0x00000000 + 4);
        uVar11 = FUN_06f6be0c(*(undefined8 *)puVar4,uVar11,0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30(uVar11,uVar11);
        }
        FUN_06f84868();
      }
    } while( true );
  }
  goto LAB_06e24e7c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_06e24da0:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06e24dd4;
    }
  }
LAB_06e24db8:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_06e24dd4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_06e24de0:
  FUN_06e25034();
  puVar2 = PTR_DAT_08e69b48;
  lVar6 = *(long *)(unaff_x19 + 0x40);
  if (lVar6 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar5) {
        if (unaff_x20 == 0) break;
        iVar5 = FUN_06f7cb5c();
        if (0 < iVar5) {
          plVar7 = (long *)thunk_FUN_03d12a58();
          if (plVar7 == (long *)0x0) break;
          uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          uVar12 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93698);
          if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
          }
          FUN_06dfdedc(uVar11,uVar12,0,0);
        }
        return;
      }
      lVar13 = *(long *)(unaff_x19 + 0x38);
      uVar11 = FUN_05212a24(lVar6,iVar5,*(undefined8 *)puVar2);
      if (lVar13 == 0) break;
      uVar14 = FUN_06a3fecc(lVar13,uVar11,*unaff_x23);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        lVar6 = *(long *)(unaff_x19 + 0x38);
        uVar11 = FUN_05212a24(*(long *)(unaff_x19 + 0x40),iVar5,*(undefined8 *)puVar2);
        if (lVar6 == 0) break;
        FUN_06a3fcc4(lVar6,uVar11,iVar5,*unaff_x24);
      }
      lVar6 = *(long *)(unaff_x19 + 0x40);
      iVar5 = iVar5 + 1;
    } while (lVar6 != 0);
  }
LAB_06e24e7c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


