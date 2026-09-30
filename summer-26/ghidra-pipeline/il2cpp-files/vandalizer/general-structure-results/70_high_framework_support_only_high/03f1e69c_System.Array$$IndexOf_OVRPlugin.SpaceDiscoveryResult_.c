/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03f1e69c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f1e858) */

bool System_Array__IndexOf<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  long lVar4;
  long unaff_x19;
  int *unaff_x20;
  void *unaff_x22;
  int iVar5;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4();
  }
  if (**(long **)(param_1 + 0xb8) != 0) {
    lVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))();
    memcpy((void *)(unaff_x29 + -0x98),unaff_x26,0x90);
    if (lVar2 != 0) {
      memcpy((void *)(lVar2 + 0x18),(void *)(unaff_x29 + -0x98),0x90);
      thunk_FUN_0329bf60(lVar2 + 0x20,0);
      *(undefined1 *)(lVar2 + 0xb0) = 1;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38))(lVar2);
      if ((uVar3 & 1) == 0) {
        memset(unaff_x22,0,unaff_x24);
        iVar5 = 3;
      }
      else {
        __src = (void *)thunk_FUN_0324f9d8(lVar2,*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) +
                                                                    0x10) + 0x80) + 0x20);
        memcpy(unaff_x23,__src,unaff_x24);
        memcpy(unaff_x22,unaff_x23,unaff_x24);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_031f20a4();
        iVar5 = 5;
        *unaff_x20 = *(int *)(lVar2 + 0xb4);
      }
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4();
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40))
                  (**(long **)(lVar4 + 0xb8),lVar2);
        if ((iVar5 == 5) || (iVar5 == 0)) {
          bVar1 = *unaff_x20 == 0;
        }
        else {
          bVar1 = false;
        }
        if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


