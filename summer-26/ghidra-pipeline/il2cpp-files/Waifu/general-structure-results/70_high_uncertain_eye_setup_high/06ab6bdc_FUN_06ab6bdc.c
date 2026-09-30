/*
FUNCTION_NAME: FUN_06ab6bdc
ENTRY_POINT: 06ab6bdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_06ab6bdc(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if ((DAT_086e219b & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfe38,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd2b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    DAT_086e219b = 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
  if ((uVar4 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x21) != '\0') {
      (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    lVar5 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) {
      plVar9 = *(long **)(*(long *)(lVar5 + 0x78) + 0x18);
      if (*(char *)((long)param_1 + 0x21) != '\0') {
        (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        *(undefined1 *)((long)param_1 + 0x21) = 0;
      }
      lVar5 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
      if (lVar5 != 0) {
        uVar10 = *(undefined8 *)(lVar5 + 100);
        uVar11 = *(undefined8 *)(lVar5 + 0x50);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x5c) >> 0x20);
        uVar3 = uStack_60;
        uStack_68 = (undefined4)*(undefined8 *)(lVar5 + 0x58);
        uVar1 = uStack_68;
        local_64 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x58) >> 0x20);
        uVar2 = local_64;
        uStack_70 = uVar11;
        uStack_5c = uVar10;
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_083cd2b8) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto OVRPlugin__IsSuccess;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083cd2b8,1);
OVRPlugin__IsSuccess:
          uStack_48 = uVar1;
          uStack_44 = uVar2;
          uStack_40 = uVar3;
          local_50 = uVar11;
          uStack_3c = uVar10;
          (*(code *)*puVar6)(&uStack_90,plVar9,&local_50,puVar6[1]);
          param_2[1] = CONCAT44(local_84,uStack_88);
          *param_2 = uStack_90;
          *(undefined8 *)((long)param_2 + 0x14) = uStack_7c;
          *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_80,local_84);
          goto LAB_06ab6dd0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(&local_50,0);
  *(undefined8 *)((long)param_2 + 0x14) = uStack_3c;
  *(ulong *)((long)param_2 + 0xc) = CONCAT44(uStack_40,uStack_44);
  param_2[1] = CONCAT44(uStack_44,uStack_48);
  *param_2 = local_50;
LAB_06ab6dd0:
  return uVar4 & 1;
}


