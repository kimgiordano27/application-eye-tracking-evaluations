/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.BurstRuntime$$GetHashCode64<IJobExtensions.JobStruct<UDPNetworkInterface.FlushSendJob>>
ENTRY_POINT: 04365c1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Collections_LowLevel_Unsafe_BurstRuntime__GetHashCode64<IJobExtensions_JobStruct<UDPNetworkInterface_FlushSendJob>>
               (long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long in_stack_00000028;
  
  if (param_1 == 0) {
                    /* try { // try from 04365c90 to 04465cdb has its CatchHandler @ 04365b18 */
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365c6c with catch @ 04365ca8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365c5c with catch @ 04365cac
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365c2c with catch @ 04365cb0
                        */
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084912a0);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365ba8 with catch @ 04365cb4
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365c84 with catch @ 04365cb8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365bc8 with catch @ 04365cbc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365b54 with catch @ 04365cc0
                        */
    if (*(long *)(unaff_x20 + 0x28) == in_stack_00000028) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 04365b70 with catch @ 04365cc4
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 04365bf4 with catch @ 04365cc4
                        */
      FUN_066af6a0(uVar4,uVar5,0);
LAB_04365d94:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,param_4);
    }
  }
  else if ((int)(param_3 | param_2) < 0) {
                    /* try { // try from 04365cdc to 04465cf3 has its CatchHandler @ 04365d4c */
    puVar1 = PTR_DAT_084914a0;
    if ((int)param_2 < 0) {
      puVar1 = PTR_DAT_08486d40;
    }
    uVar5 = thunk_FUN_03af1434(puVar1);
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
    if (*(long *)(unaff_x20 + 0x28) == in_stack_00000028) {
      System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,param_4);
    }
  }
  else {
                    /* try { // try from 04365c2c to 04465c3f has its CatchHandler @ 04365cb0 */
    if ((int)(*(int *)(param_1 + 0x18) - param_2) < (int)param_3) {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar4 = thunk_FUN_03ac74bc();
      uVar5 = thunk_FUN_03af1434(PTR_DAT_084914a8);
      if (*(long *)(unaff_x20 + 0x28) == in_stack_00000028) {
        FUN_066b6070(uVar4,uVar5,0);
        goto LAB_04365d94;
      }
    }
    else {
      if (1 < param_3) {
        param_1 = param_1 + (ulong)param_2 * 0x10;
        puVar7 = (undefined8 *)(param_1 + 0x30);
        puVar6 = (undefined8 *)(param_1 + (ulong)param_3 * 0x10 + 0x10);
        do {
          uVar5 = *puVar6;
          uVar3 = puVar7[-1];
          uVar4 = puVar7[-2];
          puVar7[-1] = puVar6[1];
          puVar7[-2] = uVar5;
                    /* try { // try from 04365c5c to 04465c67 has its CatchHandler @ 04365cac */
          puVar6[1] = uVar3;
          *puVar6 = uVar4;
          bVar2 = puVar7 < puVar6 + -2;
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + -2;
                    /* try { // try from 04365c6c to 04465c7b has its CatchHandler @ 04365ca8 */
        } while (bVar2);
      }
      if (*(long *)(unaff_x20 + 0x28) == in_stack_00000028) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


