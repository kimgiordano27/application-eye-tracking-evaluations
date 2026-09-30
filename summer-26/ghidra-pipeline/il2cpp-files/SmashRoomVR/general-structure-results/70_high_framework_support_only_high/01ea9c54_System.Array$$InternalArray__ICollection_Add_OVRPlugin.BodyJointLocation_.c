/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01ea9c54
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

int System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar6 = 0;
  do {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01ea9cb8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)puVar1,0);
LAB_01ea9cb8:
    uVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return iVar6;
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_01ea9d18;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (iVar6 == 0x7fffffff) {
      FUN_01b48188();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050();
    }
    iVar6 = iVar6 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_01ea9d34;
    }
  }
LAB_01ea9d18:
  puVar2 = (undefined8 *)
           FUN_01ae9f78(param_1,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                        ,0);
LAB_01ea9d34:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar6;
}


