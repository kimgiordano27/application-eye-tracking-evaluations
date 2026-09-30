/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector2>
ENTRY_POINT: 050806b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector2>(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  short unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  short in_stack_00000050;
  char cStack0000000000000054;
  long in_stack_00000058;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x798));
  *(undefined1 *)(unaff_x25 + 0x362) = 1;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_03fe7750(&stack0x00000058,&stack0x00000048,1,0,0);
  cStack0000000000000054 = '\0';
  lVar6 = FUN_0803f05c();
  if (lVar6 != 0) {
    FUN_05a3a290(lVar6,*(undefined8 *)PTR_DAT_091fa890);
    puVar4 = PTR_DAT_091fa870;
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000040 = in_stack_00000010;
    while (uVar7 = FUN_06daab3c(&stack0x00000030,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar7 = FUN_0504a724();
      if ((uVar7 & 1) != 0) {
        cStack0000000000000054 = cStack0000000000000054 + '\x01';
      }
    }
    FUN_06daab38(&stack0x00000030,*(undefined8 *)PTR_DAT_091fa868);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (in_stack_00000058 != 0) {
      uVar1 = *(undefined4 *)(in_stack_00000058 + 8);
      if (DAT_0983c3d0 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_0983c3d0 = '\x01';
        if (in_stack_00000058 == 0) goto LAB_05080b10;
      }
      puVar4 = PTR_DAT_091a1008;
      uVar2 = *(undefined4 *)(in_stack_00000058 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar5 = FUN_0717946c(unaff_w24,uVar2,0);
      if (in_stack_00000058 != 0) {
        iVar3 = *(int *)(in_stack_00000058 + 8);
        if ((iVar5 < iVar3) && (*(int *)(in_stack_00000058 + 0xc) < iVar3)) {
          *(int *)(in_stack_00000058 + 0xc) = iVar3;
        }
        *(int *)(in_stack_00000058 + 8) = iVar5;
        lVar6 = *unaff_x29;
        in_stack_00000050 = (short)uVar1 - unaff_w27;
        if (*(long *)(lVar6 + 0x38) == 0) {
          FUN_03d2d2b0(PTR_DAT_091a7798);
          if (*(long *)(lVar6 + 0x38) == 0) {
            FUN_03d8f2c8(lVar6);
          }
        }
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (*(char *)(unaff_x28 + 0x2d7) == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a7798);
          *(undefined1 *)(unaff_x28 + 0x2d7) = 1;
        }
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_03fe7750(&stack0x00000058,&stack0x00000050,2,0,0);
        if (DAT_0983c3d0 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091a1008);
          DAT_0983c3d0 = '\x01';
        }
        if (in_stack_00000058 != 0) {
          uVar2 = *(undefined4 *)(in_stack_00000058 + 0x10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          iVar5 = FUN_0717946c(unaff_w23,uVar2,0);
          if (in_stack_00000058 != 0) {
            iVar3 = *(int *)(in_stack_00000058 + 8);
            if ((iVar5 < iVar3) && (*(int *)(in_stack_00000058 + 0xc) < iVar3)) {
              *(int *)(in_stack_00000058 + 0xc) = iVar3;
            }
            *(int *)(in_stack_00000058 + 8) = iVar5;
            lVar6 = *(long *)PTR_DAT_091fa888;
            if (*(long *)(lVar6 + 0x38) == 0) {
              FUN_03d2d2b0(PTR_DAT_091a7798);
              if (*(long *)(lVar6 + 0x38) == 0) {
                FUN_03d8f2c8(lVar6);
              }
            }
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            if (*(char *)(unaff_x25 + 0x362) == '\0') {
              FUN_03d2d2b0(PTR_DAT_091a7798);
              *(undefined1 *)(unaff_x25 + 0x362) = 1;
            }
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_03fe7750(&stack0x00000058,&stack0x00000054,1,0,0);
            if (DAT_0983c3d0 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091a1008);
              DAT_0983c3d0 = '\x01';
            }
            if (in_stack_00000058 != 0) {
              uVar2 = *(undefined4 *)(in_stack_00000058 + 0x10);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              iVar5 = FUN_0717946c(uVar1,uVar2,0);
              if (in_stack_00000058 != 0) {
                iVar3 = *(int *)(in_stack_00000058 + 8);
                if ((iVar5 < iVar3) && (*(int *)(in_stack_00000058 + 0xc) < iVar3)) {
                  *(int *)(in_stack_00000058 + 0xc) = iVar3;
                }
                *(int *)(in_stack_00000058 + 8) = iVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05080b10:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


