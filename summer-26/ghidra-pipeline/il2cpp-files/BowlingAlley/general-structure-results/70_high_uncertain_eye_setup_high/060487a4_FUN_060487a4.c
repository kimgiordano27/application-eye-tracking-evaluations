/*
FUNCTION_NAME: FUN_060487a4
ENTRY_POINT: 060487a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06048a1c) */

void FUN_060487a4(long *param_1,uint param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_07280208;
  if ((DAT_076dd2ea & 1) == 0) {
    thunk_FUN_032e1da0(System_Action<VFXEventAttribute,_int,_uint>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07280208);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<uint,_Navigation_InternalType_95_InternalType_727>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<InternalType_125,_InternalType_125>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                      );
    DAT_076dd2ea = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar3;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar6 = FUN_039631a8(**(long **)(lVar5 + 0xb8),
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                         ,(int)param_1[0x16],param_2 & 1,
                         *(undefined8 *)System_Action<VFXEventAttribute,_int,_uint>_TypeInfo);
    cVar1 = *(char *)((long)param_1 + 100);
    if ((*(char *)((long)param_1 + 0x65) != cVar1) || ((param_2 & 1) != 0)) {
      *(char *)((long)param_1 + 0x65) = cVar1;
      if ((cVar1 == '\0') || (lVar5 = param_1[5], lVar5 == 0)) {
        lVar8 = 0;
      }
      else {
        lVar11 = param_1[10];
        if (lVar11 == 0) {
          uVar7 = FUN_06046404(param_1);
          lVar8 = param_1[0xc];
          uVar9 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
          lVar8 = FUN_06026084(lVar5,uVar7,(int)lVar8,uVar9,0);
        }
        else {
          lVar2 = param_1[0xc];
          uVar7 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
          lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<InternalType_125,_InternalType_125>_TypeInfo
                                    );
          FUN_06067590(lVar8,lVar5,lVar11,(int)lVar2,uVar7,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06067f44(lVar8,0);
        }
      }
      plVar10 = param_1 + 7;
      if (*plVar10 != lVar8) {
        if (*plVar10 == 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
        }
        else {
          if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06049e7c(param_1[0x15],0);
        }
        *plVar10 = lVar8;
        thunk_FUN_0333a630(plVar10,lVar8);
        if (*plVar10 != 0) {
          if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06049d98(param_1[0x15],*plVar10,0);
        }
        FUN_06048228(param_1);
        puVar4 = 
        System_Collections_Generic_Dictionary<uint,_Navigation_InternalType_95_InternalType_727>_TypeInfo
        ;
        if ((param_3 & 1) != 0) {
          lVar5 = *(long *)
                   System_Collections_Generic_Dictionary<uint,_Navigation_InternalType_95_InternalType_727>_TypeInfo
          ;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar5 = *(long *)puVar4;
          }
          (**(code **)(*param_1 + 0x418))
                    (param_1,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)(*param_1 + 0x420));
        }
      }
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar3;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      FUN_05fff8f8(**(long **)(lVar5 + 0xb8),uVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


