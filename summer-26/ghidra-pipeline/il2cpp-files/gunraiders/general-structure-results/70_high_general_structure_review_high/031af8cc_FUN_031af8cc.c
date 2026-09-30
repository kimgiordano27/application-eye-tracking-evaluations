/*
FUNCTION_NAME: FUN_031af8cc
ENTRY_POINT: 031af8cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x031afb88) */
/* WARNING: Removing unreachable block (ram,0x031afd30) */
/* WARNING: Removing unreachable block (ram,0x031afd20) */

void FUN_031af8cc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  
  if ((DAT_04532470 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042344f0);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_0422fce0);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetBool_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetFloat_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetInt32_TypeInfo);
    DAT_04532470 = 1;
  }
  puVar3 = OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo;
  puVar2 = OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo;
  puVar1 = OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo;
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar9 = thunk_FUN_01c496e0();
    uVar11 = thunk_FUN_01c273e8(OVRControllerTest_TypeInfo);
    FUN_0323fc78(uVar9,uVar11,0);
    uVar11 = thunk_FUN_01c273e8(OVR_OpenVR_IVRSettings__Sync_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar11);
  }
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042344f0);
  FUN_031edfd8(lVar6,0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x38),0);
  uVar7 = FUN_031532a8(*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar7 & 1) == 0) {
    FUN_031e6da0(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetInt32_TypeInfo,
                 *(undefined8 *)(param_1 + 0x48),0);
  }
  FUN_031e6da0(param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x28),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x30),0);
  uVar7 = FUN_031532a8(*(undefined8 *)(param_1 + 0x58),0);
  if ((uVar7 & 1) == 0) {
    FUN_031e6da0(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetFloat_TypeInfo,
                 *(undefined8 *)(param_1 + 0x58),0);
  }
  puVar3 = PTR_DAT_0422fce8;
  puVar2 = PTR_DAT_0422fce0;
  puVar1 = PTR_DAT_0422fa10;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar8 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fce0);
    FUN_03225234(plVar8,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_031ee6bc(lVar6,plVar8,*(undefined8 *)(param_1 + 0x40),0,0,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    uVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03254e10(uVar9,0,uVar5,0);
    FUN_031e6da0(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetBool_TypeInfo,uVar9,0);
    lVar13 = *plVar8;
    lVar12 = *(long *)puVar3;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_031afb70;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_01c72498(plVar8,lVar12,0);
LAB_031afb70:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  puVar4 = OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo;
  uVar9 = FUN_031af198(param_1);
  FUN_031e6da0(param_2,*(undefined8 *)puVar4,uVar9,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar8 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_03225234(plVar8,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_031ee6bc(lVar6,plVar8,*(undefined8 *)(param_1 + 0x50),0,0,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    uVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03254e10(uVar9,0,uVar5,0);
    FUN_031e6da0(param_2,*(undefined8 *)OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo,uVar9,0
                );
    lVar12 = *plVar8;
    lVar6 = *(long *)puVar3;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar6) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_031afcac;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_01c72498(plVar8,lVar6,0);
LAB_031afcac:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  return;
}


