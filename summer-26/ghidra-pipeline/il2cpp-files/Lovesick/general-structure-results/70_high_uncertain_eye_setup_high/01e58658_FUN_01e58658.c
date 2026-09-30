/*
FUNCTION_NAME: FUN_01e58658
ENTRY_POINT: 01e58658
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01e58658(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  
  if ((DAT_0377fd52 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(PTR_DAT_033ec070);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DataColumn>_Contains__);
    DAT_0377fd52 = 1;
  }
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar4 = Method_System_Collections_Generic_List<DataColumn>_Contains__;
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar2 = PTR_DAT_033ec070;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x60) >> 3 & 1) == 0)) {
    return 0;
  }
  plVar7 = *(long **)(param_2 + 0x20);
  if (plVar7 != (long *)0x0) {
    iVar11 = 0;
    do {
      iVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
      if (iVar6 <= iVar11) {
        return 0;
      }
      plVar7 = *(long **)(param_2 + 0x20);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x2e8))
                                     (plVar7,iVar11,*(undefined8 *)(*plVar7 + 0x2f0)),
         plVar7 == (long *)0x0)) break;
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      uVar8 = FUN_02020060(plVar7,param_3,0);
      if ((uVar8 & 1) == 0) {
        uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar9 != 0) {
          FUN_01eb6550(lVar9,*(undefined8 *)puVar4,uVar10,0);
          return lVar9;
        }
        break;
      }
      plVar7 = *(long **)(param_2 + 0x20);
      iVar11 = iVar11 + 1;
    } while (plVar7 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


