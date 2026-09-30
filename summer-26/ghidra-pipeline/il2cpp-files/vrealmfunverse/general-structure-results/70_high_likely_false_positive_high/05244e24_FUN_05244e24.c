/*
FUNCTION_NAME: FUN_05244e24
ENTRY_POINT: 05244e24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_12
*/


void FUN_05244e24(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_x1;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  uint local_c4;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar3 = UnityEngine_UIElements_RepaintData_TypeInfo;
  puVar2 = UnityEngine_Rendering_Universal_RenderingUtils_TypeInfo;
  if ((DAT_066cfd44 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_Repeat_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_RepeatButton_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Request_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(System_Net_Cache_RequestCache_TypeInfo);
    FUN_02b3c81c(System_Net_Cache_RequestCacheLevel_TypeInfo);
    FUN_02b3c81c(System_Net_Cache_RequestCachePolicy_TypeInfo);
    FUN_02b3c81c(System_Net_Cache_RequestCacheProtocol_TypeInfo);
    FUN_02b3c81c(Unity_Services_Core_RequestFailedException_TypeInfo);
    FUN_02b3c81c(System_ResolveEventArgs_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_RepaintData_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_RenderingUtils_TypeInfo);
    DAT_066cfd44 = 1;
  }
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_039adb20(lVar9,*(undefined8 *)puVar3);
  if (param_4 == (long *)0x0) {
    lVar17 = *(long *)UnityEngine_UIElements_Repeat_TypeInfo;
    lVar13 = *(long *)(lVar17 + 0x38);
    if (lVar13 == 0) {
      FUN_02b76274(lVar17);
      lVar13 = *(long *)(lVar17 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02b76218();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02b76218();
    }
    param_4 = (long *)**(undefined8 **)(lVar13 + 0xb8);
    if (param_4 == (long *)0x0) goto LAB_0524541c;
  }
  lVar13 = *param_4;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)UnityEngine_UIElements_RepeatButton_TypeInfo) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05244fd0;
      }
      uVar14 = uVar14 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02b7654c(param_4,*(long *)UnityEngine_UIElements_RepeatButton_TypeInfo,0);
LAB_05244fd0:
  plVar11 = (long *)(*(code *)*puVar10)(param_4,puVar10[1]);
  plVar18 = (long *)PTR_DAT_06312f90;
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f90) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05245038;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)PTR_DAT_06312f90,0);
LAB_05245038:
    uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (param_1 != (long *)0x0) {
      lVar13 = *param_1;
      uVar14 = uVar14 & 0xffffffff;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)System_Net_Cache_RequestCache_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_052450a0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02b7654c(param_1,*(long *)System_Net_Cache_RequestCache_TypeInfo,0);
LAB_052450a0:
      iVar4 = (*(code *)*puVar10)(param_1,puVar10[1]);
      if (iVar4 < 1) {
        if (lVar9 == 0) goto LAB_0524541c;
      }
      else {
        local_c4 = 0;
        iVar19 = 0;
        iVar20 = 0;
        do {
          puVar2 = Oculus_Platform_Request_TypeInfo;
          lVar13 = *param_1;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)System_Net_Cache_RequestCacheLevel_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_05245124;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_02b7654c(param_1,*(long *)System_Net_Cache_RequestCacheLevel_TypeInfo,0);
LAB_05245124:
          plVar12 = (long *)(*(code *)*puVar10)(param_1,iVar20,puVar10[1]);
          uVar21 = 0;
          while ((uVar14 & 1) != 0) {
            lVar17 = *plVar11;
            lVar13 = *(long *)puVar2;
            uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_05245190;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar11,lVar13,0);
LAB_05245190:
            iVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (iVar20 != iVar5) {
              uVar14 = 1;
              goto joined_r0x05245278;
            }
            lVar17 = *plVar11;
            lVar13 = *(long *)puVar2;
            uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_052451f4;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar11,lVar13,0);
LAB_052451f4:
            (*(code *)*puVar10)(plVar11,puVar10[1]);
            lVar13 = *plVar11;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *plVar18) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_05245254;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)FUN_02b7654c(plVar11,*plVar18,0);
LAB_05245254:
            uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            uVar21 = extraout_x1;
          }
          uVar14 = 0;
joined_r0x05245278:
          if (plVar12 == (long *)0x0) goto LAB_0524541c;
          iVar5 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
          iVar6 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
          iVar7 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          iVar8 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
          uVar21 = (**(code **)(*plVar12 + 0x1d8))
                             (plVar12,iVar20,uVar21,param_3,param_2,
                              *(undefined8 *)(*plVar12 + 0x1e0));
          local_b0 = 0;
          local_a8 = plVar12;
          thunk_FUN_02bb0e9c(&local_a8,plVar12);
          local_b0 = uVar21;
          thunk_FUN_02bb0e9c(&local_b0,uVar21);
          puVar2 = Unity_Services_Core_RequestFailedException_TypeInfo;
          local_c0 = CONCAT44(iVar19,iVar20);
          uStack_b8 = (ulong)local_c4;
          if (lVar9 == 0) goto LAB_0524541c;
          lVar13 = *(long *)(lVar9 + 0x10);
          uStack_98 = uStack_b8;
          local_a0 = local_c0;
          plStack_88 = local_a8;
          uStack_90 = local_b0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0524541c;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(ulong *)(lVar13 + 0x28) = uStack_b8;
            *(undefined8 *)(lVar13 + 0x20) = local_c0;
            *(long **)(lVar13 + 0x38) = local_a8;
            *(undefined8 *)(lVar13 + 0x30) = local_b0;
            thunk_FUN_02bb0e9c(lVar13 + 0x30,0);
          }
          else {
            uStack_78 = uStack_b8;
            local_80 = local_c0;
            plStack_68 = local_a8;
            uStack_70 = local_b0;
            FUN_039ae414(lVar9,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                        );
          }
          iVar20 = iVar20 + 1;
          iVar19 = (iVar5 + iVar19) - iVar6;
          local_c4 = (iVar7 + local_c4) - iVar8;
          plVar18 = (long *)PTR_DAT_06312f90;
        } while (iVar20 != iVar4);
      }
      FUN_039b0128(lVar9,*(undefined8 *)System_ResolveEventArgs_TypeInfo);
      return;
    }
  }
LAB_0524541c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


