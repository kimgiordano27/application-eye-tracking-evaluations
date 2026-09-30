/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 01f86d04
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetVirtualKeyboardModelAnimationStates
                (int param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint *param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  ulong *unaff_x28;
  undefined1 auVar11 [16];
  code *pcVar12;
  
  uVar1 = param_1 + unaff_w26;
  uVar6 = uVar1 + 1;
  if (uVar6 <= unaff_w20) {
    if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    param_4 = *unaff_x28;
    param_3 = 0x2e;
    iVar5 = FUN_01f63964(unaff_x21 + (long)(int)uVar6 * 2,unaff_w20 - uVar6,0x2e);
    puVar2 = PTR_DAT_027ba778;
    if (iVar5 == -1) {
      if (unaff_w20 < unaff_w23) goto LAB_01f87008;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_027ba778 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      puVar3 = PTR_DAT_027bdea8;
      param_4 = (ulong)(unaff_w19 & 1);
      param_3 = *(undefined8 *)PTR_DAT_027bdea8;
      param_5 = (uint *)register0x00000008;
      uVar10 = FUN_01f8700c();
      if ((uVar10 & 1) != 0) {
        if (unaff_w27 == 0xffffffff) {
          if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          uVar10 = FUN_01f8700c();
          uVar4 = (undefined4)param_9;
          if ((uVar10 & 1) != 0) {
            uVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
            FUN_01f8629c(uVar10,uVar4,param_10._4_4_);
            return uVar10;
          }
        }
        else {
          if (unaff_w24 < unaff_w27 + ~unaff_w23) goto LAB_01f87008;
          if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          param_3 = *(undefined8 *)puVar3;
          param_4 = (ulong)(unaff_w19 & 1);
          param_5 = (uint *)((long)&param_10 + 4);
          uVar10 = FUN_01f8700c();
          if ((uVar10 & 1) != 0) {
            iVar5 = unaff_w27 + 1;
            if (uVar1 == 0xffffffff) {
              if (unaff_w20 <= unaff_w27) goto LAB_01f87008;
              if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
                FUN_0122e748();
              }
              uVar10 = FUN_01f8700c(unaff_x21 + (long)iVar5 * 2,unaff_w20 - iVar5,
                                    *(undefined8 *)PTR_DAT_027c1450,unaff_w19 & 1,&param_10);
              uVar6 = (uint)param_10;
              uVar4 = (undefined4)param_9;
              if ((uVar10 & 1) != 0) {
                uVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
                FUN_01f861b0(uVar10,uVar4,param_10._4_4_,uVar6);
                return uVar10;
              }
            }
            else {
              if ((unaff_w20 <= unaff_w27) || (unaff_w20 - iVar5 < uVar1 + ~unaff_w27))
              goto LAB_01f87008;
              if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
                FUN_0122e748();
              }
              param_4 = (ulong)(unaff_w19 & 1);
              param_3 = *(undefined8 *)PTR_DAT_027c1450;
              param_5 = (uint *)&param_10;
              uVar10 = FUN_01f8700c(unaff_x21 + (long)iVar5 * 2,uVar1 + ~unaff_w27,param_3);
              if ((uVar10 & 1) != 0) {
                if (unaff_w20 <= uVar1) goto LAB_01f87008;
                if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0122e748();
                }
                uVar10 = FUN_01f8700c(unaff_x21 + (long)(int)(uVar1 + 1) * 2,unaff_w20 - (uVar1 + 1)
                                      ,*(undefined8 *)PTR_DAT_027c1458,unaff_w19 & 1,
                                      (long)&param_9 + 4);
                uVar6 = (uint)param_10;
                uVar4 = (undefined4)param_9;
                if ((uVar10 & 1) != 0) {
                  uVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
                  FUN_01f8609c(uVar10,uVar4,param_10._4_4_,uVar6,param_9._4_4_);
                  return uVar10;
                }
              }
            }
          }
        }
      }
    }
    else if ((unaff_w19 & 1) != 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar7 = thunk_FUN_0124bba8();
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c14b0);
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027bdea8);
      FUN_01e7598c(uVar7,uVar8,uVar9,0);
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c14b8);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar8);
    }
    return 0;
  }
LAB_01f87008:
  auVar11 = FUN_01f877a8();
  puVar2 = PTR_DAT_027b3108;
  pcVar12 = FUN_01f8700c;
  if ((DAT_0293dea3 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3108);
    DAT_0293dea3 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar7 = FUN_01f410f4(0);
  if ((param_4 & 1) == 0) {
    uVar10 = FUN_01f670bc(auVar11._0_8_,auVar11._8_8_,7,uVar7,param_5,0,param_7,param_8,pcVar12);
    if ((uVar10 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(~*param_5 >> 0x1f);
    }
  }
  else {
    uVar6 = FUN_01f66c54();
    *param_5 = uVar6;
    if ((int)uVar6 < 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3fa8);
      uVar7 = thunk_FUN_0124bba8();
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1460);
      FUN_01e79c88(uVar7,param_3,uVar8,0);
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c14c0);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar8);
    }
    uVar10 = 1;
  }
  return uVar10;
}


