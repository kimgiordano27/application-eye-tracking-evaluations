/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 035c01d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035c0634) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  int iVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000058;
  undefined1 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_00000120;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e8;
  
  lVar2 = FUN_02f41e9c(param_2);
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_035c02d8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_035c02d8:
  (*(code *)*puVar3)(&stack0x00000058);
  in_stack_000000a8 = in_stack_00000070;
  in_stack_000000a0 = in_stack_00000068;
  in_stack_000000b8 = in_stack_00000080;
  in_stack_000000b0 = in_stack_00000078;
  in_stack_000000c0 = in_stack_00000088;
  in_stack_00000098 = in_stack_00000060;
  in_stack_00000090 = in_stack_00000058;
  lVar2 = *(long *)(*(long *)(in_stack_000001e8 + 0x38) + 0x28);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_03f8c958(&stack0x00000090,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x20));
  memcpy(&stack0x000000d0,&stack0x00000000,0x58);
  puVar1 = PTR_DAT_067c96e0;
  in_stack_00000058 = 0;
  in_stack_00000068 = &stack0x000001e8;
  in_stack_00000060 = &stack0x000000d0;
  do {
    uVar8 = FUN_04b3afa8(&stack0x000000d0,
                         *(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x50));
    plVar6 = in_stack_00000120;
    if ((uVar8 & 1) == 0) goto LAB_035c05a4;
    if (in_stack_00000120 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *in_stack_00000120;
    lVar2 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035c03d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(in_stack_00000120,lVar2,0);
LAB_035c03d4:
    uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    uVar5 = FUN_06172f14(&stack0x000001c0,0);
    uVar8 = FUN_04f6dc3c(uVar4,uVar5,0);
  } while ((uVar8 & 1) != 0);
  lVar7 = *plVar6;
  lVar2 = *(long *)puVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_035c0474;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar6,lVar2,1);
LAB_035c0474:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
  plVar6 = (long *)FUN_061761d8(uVar4,0);
  if (plVar6 == (long *)0x0) {
    uVar4 = FUN_06308f20(uVar4,0);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_050edfb8(uVar4,0,0);
    if ((uVar8 & 1) == 0) {
LAB_035c05a4:
      iVar10 = 0x13;
      goto LAB_035c05d4;
    }
    uVar8 = FUN_06308ea8();
    if ((uVar8 & 1) == 0) {
      memcpy(&stack0x00000130,(void *)(unaff_x19 + 0x10),0x90);
      iVar10 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar10 + 1;
      FUN_0617338c(&stack0x00000130,iVar10,0);
      in_stack_000001c8 = in_stack_00000008;
      in_stack_000001c0 = in_stack_00000000;
      in_stack_000001d8 = in_stack_00000018;
      in_stack_000001d0 = in_stack_00000010;
      uVar8 = FUN_06172efc(&stack0x000001c0,0);
      if ((uVar8 & 1) == 0) goto LAB_035c05a4;
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
      lVar2 = FUN_061761d8(uVar4,0);
      if (lVar2 != 0) {
        FUN_02a830c8(0,DAT_068eddb8,lVar2);
      }
    }
  }
  else {
    lVar2 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067cad80) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035c05bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067cad80,0);
LAB_035c05bc:
    (*(code *)*puVar3)(plVar6);
  }
  iVar10 = 3;
LAB_035c05d4:
  FUN_04b3b3f0(&stack0x000000d0,*(undefined8 *)(*(long *)(in_stack_000001e8 + 0x38) + 0x58));
  if ((((iVar10 == 0) || (iVar10 == 0x13)) && (uVar8 = FUN_06308ea8(), (uVar8 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


