/*
FUNCTION_NAME: FUN_06425e9c
ENTRY_POINT: 06425e9c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06425e9c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_06a2ed98;
  if ((bRam0000000006e9c399 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
    bRam0000000006e9c399 = 1;
  }
  cVar1 = *(char *)(param_5 + 0x151);
  lStack_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_062253ac(cVar1 == '\0',0);
  lVar8 = *(long *)(param_5 + 0x100);
  if (lVar8 != 0) {
    if (((*(byte *)(lVar8 + 0x61) | *(byte *)(lVar8 + 0x60)) & 1) != 0) {
      param_4 = *(float *)(lVar8 + 0x70);
      param_2 = param_4 * *(float *)(lVar8 + 0x68);
      param_3 = param_4 * *(float *)(lVar8 + 0x6c);
      thunk_FUN_062301c0(param_4 * *(float *)(lVar8 + 100),param_2,param_3,param_4,DAT_01317c64,
                         *(byte *)(lVar8 + 0x60) & 1,*(byte *)(lVar8 + 0x61) & 1,0);
    }
    lStack_68 = 0;
    if (*(long *)(param_5 + 0x10) == 0) {
LAB_06426130:
      if (*(char *)(param_5 + 0x150) != '\0') {
        FUN_064261e0(param_5);
      }
      return;
    }
    plVar3 = *(long **)(param_5 + 0x100);
    if (plVar3 != (long *)0x0) {
      lVar8 = (**(code **)(*plVar3 + 0x3c8))(plVar3,*(undefined8 *)(*plVar3 + 0x3d0));
      puVar2 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo;
      if (lVar8 != 0) {
        fVar11 = (float)FUN_063b01c8(lVar8,0);
        lVar8 = *(long *)(param_5 + 0x78);
        if (*(char *)(param_5 + 0x153) == '\0') {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (lVar8 == 0) goto LAB_06426160;
          FUN_06239434(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),0);
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (lVar8 == 0) goto LAB_06426160;
          FUN_06239230(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),0);
        }
        if (*(long *)(param_5 + 0x78) != 0) {
          FUN_0623a30c(*(long *)(param_5 + 0x78),0,0);
          FUN_0651117c(&uStack_a8,fVar11,param_3 + fVar11,param_4 + param_2,param_2,_UNK_01317994,
                       DAT_01317b38,0);
          uStack_e8 = uStack_a0;
          uStack_f0 = uStack_a8;
          uStack_d8 = uStack_90;
          uStack_e0 = uStack_98;
          uStack_c8 = uStack_80;
          uStack_d0 = uStack_88;
          uStack_b8 = uStack_70;
          uStack_c0 = uStack_78;
          FUN_0622ff64(&uStack_f0,0);
          if (DAT_06e86706 == '\0') {
            FUN_02e3ca1c(PTR_DAT_06a3fe90);
            DAT_06e86706 = '\x01';
          }
          lVar8 = *(long *)(*(long *)PTR_DAT_06a3fe90 + 0xb8);
          uStack_128 = *(undefined8 *)(lVar8 + 0x48);
          uStack_130 = *(undefined8 *)(lVar8 + 0x40);
          uStack_118 = *(undefined8 *)(lVar8 + 0x58);
          uStack_120 = *(undefined8 *)(lVar8 + 0x50);
          uStack_108 = *(undefined8 *)(lVar8 + 0x68);
          uStack_110 = *(undefined8 *)(lVar8 + 0x60);
          uStack_f8 = *(undefined8 *)(lVar8 + 0x78);
          uStack_100 = *(undefined8 *)(lVar8 + 0x70);
          FUN_0622fea0(&uStack_130,0);
          lVar8 = *(long *)(param_5 + 0x108);
          uVar10 = *(undefined8 *)(param_5 + 0x10);
          uVar9 = *(undefined8 *)(param_5 + 0x78);
          if (*(long *)(param_5 + 0x118) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_064348f0(*(long *)(param_5 + 0x118),0);
          }
          if (*(long *)(param_5 + 0x148) != 0) {
            uVar5 = FUN_06433698(*(long *)(param_5 + 0x148),0);
            if ((*(long *)(param_5 + 0x100) != 0) &&
               (FUN_064f4174(*(long *)(param_5 + 0x100),0), lVar8 != 0)) {
              FUN_064389d8(lVar8,uVar10,uVar9,uVar9,uVar4,uVar5,&lStack_68,0);
              lVar8 = lStack_68;
              if (lStack_68 != 0) {
                lVar6 = thunk_FUN_02ea289c(
                                          System_Collections_Generic_List<DecalEntityIndexer_DecalEntityItem>_TypeInfo
                                          );
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar7 = FUN_062ca178(lVar8,0);
                lVar8 = lStack_68;
                if ((uVar7 & 1) != 0) {
                  uVar9 = thunk_FUN_02ea289c(
                                            Game_Views_Portals_PromoPortalView_<>c__DisplayClass12_0_TypeInfo
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cb88(lVar8,uVar9);
                }
                thunk_FUN_02ea289c(UnityEngine_UIElements_PropagationPaths_<>c_TypeInfo);
                uVar9 = thunk_FUN_02e78ab8();
                FUN_064f21d4(uVar9,lVar8,0);
                uVar10 = thunk_FUN_02ea289c(
                                           Game_Views_Portals_PromoPortalView_<>c__DisplayClass12_0_TypeInfo
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02e3cb88(uVar9,uVar10);
              }
              goto LAB_06426130;
            }
          }
        }
      }
    }
  }
LAB_06426160:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


