/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$GetPlaneRotation
ENTRY_POINT: 029940f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x029946b0) */
/* WARNING: Removing unreachable block (ram,0x029945ac) */
/* WARNING: Removing unreachable block (ram,0x029945b0) */
/* WARNING: Removing unreachable block (ram,0x02994724) */

void RootMotion_FinalIK_IKEffector__GetPlaneRotation(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  undefined8 uVar9;
  uint uVar10;
  long *unaff_x26;
  char in_stack_00000008;
  char in_stack_00000010;
  byte bStack000000000000001c;
  undefined4 uStack000000000000002c;
  
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d07ad0) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0299431c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01a472ec();
LAB_0299431c:
  lVar6 = (*(code *)*puVar4)();
  if (*(char *)(unaff_x19 + 0x184) == '\0') {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x158);
    in_stack_00000010 = '\0';
    FUN_027e0bd8(uVar9,&stack0x00000010,0);
    *(undefined1 *)(unaff_x19 + 0x184) = 1;
    *(undefined4 *)(unaff_x19 + 0x198) = 0;
    if (in_stack_00000010 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
  }
  uStack000000000000002c = 1;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  bStack000000000000001c = *(byte *)(lVar6 + 0x20);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_029a288c(unaff_x19 + 0x180,lVar6,&stack0x0000002c,0);
  *(long *)(unaff_x19 + 0x98) = *(long *)(unaff_x19 + 0x98) + (long)unaff_w22;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = FUN_0299ec14(*(long *)(unaff_x19 + 0x10),0);
  if ((uVar7 & 1) == 0) {
    if (bStack000000000000001c != 0) goto LAB_0299441c;
  }
  else {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
    *(uint *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + (uint)bStack000000000000001c;
    if (bStack000000000000001c != 0) {
LAB_0299441c:
      if ((int)(uint)bStack000000000000001c <= *(int *)(unaff_x19 + 0x170)) goto LAB_02994484;
    }
  }
  uVar9 = FUN_026b7320(&stack0x0000001c,0);
  uVar5 = FUN_0276793c(unaff_x19 + 0x170,0);
  FUN_025be45c(*(undefined8 *)PTR_DAT_03d07bc0,uVar9,*(undefined8 *)PTR_DAT_03d07bd0,uVar5,0);
  FUN_0298e564();
  if (bStack000000000000001c == 0) {
    return;
  }
LAB_02994484:
  puVar2 = PTR_DAT_03d078d8;
  bVar1 = false;
  uVar10 = 0;
  do {
    if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = FUN_02994944();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(char *)(lVar6 + 0x11) == '\x01') || (*(char *)(lVar6 + 0x11) == '\x10')) {
      FUN_0298f414();
      bVar1 = true;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x1a8);
      in_stack_00000008 = '\0';
      FUN_027e0bd8(uVar9,&stack0x00000008,0);
      if (*(long *)(unaff_x19 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02265dfc(*(long *)(unaff_x19 + 0x1a8),lVar6,*(undefined8 *)puVar2);
      if (in_stack_00000008 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
    }
    if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
      FUN_02993d14();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_0299ec14(*(long *)(unaff_x19 + 0x10),0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
        uVar3 = FUN_02f0ce18(*(long *)(unaff_x19 + 0xc0),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined4 *)(lVar6 + 0x40) = uVar3;
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_029bf178(lVar6,0x14,0);
      }
    }
    uVar10 = uVar10 + 1;
    if (bStack000000000000001c <= uVar10) {
      if (bVar1) {
        thunk_FUN_01aa519c(unaff_x19 + 0x130,1,0,0);
      }
      return;
    }
  } while( true );
}


