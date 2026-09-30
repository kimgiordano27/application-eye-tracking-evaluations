/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 05669d94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_shouldRecenter(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000088;
  
  uVar1 = thunk_FUN_02dd3144(**(undefined8 **)(param_1 + 0xaf0));
  thunk_FUN_0567a43c();
  *(undefined8 *)(unaff_x19 + 0x150) = uVar1;
  LeanTween__value(unaff_x19 + 0x150,uVar1);
  if ((*(uint *)(unaff_x19 + 0x2b8) & 0xfffffffe) == 4) {
    uVar2 = FUN_0566beec();
    if ((uVar2 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0xb0) == '\0') {
        uVar1 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERMesh>_TypeInfo);
        FUN_0565ca50();
      }
      else {
        uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Collections_Generic_List<ERMaterial>_TypeInfo);
        FUN_0565d544();
      }
    }
    else {
      if (*(char *)(unaff_x19 + 0xb0) == '\0') {
        lVar3 = *(long *)(*unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar3 == 0) {
          if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05669efc;
        }
        if (*(char *)(lVar3 + 0x130) == '\0') {
          uVar1 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<ERRoad>_TypeInfo
                                    );
          FUN_0565ccb8();
          goto LAB_05669ed4;
        }
      }
      uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<ERModularRoad>_TypeInfo);
      FUN_0565d75c();
    }
LAB_05669ed4:
    *(undefined8 *)(unaff_x19 + 0x198) = uVar1;
    LeanTween__value(unaff_x19 + 0x198,uVar1);
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x2c0) = 2;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
    return;
  }
LAB_05669efc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


