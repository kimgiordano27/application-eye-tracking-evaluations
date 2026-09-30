/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 046da390
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 in_w8;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x25;
  long lStack0000000000000048;
  
  *(undefined1 *)(unaff_x21 + 0x73c) = in_w8;
  lStack0000000000000048 = 0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar4 = FUN_04efe4a4(0);
  if (lVar4 != 0) {
    FUN_044a6a10();
    if (lStack0000000000000048 == 0) {
      return;
    }
    uVar2 = FUN_04e3ff80(lStack0000000000000048,*(undefined8 *)PTR_DAT_065df1e8,0);
    puVar1 = PTR_DAT_065c89e8;
    if (lStack0000000000000048 == 0) goto LAB_046da674;
    iVar3 = FUN_04e3ff80(lStack0000000000000048,*(undefined8 *)PTR_DAT_065e1ac8,0);
    lVar4 = lStack0000000000000048;
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
    }
    uVar10 = FUN_04f3fb68(uVar10,0);
    if (lVar4 == 0) goto LAB_046da674;
    lVar4 = FUN_04e3dc38(lVar4,*(undefined8 *)PTR_DAT_065e0078,uVar10,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_02cea798(lVar4,lVar7);
      if (lVar5 == 0) goto LAB_046da678;
    }
    *(long *)(unaff_x19 + 0x30) = lVar5;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if ((lVar4 != 0) && (lVar5 = thunk_FUN_02cea798(lVar4,lVar7), lVar5 == 0)) {
LAB_046da678:
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar4,lVar7);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_046d9db8();
      lVar4 = lStack0000000000000048;
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04f3fb68(uVar10,0);
      if (lVar4 == 0) goto LAB_046da674;
      lVar4 = FUN_04e3dc38(lVar4,*(undefined8 *)PTR_DAT_065e1ad0,uVar10,0);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      if (lVar4 == 0) {
        FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar6 = (long *)thunk_FUN_02cea798(lVar4,lVar7);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar4,lVar7);
      }
      if (0 < (int)plVar6[3]) {
        uVar9 = 0;
        plVar11 = plVar6;
        do {
          plVar11 = plVar11 + 4;
          uVar8 = (ulong)*(uint *)(plVar6 + 3);
          if (uVar8 <= uVar9) {
LAB_046da670:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          if (*plVar11 == 0) {
            FUN_04f52020(0x11,0);
            uVar8 = (ulong)*(uint *)(plVar6 + 3);
          }
          if (uVar8 <= uVar9) goto LAB_046da670;
          FUN_046d9e80();
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)plVar6[3]);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar4 = FUN_04efe4a4(0);
    if (lVar4 != 0) {
      FUN_044a67d0();
      return;
    }
  }
LAB_046da674:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


