/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<OnJoinIntentReceived>d__31$$MoveNext
ENTRY_POINT: 06e24c5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e24dec) */
/* WARNING: Removing unreachable block (ram,0x06e24f40) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<OnJoinIntentReceived>d__31__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong in_x9;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  
code_r0x06e24c5c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_06e24c4c;
LAB_06e24c64:
  puVar4 = (undefined8 *)FUN_03cf1348();
  do {
    uVar5 = (*(code *)*puVar4)();
    puVar2 = PTR_DAT_08e6a288;
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03cf5138();
      if (plVar6 == (long *)0x0) goto LAB_06e24de0;
      lVar10 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 == 0) goto LAB_06e24db8;
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06e24ce0;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06e24ce0:
    plVar6 = (long *)(*(code *)*puVar4)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc();
    }
    puVar7 = (undefined4 *)thunk_FUN_03cf5388();
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *puVar7;
    uVar5 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),uVar1,*unaff_x26);
    if ((uVar5 & 1) == 0) {
      in_stack_00000000._4_4_ = uVar1;
      uVar8 = thunk_FUN_03cf4e64(*unaff_x27,(long)&stack0x00000000 + 4);
      uVar8 = FUN_06f6be0c(*unaff_x29,uVar8,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar8,uVar8);
      }
      FUN_06f84868();
    }
    param_1 = *unaff_x21;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_06e24c64;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06e24c4c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x06e24c5c;
    }
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06e24dd4;
    }
  }
LAB_06e24db8:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_06e24dd4:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_06e24de0:
  FUN_06e25034();
  puVar2 = PTR_DAT_08e69b48;
  lVar10 = *(long *)(unaff_x19 + 0x40);
  if (lVar10 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar3) {
        if (unaff_x20 == 0) break;
        iVar3 = FUN_06f7cb5c();
        if (0 < iVar3) {
          plVar6 = (long *)thunk_FUN_03d12a58();
          if (plVar6 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          uVar9 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93698);
          if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
          }
          FUN_06dfdedc(uVar8,uVar9,0,0);
        }
        return;
      }
      lVar12 = *(long *)(unaff_x19 + 0x38);
      uVar8 = FUN_05212a24(lVar10,iVar3,*(undefined8 *)puVar2);
      if (lVar12 == 0) break;
      uVar5 = FUN_06a3fecc(lVar12,uVar8,*unaff_x23);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        lVar10 = *(long *)(unaff_x19 + 0x38);
        uVar8 = FUN_05212a24(*(long *)(unaff_x19 + 0x40),iVar3,*(undefined8 *)puVar2);
        if (lVar10 == 0) break;
        FUN_06a3fcc4(lVar10,uVar8,iVar3,*unaff_x24);
      }
      lVar10 = *(long *)(unaff_x19 + 0x40);
      iVar3 = iVar3 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


