/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 084da664
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_stack_00000008;
  undefined1 in_stack_000000d0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000118;
  
  do {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar5 = *unaff_x24;
    iVar2 = *(int *)(unaff_x19 + 0x3c);
    iVar1 = *(int *)(unaff_x25 + *unaff_x21 + 4);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *unaff_x24;
    }
    if (iVar2 - iVar1 < **(int **)(lVar5 + 0xb8)) {
      lVar5 = *(long *)(unaff_x19 + 0x78);
      if (lVar5 == 0) {
LAB_084da718:
        if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
LAB_084da79c:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      memcpy(&stack0x00000070,&stack0x00000010,0x60);
      puVar4 = PTR_DAT_0932b438;
      uVar9 = *(undefined8 *)(unaff_x23 + 0x17);
      uVar8 = *(undefined8 *)(unaff_x23 + 0xf);
      in_stack_000000d0 = 1;
      *(undefined8 *)(unaff_x29 + 0x69) = in_stack_000000f8;
      *(undefined8 *)(unaff_x29 + 0x61) = in_stack_000000f0;
      uVar6 = *(undefined8 *)puVar4;
      *(undefined8 *)(unaff_x29 + 0x78) = uVar9;
      *(undefined8 *)(unaff_x29 + 0x70) = uVar8;
      FUN_05c2bfdc(lVar5,unaff_x20 & 0xffffffff,&stack0x00000070,uVar6);
    }
    else {
      FUN_084d94dc();
    }
    do {
      unaff_x20 = unaff_x20 + 1;
      unaff_x25 = unaff_x25 + 0xc;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_084da718;
      if ((long)*(int *)(*(long *)(unaff_x19 + 0x78) + 0x18) <= (long)unaff_x20) {
        lVar5 = *unaff_x24;
        uVar3 = *(undefined4 *)(unaff_x19 + 0x3c);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x24;
        }
        FUN_084d6ff0(unaff_x19 + 0x40,uVar3,**(undefined4 **)(lVar5 + 0xb8));
        *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x19 + 0x3c) + 1;
        if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000118) {
          return;
        }
        goto LAB_084da79c;
      }
      plVar7 = *(long **)(unaff_x19 + 0x80);
      if ((*(ushort *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
    } while ((*(byte *)(unaff_x25 + *plVar7) & 1) == 0);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_084da718;
    FUN_05c2bf78(&stack0x00000070,*(long *)(unaff_x19 + 0x78),unaff_x20 & 0xffffffff,*unaff_x27);
    memcpy(&stack0x00000010,&stack0x00000070,0x60);
    in_stack_000000f8 = *(undefined8 *)(unaff_x29 + 0x69);
    in_stack_000000f0 = *(undefined8 *)(unaff_x29 + 0x61);
    uVar6 = *(undefined8 *)(unaff_x29 + 0x70);
    unaff_x21 = *(long **)(unaff_x19 + 0x80);
    param_1 = *(long *)(*unaff_x26 + 0x20);
    *(undefined8 *)(unaff_x23 + 0x17) = *(undefined8 *)(unaff_x29 + 0x78);
    *(undefined8 *)(unaff_x23 + 0xf) = uVar6;
  } while( true );
}


