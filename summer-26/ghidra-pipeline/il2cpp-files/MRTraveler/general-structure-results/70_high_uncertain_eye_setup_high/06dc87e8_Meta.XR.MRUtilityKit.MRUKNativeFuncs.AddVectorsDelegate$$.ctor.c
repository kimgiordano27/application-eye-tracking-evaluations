/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$.ctor
ENTRY_POINT: 06dc87e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc88d8) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138);
        goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_03cf1348(unaff_x20,param_3,5);
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke:
      (*(code *)*puVar2)(unaff_x20,unaff_x22,unaff_x21,puVar2[1]);
      uVar1 = FUN_04aa6440(&stack0x00000030,*unaff_x26);
      if ((uVar1 & 1) == 0) {
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
      unaff_x20 = *(long **)(unaff_x25 + 0x48);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      param_1 = *unaff_x20;
      param_3 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x21 = in_stack_00000048;
      unaff_x22 = in_stack_00000040;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


