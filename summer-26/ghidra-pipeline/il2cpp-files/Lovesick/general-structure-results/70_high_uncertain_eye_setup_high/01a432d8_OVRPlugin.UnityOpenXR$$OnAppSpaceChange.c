/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 01a432d8
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


/* WARNING: Removing unreachable block (ram,0x01a433d4) */

void OVRPlugin_UnityOpenXR__OnAppSpaceChange(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x20 + 0xc5c) & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Serialization_FixupHolder_TypeInfo);
    thunk_FUN_00d48444(Method_System_Net_WebConnectionStream_get_Position__);
    thunk_FUN_00d48444(PTR_DAT_033f2978);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MedleyGraveyardStatueSpawner>_MoveNext__
                      );
    *(undefined1 *)(unaff_x20 + 0xc5c) = 1;
  }
  puVar1 = System_Runtime_Serialization_FixupHolder_TypeInfo;
  in_stack_00000008 = (long *)0x0;
  in_stack_00000010 = (long *)0x0;
  if (param_1 == 0) goto LAB_01a4349c;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)System_Runtime_Serialization_FixupHolder_TypeInfo;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_01a4349c;
    in_stack_00000018 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = FUN_0129eff4(**(long **)(lVar3 + 0xb8),&stack0x00000018,&stack0x00000010,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<MedleyGraveyardStatueSpawner>_MoveNext__
                        );
    puVar2 = Method_System_Net_WebConnectionStream_get_Position__;
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*in_stack_00000010 + 0x178))
                (in_stack_00000010,param_1,*(undefined8 *)(*in_stack_00000010 + 0x180));
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        in_stack_00000018 = *(undefined8 *)(param_1 + 0x18);
        FUN_0129de0c(**(long **)(lVar3 + 0xb8),&stack0x00000018,*(undefined8 *)puVar2);
        return;
      }
      goto LAB_01a4349c;
    }
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
LAB_01a4349c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(param_1 + 0x10));
  uVar4 = FUN_0129eff4(lVar3,&stack0x00000018,&stack0x00000008,*(undefined8 *)PTR_DAT_033f2978);
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar3 + 0xb8);
    if ((*(char *)(lVar5 + 0x10) == '\0') && (*(int *)(param_1 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar5 + 0x18) = param_1;
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_01a4349c;
    (**(code **)(*in_stack_00000008 + 0x178))
              (in_stack_00000008,param_1,*(undefined8 *)(*in_stack_00000008 + 0x180));
  }
  return;
}


