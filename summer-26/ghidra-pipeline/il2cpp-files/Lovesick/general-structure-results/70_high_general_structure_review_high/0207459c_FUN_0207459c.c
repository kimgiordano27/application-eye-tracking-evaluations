/*
FUNCTION_NAME: FUN_0207459c
ENTRY_POINT: 0207459c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02074718) */

long FUN_0207459c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  char local_34 [4];
  
  puVar3 = 
  Method_System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_ToArray__;
  if ((DAT_03780c4f & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_ToArray__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<SendMessageAsync>d__20>__
                      );
    DAT_03780c4f = 1;
  }
  local_34[0] = '\0';
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_020747a8(lVar4,param_2,param_3,uVar1,uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  local_34[0] = '\0';
  FUN_017d75a8(uVar8,local_34,0);
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(lVar7 + 0x38) == lVar7) {
    uVar5 = FUN_017b4f64(*(undefined8 *)(param_1 + 0x18),
                         **(undefined8 **)
                           (*(long *)
                             Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                           + 0xb8),0);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_0169d5f0(param_1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(long *)(lVar4 + 0x38) = lVar7;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar7 + 0x40);
  if (*(long *)(lVar7 + 0x40) != 0) {
    *(long *)(*(long *)(lVar7 + 0x40) + 0x38) = lVar4;
    *(long *)(lVar7 + 0x40) = lVar4;
    if (local_34[0] != '\0') {
      thunk_FUN_00d56f10(uVar8,0);
    }
    if (bVar2) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<SendMessageAsync>d__20>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0207377c();
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


