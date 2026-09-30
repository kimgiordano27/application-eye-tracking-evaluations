/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 05bc4928
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(long param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack000000000000000c;
  
  if ((DAT_0754eae7 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112248);
    FUN_03188a78(PTR_DAT_07116390);
    DAT_0754eae7 = 1;
  }
  uStack000000000000000c = 0;
  auVar8 = FUN_05bc18f0(param_1,param_2,param_3,&stack0x0000000c,param_1 + 0x180);
  puVar1 = PTR_DAT_07112248;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    lVar7 = *(long *)(param_1 + 0x1a8);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07116390) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05bc49e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_07116390,0);
LAB_05bc49e0:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05bc4a3c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar1,0);
LAB_05bc4a3c:
    auVar9 = (*(code *)*puVar2)(param_2,puVar2[1]);
    auVar8 = auVar9;
    if (lVar7 != 0) {
      auVar8._8_8_ = *(undefined8 *)(param_1 + 0x180);
      auVar8._0_8_ = auVar9._0_8_;
      *(int *)(lVar7 + 0x20) = auVar9._0_4_;
      *(undefined4 *)(lVar7 + 0x24) = uStack000000000000000c;
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      if (*(long *)(lVar7 + 0x18) != 0) {
        FUN_05bc6df0(*(long *)(lVar7 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8(auVar8._0_8_,auVar8._8_8_);
}


