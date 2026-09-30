/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04db412c
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04db45b0) */

void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int iVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000f8;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b8;
  
  if (in_w8 != 0) goto LAB_04db4578;
  plVar2 = (long *)FUN_04c8582c(**(undefined8 **)(in_stack_000001b8 + 0x38));
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(in_stack_000001b8 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
  }
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04db4260;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar2,lVar6,0);
LAB_04db4260:
  (*(code *)*puVar3)(&stack0x00000050,plVar2,puVar3[1]);
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a8 = in_stack_00000078;
  in_stack_000000a0 = in_stack_00000070;
  in_stack_00000088 = in_stack_00000058;
  in_stack_00000080 = in_stack_00000050;
  lVar6 = *(long *)(*(long *)(in_stack_000001b8 + 0x38) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  System_Collections_ObjectModel_ReadOnlyCollection<EventSummary>__System_Collections_IList_set_Item
            (&stack0x00000080,*(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x20));
  memcpy(&stack0x000000b0,&stack0x00000000,0x50);
  puVar1 = PTR_DAT_08f8a7d0;
  in_stack_00000050 = 0;
  in_stack_00000060 = &stack0x000001b8;
  in_stack_00000058 = &stack0x000000b0;
  do {
    uVar8 = FUN_0722c498(&stack0x000000b0,
                         *(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x50));
    plVar2 = in_stack_000000f8;
    if ((uVar8 & 1) == 0) goto LAB_04db4520;
    if (in_stack_000000f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *in_stack_000000f8;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04db4350;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_000000f8,lVar6,0);
LAB_04db4350:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar5 = FUN_086299f4(&stack0x00000190,0);
    uVar8 = FUN_07367c2c(uVar4,uVar5,0);
  } while ((uVar8 & 1) != 0);
  lVar7 = *plVar2;
  lVar6 = *(long *)puVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04db43f0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar2,lVar6,1);
LAB_04db43f0:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
  plVar2 = (long *)FUN_0862ccb8(uVar4,0);
  if (plVar2 == (long *)0x0) {
    uVar4 = FUN_087c1024(uVar4,0);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar8 = FUN_074fe038(uVar4,0,0);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_087c0fac();
      if ((uVar8 & 1) == 0) {
        memcpy(&stack0x00000100,(void *)(unaff_x19 + 0x10),0x90);
        iVar10 = *(int *)(unaff_x19 + 0xb8);
        *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
        UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&stack0x00000100,iVar10,0);
        in_stack_00000198 = in_stack_00000008;
        in_stack_00000190 = in_stack_00000000;
        in_stack_000001a8 = in_stack_00000018;
        in_stack_000001a0 = in_stack_00000010;
        uVar8 = FUN_086299dc(&stack0x00000190,0);
        if ((uVar8 & 1) == 0) goto LAB_04db4520;
        *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
        lVar6 = FUN_0862ccb8(uVar4,0);
        if (lVar6 != 0) {
          FUN_03a90f00(0,*(undefined8 *)PTR_DAT_08f8c250,lVar6);
        }
      }
      goto LAB_04db4548;
    }
LAB_04db4520:
    iVar10 = 0x13;
  }
  else {
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04db4538;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar2,*(long *)PTR_DAT_08f8c250,0);
LAB_04db4538:
    (*(code *)*puVar3)(plVar2);
LAB_04db4548:
    iVar10 = 3;
  }
  FUN_0722c8e0(&stack0x000000b0,*(undefined8 *)(*(long *)(in_stack_000001b8 + 0x38) + 0x58));
  if ((iVar10 != 0) && (iVar10 != 0x13)) {
    return;
  }
LAB_04db4578:
  uVar8 = FUN_087c0fac();
  if (((uVar8 & 1) == 0) && (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


