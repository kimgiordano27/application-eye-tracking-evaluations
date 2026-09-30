/*
FUNCTION_NAME: WallEyeTunneling$$RightEyeOccluderChanged
ENTRY_POINT: 06681398
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06681718) */
/* WARNING: Removing unreachable block (ram,0x066813b0) */
/* WARNING: Removing unreachable block (ram,0x066818a4) */

void WallEyeTunneling__RightEyeOccluderChanged(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  int iVar7;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = FUN_05e7d744();
  *(undefined8 *)(unaff_x19 + 0x12) = uVar1;
  thunk_FUN_0329bf60();
  while( true ) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05e6492c(unaff_x19 + 10,0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = FUN_0322b90c(unaff_x20 + 0xd,*(undefined8 *)(unaff_x19 + 0xe),0);
    if (lVar2 == 0) break;
    lVar2 = FUN_053df95c(lVar2,*(undefined8 *)PTR_DAT_07616b98);
    plVar3 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_075b6410,2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (lVar2 != 0) {
      lVar4 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) {
        uVar1 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar1,0);
      }
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    plVar3[4] = lVar2;
    thunk_FUN_0329bf60(plVar3 + 4,lVar2);
    lVar2 = *(long *)(unaff_x19 + 0x12);
    if (lVar2 != 0) {
      lVar4 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) {
        uVar1 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar1,0);
      }
    }
    if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    plVar3[5] = lVar2;
    thunk_FUN_0329bf60(plVar3 + 5,lVar2);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar2 = FUN_05e7e8b0(plVar3,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    auVar8 = FUN_0510651c(lVar2,0,*(undefined8 *)PTR_DAT_075ee788);
    _in_stack_00000010 = auVar8;
    uVar5 = FUN_055c3988(&stack0x00000010,*(undefined8 *)PTR_DAT_075ee780);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
      thunk_FUN_0329bf60(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_03d1afa0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar2 = FUN_055c39d4(&stack0x00000010,*(undefined8 *)PTR_DAT_075ee778);
    if (lVar2 == *(long *)(unaff_x19 + 0x12)) {
      thunk_FUN_03257e30(PTR_DAT_075db140);
      uVar1 = thunk_FUN_0322f148();
      uVar6 = thunk_FUN_03257e30(PTR_DAT_075db148);
      FUN_0673cbf0(uVar1,uVar6,0xe,0);
      uVar6 = thunk_FUN_03257e30(PTR_DAT_07616cf0);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar1,uVar6);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  thunk_FUN_0329bf60(unaff_x19 + 0x12,0);
  if (unaff_w25 < 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05e66a84(*(long *)(unaff_x19 + 0x10),0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05e66f58(*(long *)(unaff_x19 + 0x10),0);
  }
  if (unaff_w25 == 1) {
    unaff_w25 = -1;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *unaff_x19 = 0xffffffff;
LAB_06681154:
    lVar2 = FUN_055c39d4();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_07616a18);
    FUN_0674300c(uVar1,lVar2,0,*(undefined4 *)(lVar2 + 0x18),0,0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar4 = unaff_x20[10];
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_07616be0);
    UnityEngine_InputSystem_InputDevice__ReadValueFromStateAsObject(lVar2,lVar4,0,uVar1,0);
    unaff_x20[0xb] = lVar2;
    thunk_FUN_0329bf60(unaff_x20 + 0xb,lVar2);
    *(undefined2 *)(unaff_x20 + 0xc) = 0x101;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_053df658(*(long *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_07616ac0);
    iVar7 = 0x18;
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05e6492c(unaff_x19 + 10,0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(char *)((long)unaff_x20 + 0x7c) == '\0') && (*(char *)((long)unaff_x20 + 0x61) == '\0'))
    {
      if ((*(char *)(unaff_x19 + 0xc) == '\0') || ((char)unaff_x20[0x15] != '\0')) {
        lVar2 = FUN_0667f080();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        auVar8 = FUN_0510651c(lVar2,0,*(undefined8 *)PTR_DAT_07616ce8);
        uVar5 = FUN_055c3988();
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar8;
          thunk_FUN_0329bf60(unaff_x19 + 0x18,0);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_03d1afa0(unaff_x19 + 2);
          return;
        }
        goto LAB_06681154;
      }
      (**(code **)(*unaff_x20 + 0x268))();
    }
    iVar7 = 7;
  }
  if (unaff_w25 < 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    unaff_x20[0xd] = 0;
    thunk_FUN_0329bf60(unaff_x20 + 0xd,0);
  }
  if (iVar7 != 0x18) {
    if (iVar7 == 7) goto LAB_066812a8;
    if (iVar7 != 0) {
      return;
    }
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_x20[10] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_066785bc(unaff_x20[10],1,0);
LAB_066812a8:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_0329bf60(unaff_x19 + 0xe,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05d2b2d4(unaff_x19 + 2,0);
  return;
}


