/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position$$swigRelease
ENTRY_POINT: 080f5ab4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_set_session_3d_position__swigRelease
               (long param_1)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 unaff_w22;
  byte unaff_w23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar11;
  long unaff_x27;
  undefined4 in_stack_00000008;
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
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_00000130;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x580));
  FUN_03c8f898(PTR_DAT_08efd598);
  FUN_03c8f898(PTR_DAT_08f014f8);
  FUN_03c8f898(PTR_DAT_08ef9ce0);
  FUN_03c8f898(PTR_DAT_08efd520);
  FUN_03c8f898(PTR_DAT_08f01500);
  *(undefined1 *)(unaff_x27 + 0xb38) = 1;
  puVar4 = PTR_DAT_08f01500;
  puVar3 = PTR_DAT_08f014f8;
  puVar2 = PTR_DAT_08ef9ce0;
  uVar6 = thunk_FUN_03cf5234(*unaff_x20);
  FUN_052999c0(uVar6,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar6;
  thunk_FUN_03d233cc((long *)(unaff_x19 + 0x168),uVar6);
  if (*(int *)(*(long *)PTR_DAT_08efd520 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0808448c();
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_07fed7a8(uVar6,*(undefined8 *)puVar4,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38),uVar6);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
  FUN_07145224(uVar6,0);
  *(undefined8 *)(unaff_x19 + 0x188) = uVar6;
  thunk_FUN_03d233cc(unaff_x19 + 0x188,uVar6);
  *(undefined8 *)(unaff_x19 + 0x170) = unaff_x26;
  thunk_FUN_03d233cc(unaff_x19 + 0x170);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_07fed7a8();
  *(undefined8 *)(unaff_x19 + 0x178) = uVar6;
  thunk_FUN_03d233cc(unaff_x19 + 0x178,uVar6);
  puVar2 = PTR_DAT_08efd590;
  if (unaff_x24 != 0) {
    if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
      uVar11 = 0;
      uVar8 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar7 = *(long *)(unaff_x19 + 0x168);
        if (lVar7 == 0) goto LAB_080f5db0;
        uVar5 = *(undefined4 *)(unaff_x24 + 0x20 + uVar11 * 4);
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_080f5db0;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
        }
        else {
          FUN_0529a218(lVar7,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = (ulong)*(uint *)(unaff_x24 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x24 + 0x18));
    }
    if (*(int *)(*(long *)PTR_DAT_08efd520 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    *(undefined4 *)(unaff_x19 + 0x10) = unaff_w22;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    FUN_056bb3b4(&stack0x000000a0);
    uVar5 = FUN_085df470(in_stack_00000008,0);
    in_stack_00000088 = 0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    FUN_08602a50(&stack0x00000088,in_stack_000000a0,in_stack_000000a8,uVar5,0xffffffff,0,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00000098;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000088;
    uStack0000000000000074 = 0;
    in_stack_00000070 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    uStack000000000000006c = 0;
    in_stack_00000060 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    FUN_08604c24(&stack0x00000010,0,0);
    __dest = (void *)(unaff_x19 + 0xf8);
    memcpy(__dest,&stack0x00000010,0x6c);
    *(byte *)(unaff_x19 + 0x180) = unaff_w23 & 1;
    *(undefined2 *)(unaff_x19 + 0x181) = 0;
    uVar11 = FUN_08609c2c(&stack0x000000b0,0);
    if ((uVar11 & 1) != 0) {
      FUN_08604d5c(__dest,in_stack_00000130,0);
      FUN_08604d6c(__dest,8,0);
      FUN_08604d48(__dest,in_stack_000000b0,in_stack_000000b8,0);
    }
    return;
  }
LAB_080f5db0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


