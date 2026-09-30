/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_session_handle_set
ENTRY_POINT: 0855d3e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_session_handle_set
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
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
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  FUN_04077588(PTR_DAT_0932e980);
  FUN_04077588(PTR_DAT_0932e988);
  FUN_04077588(PTR_DAT_0932e990);
  FUN_04077588(PTR_DAT_0932e998);
  FUN_04077588(PTR_DAT_0932e9a0);
  FUN_04077588(PTR_DAT_0932e960);
  FUN_04077588(PTR_DAT_0932e9a8);
  *(undefined1 *)(unaff_x21 + 0xa67) = 1;
  lVar7 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_05cc8538(lVar7,*unaff_x19);
  uStack000000000000009c = 0;
  FUN_08a07820(&stack0x0000009c,*unaff_x20,0);
  puVar2 = PTR_DAT_0932c878;
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)PTR_DAT_0932c878;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = PTR_DAT_0932e988;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000009c;
      }
      else {
        FUN_05cc8dcc(lVar7,uStack000000000000009c,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      in_stack_00000098 = 0;
      FUN_08a07820(&stack0x00000098,*(undefined8 *)puVar3,0);
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = PTR_DAT_0932e998;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000098;
        }
        else {
          FUN_05cc8dcc(lVar7,in_stack_00000098,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uStack000000000000008c = 0;
        FUN_08a07820((long)&stack0x00000088 + 4,*(undefined8 *)puVar3,0);
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = PTR_DAT_0932e9a8;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000008c;
          }
          else {
            FUN_05cc8dcc(lVar7,uStack000000000000008c,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          uStack0000000000000088 = 0;
          FUN_08a07820(&stack0x00000088,*(undefined8 *)puVar3,0);
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = PTR_DAT_0932e990;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000088;
            }
            else {
              FUN_05cc8dcc(lVar7,uStack0000000000000088,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            uStack0000000000000084 = 0;
            FUN_08a07820((long)&stack0x00000080 + 4,*(undefined8 *)puVar3,0);
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar3 = PTR_DAT_0932e9a0;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000084;
              }
              else {
                FUN_05cc8dcc(lVar7,uStack0000000000000084,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              uStack0000000000000080 = 0;
              FUN_08a07820(&stack0x00000080,*(undefined8 *)puVar3,0);
              lVar10 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)puVar2;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              puVar6 = PTR_DAT_0932e980;
              puVar5 = PTR_DAT_0932e978;
              puVar4 = PTR_DAT_0932e970;
              puVar3 = PTR_DAT_0932e968;
              puVar2 = PTR_DAT_0932c538;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000080;
                }
                else {
                  FUN_05cc8dcc(lVar7,uStack0000000000000080,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
                thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar7);
                in_stack_00000070 = 0;
                in_stack_00000018 = 0;
                in_stack_00000010 = 0;
                in_stack_00000028 = 0;
                in_stack_00000020 = 0;
                in_stack_00000038 = 0;
                in_stack_00000030 = 0;
                in_stack_00000048 = 0;
                in_stack_00000040 = 0;
                in_stack_00000058 = 0;
                in_stack_00000050 = 0;
                in_stack_00000068 = 0;
                in_stack_00000060 = 0;
                in_stack_00000008 = 0;
                in_stack_00000000 = 0;
                FUN_089fd808();
                lVar7 = *(long *)puVar2;
                memcpy((void *)(*(long *)(lVar7 + 0xb8) + 8),&stack0x00000000,0x78);
                puVar8 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x80);
                *puVar8 = 0;
                thunk_FUN_040ec700(puVar8,0);
                uVar9 = FUN_04077674(*(undefined8 *)puVar6,1);
                puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
                *puVar8 = uVar9;
                thunk_FUN_040ec700(puVar8,uVar9);
                uVar9 = FUN_04077674(*(undefined8 *)puVar5,1);
                puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
                *puVar8 = uVar9;
                thunk_FUN_040ec700(puVar8,uVar9);
                uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
                FUN_06e69c70(uVar9,*(undefined8 *)puVar3);
                puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
                *puVar8 = uVar9;
                thunk_FUN_040ec700(puVar8,uVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


