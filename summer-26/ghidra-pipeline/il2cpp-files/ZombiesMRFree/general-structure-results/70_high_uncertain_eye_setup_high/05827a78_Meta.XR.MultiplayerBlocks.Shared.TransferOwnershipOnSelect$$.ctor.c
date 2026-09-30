/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$.ctor
ENTRY_POINT: 05827a78
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect___ctor(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long lVar7;
  int unaff_w24;
  ulong uVar8;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  
  while (param_1 != 0) {
    do {
      uVar1 = unaff_w23 + (unaff_w24 * (unaff_w22 - unaff_w27) - unaff_w26);
      if (*(uint *)(unaff_x21 + 3) <= uVar1) goto LAB_05827c44;
      unaff_x21[(long)(int)uVar1 + 4] = unaff_x25;
      thunk_FUN_03048534(unaff_x21 + (long)(int)uVar1 + 4,unaff_x25);
      do {
        unaff_w23 = unaff_w23 + 1;
        if (*(int *)(unaff_x19 + 0x10) <= unaff_w23) {
          do {
            unaff_w22 = unaff_w22 + 1;
            if (*(int *)(unaff_x19 + 0x14) <= unaff_w22) {
              if (unaff_x21 == (long *)0x0) goto LAB_05827c48;
              if ((int)unaff_x21[3] < 1) goto LAB_05827b70;
              lVar7 = 0;
              uVar8 = 0;
              uVar6 = unaff_x21[3] & 0xffffffff;
              goto LAB_05827ae8;
            }
          } while (*(int *)(unaff_x19 + 0x10) < 1);
          unaff_w23 = 0;
        }
        uVar8 = FUN_0360f2c4(&stack0x00000010,unaff_w23,unaff_w22,0);
        unaff_w27 = iStack0000000000000014;
        unaff_w26 = iStack0000000000000010;
      } while ((uVar8 & 1) == 0);
      unaff_w24 = FUN_0360f354(&stack0x00000010,0);
      lVar7 = *(long *)(unaff_x19 + 0x18);
      if (lVar7 == 0) goto LAB_05827c48;
      uVar1 = unaff_w23 + unaff_w22 * *(int *)(unaff_x19 + 0x10);
      if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_05827c44;
      if (unaff_x21 == (long *)0x0) goto LAB_05827c48;
      unaff_x25 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
    } while (unaff_x25 == 0);
    param_1 = thunk_FUN_03010710(unaff_x25,*(undefined8 *)(*unaff_x21 + 0x40));
  }
LAB_05827c4c:
  uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                    ();
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar5,0);
LAB_05827ae8:
  if (uVar6 <= uVar8) {
LAB_05827c44:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  if (unaff_x21[uVar8 + 4] == 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) ==
        0) {
      FUN_02feb2c4();
    }
    lVar3 = thunk_FUN_0301080c();
    FUN_041427c8(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50));
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0))
    goto LAB_05827c4c;
    if (*(uint *)(unaff_x21 + 3) <= uVar8) goto LAB_05827c44;
    unaff_x21[uVar8 + 4] = lVar3;
    thunk_FUN_03048534((long)unaff_x21 + lVar7 + 0x20,lVar3);
  }
  uVar6 = (ulong)*(uint *)(unaff_x21 + 3);
  uVar8 = uVar8 + 1;
  lVar7 = lVar7 + 8;
  if ((long)(int)*(uint *)(unaff_x21 + 3) <= (long)uVar8) {
LAB_05827b70:
    uVar8 = FUN_0360f354(&stack0x00000010,0);
    lVar7 = FUN_0360f368(&stack0x00000010,0);
    *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
    *(ulong *)(unaff_x19 + 0x10) = uVar8 & 0xffffffff | lVar7 << 0x20;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18));
    iVar2 = iStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x18);
      FUN_0360f354(&stack0x00000010,0);
      FUN_0360f368(&stack0x00000010,0);
      FUN_0360f2b8();
      if (lVar7 != 0) {
        do {
          auVar9 = FUN_0360f980(lVar7 + 0x28,CONCAT44(-iStack0000000000000014,-iVar2),0);
          auVar9 = FUN_0360f548(auVar9._0_8_,auVar9._8_8_,in_stack_00000000,in_stack_00000008,0);
          *(undefined1 (*) [16])(lVar7 + 0x28) = auVar9;
          lVar7 = *(long *)(lVar7 + 0x18);
        } while (lVar7 != 0);
      }
      return;
    }
LAB_05827c48:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  goto LAB_05827ae8;
}


