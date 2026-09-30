/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$PrematurelyReachedEndOfStream
ENTRY_POINT: 068024c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__PrematurelyReachedEndOfStream
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  uint uVar9;
  long *unaff_x22;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x068024c4:
  FUN_0666ef90(param_1,param_2);
LAB_06802d50:
  puVar4 = PTR_DAT_08486760;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = unaff_x20[0x10];
joined_r0x06802d58:
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = *(uint *)((long)unaff_x20 + 0x8c);
  if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  uVar2 = *(ushort *)(lVar8 + (long)(int)uVar3 * 2 + 0x20);
  uVar9 = (uint)uVar2;
  if (uVar2 < 0x3a) {
    if (uVar2 == 0) goto LAB_06802cf0;
    if (uVar2 < 0x20) {
      if (uVar2 == 9) {
LAB_06802b74:
        *(uint *)((long)unaff_x20 + 0x8c) = uVar3 + 1;
      }
      else {
        if (uVar2 != 10) {
          if (uVar2 != 0xd) goto LAB_06802b20;
          lVar8 = FUN_067ed574();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          auVar10 = FUN_067c4c10(lVar8,0,0);
          _in_stack_00000030 = auVar10;
          uVar6 = FUN_0666ef78(&stack0x00000030,0);
          if ((uVar6 & 1) == 0) {
            *unaff_x19 = 0xb;
            *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
            thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
            return;
          }
LAB_068024bc:
          param_1 = &stack0x00000030;
          param_2 = 0;
          goto code_r0x068024c4;
        }
        FUN_067f2950();
      }
      goto LAB_06802b7c;
    }
    if (uVar2 < 0x2c) {
      if (uVar2 == 0x20) goto LAB_06802b74;
      if ((uVar9 == 0x22) || (uVar9 == 0x27)) {
        lVar8 = FUN_067edce8();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar10 = FUN_067c4c10(lVar8,0,0);
        _in_stack_00000030 = auVar10;
        uVar6 = FUN_0666ef78(&stack0x00000030,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        FUN_0666ef90(&stack0x00000030,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = FUN_067f353c();
        goto LAB_06802a3c;
      }
    }
    else {
      if (0x2d < uVar2) {
        if ((9 < uVar9 - 0x30) && (uVar9 != 0x2e)) {
          if (uVar9 == 0x2f) {
            lVar8 = FUN_067edae8();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            auVar10 = FUN_067c4c10(lVar8,0,0);
            _in_stack_00000030 = auVar10;
            uVar6 = FUN_0666ef78(&stack0x00000030,0);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 10;
              *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
              thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
              return;
            }
            goto LAB_068024bc;
          }
          goto LAB_06802b20;
        }
        lVar8 = FUN_067ee7dc();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar10 = FUN_067c4c10(lVar8,0,0);
        _in_stack_00000030 = auVar10;
        uVar6 = FUN_0666ef78(&stack0x00000030,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 9;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        FUN_0666ef90(&stack0x00000030,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = (**(code **)(*unaff_x20 + 0x248))();
        goto LAB_06802a3c;
      }
      if (uVar9 == 0x2c) {
        FUN_067f27e8();
        goto LAB_06802b7c;
      }
      if (uVar9 == 0x2d) {
        lVar8 = FUN_067ed674();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar10 = FUN_058b049c(lVar8,0,*(undefined8 *)PTR_DAT_08494c90);
        _in_stack_00000040 = auVar10;
        uVar6 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 6;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
          thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
          return;
        }
        uVar6 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
        if ((uVar6 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        else {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = unaff_x20[0x10];
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar3 = *(int *)((long)unaff_x20 + 0x8c) + 1;
          if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (*(short *)(lVar8 + (long)(int)uVar3 * 2 + 0x20) == 0x49) {
            lVar8 = FUN_067ee6ac();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            _in_stack_00000020 = FUN_058b7208(lVar8,0,*(undefined8 *)PTR_DAT_084ad990);
            uVar6 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
            if ((uVar6 & 1) == 0) {
              *unaff_x19 = 7;
              *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
              thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
              if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
              return;
            }
            uVar5 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
            goto LAB_06802a3c;
          }
        }
        lVar8 = FUN_067ee7dc();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        auVar10 = FUN_067c4c10(lVar8,0,0);
        _in_stack_00000030 = auVar10;
        uVar6 = FUN_0666ef78(&stack0x00000030,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 8;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
          return;
        }
        FUN_0666ef90(&stack0x00000030,0);
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = (**(code **)(*unaff_x20 + 0x248))();
        goto LAB_06802a3c;
      }
    }
  }
  else if (uVar2 < 0x4f) {
    if (uVar9 == 0x49) {
      lVar8 = FUN_067ee57c();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000020 = FUN_058b7208(lVar8,0,*(undefined8 *)PTR_DAT_084ad990);
      uVar6 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 5;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar5 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
      goto LAB_06802a3c;
    }
    if (uVar2 == 0x4e) {
      lVar8 = FUN_067ee44c();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      _in_stack_00000020 = FUN_058b7208(lVar8,0,*(undefined8 *)PTR_DAT_084ad990);
      uVar6 = FUN_05d63724(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad988);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fcef68(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar5 = FUN_05d6376c(&stack0x00000020,*(undefined8 *)PTR_DAT_084ad980);
      goto LAB_06802a3c;
    }
  }
  else {
    if (uVar2 == 0x5d) {
      *(uint *)((long)unaff_x20 + 0x8c) = uVar3 + 1;
      if ((1 < *(int *)((long)unaff_x20 + 0x24) - 5U) && (*(int *)((long)unaff_x20 + 0x24) != 8)) {
        uVar5 = FUN_067f284c();
        uVar7 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,uVar7);
      }
      FUN_067e4904();
      uVar5 = 0;
      goto LAB_06802a3c;
    }
    if (uVar9 == 0x6e) {
      lVar8 = FUN_067eed80();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      auVar10 = FUN_067c4c10(lVar8,0,0);
      _in_stack_00000030 = auVar10;
      uVar6 = FUN_0666ef78(&stack0x00000030,0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
        thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_04001fa0(unaff_x19 + 2,&stack0x00000030);
        return;
      }
      FUN_0666ef90(&stack0x00000030,0);
      uVar5 = 0;
      goto LAB_06802a3c;
    }
  }
LAB_06802b20:
  lVar8 = *(long *)(puVar4 + 0x88);
  *(uint *)((long)unaff_x20 + 0x8c) = uVar3 + 1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_066b9610(uVar9,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = FUN_067f284c();
    uVar7 = thunk_FUN_03af1434(PTR_DAT_084adc40);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5,uVar7);
  }
LAB_06802b7c:
  lVar8 = unaff_x20[0x10];
  goto joined_r0x06802d58;
LAB_06802cf0:
  lVar8 = FUN_067eec64();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  auVar10 = FUN_058b049c(lVar8,0,*(undefined8 *)PTR_DAT_08494c90);
  _in_stack_00000040 = auVar10;
  uVar6 = FUN_05d63134(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c88);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000040;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fcd3f8(unaff_x19 + 2,&stack0x00000040);
    return;
  }
  uVar6 = FUN_05d6317c(&stack0x00000040,*(undefined8 *)PTR_DAT_08494c80);
  if ((uVar6 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_067e3c14();
    uVar5 = 0;
LAB_06802a3c:
    puVar4 = PTR_DAT_084adaf8;
    iVar1 = *(int *)(*unaff_x22 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar4);
    return;
  }
  goto LAB_06802d50;
}


