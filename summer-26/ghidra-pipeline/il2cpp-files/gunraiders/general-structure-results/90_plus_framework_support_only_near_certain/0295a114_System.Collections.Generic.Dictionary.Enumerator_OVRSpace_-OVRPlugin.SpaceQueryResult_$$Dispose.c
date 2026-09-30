/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0295a114
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0295a528) */

void System_Collections_Generic_Dictionary_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
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
  
  lVar7 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0295a180;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_0295a180:
  (*(code *)*puVar3)();
  FUN_0295a004();
  puVar2 = PTR_DAT_0422fb28;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(1,0);
  }
  uVar4 = thunk_FUN_01c5d21c();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  uVar11 = FUN_032e04b8(uVar11,0);
  uVar9 = FUN_032e935c(uVar4,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar3 = (undefined8 *)(lVar7 + 0x2c);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (-1 < *(int *)((long)puVar3 + -0xc)) {
          uStack0000000000000024 = *(undefined8 *)((long)puVar3 + 0x24);
          in_stack_00000008 = puVar3[1];
          in_stack_00000000 = *puVar3;
          in_stack_00000010 = puVar3[2];
          uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0x1c) >> 0x20)
          ;
          uStack0000000000000048 = (undefined4)puVar3[3];
          uStack000000000000004c = (undefined4)((ulong)puVar3[3] >> 0x20);
          uStack000000000000001c = uStack000000000000004c;
          uStack0000000000000020 = uStack0000000000000050;
          uStack0000000000000018 = uStack0000000000000048;
          in_stack_00000030 = in_stack_00000000;
          in_stack_00000038 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000010;
          uStack0000000000000054 = uStack0000000000000024;
          FUN_0295b5c0();
        }
        uVar9 = uVar9 + 1;
        puVar3 = puVar3 + 7;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0295a33c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_0295a33c:
  plVar5 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_04230960;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  puVar3 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0295a3ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar2,0);
LAB_0295a3ac:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0295a424;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar5,lVar7,0);
LAB_0295a424:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    uStack0000000000000024 = *(undefined8 *)((long)puVar3 + 0x24);
    in_stack_00000008 = puVar3[1];
    in_stack_00000000 = *puVar3;
    in_stack_00000010 = puVar3[2];
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0x1c) >> 0x20);
    uStack0000000000000078 = (undefined4)puVar3[3];
    uStack000000000000007c = (undefined4)((ulong)puVar3[3] >> 0x20);
    uStack000000000000001c = uStack000000000000007c;
    uStack0000000000000020 = uStack0000000000000080;
    uStack0000000000000018 = uStack0000000000000078;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000010;
    uStack0000000000000084 = uStack0000000000000024;
    FUN_0295b5c0();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0295a4e0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_0422fce8,0);
LAB_0295a4e0:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  return;
}


