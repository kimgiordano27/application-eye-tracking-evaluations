/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 04edd2e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x04edd604) */

long OVREyeGaze__get_EyeTrackingEnabled(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  float in_stack_000000e8;
  undefined4 uStack00000000000000fc;
  
  if ((DAT_066c95bf & 1) == 0) {
    FUN_02b3c81c(System_Action<AsyncOperation>_TypeInfo);
    FUN_02b3c81c(System_Action<AutoCompletePathVisitor>_TypeInfo);
    FUN_02b3c81c(System_Action<AutoMoveTowardsTarget>_TypeInfo);
    FUN_02b3c81c(System_Action<BaseRuntimePanel>_TypeInfo);
    FUN_02b3c81c(System_Action<BaseVisualElementPanel>_TypeInfo);
    FUN_02b3c81c(System_Action<bool>_TypeInfo);
    FUN_02b3c81c(System_Action<ClimbProvider>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(System_Action<Collider>_TypeInfo);
    DAT_066c95bf = 1;
  }
  cVar8 = DAT_066c1d97;
  puVar1 = System_Action<bool>_TypeInfo;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000088 = 0.0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  uStack00000000000000fc = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  if (cVar8 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
  puVar2 = System_Action<BaseVisualElementPanel>_TypeInfo;
  uVar16 = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
  uVar17 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar14 = *(long *)puVar2;
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218();
  }
  puVar7 = System_Action<Collider>_TypeInfo;
  puVar6 = System_Action<ClimbProvider>_TypeInfo;
  puVar5 = System_Action<BaseRuntimePanel>_TypeInfo;
  puVar4 = System_Action<AutoMoveTowardsTarget>_TypeInfo;
  puVar3 = System_Action<AutoCompletePathVisitor>_TypeInfo;
  puVar2 = System_Action<AsyncOperation>_TypeInfo;
  puVar1 = PTR_DAT_06312520;
  plVar11 = (long *)**(long **)(lVar10 + 0xb8);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  (**(code **)(*plVar11 + 0x198))
            (&stack0x000000d0,plVar11,param_1,*(undefined8 *)(*plVar11 + 0x1a0));
  in_stack_000000c0 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_000000b8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  in_stack_000000b0 = in_stack_000000d0;
  FUN_04aed12c(&stack0x00000050,&stack0x000000b0,*(undefined8 *)puVar5);
  in_stack_00000048 = &stack0x00000090;
  in_stack_00000040 = 0;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000068;
  in_stack_000000a0 = in_stack_00000060;
  fVar15 = 3.4028235e+38;
  lVar10 = 0;
LAB_04edd4f8:
  do {
    do {
      uVar12 = FUN_047e3f3c(&stack0x00000090,*(undefined8 *)puVar3);
      lVar14 = in_stack_00000040;
      if ((uVar12 & 1) == 0) {
        FUN_047e41f8(&stack0x00000090,*(undefined8 *)puVar2);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cabc(lVar14);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_05c8c45c(lVar10,0,0);
        if ((uVar12 & 1) == 0) {
          fVar15 = *(float *)(param_1 + 0x25);
        }
        uVar13 = *(undefined8 *)puVar7;
        *(float *)(param_1 + 0x35) =
             *(float *)(param_1 + 0x30) + fVar15 * *(float *)((long)param_1 + 0x19c);
        param_1[0x34] =
             CONCAT44((float)((ulong)param_1[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_1 + 0x194) >> 0x20) * fVar15,
                      (float)param_1[0x2f] + (float)*(undefined8 *)((long)param_1 + 0x194) * fVar15)
        ;
        lVar14 = thunk_FUN_02b79644(uVar13);
        FUN_04dbdb8c(lVar14,0);
        *(long *)(lVar14 + 0x10) = lVar10;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x10),lVar10);
        *(undefined8 *)(lVar14 + 0x18) = uVar16;
        *(undefined4 *)(lVar14 + 0x20) = uVar17;
        param_1[0x26] = lVar14;
        thunk_FUN_02bb0e9c(param_1 + 0x26,lVar14);
        return lVar10;
      }
      lVar14 = FUN_047e3de4(&stack0x00000090,*(undefined8 *)puVar4);
      uStack00000000000000fc = (undefined4)param_1[0x25];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      in_stack_00000028 = *(undefined8 *)((long)param_1 + 0x1d4);
      in_stack_00000020 = *(undefined8 *)((long)param_1 + 0x1cc);
      in_stack_00000030 = *(undefined8 *)((long)param_1 + 0x1dc);
      uVar12 = FUN_04edc980(lVar14,&stack0x00000020,&stack0x00000070,&stack0x000000fc,0);
    } while ((uVar12 & 1) == 0);
    if (*(float *)((long)param_1 + 300) <= ABS(in_stack_00000088 - fVar15)) goto LAB_04edd594;
    iVar9 = (**(code **)(*param_1 + 0x548))(param_1,lVar14,lVar10,*(undefined8 *)(*param_1 + 0x550))
    ;
  } while (iVar9 < 1);
  goto LAB_04edd59c;
LAB_04edd594:
  if (in_stack_00000088 < fVar15) {
LAB_04edd59c:
    fVar15 = in_stack_00000088;
    uStack00000000000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    uStack00000000000000e4 = uStack0000000000000084;
    in_stack_000000e8 = in_stack_00000088;
    uStack00000000000000dc = uStack000000000000007c;
    uStack00000000000000e0 = in_stack_00000080;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_03add1c4(&stack0x00000050,&stack0x000000d0,*(undefined8 *)puVar6);
    *(undefined8 *)((long)param_1 + 0x1b4) = in_stack_00000058;
    *(undefined8 *)((long)param_1 + 0x1ac) = in_stack_00000050;
    *(undefined8 *)((long)param_1 + 0x1c4) = in_stack_00000068;
    *(undefined8 *)((long)param_1 + 0x1bc) = in_stack_00000060;
    lVar10 = lVar14;
    uVar16 = in_stack_00000070;
    uVar17 = in_stack_00000078;
  }
  goto LAB_04edd4f8;
}


