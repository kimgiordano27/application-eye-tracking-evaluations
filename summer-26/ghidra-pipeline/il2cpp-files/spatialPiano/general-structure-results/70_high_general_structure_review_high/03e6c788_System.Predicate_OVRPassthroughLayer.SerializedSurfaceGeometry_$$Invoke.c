/*
FUNCTION_NAME: System.Predicate<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Invoke
ENTRY_POINT: 03e6c788
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03e6ca94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Predicate<OVRPassthroughLayer_SerializedSurfaceGeometry>__Invoke(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = *unaff_x19;
  uVar5 = unaff_x19[1];
  lVar2 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  uVar3 = FUN_047fb800(lVar1,uVar6,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1f0));
  if ((uVar3 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067caa20);
    uVar6 = thunk_FUN_02f44ec4();
    uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067cc198);
    uVar6 = FUN_04f65e2c(uVar5,uVar6,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar5 = thunk_FUN_02f45270();
    FUN_050d5404(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,in_stack_00000038);
  }
  in_stack_00000028 = unaff_x19[1];
  in_stack_00000020 = *unaff_x19;
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = FUN_0348fb5c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x230));
  if ((unaff_x20 & 1) == 0) {
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *unaff_x19;
    uVar5 = unaff_x19[1];
    lVar4 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    FUN_047fb5f4(lVar2,uVar6,uVar5,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x240));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    FUN_03d80aec(lVar1,&stack0x00000034,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x238));
  }
  if ((*(ushort *)(*(long *)(in_stack_00000038 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_067c98f8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  FUN_03e6d210(&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
  return uVar6;
}


