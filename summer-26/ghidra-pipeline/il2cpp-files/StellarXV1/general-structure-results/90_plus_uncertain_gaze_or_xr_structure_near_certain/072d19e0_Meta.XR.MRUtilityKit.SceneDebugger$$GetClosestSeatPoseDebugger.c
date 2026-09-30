/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 072d19e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x072d1c78) */
/* WARNING: Removing unreachable block (ram,0x072d1c94) */

void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar12;
  int unaff_w24;
  long *unaff_x25;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  int in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  
  if (unaff_w24 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000010 = *plVar6;
    __cxa_end_catch();
    plVar6 = (long *)*in_stack_00000018;
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_072d1800;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x25,0);
LAB_072d1800:
      (*(code *)*puVar4)(plVar6,puVar4[1]);
    }
    if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828();
    }
  }
  else {
    FUN_03b08ffc(&stack0x00000010);
    if (unaff_w24 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_041676cc(param_1);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c3ae8);
    uVar10 = thunk_FUN_040daa88(uVar5,*(undefined8 *)*puVar4);
    iVar2 = in_stack_00000030;
    if ((uVar10 & 1) == 0) {
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092a0be0);
      uVar10 = thunk_FUN_040daa88(uVar5,*(undefined8 *)*puVar4);
      if ((uVar10 & 1) == 0) {
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
        uVar10 = thunk_FUN_040daa88(uVar5,*(undefined8 *)*puVar4);
        iVar2 = in_stack_00000030;
        if ((uVar10 & 1) == 0) {
          puVar7 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
        }
        plVar6 = (long *)*puVar4;
        *(long **)(&stack0x00000020 + (long)in_stack_00000030 * 8) = plVar6;
        in_stack_00000030 = in_stack_00000030 + 1;
        __cxa_end_catch();
        *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
        if (plVar6 == (long *)0x0) goto LAB_072d1b5c;
        uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        *unaff_x21 = uVar5;
        thunk_FUN_040ec700();
        in_stack_00000030 = iVar2;
      }
      else {
        plVar6 = (long *)*puVar4;
        *(long **)(&stack0x00000020 + (long)in_stack_00000030 * 8) = plVar6;
        in_stack_00000030 = in_stack_00000030 + 1;
        __cxa_end_catch();
        if (plVar6 == (long *)0x0) goto LAB_072d1b5c;
        if ((*(uint *)((long)plVar6 + 0x8c) | 8) != 0xe) {
          *(uint *)(unaff_x20 + 0x10) = *(uint *)((long)plVar6 + 0x8c);
          uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
          thunk_FUN_040ec700();
          plVar6 = (long *)plVar6[0x12];
          lVar8 = thunk_FUN_040dedf8(PTR_DAT_092a6b90);
          if (plVar6 != (long *)0x0) {
            lVar9 = *plVar6;
            if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) ==
                lVar8)) {
              uVar3 = (**(code **)(lVar9 + 0x248))(plVar6,*(undefined8 *)(lVar9 + 0x250));
              *(undefined4 *)(unaff_x20 + 0x10) = uVar3;
              lVar8 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
              in_stack_00000018 = &stack0x00000040;
              in_stack_00000010 = 0;
              in_stack_00000040 = lVar8;
              if (lVar8 != 0) {
                thunk_FUN_040dedf8(PTR_DAT_09288d58);
                plVar6 = (long *)thunk_FUN_040b4efc();
                FUN_07628db8(plVar6,lVar8,0);
                in_stack_00000038 = plVar6;
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                unaff_x22 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
                uVar10 = FUN_074e5d94(unaff_x22,0);
                if ((uVar10 & 1) == 0) {
                  FUN_072d20dc();
                }
                FUN_03f9c734();
              }
              FUN_03f9c734(&stack0x00000010);
            }
          }
        }
        in_stack_00000030 = in_stack_00000030 + -1;
      }
    }
    else {
      uVar12 = *puVar4;
      *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000030 * 8) = uVar12;
      in_stack_00000030 = in_stack_00000030 + 1;
      __cxa_end_catch();
      *(undefined4 *)(unaff_x20 + 0x10) = 0xfffffffb;
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c3af0);
      uVar5 = FUN_074d57ec(uVar5,uVar12,0);
      *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
      thunk_FUN_040ec700();
      in_stack_00000030 = iVar2;
    }
  }
  FUN_072d0564();
  *(undefined1 *)(unaff_x19 + 0xd8) = 0;
  uVar10 = FUN_069ab908();
  if ((uVar10 & 1) != 0) {
    if ((*(int *)(unaff_x20 + 0x10) != 200) &&
       (uVar10 = FUN_074e5d94(unaff_x22,0), (uVar10 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_092b78a0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      plVar6 = (long *)FUN_0730bf88(unaff_x22,0);
      uVar10 = FUN_07316860(plVar6,0,0);
      if ((uVar10 & 1) != 0) {
        if ((plVar6 == (long *)0x0) ||
           (lVar8 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310)),
           puVar1 = PTR_DAT_092b9a30, lVar8 == 0)) {
LAB_072d1b5c:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar10 = FUN_07319984(lVar8,*(undefined8 *)PTR_DAT_092b9a30,0);
        if ((uVar10 & 1) != 0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                     (plVar6,*(undefined8 *)puVar1,*(undefined8 *)(*plVar6 + 0x1b0))
          ;
          if (plVar6 == (long *)0x0) goto LAB_072d1b5c;
          uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          *unaff_x21 = uVar5;
          thunk_FUN_040ec700();
        }
      }
    }
    thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c();
    FUN_069ad2b0();
  }
  return;
}


