/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0338f2ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2D(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_01c495e4(), lVar1 == 0)) {
    uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,0);
  }
  if (*(int *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(long *)(unaff_x22 + 0x20) = unaff_x20;
  if (unaff_x21 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x21 + 0x8f8))();
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    }
    plVar3 = (long *)FUN_033a78fc(0);
    if (plVar3 != (long *)0x0) {
      lVar1 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar3 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
      lVar1 = (**(code **)(lVar1 + 8))(plVar3,uVar2,lVar1);
      *(long *)(unaff_x19 + 0xe8) = lVar1;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)PTR_DAT_04237778;
          lVar4 = thunk_FUN_01c495e4(lVar1,uVar2);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar1,uVar2);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


