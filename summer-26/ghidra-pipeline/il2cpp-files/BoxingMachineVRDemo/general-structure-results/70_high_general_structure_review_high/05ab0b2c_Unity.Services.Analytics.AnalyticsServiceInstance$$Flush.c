/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 05ab0b2c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__Flush(undefined **param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long unaff_x24;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000138;
  
  do {
    in_stack_000000c8 = (undefined8 *)FUN_03ac15d0(unaff_x21,*(undefined8 *)param_1[0x1a7]);
    thunk_FUN_02dd37b4(in_stack_00000010,in_stack_000000c8);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<int,_Future_LoadBundleTaskProgress_Action>_Remove__
    ;
    in_stack_00000058 = *(undefined8 *)(unaff_x24 + 0x28);
    in_stack_00000050 = *(undefined8 *)(unaff_x24 + 0x20);
    in_stack_00000068 = *(undefined8 *)(unaff_x24 + 0x38);
    in_stack_00000060 = *(undefined8 *)(unaff_x24 + 0x30);
    in_stack_00000070 = in_stack_000000e0;
    if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x27) {
LAB_05ab0bf4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined8 *)(unaff_x28 + 0x40) = in_stack_000000e0;
    *(undefined8 *)(unaff_x28 + 0x28) = in_stack_00000058;
    *(undefined8 *)(unaff_x28 + 0x20) = in_stack_00000050;
    *(undefined8 *)(unaff_x28 + 0x38) = in_stack_00000068;
    *(undefined8 *)(unaff_x28 + 0x30) = in_stack_00000060;
    thunk_FUN_02dd37b4(in_stack_00000018 + unaff_x27 * 0x28 + 0x20,0);
    do {
      uVar7 = in_stack_000000c0;
      unaff_x27 = unaff_x27 + 1;
      if ((long)(int)*(uint *)(in_stack_00000018 + 0x18) <= (long)unaff_x27) {
        in_stack_00000040 = *(undefined8 *)(unaff_x24 + 0x58);
        in_stack_00000038 = *(undefined8 *)(unaff_x24 + 0x50);
        in_stack_00000048 = in_stack_00000100;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        FUN_0608192c(&stack0x00000028,0);
        return;
      }
      if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x27) goto LAB_05ab0bf4;
      unaff_x28 = in_stack_00000018 + unaff_x27 * 0x28;
      in_stack_000000e0 = *(undefined8 *)(unaff_x28 + 0x40);
      uVar11 = *(undefined8 *)(unaff_x28 + 0x20);
      uVar13 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x28 + 0x30);
      lVar5 = *(long *)(unaff_x20 + 0xe0);
      uVar10 = *(undefined8 *)puVar3;
      *(undefined8 *)(unaff_x24 + 0x28) = *(undefined8 *)(unaff_x28 + 0x28);
      *(undefined8 *)(unaff_x24 + 0x20) = uVar11;
      *(undefined8 *)(unaff_x24 + 0x38) = uVar13;
      *(undefined8 *)(unaff_x24 + 0x30) = uVar12;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_05015c2c(uVar10,0);
      uVar6 = FUN_0501fa14(uVar7,uVar10,0);
    } while ((uVar6 & 1) != 0);
    unaff_x21 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_Future_LoadBundleTaskProgress_Action>__ctor__
                                  );
    FUN_03abedb0(unaff_x21,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_Future_FirestoreVoid_Action>_set_Item__
                );
    puVar4 = in_stack_000000c8;
    if (in_stack_000000c8 == (undefined8 *)0x0) {
LAB_05ab0bf0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (0 < (int)in_stack_000000c8[3]) {
      uVar6 = 0;
      uVar8 = in_stack_000000c8[3] & 0xffffffff;
      puVar2 = in_stack_000000c8;
      do {
        if (uVar8 <= uVar6) goto LAB_05ab0bf4;
        in_stack_000000a8 = puVar2[6];
        in_stack_000000a0 = puVar2[5];
        uVar7 = puVar2[7];
        uVar10 = puVar2[4];
        *(undefined8 *)(unaff_x24 + 0x18) = puVar2[8];
        *(undefined8 *)(unaff_x24 + 0x10) = uVar7;
        uVar7 = thunk_FUN_02d709fc();
        if (*(int *)(*(long *)(unaff_x20 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(unaff_x20 + 0xe0));
        }
        uVar8 = FUN_0501fa14(uVar10,uVar7,0);
        if ((uVar8 & 1) != 0) {
          in_stack_00000098 = *(undefined8 *)(unaff_x24 + 0x18);
          in_stack_00000090 = *(undefined8 *)(unaff_x24 + 0x10);
          in_stack_00000088 = in_stack_000000a8;
          in_stack_00000080 = in_stack_000000a0;
          if (unaff_x21 == 0) goto LAB_05ab0bf0;
          *(undefined8 *)(unaff_x24 + 0x78) = in_stack_000000a8;
          *(undefined8 *)(unaff_x24 + 0x70) = in_stack_000000a0;
          *(undefined8 *)(unaff_x24 + 0x88) = in_stack_00000098;
          *(undefined8 *)(unaff_x24 + 0x80) = in_stack_00000090;
          lVar5 = *(long *)(unaff_x21 + 0x10);
          lVar9 = *(long *)
                   Method_System_Collections_Generic_Dictionary<int,_Future_FirestoreVoid_Action>_Remove__
          ;
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_05ab0bf0;
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 0x28;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + 0x20) = uVar10;
            uVar11 = *(undefined8 *)(unaff_x24 + 0x78);
            uVar10 = *(undefined8 *)(unaff_x24 + 0x70);
            uVar7 = *(undefined8 *)(unaff_x24 + 0x80);
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(unaff_x24 + 0x88);
            *(undefined8 *)(lVar5 + 0x38) = uVar7;
            *(undefined8 *)(lVar5 + 0x30) = uVar11;
            *(undefined8 *)(lVar5 + 0x28) = uVar10;
            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20),0);
          }
          else {
            uVar13 = *(undefined8 *)(unaff_x24 + 0x70);
            uVar12 = *(undefined8 *)(unaff_x24 + 0x88);
            uVar11 = *(undefined8 *)(unaff_x24 + 0x80);
            uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
            in_stack_00000020[1] = *(undefined8 *)(unaff_x24 + 0x78);
            *in_stack_00000020 = uVar13;
            in_stack_00000020[3] = uVar12;
            in_stack_00000020[2] = uVar11;
            in_stack_00000138 = uVar10;
            FUN_03abf6d4(unaff_x21,&stack0x00000138,uVar7);
          }
        }
        uVar8 = (ulong)*(uint *)(puVar4 + 3);
        uVar6 = uVar6 + 1;
        puVar2 = puVar2 + 5;
      } while ((long)uVar6 < (long)(int)*(uint *)(puVar4 + 3));
    }
    if (unaff_x21 == 0) goto LAB_05ab0bf0;
    param_1 = &
              Method_System_Collections_Generic_Dictionary<IGraphParentElement,_IGraphData>_Remove__
    ;
  } while( true );
}


