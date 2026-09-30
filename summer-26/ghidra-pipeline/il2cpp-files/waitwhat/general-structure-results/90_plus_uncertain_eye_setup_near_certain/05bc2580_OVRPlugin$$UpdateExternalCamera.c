/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 05bc2580
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 OVRPlugin__UpdateExternalCamera(long *param_1,long *param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  if ((DAT_0754eac4 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112248);
    FUN_03188a78(PTR_DAT_07112228);
    FUN_03188a78(PTR_DAT_071122b8);
    FUN_03188a78(PTR_DAT_07116390);
    DAT_0754eac4 = 1;
  }
  puVar1 = PTR_DAT_07116390;
  puVar2 = PTR_DAT_07112248;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07112248) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto OVRPlugin__GetMixedRealityCameraInfo;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_07112248,7);
OVRPlugin__GetMixedRealityCameraInfo:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
    FUN_05bc1d34(param_1,uVar4 & param_3,&stack0x00000020);
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05bc26c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar1,0);
LAB_05bc26c0:
    (*(code *)*puVar5)(param_2,puVar5[1]);
    puVar1 = PTR_DAT_07112228;
    if (param_1 != (long *)0x0) {
      lVar7 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07112228) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05bc2728;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07112228,0);
LAB_05bc2728:
      plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
      puVar3 = PTR_DAT_071122b8;
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_071122b8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_05bc2794;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_071122b8,4);
LAB_05bc2794:
        uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar7 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05bc27f0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(param_1,*(long *)puVar1,0);
LAB_05bc27f0:
        plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05bc2850;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar3,0);
LAB_05bc2850:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
          lVar7 = *param_2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                goto LAB_05bc28b0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,6);
LAB_05bc28b0:
          (*(code *)*puVar5)(uVar10,param_2,&stack0x00000020);
          if (*param_4 != 0) {
            return *(undefined4 *)(*param_4 + 0x3c);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


