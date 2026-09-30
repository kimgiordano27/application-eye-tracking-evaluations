/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Bone>
ENTRY_POINT: 0105b6ac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__set_Item<OVRPlugin_Bone>(void)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  
code_r0x0105b6ac:
  iVar3 = memcmp(unaff_x23,unaff_x21,unaff_x22);
  if (iVar3 == 0) goto LAB_0105b6c8;
  if (-1 < iVar3) {
LAB_0105b6e4:
    *unaff_x19 = unaff_x24;
    return unaff_x20;
  }
LAB_0105b6d0:
  unaff_x20 = unaff_x24 + 1;
  plVar2 = (long *)*unaff_x20;
  if ((long *)*unaff_x20 != (long *)0x0) {
    do {
      unaff_x24 = plVar2;
      bVar1 = *(byte *)(unaff_x24 + 4);
      unaff_x26 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        unaff_x26 = unaff_x24[5];
      }
      unaff_x22 = unaff_x26;
      if (unaff_x25 <= unaff_x26) {
        unaff_x22 = unaff_x25;
      }
      if (unaff_x22 == 0) {
        if (unaff_x26 <= unaff_x25) goto LAB_0105b6c8;
      }
      else {
        unaff_x23 = (void *)unaff_x24[6];
        if ((bVar1 & 1) == 0) {
          unaff_x23 = (void *)((long)unaff_x24 + 0x21);
        }
        iVar3 = memcmp(unaff_x21,unaff_x23,unaff_x22);
        if (iVar3 == 0) {
          if (unaff_x26 <= unaff_x25) goto code_r0x0105b6ac;
        }
        else if (-1 < iVar3) goto code_r0x0105b6ac;
      }
      plVar2 = (long *)*unaff_x24;
      unaff_x20 = unaff_x24;
      if ((long *)*unaff_x24 == (long *)0x0) {
        *unaff_x19 = unaff_x24;
        return unaff_x24;
      }
    } while( true );
  }
  goto LAB_0105b6e4;
LAB_0105b6c8:
  if (unaff_x25 <= unaff_x26) goto LAB_0105b6e4;
  goto LAB_0105b6d0;
}


