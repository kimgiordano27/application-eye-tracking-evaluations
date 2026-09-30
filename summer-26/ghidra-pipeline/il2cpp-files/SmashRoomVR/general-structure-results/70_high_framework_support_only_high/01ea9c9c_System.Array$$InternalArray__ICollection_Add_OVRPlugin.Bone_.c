/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Bone>
ENTRY_POINT: 01ea9c9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ea9d84) */

int System_Array__InternalArray__ICollection_Add<OVRPlugin_Bone>(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  
code_r0x01ea9c9c:
  do {
    puVar1 = (undefined8 *)FUN_01ae9f78();
    while( true ) {
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return unaff_w21;
        }
        lVar3 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_01ea9d18;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_01ea9d00;
      }
      if (unaff_w21 == unaff_w23) {
        FUN_01b48188();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050();
      }
      unaff_w21 = unaff_w21 + 1;
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) break;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      while (*(long *)(piVar4 + -2) != *unaff_x22) {
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
        if (uVar2 == 0) goto code_r0x01ea9c9c;
      }
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
    }
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_01ea9d00:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_01ea9d34;
    }
  }
LAB_01ea9d18:
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_01ea9d34:
  (*(code *)*puVar1)();
  return unaff_w21;
}


