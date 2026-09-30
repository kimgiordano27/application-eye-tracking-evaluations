/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyViewModel$$Dispose
ENTRY_POINT: 07112720
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Unity_Hierarchy_HierarchyViewModel__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 07112168 with catch @ 07112720 */
                    /* catch() { ... } // from try @ 071120f0 with catch @ 07112724 */
                    /* catch() { ... } // from try @ 07112490 with catch @ 07112728
                       catch() { ... } // from try @ 071126ec with catch @ 07112728 */
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePostValueAsync>d__4>__
              );
                    /* catch() { ... } // from try @ 071121b0 with catch @ 0711272c */
                    /* catch() { ... } // from try @ 071126d0 with catch @ 07112730 */
  *(undefined1 *)(unaff_x20 + 0x64a) = 1;
  puVar2 = PTR_DAT_07a04d28;
                    /* catch() { ... } // from try @ 07112454 with catch @ 07112734
                       catch() { ... } // from try @ 071126e8 with catch @ 07112734 */
  iVar1 = *(int *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 071123cc with catch @ 07112738
                       catch() { ... } // from try @ 071126e0 with catch @ 07112738 */
  lVar7 = *(long *)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 07112108 with catch @ 0711273c */
                    /* catch() { ... } // from try @ 071126c8 with catch @ 07112740 */
                    /* catch() { ... } // from try @ 071126c4 with catch @ 07112744 */
                    /* catch() { ... } // from try @ 071120d0 with catch @ 07112748 */
                    /* catch() { ... } // from try @ 071126c0 with catch @ 0711274c */
  if (iVar1 < 2) {
                    /* catch() { ... } // from try @ 071126b4 with catch @ 07112750 */
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(char *)(unaff_x19 + 0x20) == '\0') goto Unity_Hierarchy_HierarchyViewModel__Contains;
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07179300(*(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParsePostValueAsync>d__4>__
                   ,0);
      *(undefined8 *)(in_stack_00000018 + 0x18) = 0;
      thunk_FUN_036b7ad0((undefined8 *)(in_stack_00000018 + 0x18),0);
      uVar6 = 1;
    }
    else {
                    /* catch() { ... } // from try @ 071126ac with catch @ 07112754 */
                    /* catch() { ... } // from try @ 071126a4 with catch @ 07112758 */
      if (iVar1 != 1) {
        return 0;
      }
                    /* catch() { ... } // from try @ 0711269c with catch @ 0711275c */
                    /* catch() { ... } // from try @ 0711268c with catch @ 07112760 */
                    /* catch() { ... } // from try @ 071124e4 with catch @ 07112764
                       catch() { ... } // from try @ 07112588 with catch @ 07112764
                       catch() { ... } // from try @ 071126f4 with catch @ 07112764 */
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07edd7e5 == '\0') {
        FUN_03642964(PTR_DAT_07a04d28);
        DAT_07edd7e5 = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_07107080(lVar7,0);
      *(undefined8 *)(in_stack_00000018 + 0x18) = 0;
      thunk_FUN_036b7ad0((undefined8 *)(in_stack_00000018 + 0x18),0);
      uVar6 = 2;
    }
LAB_07112a50:
    uVar5 = 1;
    *(undefined4 *)(in_stack_00000018 + 0x10) = uVar6;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18(0);
      }
      lVar3 = *(long *)(lVar7 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        unaff_x19 = in_stack_00000018;
      }
Unity_Hierarchy_HierarchyViewModel__Contains:
      if ((*(char *)(unaff_x19 + 0x30) != '\0') && (uVar4 = FUN_07112c00(), (uVar4 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07179300(*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ParseObjectAsync>d__15>__
                     ,0);
        puVar2 = PTR_DAT_07a04d28;
        if (*(int *)(*(long *)PTR_DAT_07a04d28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07edd7e5 == '\0') {
          FUN_03642964(PTR_DAT_07a04d28);
          DAT_07edd7e5 = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar5 = FUN_0710768c(lVar7,0);
        *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
        thunk_FUN_036b7ad0();
        uVar6 = 3;
        goto LAB_07112a50;
      }
      uVar4 = FUN_07112c48();
      if ((uVar4 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar7 = *(long *)(lVar7 + 0x30);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
        ;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07eec8cd == '\0') {
          FUN_03642964(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                      );
          DAT_07eec8cd = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar7 = *(long *)puVar2;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x14) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_079f4530 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_0717044c(0);
        }
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07edd7e5 == '\0') {
        FUN_03642964(PTR_DAT_07a04d28);
        DAT_07edd7e5 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_07106e1c(lVar3,0);
      if (DAT_07edd7e5 == '\0') {
        FUN_03642964(PTR_DAT_07a04d28);
        DAT_07edd7e5 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_071c0684(uVar5,0,0);
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
      ;
      if ((uVar4 & 1) == 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else {
        lVar3 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
        ;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar3 = *(long *)puVar2;
        }
        *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar3 = *(long *)(lVar7 + 0x40);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
      }
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
    }
    FUN_07112c90(in_stack_00000018);
    uVar5 = 0;
  }
  return uVar5;
}


