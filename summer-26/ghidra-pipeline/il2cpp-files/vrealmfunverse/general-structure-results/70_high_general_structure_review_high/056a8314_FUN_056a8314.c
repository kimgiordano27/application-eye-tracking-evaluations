/*
FUNCTION_NAME: FUN_056a8314
ENTRY_POINT: 056a8314
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_7;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x056a893c) */
/* WARNING: Removing unreachable block (ram,0x056a898c) */

void FUN_056a8314(int *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_f0;
  int *piStack_e8;
  char *pcStack_e0;
  undefined8 *puStack_d8;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  char local_9c [4];
  undefined8 local_98;
  undefined8 local_90;
  int *piStack_88;
  char *pcStack_80;
  undefined8 *puStack_78;
  int local_64;
  undefined8 local_60;
  int *piStack_58;
  char *local_50;
  undefined8 *local_48;
  
  if ((DAT_066d1f45 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Pool_GenericPool<StringBuilder>_Release__);
    FUN_02b3c81c(Method_UnityEngine_Pool_GenericPool<XRLayout>_Get__);
    FUN_02b3c81c(Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Get__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Release__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_SetCreateFunction__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Get__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Release__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
                );
    DAT_066d1f45 = 1;
  }
  local_64 = *param_1;
  lVar10 = *(long *)(param_1 + 8);
  local_98 = 0;
  local_9c[0] = '\0';
  piStack_88 = (int *)0x0;
  local_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_c8 = 0;
  if (local_64 != 1) {
    if (local_64 == 0) {
      local_b0 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      local_64 = -1;
      *param_1 = -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x40);
      uVar12 = *(undefined8 *)(lVar10 + 0xa8);
      uVar13 = *(undefined8 *)(param_1 + 10);
      uVar14 = *(undefined8 *)(lVar10 + 0x78);
      uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
      FUN_056a8ba8(uVar4,uVar11,uVar12,uVar13,uVar14);
      piVar8 = param_1 + 0xe;
      *(undefined8 *)piVar8 = uVar4;
      thunk_FUN_02bb0e9c(piVar8,uVar4);
      plVar6 = (long *)(param_1 + 0x10);
      *plVar6 = 0;
      thunk_FUN_02bb0e9c(plVar6,0);
      *(undefined2 *)(param_1 + 0x12) = 0;
      piStack_58 = &local_64;
      local_48 = &local_98;
      local_98 = *(undefined8 *)(lVar10 + 0x128);
      local_60 = 0;
      local_50 = local_9c;
      local_9c[0] = '\0';
      FUN_04ddecfc(local_98,local_9c,0);
      FUN_056a66f8(&local_f0,lVar10,*(undefined8 *)piVar8);
      piVar8 = piStack_e8;
      *(byte *)(param_1 + 0x12) = (byte)local_f0 & 1;
      *(byte *)((long)param_1 + 0x49) = (byte)((ulong)local_f0 >> 8) & 1;
      *(char **)(param_1 + 0x10) = pcStack_e0;
      thunk_FUN_02bb0e9c(plVar6);
      if ((local_64 < 0) && (*local_50 != '\0')) {
        thunk_FUN_02b4a54c(*local_48,0);
      }
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        if (piVar8 != (int *)0x0) {
          local_c0 = FUN_03f4047c(piVar8,0,*(undefined8 *)
                                            Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Get__
                                 );
          uVar5 = FUN_0430c6fc(local_c0,*(undefined8 *)
                                         Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
          if ((uVar5 & 1) == 0) {
            local_64 = 1;
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x18) = local_c0;
            thunk_FUN_02bb0e9c(param_1 + 0x18,0);
            if (*(int *)(*(long *)
                          Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_02e46e50(param_1 + 2,local_c0,param_1,
                         *(undefined8 *)Method_UnityEngine_Pool_GenericPool<StringBuilder>_Release__
                        );
            return;
          }
          goto LAB_056a85b8;
        }
        uVar4 = 0;
        goto LAB_056a85d4;
      }
      if (*(char *)((long)param_1 + 0x49) == '\0') goto LAB_056a8970;
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = FUN_055dae88(*(long *)(param_1 + 10),0,*(undefined8 *)(param_1 + 0xc),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      local_b0 = FUN_04def550(lVar10,0,0);
      uVar5 = FUN_04caa4b4(local_b0,0);
      if ((uVar5 & 1) == 0) {
        local_64 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_b0;
        thunk_FUN_02bb0e9c(param_1 + 0x14,0);
        if (*(int *)(*(long *)
                      Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_02e47098(param_1 + 2,local_b0,param_1,
                     *(undefined8 *)Method_UnityEngine_Pool_GenericPool<XRLayout>_Get__);
        return;
      }
    }
    FUN_04caa4cc(local_b0,0);
    lVar9 = *(long *)(param_1 + 0x10);
LAB_056a8970:
    uVar4 = thunk_FUN_02ba3594(Method_Unity_Collections_LowLevel_Unsafe_HashMapHelper<int>_Free__);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(lVar9,uVar4);
  }
  local_c0 = *(undefined1 (*) [16])(param_1 + 0x18);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_64 = -1;
  *param_1 = -1;
LAB_056a85b8:
  uVar4 = FUN_0430c744(local_c0,*(undefined8 *)
                                 Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Release__
                      );
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_056a85d4:
  local_98 = *(undefined8 *)(lVar10 + 0x128);
  piStack_58 = &local_64;
  local_48 = &local_98;
  local_60 = 0;
  local_50 = local_9c;
  local_9c[0] = '\0';
  FUN_04ddecfc(local_98,local_9c,0);
  lVar9 = *(long *)(lVar10 + 0xe8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (((*(char *)(lVar9 + 0x30) == '\0') || (*(char *)(lVar9 + 0x32) != '\0')) ||
     (plVar6 = *(long **)(lVar10 + 0xd8), plVar6 == (long *)0x0)) {
    uVar5 = 1;
  }
  else {
    lVar9 = *plVar6;
    uVar11 = *(undefined8 *)(lVar10 + 0x40);
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_SetCreateFunction__) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_056a8924;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02b7654c(plVar6,*(long *)
                                  Method_UnityEngine_UIElements_EventBase<ExecuteCommandEvent>_SetCreateFunction__
                          ,1);
LAB_056a8924:
    uVar5 = (*(code *)*puVar7)(plVar6,uVar11,puVar7[1]);
  }
  if ((char)param_1[0x12] == '\0') {
    bVar2 = (uVar5 & 1) == 0;
    lVar9 = 0x171;
    if (bVar2) {
      lVar9 = 0x181;
    }
    lVar1 = 0x174;
    if (bVar2) {
      lVar1 = 0x184;
    }
    if (*(char *)(lVar10 + lVar9) != '\0' && *(int *)(lVar10 + lVar1) != 0) {
      plVar6 = *(long **)(param_1 + 0xe);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar3 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (iVar3 < 400) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 10) + 0x48);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined1 *)(lVar9 + 0x18) = 1;
      }
    }
    if (*(long *)(lVar10 + 0xf8) != 0) {
      FUN_055d6d80(*(long *)(lVar10 + 0xf8),0);
    }
    piStack_e8 = (int *)0x0;
    local_f0 = 0;
    puStack_d8 = (undefined8 *)0x0;
    pcStack_e0 = (char *)0x0;
    FUN_041bc78c(&local_f0,*(undefined8 *)(param_1 + 0xe),0,0,uVar4,0,
                 *(undefined8 *)Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Release__)
    ;
    uVar11 = 0;
    iVar3 = 0x14;
    piStack_88 = piStack_e8;
    local_90 = local_f0;
    puStack_78 = puStack_d8;
    pcStack_80 = pcStack_e0;
  }
  else {
    if (*(char *)(lVar10 + 0xe0) != '\0') {
      *(undefined1 *)(lVar10 + 0xe0) = 0;
      if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0568595c(*(long *)(lVar10 + 0x90),
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
                   ,0);
    }
    uVar11 = FUN_056a5db8(lVar10,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe),uVar4,
                          *(undefined8 *)(param_1 + 0xc));
    iVar3 = 0x16;
  }
  if ((local_64 < 0) && (*local_50 != '\0')) {
    thunk_FUN_02b4a54c(*local_48,0);
  }
  if (iVar3 != 0x16) {
    if (iVar3 == 0x14) goto LAB_056a87a8;
    if (iVar3 != 0) {
      return;
    }
  }
  piStack_58 = (int *)0x0;
  local_60 = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = (char *)0x0;
  FUN_041bc78c(&local_60,*(undefined8 *)(param_1 + 0xe),1,*(undefined1 *)((long)param_1 + 0x49),
               uVar4,uVar11,
               *(undefined8 *)Method_UnityEngine_Rendering_GenericPool<XRPassUniversal>_Release__);
  piStack_88 = piStack_58;
  local_90 = local_60;
  puStack_78 = local_48;
  pcStack_80 = local_50;
LAB_056a87a8:
  *param_1 = -2;
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_02bb0e9c(piVar8,0);
  piVar8 = param_1 + 0x10;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_02bb0e9c(piVar8,0);
  if (*(int *)(*(long *)
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate>_get_Value__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  piStack_58 = piStack_88;
  local_60 = local_90;
  local_48 = puStack_78;
  local_50 = pcStack_80;
  FUN_03928140(param_1 + 2,&local_60,
               *(undefined8 *)Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
  return;
}


