/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabWithClosestSizeToAnchor
ENTRY_POINT: 0770909c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabWithClosestSizeToAnchor(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f303b0);
  FUN_04447ba8(PTR_DAT_09f303b8);
  FUN_04447ba8(PTR_DAT_09f2fde8);
  FUN_04447ba8(PTR_DAT_09f2fdf0);
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  puVar3 = PTR_DAT_09f30258;
  puVar2 = PTR_DAT_09f20018;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  auVar1 = ZEXT816(0);
  in_stack_00000068 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000068 = *(undefined8 *)(unaff_x19 + 8);
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    *unaff_x19 = -1;
  }
  else {
    _in_stack_00000070 = FUN_07a3607c(0);
    uVar4 = FUN_07a38180(&stack0x00000070,0);
    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar4;
    thunk_FUN_044bb4b4();
    lVar5 = FUN_07707338();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(char *)(lVar5 + 0x60) == '\0') {
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      thunk_FUN_044bb4b4(&stack0x00000040,0);
      in_stack_00000048 = 0;
      thunk_FUN_044bb4b4((ulong)&stack0x00000040 | 8,0);
      in_stack_00000050 = 0;
      thunk_FUN_044bb4b4(&stack0x00000050,0);
      in_stack_00000058 = 0;
      thunk_FUN_044bb4b4(&stack0x00000058,0);
      lVar5 = *(long *)puVar3;
      lVar8 = *(long *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar8 + 0x40) = in_stack_00000058;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000050;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000048;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
      thunk_FUN_044bb4b4(*(long *)(lVar5 + 0xb8) + 0x28,0);
      goto LAB_07709280;
    }
    lVar5 = FUN_077083fc();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000068 = FUN_068bdb74(lVar5,*(undefined8 *)PTR_DAT_09f30398);
    uVar6 = FUN_067c849c(&stack0x00000068,*(undefined8 *)PTR_DAT_09f30390);
    auVar1 = _in_stack_00000070;
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 8) = in_stack_00000068;
      thunk_FUN_044bb4b4(unaff_x19 + 8,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04b5b6f4(unaff_x19 + 2,&stack0x00000068);
      return;
    }
  }
  _in_stack_00000070 = auVar1;
  FUN_067c84e0(&stack0x00000068,*(undefined8 *)PTR_DAT_09f30388);
  lVar5 = *(long *)puVar3;
  lVar8 = *(long *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar8 + 0x40) = in_stack_00000018;
  *(undefined8 *)(lVar8 + 0x38) = in_stack_00000010;
  *(undefined8 *)(lVar8 + 0x30) = in_stack_00000008;
  *(undefined8 *)(lVar8 + 0x28) = in_stack_00000000;
  thunk_FUN_044bb4b4(*(long *)(lVar5 + 0xb8) + 0x28,0);
LAB_07709280:
  lVar5 = FUN_07707338();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(char *)(lVar5 + 0x61) == '\0') {
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
    *puVar7 = 0;
    thunk_FUN_044bb4b4(puVar7,0);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
    *puVar7 = 0;
    thunk_FUN_044bb4b4(puVar7,0);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    *puVar7 = 0;
    thunk_FUN_044bb4b4(puVar7,0);
  }
  else {
    uVar4 = thunk_FUN_09534a78(0);
    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50) = uVar4;
    thunk_FUN_044bb4b4();
    uVar4 = thunk_FUN_09534b28(0);
    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48) = uVar4;
    thunk_FUN_044bb4b4();
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f25110);
    FUN_0948fe6c(lVar5,*(undefined8 *)PTR_DAT_09f2fdc0,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar4 = FUN_0469b41c(lVar5,*(undefined8 *)PTR_DAT_09f2fde0,*(undefined8 *)PTR_DAT_09f2fdc8);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
    *puVar7 = uVar4;
    thunk_FUN_044bb4b4(puVar7,uVar4);
    uVar6 = thunk_FUN_078b3114(uVar4,*(undefined8 *)PTR_DAT_09f2fdd8,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = thunk_FUN_078b3114(uVar4,*(undefined8 *)PTR_DAT_09f2fdf0,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = thunk_FUN_078b3114(uVar4,*(undefined8 *)PTR_DAT_09f2fde8,0);
        if ((uVar6 & 1) == 0) {
          *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
               *(undefined8 *)PTR_DAT_09f303a0;
          thunk_FUN_044bb4b4();
        }
        else {
          *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
               *(undefined8 *)PTR_DAT_09f303b0;
          thunk_FUN_044bb4b4();
        }
      }
      else {
        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = *(undefined8 *)PTR_DAT_09f303b8;
        thunk_FUN_044bb4b4();
      }
    }
    else {
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = *(undefined8 *)PTR_DAT_09f303a8;
      thunk_FUN_044bb4b4();
    }
  }
  FUN_07707be8();
  FUN_07707948();
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2fac0);
  FUN_07a80df4(lVar5,0);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  FUN_07707d38(lVar5);
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795995c(unaff_x19 + 2,0);
  return;
}


