/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$Dispose
ENTRY_POINT: 06800a8c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Normal_Realtime_SessionCaptureFileStream__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined2 uStack000000000000003c;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08494c88);
  FUN_03a8a718(PTR_DAT_08494c90);
  *(undefined1 *)(unaff_x20 + 0x1ea) = 1;
  puVar2 = PTR_DAT_08488b88;
  in_stack_00000028 = 0;
  iVar1 = *unaff_x19;
  lVar8 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  auVar9 = ZEXT816(0);
  in_stack_00000010 = 0;
  if (iVar1 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
LAB_06800b80:
    uVar4 = FUN_05d6317c(&stack0x00000020,*(undefined8 *)PTR_DAT_08494c80);
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = FUN_067edbf0(lVar8,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000010 = FUN_067c4c10(lVar3,0,0);
      uVar4 = FUN_0666ef78(&stack0x00000010,0);
      auVar9 = _in_stack_00000020;
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043ea714(unaff_x19 + 2,&stack0x00000010);
        return;
      }
LAB_06800bd0:
      _in_stack_00000020 = auVar9;
      FUN_0666ef90(&stack0x00000010,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(char *)(lVar8 + 0x98) != '\0') {
        FUN_067e4904(lVar8,0,0);
        goto LAB_06800c7c;
      }
      lVar3 = *(long *)(lVar8 + 0x80);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar8 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (*(short *)(lVar3 + (long)(int)*(uint *)(lVar8 + 0x8c) * 2 + 0x20) != 0x2f) {
        lVar3 = thunk_FUN_03af1434(PTR_DAT_084883b0);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_066e1a5c(0);
        lVar3 = *(long *)(lVar8 + 0x80);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar8 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uStack000000000000003c =
               *(undefined2 *)(lVar3 + (long)(int)*(uint *)(lVar8 + 0x8c) * 2 + 0x20);
          uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x88),&stack0x0000003c);
          uVar7 = thunk_FUN_03af1434(PTR_DAT_084ad6e8);
          uVar5 = FUN_0683e884(uVar7,uVar5,uVar6,0);
          uVar5 = FUN_067e3658(lVar8,uVar5,0);
          uVar6 = thunk_FUN_03af1434(PTR_DAT_084adbe8);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar5,uVar6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = FUN_067edae8(lVar8,0,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      auVar9 = FUN_067c4c10(lVar3,0,0);
      _in_stack_00000010 = auVar9;
      uVar4 = FUN_0666ef78(&stack0x00000010,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043ea714(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_06800c5c;
    }
  }
  else {
    if (iVar1 == 1) {
      _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = -1;
      goto LAB_06800bd0;
    }
    if (iVar1 != 2) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = FUN_067ed674(lVar8,0,0,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000020 = FUN_058b049c(lVar3,0,*(undefined8 *)PTR_DAT_08494c90);
      uVar4 = FUN_05d63134(&stack0x00000020,*(undefined8 *)PTR_DAT_08494c88);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e07b4(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      goto LAB_06800b80;
    }
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
    _in_stack_00000020 = ZEXT816(0);
LAB_06800c5c:
    FUN_0666ef90(&stack0x00000010,0);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_067e4904(lVar8,0,0);
LAB_06800c7c:
  lVar8 = *(long *)puVar2;
  *unaff_x19 = -2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


