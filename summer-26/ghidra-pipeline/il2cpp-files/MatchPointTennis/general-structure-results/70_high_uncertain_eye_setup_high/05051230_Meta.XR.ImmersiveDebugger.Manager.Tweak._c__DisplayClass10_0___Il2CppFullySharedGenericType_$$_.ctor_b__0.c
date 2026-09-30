/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak.<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>$$<.ctor>b__0
ENTRY_POINT: 05051230
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x050517a0) */

void Meta_XR_ImmersiveDebugger_Manager_Tweak_<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>__<_ctor>b__0
               (undefined1 param_1 [16],void *param_2)

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
  long unaff_x20;
  int iVar10;
  undefined8 *puVar11;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000110;
  int in_stack_000001b0;
  
  *(long *)(unaff_x25 + 0x148) = param_1._8_8_;
  *(long *)(unaff_x25 + 0x140) = param_1._0_8_;
  *(long *)(unaff_x25 + 0x158) = param_1._8_8_;
  *(long *)(unaff_x25 + 0x150) = param_1._0_8_;
  memset(param_2,0,0x90);
  in_stack_00000110 = (long *)0x0;
  *(undefined8 *)(unaff_x25 + 0x88) = 0;
  *(undefined8 *)(unaff_x25 + 0x80) = 0;
  *(undefined8 *)(unaff_x25 + 0x98) = 0;
  *(undefined8 *)(unaff_x25 + 0x90) = 0;
  *(undefined8 *)(unaff_x25 + 0x68) = 0;
  *(undefined8 *)(unaff_x25 + 0x60) = 0;
  *(undefined8 *)(unaff_x25 + 0x78) = 0;
  *(undefined8 *)(unaff_x25 + 0x70) = 0;
  *(undefined8 *)(unaff_x25 + 0x48) = 0;
  *(undefined8 *)(unaff_x25 + 0x40) = 0;
  *(undefined8 *)(unaff_x25 + 0x58) = 0;
  *(undefined8 *)(unaff_x25 + 0x50) = 0;
  *(undefined8 *)(unaff_x25 + 0x28) = 0;
  *(undefined8 *)(unaff_x25 + 0x20) = 0;
  *(undefined8 *)(unaff_x25 + 0x38) = 0;
  *(undefined8 *)(unaff_x25 + 0x30) = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uVar2 = FUN_0973ae24();
  if ((uVar2 & 1) != 0) {
    return;
  }
  memcpy(&stack0x00000120,(void *)(unaff_x19 + 0x10),0x90);
  iVar10 = *(int *)(unaff_x19 + 0xb8);
  *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
  UnityEngine_UIElements_UITKTextHandle__UpdateMesh(&stack0x00000008,&stack0x00000120,iVar10,0);
  *(undefined8 *)(unaff_x25 + 0x148) = in_stack_00000010;
  *(undefined8 *)(unaff_x25 + 0x140) = in_stack_00000008;
  *(undefined8 *)(unaff_x25 + 0x158) = in_stack_00000020;
  *(undefined8 *)(unaff_x25 + 0x150) = in_stack_00000018;
  puVar11 = (undefined8 *)(unaff_x19 + 0xb0);
  *puVar11 = 0;
  thunk_FUN_044bb4b4(puVar11,0);
  if (in_stack_000001b0 == 1) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x60);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar5 = FUN_0973aea4(uVar5,0);
    uVar2 = FUN_07a56f5c(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      *puVar11 = uVar5;
      thunk_FUN_044bb4b4(puVar11,uVar5);
      plVar3 = (long *)FUN_095c1a04(uVar5,0);
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f271c8) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05051550;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar11 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f271c8,0);
LAB_05051550:
        (*(code *)*puVar11)(plVar3);
        return;
      }
    }
    goto LAB_05051740;
  }
  if (in_stack_000001b0 != 0) goto LAB_05051740;
  plVar3 = (long *)FUN_04f03470(**(undefined8 **)(unaff_x20 + 0x38));
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8(lVar7);
  }
  lVar8 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_050513f8;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac(plVar3,lVar7,0);
LAB_050513f8:
  (*(code *)*puVar4)(&stack0x00000008,plVar3,puVar4[1]);
  in_stack_00000078 = in_stack_00000010;
  in_stack_00000070 = in_stack_00000008;
  in_stack_00000088 = in_stack_00000020;
  in_stack_00000080 = in_stack_00000018;
  *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x25 + 0x38) = in_stack_00000040;
  *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000038;
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_06332848(&stack0x00000008,&stack0x00000070,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20)
              );
  memcpy(&stack0x000000b0,&stack0x00000008,0x68);
  puVar1 = PTR_DAT_09f25508;
  do {
    uVar2 = FUN_05189b68(&stack0x000000b0,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
    plVar3 = in_stack_00000110;
    if ((uVar2 & 1) == 0) goto LAB_050516f0;
    if (in_stack_00000110 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar8 = *in_stack_00000110;
    lVar7 = *(long *)puVar1;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_050514d4;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(in_stack_00000110,lVar7,0);
LAB_050514d4:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar6 = FUN_095be2d4(&stack0x000001b0,0);
    uVar2 = FUN_078b33f8(uVar5,uVar6,0);
  } while ((uVar2 & 1) != 0);
  lVar8 = *plVar3;
  lVar7 = *(long *)puVar1;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_05051574;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac(plVar3,lVar7,1);
LAB_05051574:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  *puVar11 = uVar5;
  thunk_FUN_044bb4b4(puVar11,uVar5);
  plVar3 = (long *)FUN_095c1a04(uVar5,0);
  if (plVar3 == (long *)0x0) {
    uVar5 = FUN_0973aea4(uVar5,0);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a56f5c(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0973ae24();
      if ((uVar2 & 1) == 0) {
        memcpy(&stack0x00000120,(void *)(unaff_x19 + 0x10),0x90);
        iVar10 = *(int *)(unaff_x19 + 0xb8);
        *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
        UnityEngine_UIElements_UITKTextHandle__UpdateMesh
                  (&stack0x00000008,&stack0x00000120,iVar10,0);
        *(undefined8 *)(unaff_x25 + 0x148) = in_stack_00000010;
        *(undefined8 *)(unaff_x25 + 0x140) = in_stack_00000008;
        *(undefined8 *)(unaff_x25 + 0x158) = in_stack_00000020;
        *(undefined8 *)(unaff_x25 + 0x150) = in_stack_00000018;
        uVar2 = FUN_095be2bc(&stack0x000001b0,0);
        if ((uVar2 & 1) == 0) goto LAB_050516f0;
        *puVar11 = uVar5;
        thunk_FUN_044bb4b4(puVar11,uVar5);
        plVar3 = (long *)FUN_095c1a04(uVar5,0);
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f271c8) {
                puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05051788;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar11 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f271c8,0);
LAB_05051788:
          (*(code *)*puVar11)(plVar3);
        }
      }
      goto LAB_05051718;
    }
LAB_050516f0:
    iVar10 = 0x13;
  }
  else {
    lVar7 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f271c8) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05051708;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar11 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f271c8,0);
LAB_05051708:
    (*(code *)*puVar11)(plVar3);
LAB_05051718:
    iVar10 = 3;
  }
  FUN_05189fa0(&stack0x000000b0,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
  if ((iVar10 != 0) && (iVar10 != 0x13)) {
    return;
  }
LAB_05051740:
  uVar2 = FUN_0973ae24();
  if (((uVar2 & 1) == 0) && (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


