/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 046da400
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor
               (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x25;
  long unaff_x26;
  long *plVar9;
  long in_stack_00000048;
  
  plVar9 = *(long **)(unaff_x26 + 0x9e8);
  iVar1 = FUN_04e3ff80(param_1,*in_x9,0);
  lVar3 = *plVar9;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar3);
  }
  uVar6 = FUN_04f3fb68(uVar6,0);
  if (in_stack_00000048 != 0) {
    lVar3 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e0078,uVar6,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_02cea798(lVar3,lVar7);
      if (lVar2 == 0) goto LAB_046da678;
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if ((lVar3 != 0) && (lVar2 = thunk_FUN_02cea798(lVar3,lVar7), lVar2 == 0)) {
LAB_046da678:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar3,lVar7);
    }
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_046d9db8();
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_04f3fb68(uVar6,0);
      if (in_stack_00000048 == 0) goto LAB_046da674;
      lVar3 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ad0,uVar6,0);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      if (lVar3 == 0) {
        FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar9 = (long *)thunk_FUN_02cea798(lVar3,lVar7);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar3,lVar7);
      }
      if (0 < (int)plVar9[3]) {
        uVar5 = 0;
        plVar8 = plVar9;
        do {
          plVar8 = plVar8 + 4;
          uVar4 = (ulong)*(uint *)(plVar9 + 3);
          if (uVar4 <= uVar5) {
LAB_046da670:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*plVar8 == 0) {
            FUN_04f52020(0x11,0);
            uVar4 = (ulong)*(uint *)(plVar9 + 3);
          }
          if (uVar4 <= uVar5) goto LAB_046da670;
          FUN_046d9e80();
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)plVar9[3]);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar3 = FUN_04efe4a4(0);
    if (lVar3 != 0) {
      FUN_044a67d0();
      return;
    }
  }
LAB_046da674:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


