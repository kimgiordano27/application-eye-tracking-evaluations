/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046da3e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x25;
  long in_stack_00000048;
  
  uVar2 = FUN_04e3ff80(param_2,*param_1);
  puVar1 = PTR_DAT_065c89e8;
  if (in_stack_00000048 != 0) {
    iVar3 = FUN_04e3ff80(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ac8,0);
    lVar6 = *(long *)puVar1;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar6);
    }
    uVar9 = FUN_04f3fb68(uVar9,0);
    if (in_stack_00000048 == 0) goto LAB_046da674;
    lVar6 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e0078,uVar9,0);
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02cea798(lVar6,lVar10);
      if (lVar4 == 0) goto LAB_046da678;
    }
    *(long *)(unaff_x19 + 0x30) = lVar4;
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
    }
    if ((lVar6 != 0) && (lVar4 = thunk_FUN_02cea798(lVar6,lVar10), lVar4 == 0)) {
LAB_046da678:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar6,lVar10);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_046d9db8();
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar9 = FUN_04f3fb68(uVar9,0);
      if (in_stack_00000048 == 0) goto LAB_046da674;
      lVar6 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ad0,uVar9,0);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02ce0978(lVar10);
      }
      if (lVar6 == 0) {
        FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar5 = (long *)thunk_FUN_02cea798(lVar6,lVar10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar6,lVar10);
      }
      if (0 < (int)plVar5[3]) {
        uVar8 = 0;
        plVar11 = plVar5;
        do {
          plVar11 = plVar11 + 4;
          uVar7 = (ulong)*(uint *)(plVar5 + 3);
          if (uVar7 <= uVar8) {
LAB_046da670:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*plVar11 == 0) {
            FUN_04f52020(0x11,0);
            uVar7 = (ulong)*(uint *)(plVar5 + 3);
          }
          if (uVar7 <= uVar8) goto LAB_046da670;
          FUN_046d9e80();
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)plVar5[3]);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar6 = FUN_04efe4a4(0);
    if (lVar6 != 0) {
      FUN_044a67d0();
      return;
    }
  }
LAB_046da674:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


