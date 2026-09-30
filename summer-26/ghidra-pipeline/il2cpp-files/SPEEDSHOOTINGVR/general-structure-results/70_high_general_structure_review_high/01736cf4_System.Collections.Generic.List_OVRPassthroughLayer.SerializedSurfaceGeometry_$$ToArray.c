/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 01736cf4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  int iVar1;
  long lVar2;
  undefined8 in_x9;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar6 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  uVar5 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    uStack0000000000000080 = uVar3;
    uStack0000000000000088 = uVar5;
    uStack0000000000000090 = param_1;
    uStack00000000000000a0 = uVar4;
    uStack00000000000000a8 = uVar6;
    uStack00000000000000b0 = in_x9;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    in_stack_000000e0 = uVar3;
    in_stack_000000e8 = uVar5;
    in_stack_000000f0 = param_1;
    in_stack_00000100 = uVar4;
    in_stack_00000108 = uVar6;
    in_stack_00000110 = in_x9;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
      do {
        unaff_w24 = unaff_w24 - 1;
        uStack00000000000000a8 = in_stack_000000c8;
        uStack00000000000000a0 = in_stack_000000c0;
        uStack00000000000000b0 = in_stack_000000d0;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_01736ed0;
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000100 = in_stack_000000c0;
        in_stack_00000110 = in_stack_000000d0;
        in_stack_000000e0 = uVar5;
        in_stack_000000e8 = uVar4;
        in_stack_000000f0 = uVar3;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0103c244();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0103c244();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        FUN_0173670c();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      FUN_0173670c();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
    in_x9 = *(undefined8 *)(lVar2 + 0x30);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    param_1 = in_stack_000000d0;
    uVar3 = in_stack_000000c0;
    uVar5 = in_stack_000000c8;
  }
LAB_01736ed0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


