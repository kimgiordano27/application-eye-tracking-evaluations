/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$get_Values
ENTRY_POINT: 06ca4334
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__get_Values(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (*unaff_x22 != lVar3) {
    in_stack_00000038 = unaff_x21[3];
    in_stack_00000030 = unaff_x21[2];
    in_stack_00000048 = unaff_x21[5];
    in_stack_00000040 = unaff_x21[4];
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    lVar3 = FUN_03dc9348(*(undefined8 *)(unaff_x19 + 0x20));
    uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8),&stack0x00000020);
    plVar6 = (long *)thunk_FUN_04457f54(uVar5,0);
    FUN_03db7f40();
    uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09f2a3b8);
    uVar5 = FUN_07894ea8(uVar7,uVar5,0);
    thunk_FUN_044adef4(PTR_DAT_09f217f8);
    uVar7 = thunk_FUN_0448520c();
    uVar8 = thunk_FUN_044adef4(PTR_DAT_09f25f80);
    FUN_07996d40(uVar7,uVar5,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar7);
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
  puVar4 = (undefined8 *)thunk_FUN_04485360();
  in_stack_00000058 = puVar4[1];
  in_stack_00000050 = *puVar4;
  in_stack_00000068 = puVar4[3];
  in_stack_00000060 = puVar4[2];
  in_stack_00000078 = puVar4[5];
  in_stack_00000070 = puVar4[4];
  in_stack_00000028 = unaff_x21[1];
  in_stack_00000020 = *unaff_x21;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000020);
  in_stack_00000018 = in_stack_00000058;
  in_stack_00000010 = in_stack_00000050;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  thunk_FUN_04484e3c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000010);
  puVar1 = PTR_DAT_09f2a3b0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f2a3b0) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06ca446c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca446c:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    in_stack_00000018 = unaff_x21[3];
    in_stack_00000010 = unaff_x21[2];
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    in_stack_00000028 = in_stack_00000058;
    in_stack_00000020 = in_stack_00000050;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06ca453c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca453c:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      in_stack_00000018 = unaff_x21[5];
      in_stack_00000010 = unaff_x21[4];
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x00000010);
      in_stack_00000038 = in_stack_00000068;
      in_stack_00000030 = in_stack_00000060;
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000020 = in_stack_00000050;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8(lVar3);
      }
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      lVar3 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06ca460c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac();
LAB_06ca460c:
      (*(code *)*puVar4)();
    }
  }
  return;
}


