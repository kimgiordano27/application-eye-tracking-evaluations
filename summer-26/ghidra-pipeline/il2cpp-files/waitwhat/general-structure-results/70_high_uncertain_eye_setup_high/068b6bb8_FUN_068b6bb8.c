/*
FUNCTION_NAME: FUN_068b6bb8
ENTRY_POINT: 068b6bb8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068b6bb8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_07559177 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2d40);
    DAT_07559177 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar1 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0595236c(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
  }
  uVar3 = FUN_069d3398(param_1,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_068b3948(param_1);
    puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_068b6cac;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068b6cac:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar3 & 1) != 0) {
        lVar6 = *plVar4;
        uVar8 = *(undefined8 *)(param_1 + 0x278);
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_068b6da0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,3);
LAB_068b6da0:
                    /* WARNING: Could not recover jumptable at 0x068b6dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4,param_1,uVar8,param_2,puVar5[1]);
        return;
      }
    }
    if (*(char *)(param_1 + 0x2c9) != '\0') {
      FUN_042e4c6c(param_2,*(undefined8 *)(param_1 + 0x2d0),
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x278);
    uVar9 = *(undefined8 *)(param_1 + 0x2d0);
    if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0686b5e4(param_1,uVar8,uVar9,0);
    FUN_042e4c6c(param_2,*(undefined8 *)(param_1 + 0x2d0),
                 *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  return;
}


