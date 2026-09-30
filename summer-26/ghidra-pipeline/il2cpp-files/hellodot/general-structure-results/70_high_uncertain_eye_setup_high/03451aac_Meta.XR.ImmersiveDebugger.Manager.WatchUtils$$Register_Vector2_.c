/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 03451aac
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  long unaff_x23;
  double dVar13;
  double unaff_d8;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  int iStack0000000000000078;
  undefined1 uStack000000000000007c;
  long in_stack_00000288;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x678));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd6f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd680);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd4c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd510);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd6f8);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_02ce09d4();
  }
  memset(&stack0x00000060,0,0x21c);
  puVar1 = PTR_DAT_065dd4c0;
  if (unaff_x20 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar6 = thunk_FUN_02cea894();
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065dd508);
    FUN_04e97f6c(uVar6,uVar5,0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_065dd4c0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((int)uVar5 == 0) {
      lVar11 = *(long *)(unaff_x20 + 0x78);
      if (lVar11 == 0) {
LAB_03451d00:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar11 + 0xe8) != -1) {
        if (0.0 <= unaff_d8) {
          dVar13 = (double)(*(undefined8 **)(*(long *)PTR_DAT_065dd680 + 0xb8))[1] + unaff_d8;
        }
        else {
          plVar12 = (long *)**(undefined8 **)(*(long *)PTR_DAT_065dd680 + 0xb8);
          if (plVar12 == (long *)0x0) goto LAB_03451d00;
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065dd678) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
                goto LAB_03451bd0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065dd678,0x13);
LAB_03451bd0:
          dVar13 = (double)(*(code *)*puVar4)(plVar12,puVar4[1]);
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar2 = FUN_058da6e4();
        if (iVar2 != 0xc) {
          uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
          uVar5 = FUN_02ce7ad4(uVar5,4);
          puVar1 = PTR_DAT_065c8c08;
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,0xc);
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065c8c08);
          uVar6 = thunk_FUN_02cea4e8(uVar6,&stack0x00000040);
          FUN_028be474(uVar5);
          FUN_028c2238(uVar5,uVar6);
          FUN_028c226c(uVar5,0,uVar6);
          uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
          thunk_FUN_02c7737c(PTR_DAT_065c89e8);
          FUN_028be084();
          plVar12 = (long *)FUN_04f3fb68(uVar6,0);
          FUN_028be474();
          uVar6 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          FUN_028be474(uVar5);
          FUN_028c2238(uVar5,uVar6);
          FUN_028c226c(uVar5,1,uVar6);
          FUN_028be474(uVar5);
          FUN_028c2238(uVar5);
          FUN_028c226c(uVar5,2);
          FUN_028be474();
          thunk_FUN_02c7737c(PTR_DAT_065dd4c0);
          FUN_028be084();
          uVar3 = FUN_058da6e4();
          in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar3);
          uVar6 = thunk_FUN_02c7737c(puVar1);
          uVar6 = thunk_FUN_02cea4e8(uVar6,&stack0x00000028);
          FUN_028be474(uVar5);
          FUN_028c2238(uVar5,uVar6);
          FUN_028c226c(uVar5,3,uVar6);
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dd710);
          uVar5 = FUN_04db9b3c(uVar6,uVar5,0);
          thunk_FUN_02c7737c(PTR_DAT_065c96d8);
          uVar6 = thunk_FUN_02cea894();
          uVar7 = thunk_FUN_02c7737c(PTR_DAT_065dd718);
          FUN_04e97fd8(uVar6,uVar5,uVar7,0);
          goto LAB_03451f40;
        }
        in_stack_00000028 = 0;
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_058d13cc(dVar13,&stack0x00000028,0x444c5441,0x28,*(undefined4 *)(lVar11 + 0xe0),0);
        in_stack_00000048 = in_stack_00000030;
        in_stack_00000040 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000038;
        uVar5 = *(undefined8 *)(lVar11 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uStack0000000000000074 = (undefined4)uVar5;
        iStack0000000000000078 = *(int *)(unaff_x20 + 0x14) - *(int *)(lVar11 + 0x14);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        uStack0000000000000070 = in_stack_00000050;
        uStack000000000000007c = 0;
        FUN_05eaa79c((long)&stack0x00000078 + 4,&stack0x00000018,0xc,0);
        puVar1 = PTR_DAT_065dd510;
        lVar11 = *(long *)PTR_DAT_065dd510;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar11 = *(long *)puVar1;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar11 != 0) {
          FUN_058943f0(lVar11,&stack0x00000060,0);
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000288) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        goto LAB_03451d00;
      }
      thunk_FUN_02c7737c(PTR_DAT_065dd708);
      uVar5 = FUN_04db9ab4();
    }
    else {
      thunk_FUN_02c7737c(PTR_DAT_065dd700);
      uVar5 = FUN_04db0cfc();
    }
    thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
    uVar6 = thunk_FUN_02cea894();
    FUN_04f30dfc(uVar6,uVar5,0);
  }
LAB_03451f40:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar6);
}


