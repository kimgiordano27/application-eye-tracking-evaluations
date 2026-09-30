/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 072d1e90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072d2054) */

undefined8 Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *plStack0000000000000018;
  
  plStack0000000000000018 = (long *)0x0;
  plVar3 = (long *)thunk_FUN_040b4efc(*unaff_x21);
  FUN_07628db8();
  plStack0000000000000018 = plVar3;
  plVar3 = (long *)thunk_FUN_040b4efc(*unaff_x22);
  FUN_074f484c(plVar3,0);
  puVar1 = PTR_DAT_092a63d8;
  while( true ) {
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = FUN_076295cc(plStack0000000000000018,0);
    if ((uVar4 & 1) != 0) break;
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = (**(code **)(*plStack0000000000000018 + 0x218))
                      (plStack0000000000000018,*(undefined8 *)(*plStack0000000000000018 + 0x220));
    uVar4 = FUN_074e5d94(uVar5,0);
    if ((uVar4 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_074ee2d4(plVar3,uVar5,0);
      uVar4 = FUN_074e4840(uVar5,*(undefined8 *)puVar1,0);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        FUN_072d21cc();
        FUN_074f5840(plVar3,0);
      }
    }
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar2 = FUN_074eea38(plVar3,0);
  if (iVar2 < 1) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    FUN_072d21cc();
    uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  plVar3 = plStack0000000000000018;
  if (plStack0000000000000018 != (long *)0x0) {
    lVar7 = *plStack0000000000000018;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_072d2024;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plStack0000000000000018,*(long *)PTR_DAT_092860c0,0);
LAB_072d2024:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  return uVar5;
}


