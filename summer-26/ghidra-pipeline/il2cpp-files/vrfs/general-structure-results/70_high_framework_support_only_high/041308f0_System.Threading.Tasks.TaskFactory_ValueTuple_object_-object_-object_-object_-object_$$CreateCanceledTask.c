/*
FUNCTION_NAME: System.Threading.Tasks.TaskFactory<ValueTuple<object,-object,-object,-object,-object>>$$CreateCanceledTask
ENTRY_POINT: 041308f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Threading_Tasks_TaskFactory<ValueTuple<object,_object,_object,_object,_object>>__CreateCanceledTask
               (void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined **in_x9;
  long lVar5;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  long *unaff_x22;
  long *plVar7;
  long unaff_x25;
  ulong unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  long *in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long *in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  while( true ) {
    lVar4 = *(long *)(unaff_x25 + 0x10);
    lVar5 = *(long *)in_x9[0x16c];
    *(int *)(unaff_x25 + 0x1c) = in_w10 + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x25 + 0x18) = uVar1 + 1;
      lVar4 = lVar4 + (long)(int)uVar1 * 0x38;
      *(undefined8 *)(lVar4 + 0x50) = in_stack_000000d0;
      *(long *)(lVar4 + 0x38) = in_stack_000000b8;
      *(long *)(lVar4 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar4 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(lVar4 + 0x40) = in_stack_000000c0;
      *(long *)(lVar4 + 0x28) = in_stack_000000a8;
      *(long **)(lVar4 + 0x20) = in_stack_000000a0;
      thunk_FUN_01656ef8(lVar4 + 0x20,0);
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
      in_stack_000000e8 = in_stack_000000a8;
      in_stack_000000e0 = in_stack_000000a0;
      in_stack_000000f8 = in_stack_000000b8;
      in_stack_000000f0 = in_stack_000000b0;
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      in_stack_00000110 = in_stack_000000d0;
      (**(code **)(*(long *)(lVar4 + 0x58) + 8))
                (unaff_x25,&stack0x000000e0,*(undefined8 *)(lVar4 + 0x58));
    }
LAB_04130990:
    do {
      do {
        do {
          lVar4 = *(long *)(unaff_x19 + 0xd0);
          unaff_x28 = unaff_x28 + 1;
          if (lVar4 == 0) goto LAB_0413099c;
          if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x28) {
            lVar4 = *unaff_x22;
            lVar5 = *(long *)(unaff_x19 + 0xe0);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar4 = *unaff_x22;
            }
            lVar3 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
            if (lVar3 == 0) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar4 = *unaff_x22;
              }
              uVar6 = **(undefined8 **)(lVar4 + 0xb8);
              lVar3 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dbd418);
              if (lVar3 == 0) goto LAB_0413099c;
              FUN_04775390(lVar3,uVar6,*(undefined8 *)PTR_DAT_06da5848,0);
              plVar7 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
              *plVar7 = lVar3;
              thunk_FUN_01656ef8(plVar7,lVar3);
            }
            if (lVar5 != 0) {
              FUN_045c6a54(lVar5,lVar3,*unaff_x21);
              return;
            }
            goto LAB_0413099c;
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar7 = *(long **)(lVar4 + unaff_x28 * 8 + 0x20);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar2 = FUN_051e0350(plVar7,0);
        } while ((uVar2 & 1) == 0);
        if (plVar7 == (long *)0x0) goto LAB_0413099c;
        uVar2 = FUN_051de2f8(plVar7,0);
      } while ((uVar2 & 1) == 0);
      if (*(char *)(unaff_x19 + 0x28) == '\0') {
        lVar4 = FUN_051e516c(plVar7,0);
        if (lVar4 == 0) goto LAB_0413099c;
        uVar2 = FUN_051df964(lVar4,0);
        if ((uVar2 & 1) == 0) goto LAB_04130990;
      }
      lVar4 = FUN_0366303c(plVar7,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar2 = FUN_051d94d4(lVar4,0,0);
      if ((uVar2 & 1) != 0) goto LAB_04130990;
      lVar5 = FUN_03663ff0(plVar7,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar2 = FUN_051d94d4(lVar5,0,0);
      if ((uVar2 & 1) != 0) goto LAB_04130990;
      if (lVar5 == 0) goto LAB_0413099c;
      uVar2 = FUN_036e0114(lVar5,0);
      if ((uVar2 & 1) != 0) goto LAB_04130990;
      lVar3 = (**(code **)(*plVar7 + 0x358))(plVar7,*(undefined8 *)(*plVar7 + 0x360));
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar2 = FUN_051e0350(lVar3,0);
    } while ((uVar2 & 1) == 0);
    unaff_x25 = *(long *)(unaff_x19 + 0xe0);
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    unaff_x20[5] = 0;
    unaff_x20[4] = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    in_stack_00000060 = plVar7;
    thunk_FUN_01656ef8(&stack0x00000060,plVar7);
    in_stack_00000068 = lVar4;
    thunk_FUN_01656ef8();
    in_stack_00000070 = lVar5;
    thunk_FUN_01656ef8(in_stack_00000018,lVar5);
    in_stack_00000078 = lVar3;
    thunk_FUN_01656ef8(in_stack_00000010,lVar3);
    if (lVar4 == 0) break;
    uStack0000000000000080 = FUN_036e1250(lVar4,0);
    uStack0000000000000084 = FUN_036e1194(lVar4,0);
    uStack0000000000000088 = FUN_03663fd4(plVar7,0);
    if (lVar3 == 0) break;
    uStack000000000000008c = FUN_04888724(lVar3,0);
    uStack0000000000000090 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar4,0)
    ;
    if (unaff_x25 == 0) break;
    in_x9 = &PTR_DAT_06e60000;
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_w10 = *(int *)(unaff_x25 + 0x1c);
    in_stack_000000c0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    in_stack_000000c8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  }
LAB_0413099c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


