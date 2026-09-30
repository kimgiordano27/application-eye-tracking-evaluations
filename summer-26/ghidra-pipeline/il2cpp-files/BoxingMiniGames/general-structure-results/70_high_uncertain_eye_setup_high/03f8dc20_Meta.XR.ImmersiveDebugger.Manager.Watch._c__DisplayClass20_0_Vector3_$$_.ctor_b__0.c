/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$<.ctor>b__0
ENTRY_POINT: 03f8dc20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f8e154) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>__<_ctor>b__0
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000068;
  undefined1 *in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000d0;
  long *in_stack_00000138;
  int in_stack_000001d0;
  long in_stack_000001f8;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  unaff_x23[3] = uVar6;
  unaff_x23[2] = uVar5;
  unaff_x23[5] = uVar6;
  unaff_x23[4] = uVar5;
  unaff_x23[9] = uVar6;
  unaff_x23[8] = uVar5;
  unaff_x23[0xb] = uVar6;
  unaff_x23[10] = uVar5;
  unaff_x23[0xd] = uVar6;
  unaff_x23[0xc] = uVar5;
  unaff_x23[0xf] = uVar6;
  unaff_x23[0xe] = uVar5;
  unaff_x23[0x11] = uVar6;
  unaff_x23[0x10] = uVar5;
  unaff_x23[0x13] = uVar6;
  unaff_x23[0x12] = uVar5;
  unaff_x23[1] = uVar6;
  *unaff_x23 = uVar5;
  uVar2 = FUN_073f35c0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  memcpy(&stack0x00000140,(void *)(unaff_x19 + 0x10),0x90);
  iVar11 = *(int *)(unaff_x19 + 0xb8);
  *(int *)(unaff_x19 + 0xb8) = iVar11 + 1;
  FUN_0725384c(&stack0x00000008,&stack0x00000140,iVar11,0);
  puVar10 = (undefined8 *)(unaff_x19 + 0xb0);
  *puVar10 = 0;
  unaff_x23[0x27] = in_stack_00000010;
  unaff_x23[0x26] = in_stack_00000008;
  unaff_x23[0x29] = in_stack_00000020;
  unaff_x23[0x28] = in_stack_00000018;
  thunk_FUN_036b7ad0(puVar10,0);
  if (in_stack_000001d0 == 1) {
    uVar5 = *(undefined8 *)(*(long *)(in_stack_000001f8 + 0x38) + 0x60);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_05e26f18(uVar5,0);
    uVar5 = FUN_073f3640(uVar5,0);
    uVar2 = FUN_05e31434(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      *puVar10 = uVar5;
      thunk_FUN_036b7ad0(puVar10,uVar5);
      plVar3 = (long *)FUN_072569b0(uVar5,0);
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03f8df4c;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar10 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079fed30,0);
LAB_03f8df4c:
        (*(code *)*puVar10)(plVar3);
        return;
      }
    }
    goto LAB_03f8e118;
  }
  if (in_stack_000001d0 != 0) goto LAB_03f8e118;
  plVar3 = (long *)FUN_03e75dd4(**(undefined8 **)(in_stack_000001f8 + 0x38));
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(in_stack_000001f8 + 0x38) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  lVar8 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03f8ddd4;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar7,0);
LAB_03f8ddd4:
  (*(code *)*puVar4)(&stack0x00000068,plVar3,puVar4[1]);
  unaff_x23[3] = in_stack_00000080;
  unaff_x23[2] = in_stack_00000078;
  unaff_x23[5] = in_stack_00000090;
  unaff_x23[4] = in_stack_00000088;
  in_stack_000000d0 = in_stack_00000098;
  lVar7 = *(long *)(in_stack_000001f8 + 0x38);
  unaff_x23[1] = in_stack_00000070;
  *unaff_x23 = in_stack_00000068;
  lVar7 = *(long *)(lVar7 + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  System_Collections_ObjectModel_ReadOnlyCollection<HandSkeletonJoint>__System_Collections_IList_RemoveAt
            (&stack0x00000008,&stack0x000000a0,
             *(undefined8 *)(*(long *)(in_stack_000001f8 + 0x38) + 0x20));
  memcpy(&stack0x000000e0,&stack0x00000008,0x60);
  puVar1 = PTR_DAT_079fd380;
  in_stack_00000068 = 0;
  in_stack_00000078 = &stack0x000001f8;
  in_stack_00000070 = &stack0x000000e0;
  do {
    uVar2 = FUN_058b2474(&stack0x000000e0,
                         *(undefined8 *)(*(long *)(in_stack_000001f8 + 0x38) + 0x50));
    plVar3 = in_stack_00000138;
    if ((uVar2 & 1) == 0)
    goto UniRx_Notification_<>c__DisplayClass21_0<__Il2CppFullySharedGenericType>___ctor;
    if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *in_stack_00000138;
    lVar7 = *(long *)puVar1;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f8ded0;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(in_stack_00000138,lVar7,0);
LAB_03f8ded0:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar6 = FUN_07253374(&stack0x000001d0,0);
    uVar2 = FUN_05c966c0(uVar5,uVar6,0);
  } while ((uVar2 & 1) != 0);
  lVar8 = *plVar3;
  lVar7 = *(long *)puVar1;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_03f8df70;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar7,1);
LAB_03f8df70:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  *puVar10 = uVar5;
  thunk_FUN_036b7ad0(puVar10,uVar5);
  plVar3 = (long *)FUN_072569b0(uVar5,0);
  if (plVar3 == (long *)0x0) {
    uVar5 = FUN_073f3640(uVar5,0);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e31434(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_073f35c0();
      if ((uVar2 & 1) == 0) {
        memcpy(&stack0x00000140,(void *)(unaff_x19 + 0x10),0x90);
        iVar11 = *(int *)(unaff_x19 + 0xb8);
        *(int *)(unaff_x19 + 0xb8) = iVar11 + 1;
        FUN_0725384c(&stack0x00000008,&stack0x00000140,iVar11,0);
        unaff_x23[0x27] = in_stack_00000010;
        unaff_x23[0x26] = in_stack_00000008;
        unaff_x23[0x29] = in_stack_00000020;
        unaff_x23[0x28] = in_stack_00000018;
        uVar2 = FUN_0725335c(&stack0x000001d0,0);
        if ((uVar2 & 1) == 0)
        goto UniRx_Notification_<>c__DisplayClass21_0<__Il2CppFullySharedGenericType>___ctor;
        *puVar10 = uVar5;
        thunk_FUN_036b7ad0(puVar10,uVar5);
        lVar7 = FUN_072569b0(uVar5,0);
        if (lVar7 != 0) {
          FUN_0315f2c4(0,*(undefined8 *)PTR_DAT_079fed30,lVar7);
        }
      }
      goto LAB_03f8e0e8;
    }
UniRx_Notification_<>c__DisplayClass21_0<__Il2CppFullySharedGenericType>___ctor:
    iVar11 = 0x13;
  }
  else {
    lVar7 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f8e0d8;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar10 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079fed30,0);
LAB_03f8e0d8:
    (*(code *)*puVar10)(plVar3);
LAB_03f8e0e8:
    iVar11 = 3;
  }
  System_Collections_Generic_EqualityComparer<Offset<EValue>>__System_Collections_IEqualityComparer_Equals
            (&stack0x000000e0,*(undefined8 *)(*(long *)(in_stack_000001f8 + 0x38) + 0x58));
  if ((iVar11 != 0) && (iVar11 != 0x13)) {
    return;
  }
LAB_03f8e118:
  uVar2 = FUN_073f35c0();
  if (((uVar2 & 1) == 0) && (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


