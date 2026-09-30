/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0295a108
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0295a528) */

void System_Collections_Generic_Dictionary_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__get_Current
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  if (unaff_x21 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0295a180;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498();
LAB_0295a180:
    uVar3 = (*(code *)*puVar4)();
    unaff_x20 = unaff_x23;
  }
  FUN_0295a004(unaff_x20,uVar3);
  puVar2 = PTR_DAT_0422fb28;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(1,0);
  }
  uVar5 = thunk_FUN_01c5d21c();
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  uVar12 = FUN_032e04b8(uVar12,0);
  uVar10 = FUN_032e935c(uVar5,uVar12,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = unaff_x21[3];
    if (lVar8 != 0) {
      uVar10 = 0;
      puVar4 = (undefined8 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (-1 < *(int *)((long)puVar4 + -0xc)) {
          uStack0000000000000024 = *(undefined8 *)((long)puVar4 + 0x24);
          in_stack_00000008 = puVar4[1];
          in_stack_00000000 = *puVar4;
          in_stack_00000010 = puVar4[2];
          uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x1c) >> 0x20)
          ;
          uStack0000000000000048 = (undefined4)puVar4[3];
          uStack000000000000004c = (undefined4)((ulong)puVar4[3] >> 0x20);
          uStack000000000000001c = uStack000000000000004c;
          uStack0000000000000020 = uStack0000000000000050;
          uStack0000000000000018 = uStack0000000000000048;
          in_stack_00000030 = in_stack_00000000;
          in_stack_00000038 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000010;
          uStack0000000000000054 = uStack0000000000000024;
          FUN_0295b5c0();
        }
        uVar10 = uVar10 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar8 = *(long *)(lVar8 + 0x88);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01c72394(lVar8);
  }
  lVar9 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0295a33c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01c72498();
LAB_0295a33c:
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_04230960;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  puVar4 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0295a3ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0);
LAB_0295a3ac:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0295a424;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar6,lVar8,0);
LAB_0295a424:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    uStack0000000000000024 = *(undefined8 *)((long)puVar4 + 0x24);
    in_stack_00000008 = puVar4[1];
    in_stack_00000000 = *puVar4;
    in_stack_00000010 = puVar4[2];
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x1c) >> 0x20);
    uStack0000000000000078 = (undefined4)puVar4[3];
    uStack000000000000007c = (undefined4)((ulong)puVar4[3] >> 0x20);
    uStack000000000000001c = uStack000000000000007c;
    uStack0000000000000020 = uStack0000000000000080;
    uStack0000000000000018 = uStack0000000000000078;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000010;
    uStack0000000000000084 = uStack0000000000000024;
    FUN_0295b5c0();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0295a4e0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar6,*(long *)PTR_DAT_0422fce8,0);
LAB_0295a4e0:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


