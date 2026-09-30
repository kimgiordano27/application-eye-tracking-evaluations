/*
FUNCTION_NAME: FUN_05bc2568
ENTRY_POINT: 05bc2568
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_05bc2568(long *param_1,long *param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_0754eac4 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112248);
    FUN_03188a78(PTR_DAT_07112228);
    FUN_03188a78(PTR_DAT_071122b8);
    FUN_03188a78(PTR_DAT_07116390);
    DAT_0754eac4 = 1;
  }
  puVar1 = PTR_DAT_07116390;
  puVar2 = PTR_DAT_07112248;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07112248) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto OVRPlugin__GetMixedRealityCameraInfo;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_07112248,7);
OVRPlugin__GetMixedRealityCameraInfo:
    uVar4 = (*(code *)*puVar6)(param_2,puVar6[1]);
    FUN_05bc1d34(param_1,uVar4 & param_3,&local_70,&local_90);
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05bc26c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar1,0);
LAB_05bc26c0:
    uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    puVar1 = PTR_DAT_07112228;
    if (param_1 != (long *)0x0) {
      lVar9 = *param_1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07112228) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05bc2728;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(param_1,*(long *)PTR_DAT_07112228,0);
LAB_05bc2728:
      plVar8 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
      puVar3 = PTR_DAT_071122b8;
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_071122b8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
              goto LAB_05bc2794;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_071122b8,4);
LAB_05bc2794:
        uVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        lVar9 = *param_1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05bc27f0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(param_1,*(long *)puVar1,0);
LAB_05bc27f0:
        plVar8 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05bc2850;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar3,0);
LAB_05bc2850:
          uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          lVar9 = *param_2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_05bc28b0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,6);
LAB_05bc28b0:
          (*(code *)*puVar6)(uVar12,param_2,&local_70,&local_90,uVar7,uVar5,param_4,puVar6[1]);
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


