/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 07ad43d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x23;
  long lVar9;
  long unaff_x24;
  
  uVar2 = FUN_05726ffc(param_2,param_3,**(undefined8 **)(param_1 + 0x58));
  lVar9 = unaff_x24;
  if ((uVar2 & 1) == 0) {
    lVar9 = 0;
  }
  if ((uVar2 & 1) == 0) {
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Mono_Globalization_Unicode_Contraction_TypeInfo);
    FUN_07ac4808();
  }
  else {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (plVar3 = (long *)FUN_05726ad8(), plVar3 == (long *)0x0)) goto LAB_07ad45b4;
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_AudioListener_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07ad4498;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)UnityEngine_AudioListener_TypeInfo,2);
LAB_07ad4498:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    unaff_x24 = lVar9;
  }
  if (unaff_x24 != 0) {
    *(undefined8 *)(unaff_x24 + 0x48) = uVar5;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x24 + 0x48),uVar5);
    *(undefined8 *)(unaff_x24 + 0x30) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x24 + 0x30),0);
    *(undefined8 *)(unaff_x24 + 0x28) = unaff_x23;
    uVar5 = FUN_07a25db4();
    *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
    thunk_FUN_03afed3c();
    *(undefined8 *)(unaff_x24 + 0x38) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x24 + 0x38),0);
    *(long *)(unaff_x24 + 0x40) = unaff_x19;
    thunk_FUN_03afed3c();
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (plVar3 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0xf8), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      bVar1 = thunk_FUN_065cbffc();
      lVar9 = *(long *)(unaff_x19 + 0xa8);
      *(byte *)(unaff_x24 + 0x50) = bVar1 & 1;
      if (lVar9 == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x10);
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_ConstantBuffer_TypeInfo);
        FUN_079574bc(uVar5,uVar8,unaff_x24,0);
                    /* WARNING: Could not recover jumptable at 0x07ad459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
        return;
      }
    }
  }
LAB_07ad45b4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


