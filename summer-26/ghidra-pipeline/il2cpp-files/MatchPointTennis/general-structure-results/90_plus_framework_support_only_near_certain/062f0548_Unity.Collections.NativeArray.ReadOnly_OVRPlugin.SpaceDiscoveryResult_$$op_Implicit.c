/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 062f0548
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  long lVar8;
  void *unaff_x23;
  long unaff_x25;
  long unaff_x29;
  
  piVar3 = (int *)thunk_FUN_044a5a9c();
  iVar1 = *piVar3;
  plVar4 = (long *)thunk_FUN_044a5a9c();
  if (*plVar4 != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80))();
    if (iVar1 < iVar2) {
      plVar4 = (long *)thunk_FUN_044a5a9c();
      lVar8 = *plVar4;
      puVar5 = (undefined4 *)thunk_FUN_044a5a9c();
      if (lVar8 == 0) goto LAB_062f061c;
      puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88);
      uVar6 = *puVar7;
      *(undefined4 *)(unaff_x29 + -0xc) = *puVar5;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
      (*(code *)puVar7[2])(uVar6,puVar7,lVar8,unaff_x29 + -0x20);
    }
    else {
      memset(unaff_x23,0,unaff_x22);
      memcpy(unaff_x21,unaff_x23,unaff_x22);
    }
    if (unaff_x19 != (long *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x28)) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      lVar8 = *unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      (**(code **)(*(long *)(lVar8 + 0xa40) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0xa40) + 8));
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_04481fb8();
      }
      FUN_097b65b8();
      if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_062f061c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


