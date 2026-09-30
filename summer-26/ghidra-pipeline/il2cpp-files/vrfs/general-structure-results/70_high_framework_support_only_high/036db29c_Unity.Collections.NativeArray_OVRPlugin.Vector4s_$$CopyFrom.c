/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 036db29c
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int iVar10;
  long unaff_x24;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xd0));
  *(undefined1 *)(unaff_x22 + 0x930) = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000024 = 0;
  uVar5 = FUN_036dcb0c();
  if (unaff_x20 != 0) {
    uVar6 = FUN_036dd1f4(uVar5,in_stack_00000038,in_stack_00000040,in_stack_00000028,
                         in_stack_00000030,*(undefined8 *)(unaff_x20 + 0x50),
                         *(undefined8 *)(unaff_x20 + 0x58));
    puVar2 = PTR_DAT_06d98c30;
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06e57350,4);
      if (unaff_x21 != (long *)0x0) {
        uStack0000000000000024 = (undefined4)unaff_x21[2];
        uVar5 = FUN_040f742c(0);
        lVar7 = FUN_03219634(&stack0x00000024,uVar5,0);
        if (plVar8 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_036db62c:
            uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar5,0);
          }
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar7;
            thunk_FUN_01656ef8(plVar8 + 4,lVar7);
            uStack0000000000000024 = *(undefined4 *)((long)unaff_x21 + 0x14);
            uVar5 = FUN_040f742c(0);
            lVar7 = FUN_03219634(&stack0x00000024,uVar5,0);
            if ((lVar7 != 0) &&
               (lVar9 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_036db62c;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar7;
              thunk_FUN_01656ef8(plVar8 + 5,lVar7);
              uStack0000000000000024 = *(undefined4 *)(unaff_x20 + 0x10);
              uVar5 = FUN_040f742c(0);
              lVar7 = FUN_03219634(&stack0x00000024,uVar5,0);
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_036db62c;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = lVar7;
                thunk_FUN_01656ef8(plVar8 + 6,lVar7);
                uStack0000000000000024 = *(undefined4 *)(unaff_x20 + 0x14);
                uVar5 = FUN_040f742c(0);
                lVar7 = FUN_03219634(&stack0x00000024,uVar5,0);
                if ((lVar7 != 0) &&
                   (lVar9 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_036db62c;
                puVar2 = PTR_DAT_06e130d0;
                if (3 < *(uint *)(plVar8 + 3)) {
                  plVar8[7] = lVar7;
                  thunk_FUN_01656ef8(plVar8 + 7,lVar7);
                  uVar5 = FUN_04748adc(*(undefined8 *)puVar2,plVar8,0);
                  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
                  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar5);
LAB_036db5f0:
                  uVar5 = 0;
LAB_036db5f4:
                  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail(uVar5);
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
      }
    }
    else {
      FUN_03fbb870();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar2);
      }
      FUN_03fbbd88();
      if (unaff_x21 != (long *)0x0) {
        lVar7 = (**(code **)(*unaff_x21 + 0x238))();
        puVar3 = PTR_DAT_06e5dc58;
        puVar2 = PTR_DAT_06de32c0;
        if (lVar7 != 0) {
          iVar10 = 0;
          do {
            iVar4 = FUN_03f054bc(lVar7,0);
            if (iVar4 <= iVar10) {
              FUN_03fbb8e8();
              uVar5 = 1;
              goto LAB_036db5f4;
            }
            plVar8 = (long *)(**(code **)(*unaff_x21 + 0x238))();
            if (plVar8 == (long *)0x0) break;
            plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                       (plVar8,iVar10,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar8 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar3 + 300);
              if ((*(byte *)(*plVar8 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar8);
              }
            }
            uVar6 = FUN_036d8ec8();
            if ((uVar6 & 1) == 0) {
              uVar5 = FUN_0474aec4(*(undefined8 *)puVar2,0);
              *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
              thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar5);
              FUN_03fbb8e8();
              goto LAB_036db5f0;
            }
            iVar10 = iVar10 + 1;
            lVar7 = (**(code **)(*unaff_x21 + 0x238))();
          } while (lVar7 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


