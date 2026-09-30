/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 035c294c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035c2e70) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor
               (void *param_1,void *param_2,size_t param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  undefined8 *puVar11;
  void *unaff_x22;
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
  
  memcpy(param_1,param_2,param_3);
  iVar10 = *(int *)(unaff_x19 + 0xb8);
  *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
  FUN_060f6b0c(&stack0x00000008,&stack0x00000120,iVar10,0);
  *(undefined8 *)(unaff_x25 + 0x148) = in_stack_00000010;
  *(undefined8 *)(unaff_x25 + 0x140) = in_stack_00000008;
  *(undefined8 *)(unaff_x25 + 0x158) = in_stack_00000020;
  *(undefined8 *)(unaff_x25 + 0x150) = in_stack_00000018;
  puVar11 = (undefined8 *)(unaff_x19 + 0xb0);
  *puVar11 = 0;
  thunk_FUN_02dd37b4(puVar11,0);
  if (in_stack_000001b0 == 1) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x60);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_05015c2c(uVar4,0);
    uVar4 = FUN_062709b8(uVar4,0);
    uVar8 = FUN_0501fa14(uVar4,0,0);
    if ((uVar8 & 1) != 0) {
      *puVar11 = uVar4;
      thunk_FUN_02dd37b4(puVar11,uVar4);
      plVar2 = (long *)FUN_060f9d54(uVar4,0);
      if (plVar2 != (long *)0x0) {
        lVar6 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06768c58) {
              puVar11 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto FUN_035c2c20;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar2,*(long *)PTR_DAT_06768c58,0);
FUN_035c2c20:
        (*(code *)*puVar11)(plVar2);
        return;
      }
    }
    goto LAB_035c2e10;
  }
  if (in_stack_000001b0 != 0) goto LAB_035c2e10;
  plVar2 = (long *)FUN_034efab0(**(undefined8 **)(unaff_x20 + 0x38));
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
  }
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_035c2ac8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar2,lVar6,0);
LAB_035c2ac8:
  (*(code *)*puVar3)(&stack0x00000008,plVar2,puVar3[1]);
  in_stack_00000078 = in_stack_00000010;
  in_stack_00000070 = in_stack_00000008;
  in_stack_00000088 = in_stack_00000020;
  in_stack_00000080 = in_stack_00000018;
  *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x25 + 0x38) = in_stack_00000040;
  *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000038;
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_03f3a754(&stack0x00000008,&stack0x00000070,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20)
              );
  memcpy(&stack0x000000b0,&stack0x00000008,0x68);
  puVar1 = PTR_DAT_067675f0;
  do {
    uVar8 = FUN_04a8acf8(&stack0x000000b0,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
    plVar2 = in_stack_00000110;
    if ((uVar8 & 1) == 0) goto LAB_035c2dc0;
    if (in_stack_00000110 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *in_stack_00000110;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035c2ba4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(in_stack_00000110,lVar6,0);
LAB_035c2ba4:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    uVar5 = FUN_060f6624(&stack0x000001b0,0);
    uVar8 = FUN_04e8c024(uVar4,uVar5,0);
  } while ((uVar8 & 1) != 0);
  lVar7 = *plVar2;
  lVar6 = *(long *)puVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_035c2c44;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar2,lVar6,1);
LAB_035c2c44:
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  *puVar11 = uVar4;
  thunk_FUN_02dd37b4(puVar11,uVar4);
  plVar2 = (long *)FUN_060f9d54(uVar4,0);
  if (plVar2 == (long *)0x0) {
    uVar4 = FUN_062709b8(uVar4,0);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_0501fa14(uVar4,0,0);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_06270938();
      if ((uVar8 & 1) == 0) {
        memcpy(&stack0x00000120,unaff_x22,0x90);
        iVar10 = *(int *)(unaff_x19 + 0xb8);
        *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
        FUN_060f6b0c(&stack0x00000008,&stack0x00000120,iVar10,0);
        *(undefined8 *)(unaff_x25 + 0x148) = in_stack_00000010;
        *(undefined8 *)(unaff_x25 + 0x140) = in_stack_00000008;
        *(undefined8 *)(unaff_x25 + 0x158) = in_stack_00000020;
        *(undefined8 *)(unaff_x25 + 0x150) = in_stack_00000018;
        uVar8 = FUN_060f660c(&stack0x000001b0,0);
        if ((uVar8 & 1) == 0) goto LAB_035c2dc0;
        *puVar11 = uVar4;
        thunk_FUN_02dd37b4(puVar11,uVar4);
        plVar2 = (long *)FUN_060f9d54(uVar4,0);
        if (plVar2 != (long *)0x0) {
          lVar6 = *plVar2;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06768c58) {
                puVar11 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_035c2e58;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar2,*(long *)PTR_DAT_06768c58,0);
LAB_035c2e58:
          (*(code *)*puVar11)(plVar2);
        }
      }
      goto LAB_035c2de8;
    }
LAB_035c2dc0:
    iVar10 = 0x13;
  }
  else {
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06768c58) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035c2dd8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(plVar2,*(long *)PTR_DAT_06768c58,0);
LAB_035c2dd8:
    (*(code *)*puVar11)(plVar2);
LAB_035c2de8:
    iVar10 = 3;
  }
  FUN_04a8b130(&stack0x000000b0,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
  if ((iVar10 != 0) && (iVar10 != 0x13)) {
    return;
  }
LAB_035c2e10:
  uVar8 = FUN_06270938();
  if (((uVar8 & 1) == 0) && (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


