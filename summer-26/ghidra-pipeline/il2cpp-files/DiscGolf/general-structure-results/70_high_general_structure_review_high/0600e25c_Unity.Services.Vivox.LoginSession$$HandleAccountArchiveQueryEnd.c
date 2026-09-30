/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession$$HandleAccountArchiveQueryEnd
ENTRY_POINT: 0600e25c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_LoginSession__HandleAccountArchiveQueryEnd(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w9;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar3 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000018 =
       FUN_0481d028(lVar3,*(undefined8 *)Method_System_IO_BufferedStream_set_Position__);
  uVar4 = FUN_047e6248(&stack0x00000018,*(undefined8 *)Method_System_IO_BufferedStream_WriteAsync__)
  ;
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    LeanTween__value(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031fdf48(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar3 = FUN_047e6288(&stack0x00000018,*(undefined8 *)Method_System_IO_BufferedStream_Write__);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar8 = *(long **)(*(long *)(unaff_x23 + 0x10) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar8;
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
           ) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0600e378;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar8,*(long *)
                                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000367_PostfixBurstDelegate>__
                          ,2);
LAB_0600e378:
    lVar3 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000010 =
         FUN_0481d028(lVar3,*(undefined8 *)Method_System_IO_BufferedStream_EnsureCanWrite__);
    uVar4 = FUN_047e6248(&stack0x00000010,
                         *(undefined8 *)Method_System_IO_BufferedStream_EnsureCanSeek__);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      LeanTween__value(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031fdf48(unaff_x19 + 2,&stack0x00000010);
    }
    else {
      lVar3 = FUN_047e6288(&stack0x00000010,
                           *(undefined8 *)Method_System_IO_BufferedStream_EnsureCanRead__);
      puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_List<NetworkObject>>_get_Keys__;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *unaff_x22;
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      iVar1 = *(int *)(lVar6 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_02df485c(lVar6);
      }
      FUN_040b19d8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
    }
  }
  return;
}


