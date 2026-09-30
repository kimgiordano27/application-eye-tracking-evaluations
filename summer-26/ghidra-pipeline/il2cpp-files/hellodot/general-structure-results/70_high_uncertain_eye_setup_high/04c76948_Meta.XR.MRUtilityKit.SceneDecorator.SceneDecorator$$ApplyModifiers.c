/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$ApplyModifiers
ENTRY_POINT: 04c76948
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__ApplyModifiers
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long *unaff_x21;
  ulong uVar10;
  long *unaff_x23;
  long lVar11;
  undefined1 auVar12 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x04c76948:
  if (!(bool)in_ZR) goto LAB_04c76934;
LAB_04c7694c:
  puVar5 = (undefined8 *)FUN_02ce0a7c(unaff_x21,param_3,0);
  do {
    auVar12 = (*(code *)*puVar5)(unaff_x21,puVar5[1]);
    lVar11 = *(long *)PTR_DAT_065e1b38;
    uVar2 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978();
      uVar2 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978();
    }
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_065e1b20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    in_stack_00000028 = auVar12._8_8_ & 0xffff00ff;
    lVar11 = *(long *)(*(long *)PTR_DAT_065e1b30 + 0x20);
    in_stack_00000020 = auVar12._0_8_;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    uVar6 = FUN_04187744(&stack0x00000020,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x10));
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x24) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x22) = in_stack_00000020;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0336024c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_065e1b28 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    uVar6 = FUN_04187860(&stack0x00000020,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20));
    if ((uVar6 & 1) == 0) {
      plVar9 = *(long **)(unaff_x19 + 0x14);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 == 0) goto LAB_04c76b7c;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    plVar9 = *(long **)(unaff_x19 + 0x14);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_04c7686c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x23,1);
LAB_04c7686c:
    plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7bd8);
    FUN_04f7383c(lVar11,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(unaff_x19 + 0x12);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar12 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380));
    *(undefined1 (*) [16])(lVar11 + 0x10) = auVar12;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = (**(code **)(*unaff_x20 + 0x288))();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar12 = FUN_04fa5130(lVar11,0,0);
    _in_stack_00000030 = auVar12;
    uVar6 = FUN_04e5bb90(&stack0x00000030,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000030;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_033630d0(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    FUN_04e5bbac(&stack0x00000030,0);
    unaff_x21 = *(long **)(unaff_x19 + 0x14);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    param_1 = *unaff_x21;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_04c7694c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04c76934:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x04c76948;
    }
    puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ccac8) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04c76b98;
    }
  }
LAB_04c76b7c:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ccac8,0);
LAB_04c76b98:
  auVar12 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  puVar3 = PTR_DAT_065ccaf8;
  if (*(int *)(*(long *)PTR_DAT_065ccaf8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  in_stack_00000018 = auVar12._8_8_ & 0xffff;
  in_stack_00000010 = auVar12._0_8_;
  if (DAT_06a6dac6 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
    DAT_06a6dac6 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a675a7 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
    DAT_06a675a7 = '\x01';
  }
  plVar9 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar11 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c89a0 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c89a0)) {
      uVar10 = in_stack_00000018 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ccb08) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04c76cb8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(in_stack_00000010,*(long *)PTR_DAT_065ccb08,0);
LAB_04c76cb8:
      iVar4 = (*(code *)*puVar5)(plVar9,uVar10,puVar5[1]);
      if (iVar4 == 0) goto LAB_04c76f34;
    }
    else {
      uVar6 = FUN_04fa4eac(in_stack_00000010,0);
                    /* try { // try from 04c76f30 to 04d76f57 has its CatchHandler @ 04c770bc */
      if ((uVar6 & 1) == 0) {
LAB_04c76f34:
        *unaff_x19 = 3;
        *(ulong *)(unaff_x19 + 0x28) = in_stack_00000018;
        *(long **)(unaff_x19 + 0x26) = in_stack_00000010;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
                    /* try { // try from 04c76f70 to 04d76fcf has its CatchHandler @ 04c770c0 */
        FUN_03363cec(unaff_x19 + 2,&stack0x00000010);
        return;
      }
    }
  }
  if (DAT_06a6dac7 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccaf8);
    DAT_06a6dac7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_065ccaf8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a675a9 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ccb08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
    DAT_06a675a9 = '\x01';
  }
  plVar9 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar11 = *in_stack_00000010;
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c89a0 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c89a0)) {
      uVar10 = in_stack_00000018 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ccb08) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_04c76dc4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(in_stack_00000010,*(long *)PTR_DAT_065ccb08,2);
LAB_04c76dc4:
      (*(code *)*puVar5)(plVar9,uVar10,puVar5[1]);
    }
    else {
      FUN_04e5b610(in_stack_00000010,0);
    }
  }
  plVar9 = *(long **)(unaff_x19 + 0x1a);
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8580 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_065c8580)) {
      lVar11 = FUN_04e59944(plVar9,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_04e59a04(lVar11,0);
    }
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065e8178);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(plVar9,uVar7);
  }
                    /* try { // try from 04c76e2c to 04d76f2f has its CatchHandler @ 04c76e2c
                       catch() { ... } // from try @ 04c76e2c with catch @ 04c76e2c
                       catch() { ... } // from try @ 04c76ff4 with catch @ 04c76e2c
                       catch() { ... } // from try @ 04c770ac with catch @ 04c76e2c
                       catch() { ... } // from try @ 04c77148 with catch @ 04c76e2c */
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = FUN_043d0cd8(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)PTR_DAT_065e7c00);
  if (lVar11 != 0) {
    auVar12 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e1700);
    uVar6 = FUN_044a8fc8();
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x2a) = auVar12;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_0335ff64(unaff_x19 + 2);
    }
    else {
      FUN_044a9014();
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04e5a1e4(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


