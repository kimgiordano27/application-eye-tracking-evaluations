/*
FUNCTION_NAME: FUN_05e7bba0
ENTRY_POINT: 05e7bba0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_15;frame_or_lifecycle_behavior
*/


undefined8 FUN_05e7bba0(int *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  undefined1 local_78 [4];
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_066dc705 & 1) == 0) {
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    FUN_02b3c81c(PTR_DAT_0631f050);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_0__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_1__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_2__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_3__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_Clickable_OnTimer__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderStopNaN>b__131_0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__171_0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<UpdateCameraResolution>b__124_0__
                );
    DAT_066dc705 = 1;
  }
  puVar2 = Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_3__;
  puVar1 = Method_UnityEngine_UIElements_Clickable_OnTimer__;
  local_70 = 0;
  local_68 = 0;
  _local_78 = 0;
  if (*(long *)(param_1 + 2) != 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 2) + 0x18);
    if (0 < iVar4) {
      sVar13 = 0;
      iVar11 = 0;
      do {
        if (*(long *)(param_1 + 2) == 0) goto LAB_05e7c030;
        uVar6 = FUN_0388d574(*(long *)(param_1 + 2),iVar11,*(undefined8 *)puVar2);
        if (uVar6 >> 0x20 != 0) {
          iVar14 = *param_1;
          iVar12 = iVar14 * iVar11;
          if (iVar12 < iVar12 + iVar14) {
            do {
              if (*(long *)(param_1 + 4) == 0) goto LAB_05e7c030;
              uVar3 = FUN_038594b8(*(long *)(param_1 + 4),iVar12,*(undefined8 *)puVar1);
              if (uVar3 != 0) {
                uVar5 = FUN_05e7c034();
                if (*(long *)(param_1 + 4) == 0) goto LAB_05e7c030;
                FUN_0385950c(*(long *)(param_1 + 4),iVar12,
                             uVar3 & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU),
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<UpdateCameraResolution>b__124_0__
                            );
                if (*(long *)(param_1 + 2) == 0) goto LAB_05e7c030;
                FUN_0388d5c8(*(long *)(param_1 + 2),iVar11,uVar6 - 0x100000000,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__171_0__
                            );
                _local_78 = CONCAT17(1,(uint7)(byte)uVar5 << 0x30);
                _local_78 = CONCAT24((short)iVar12 + (short)*param_1 * sVar13,iVar11);
                goto LAB_05e7c008;
              }
              iVar14 = iVar14 + -1;
              iVar12 = iVar12 + 1;
            } while (iVar14 != 0);
          }
        }
        iVar11 = iVar11 + 1;
        sVar13 = sVar13 + -1;
      } while (iVar11 != iVar4);
    }
    if ((param_2 == (long *)0x0) ||
       (uVar6 = (**(code **)(*param_2 + 0x198))
                          (param_2,param_1[6] << 5,param_1[7] * *param_1,&local_70,
                           *(undefined8 *)(*param_2 + 0x1a0)), (uVar6 & 1) == 0)) {
      puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
      lVar10 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar10 = *(long *)puVar1;
      }
      puVar8 = *(undefined8 **)(lVar10 + 0xb8);
LAB_05e7c00c:
      return *puVar8;
    }
    lVar10 = *(long *)(param_1 + 4);
    if (lVar10 != 0) {
      iVar4 = FUN_038592f0(lVar10,*(undefined8 *)
                                   Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_1__
                          );
      FUN_03859308(lVar10,*param_1 + iVar4,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderStopNaN>b__131_0__
                  );
      puVar1 = PTR_DAT_0631f050;
      lVar10 = *(long *)(param_1 + 4);
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x10);
        lVar9 = *(long *)PTR_DAT_0631f050;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = 0xfffffffe;
          }
          else {
            FUN_038597b0(lVar10,0xfffffffe,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (1 < *param_1) {
            iVar4 = 1;
            do {
              lVar10 = *(long *)(param_1 + 4);
              if (lVar10 == 0) goto LAB_05e7c030;
              lVar7 = *(long *)(lVar10 + 0x10);
              lVar9 = *(long *)puVar1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_05e7c030;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                *(undefined4 *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = 0xffffffff;
              }
              else {
                FUN_038597b0(lVar10,0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *param_1);
          }
          lVar10 = *(long *)(param_1 + 2);
          if (DAT_066d7495 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312c90);
            DAT_066d7495 = '\x01';
          }
          uVar6 = local_70;
          puVar1 = PTR_DAT_06312c90;
          iVar4 = (int)local_70;
          iVar11 = (int)local_68;
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar3 = FUN_04d7c5dc(uVar6 & 0xffffffff,iVar11 + iVar4,0);
          if (DAT_066d7496 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312c90);
            DAT_066d7496 = '\x01';
          }
          iVar4 = local_70._4_4_;
          iVar11 = local_68._4_4_;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar4 = FUN_04d7c5dc(iVar4,iVar11 + iVar4,0);
          if (lVar10 != 0) {
            lVar7 = *(long *)(lVar10 + 0x10);
            iVar11 = *param_1;
            lVar9 = *(long *)
                     Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_0__
            ;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar5 = *(uint *)(lVar10 + 0x18);
              uVar6 = CONCAT44(iVar11 * 0x20 + -1,iVar4 << 0x10) | (ulong)(uVar3 & 0xffff);
              if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar5 + 1;
                *(ulong *)(lVar7 + (long)(int)uVar5 * 8 + 0x20) = uVar6;
              }
              else {
                FUN_0388d868(lVar10,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              _local_78 = 0;
              if (*(long *)(param_1 + 2) != 0) {
                _local_78 = CONCAT44(0x1000000,*(int *)(*(long *)(param_1 + 2) + 0x18) + -1);
LAB_05e7c008:
                puVar8 = (undefined8 *)local_78;
                goto LAB_05e7c00c;
              }
            }
          }
        }
      }
    }
  }
LAB_05e7c030:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


