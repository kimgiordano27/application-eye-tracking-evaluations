/*
FUNCTION_NAME: FUN_02054bf8
ENTRY_POINT: 02054bf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02054bf8(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar4 = param_1;
  if ((DAT_03780b5a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    thunk_FUN_00d48444(PTR_DAT_033eeff8);
    thunk_FUN_00d48444(PTR_DAT_033eb718);
    lVar4 = thunk_FUN_00d48444(StringLiteral_5156);
    DAT_03780b5a = 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 - 2U < 2) {
    uVar6 = FUN_02051d34(lVar4,*(undefined8 *)(param_1 + 0x18));
    return uVar6;
  }
  puVar8 = (undefined8 *)PTR_DAT_033eb718;
  if (iVar1 != 4) {
    if (iVar1 != 1) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = FUN_015fe7e8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_033eeff8,0);
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                             );
          if (plVar7 != (long *)0x0) {
            FUN_0160aa4c(plVar7,0);
            puVar3 = StringLiteral_3287;
            puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
            lVar4 = *(long *)(param_1 + 0x28);
            if (lVar4 != 0) {
              uVar5 = 0;
              do {
                if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
                  if ((param_2 & 1) != 0) {
                    uVar6 = FUN_017b7e58(0);
                    FUN_0160c430(plVar7,uVar6,0);
                  }
                    /* WARNING: Could not recover jumptable at 0x02054e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  return uVar6;
                }
                if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar6 = FUN_016f8470(lVar4 + uVar5 + 0x20,*(undefined8 *)puVar2,0);
                FUN_0160c430(plVar7,uVar6,0);
                lVar4 = *(long *)(param_1 + 0x28);
                if (lVar4 == 0) break;
                if (uVar5 != *(int *)(lVar4 + 0x18) - 1) {
                  FUN_0160c430(plVar7,*(undefined8 *)puVar3,0);
                  lVar4 = *(long *)(param_1 + 0x28);
                }
                uVar5 = uVar5 + 1;
              } while (lVar4 != 0);
            }
          }
        }
        else if (*(long *)(param_1 + 0x10) != 0) {
          uVar6 = FUN_015f6780(*(undefined8 *)StringLiteral_5156,
                               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
          return uVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar8 = *(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
  }
  return *puVar8;
}


