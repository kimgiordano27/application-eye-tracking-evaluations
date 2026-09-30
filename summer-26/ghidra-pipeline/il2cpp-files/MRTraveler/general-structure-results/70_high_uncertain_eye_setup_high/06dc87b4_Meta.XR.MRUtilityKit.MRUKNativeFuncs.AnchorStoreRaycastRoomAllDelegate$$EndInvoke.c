/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$EndInvoke
ENTRY_POINT: 06dc87b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc88d8) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    uVar3 = FUN_04aa6440(&stack0x00000030,*unaff_x26);
    uVar2 = in_stack_00000048;
    uVar1 = in_stack_00000040;
    if ((uVar3 & 1) == 0) {
      if (unaff_w24 < 0) {
        FUN_04aa6560(&stack0x00000030,*(undefined8 *)PTR_DAT_08e90dd8);
      }
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
      return;
    }
    plVar7 = *(long **)(unaff_x25 + 0x48);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_06dc8820;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*unaff_x27,5);
LAB_06dc8820:
    (*(code *)*puVar4)(plVar7,uVar1,uVar2,puVar4[1]);
  } while( true );
}


