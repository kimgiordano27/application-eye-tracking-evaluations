/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 059155a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  double dVar12;
  double dVar13;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  double in_stack_00000038;
  
  FUN_0591b93c(param_1,param_2,0);
  *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + -1;
  puVar3 = PTR_DAT_072974b0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0.0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0591af3c();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar8 = FUN_059165b0();
  if ((uVar8 & 1) == 0) {
LAB_05915904:
    FUN_0591ba70();
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0591af3c();
    uVar8 = FUN_0591ab64();
    if ((uVar8 & 1) == 0) goto LAB_05915904;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0591af3c();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar8 = FUN_059165b0();
    if ((uVar8 & 1) == 0) goto LAB_05915904;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0591af3c();
    uVar8 = FUN_0591ab64();
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0591af3c();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar8 = FUN_059165b0();
      if ((uVar8 & 1) == 0) goto LAB_05915904;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar8 = FUN_0591ab64();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar8 = FUN_05910cb8();
        if ((uVar8 & 1) == 0) goto LAB_05915904;
        *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + -1;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0591af3c();
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar8 = FUN_05919d1c();
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_0591aee8();
      if (uVar4 < 0x5a) {
        if ((uVar4 == 0x2b) || (uVar4 == 0x2d)) {
          *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar8 = FUN_05910da4();
          if ((uVar8 & 1) == 0) goto LAB_05915904;
        }
        else {
LAB_05915830:
          *(int *)(unaff_x21 + 0x10) = *(int *)(unaff_x21 + 0x10) + -1;
        }
      }
      else {
        if ((uVar4 != 0x5a) && (uVar4 != 0x7a)) goto LAB_05915830;
        uVar7 = *(uint *)(unaff_x19 + 0x24) | 0x100;
        *(uint *)(unaff_x19 + 0x24) = uVar7;
        puVar2 = PTR_DAT_0727acf0;
        lVar9 = *(long *)PTR_DAT_0727acf0;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar9 = *(long *)puVar2;
          uVar7 = *(uint *)(unaff_x19 + 0x24);
        }
        uVar11 = **(undefined8 **)(lVar9 + 0xb8);
        *(uint *)(unaff_x19 + 0x24) = uVar7 | 0x200;
        *(undefined8 *)(unaff_x19 + 0x28) = uVar11;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0591af3c();
      uVar8 = FUN_0591ab64();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar8 = FUN_05912550();
        if ((uVar8 & 1) == 0) goto LAB_05915904;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_0591af3c();
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar8 = FUN_0591ab64();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar8 = FUN_05912550();
        if ((uVar8 & 1) == 0) goto LAB_05915904;
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar8 = FUN_05919d1c();
      if ((uVar8 & 1) != 0) goto LAB_05915904;
    }
    if (*(int *)(*(long *)PTR_DAT_07297248 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    plVar10 = (long *)FUN_058d018c(0);
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar5 = FUN_0591b93c();
    uVar6 = FUN_0591b93c();
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar8 = (**(code **)(*plVar10 + 0x2b8))
                      (plVar10,uVar1,uVar5,uVar6,uStack0000000000000034,uStack0000000000000030,
                       uStack000000000000002c,0);
    dVar13 = in_stack_00000020;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar13 = dVar13 * DAT_0139e6c0;
      dVar12 = modf(dVar13,&stack0x00000038);
      if (0.0 <= dVar13) {
        if (dVar12 == 0.5) {
          dVar13 = 1.0;
          goto LAB_05915a50;
        }
        dVar12 = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar12 == -0.5) {
        dVar13 = -1.0;
LAB_05915a50:
        dVar12 = in_stack_00000038;
        if (((long)in_stack_00000038 & 1U) != 0) {
          dVar12 = in_stack_00000038 + dVar13;
        }
      }
      else {
        dVar12 = (double)(long)(dVar13 + -0.5);
      }
      if (*(int *)(*(long *)PTR_DAT_0727a7d0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar9 = -0x8000000000000000;
      if (dVar12 != INFINITY) {
        lVar9 = (long)dVar12;
      }
      in_stack_00000018 = FUN_059032dc(&stack0x00000018,lVar9);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000018;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_05915d6c();
      goto LAB_05915914;
    }
    FUN_0591bac0();
  }
  uVar7 = 0;
LAB_05915914:
  return uVar7 & 1;
}


