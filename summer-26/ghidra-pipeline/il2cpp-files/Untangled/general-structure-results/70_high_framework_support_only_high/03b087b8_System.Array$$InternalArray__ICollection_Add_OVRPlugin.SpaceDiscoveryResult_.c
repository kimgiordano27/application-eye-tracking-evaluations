/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03b087b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
              (undefined8 *param_1,long param_2,undefined8 param_3)

{
  void *__src;
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  void *unaff_x20;
  long lVar3;
  void *unaff_x22;
  size_t unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  int unaff_w27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  do {
    *(undefined8 **)(unaff_x29 + -0x28) = param_1;
    FUN_02f08988(param_2,param_3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_03b087e0:
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_w27;
    }
    unaff_w27 = unaff_w27 + 1;
    if (*(int *)(unaff_x29 + -0x34) == unaff_w27) {
      unaff_w27 = -1;
      goto LAB_03b087e0;
    }
    puVar2 = (undefined8 *)**(undefined8 **)(unaff_x19 + 0x38);
    uVar1 = *puVar2;
    *(int *)(unaff_x29 + -0xc) = unaff_w27;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x40);
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x26;
    (*(code *)puVar2[2])(uVar1,puVar2,0,unaff_x29 + -0x28);
    memcpy(unaff_x22,unaff_x26,unaff_x23);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x10) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x28,__src,unaff_x24);
    param_2 = *(long *)(lVar3 + 8);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02eea768();
      lVar3 = *(long *)(unaff_x19 + 0x38);
    }
    param_3 = *(undefined8 *)(lVar3 + 0x20);
    param_1 = unaff_x28;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x10) + 0x28)) {
      param_1 = (undefined8 *)*unaff_x28;
    }
  } while( true );
}


