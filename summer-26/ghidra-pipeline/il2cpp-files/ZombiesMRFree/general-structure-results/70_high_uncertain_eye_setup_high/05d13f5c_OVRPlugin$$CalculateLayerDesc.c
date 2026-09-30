/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 05d13f5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__CalculateLayerDesc(long *param_1,long *param_2,uint param_3,long *param_4)

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
  undefined8 uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_0739885a & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b20);
                    /* try { // try from 05d13fa4 to 05e13fcf has its CatchHandler @ 05d14220 */
    FUN_02fe925c(PTR_DAT_06fb4b00);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    FUN_02fe925c(PTR_DAT_06fb8710);
    DAT_0739885a = 1;
  }
  puVar1 = PTR_DAT_06fb8710;
  puVar2 = PTR_DAT_06fb4b20;
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
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06fb4b20) {
                    /* try { // try from 05d14040 to 05e14063 has its CatchHandler @ 05d14214 */
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_05d14048;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)PTR_DAT_06fb4b20,7);
LAB_05d14048:
    uVar4 = (*(code *)*puVar6)(param_2,puVar6[1]);
    FUN_05d13780(param_1,uVar4 & param_3,&local_70,&local_90);
    lVar9 = *param_2;
                    /* try { // try from 05d1406c to 05e14087 has its CatchHandler @ 05d1421c */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 05d14088 to 05e141ef has its CatchHandler @ 05d13dc4 */
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05d140b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_05d140b4:
    uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
    puVar1 = PTR_DAT_06fb4b00;
    if (param_1 != (long *)0x0) {
      lVar9 = *param_1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06fb4b00) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05d1411c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(param_1,*(long *)PTR_DAT_06fb4b00,0);
LAB_05d1411c:
      plVar8 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
      puVar3 = PTR_DAT_06fb4b60;
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06fb4b60) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
              goto LAB_05d14188;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb4b60,4);
LAB_05d14188:
        uVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        lVar9 = *param_1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05d141e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(param_1,*(long *)puVar1,0);
LAB_05d141e4:
        plVar8 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05d14244;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar3,0);
LAB_05d14244:
          uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          lVar9 = *param_2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_05d142a4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,6);
LAB_05d142a4:
          (*(code *)*puVar6)(uVar12,param_2,&local_70,&local_90,uVar7,uVar5,param_4,puVar6[1]);
          if (*param_4 != 0) {
            return *(undefined4 *)(*param_4 + 0x3c);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


