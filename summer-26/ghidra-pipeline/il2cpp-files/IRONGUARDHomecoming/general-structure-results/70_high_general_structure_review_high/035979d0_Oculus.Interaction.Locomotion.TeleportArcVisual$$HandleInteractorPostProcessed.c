/*
FUNCTION_NAME: Oculus.Interaction.Locomotion.TeleportArcVisual$$HandleInteractorPostProcessed
ENTRY_POINT: 035979d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Oculus_Interaction_Locomotion_TeleportArcVisual__HandleInteractorPostProcessed(ulong param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint unaff_w19;
  uint unaff_w20;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long unaff_x28;
  long lVar20;
  long *unaff_x29;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x035979d0:
  if ((param_1 & 1) == 0) {
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_035972a8;
    if ((*(uint *)(lVar14 + 0x18) <= unaff_w20) ||
       (uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar6))
    goto LAB_03598070;
    uVar9 = (**(code **)(*unaff_x29 + 0x2a8))
                      (unaff_x29,*(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20),
                       *(undefined8 *)(*unaff_x29 + 0x2b0));
    if ((uVar9 & 1) == 0) {
      if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_035972a8;
        if ((unaff_w20 < *(uint *)(lVar14 + 0x18)) &&
           (uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), uVar6 < *(uint *)(unaff_x26 + 0x18)))
        {
          lVar14 = *(long *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_035972a8;
          uVar9 = FUN_035847c8(lVar14,0);
          uVar6 = unaff_w20;
          if ((uVar9 & 1) == 0) goto LAB_03597af4;
          if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
            lVar14 = *unaff_x24;
            if (lVar14 == 0) goto LAB_035972a8;
            if (unaff_w20 < *(uint *)(lVar14 + 0x18)) {
              lVar15 = *in_stack_00000058;
              if (lVar15 == 0) goto LAB_035972a8;
              uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
              if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                uVar9 = (**(code **)(*unaff_x29 + 0x8b8))
                                  (unaff_x29,*(undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20),
                                   *(undefined8 *)(*unaff_x29 + 0x8c0));
                goto joined_r0x03597ad0;
              }
            }
          }
        }
      }
      goto LAB_03598070;
    }
  }
LAB_03597ad4:
  do {
    unaff_w20 = unaff_w20 + 1;
    uVar6 = unaff_w19;
    if (unaff_w19 != unaff_w20) goto LAB_035976e0;
LAB_03597af4:
    do {
      do {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03583338(in_stack_00000048,0,0);
        if (((uVar9 & 1) != 0) && (uVar6 == *(int *)(unaff_x27 + 0x18) - 1U)) {
          lVar14 = *in_stack_00000058;
          if (lVar14 == 0) goto LAB_035972a8;
          lVar15 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3) + 0x20;
          while ((int)uVar6 < *(int *)(lVar14 + 0x18)) {
            if ((in_stack_00000048 == (long *)0x0) ||
               (uVar9 = FUN_035849ac(in_stack_00000048,0), unaff_x26 == 0)) goto LAB_035972a8;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_03598070;
            uVar17 = *(undefined8 *)(unaff_x26 + lVar15);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_03582560(uVar17,0,0);
            unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
            if ((uVar9 & 1) == 0) {
              if ((uVar10 & 1) == 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_03598070;
                uVar9 = (**(code **)(*in_stack_00000048 + 0x2a8))
                                  (in_stack_00000048,*(undefined8 *)(unaff_x26 + lVar15),
                                   *(undefined8 *)(*in_stack_00000048 + 0x2b0));
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_03598070;
                  if (*(long *)(unaff_x26 + lVar15) == 0) goto LAB_035972a8;
                  uVar9 = FUN_035847c8(*(long *)(unaff_x26 + lVar15),0);
                  if ((uVar9 & 1) != 0) {
                    lVar14 = *in_stack_00000058;
                    if (lVar14 != 0) {
                      if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                        uVar9 = (**(code **)(*in_stack_00000048 + 0x8b8))
                                          (in_stack_00000048,*(undefined8 *)(lVar14 + lVar15),
                                           *(undefined8 *)(*in_stack_00000048 + 0x8c0));
                        goto joined_r0x03597ca4;
                      }
                      goto LAB_03598070;
                    }
                    goto LAB_035972a8;
                  }
                  break;
                }
              }
            }
            else {
              if ((uVar10 & 1) != 0) break;
              lVar14 = *in_stack_00000058;
              if (lVar14 == 0) goto LAB_035972a8;
              if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_03598070;
              uVar17 = *(undefined8 *)(lVar14 + lVar15);
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrund_n_s64__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar4 = *(byte *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ +
                               0x130);
              if ((*(byte *)(*in_stack_00000048 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*in_stack_00000048 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(in_stack_00000048);
              }
              uVar9 = FUN_03599194(uVar17,in_stack_00000048);
              unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
joined_r0x03597ca4:
              if ((uVar9 & 1) == 0) break;
            }
            lVar14 = *in_stack_00000058;
            uVar6 = uVar6 + 1;
            lVar15 = lVar15 + 8;
            if (lVar14 == 0) goto LAB_035972a8;
          }
        }
        if (*in_stack_00000058 == 0) goto LAB_035972a8;
        uVar9 = unaff_x25;
        if (uVar6 != *(uint *)(*in_stack_00000058 + 0x18)) goto LAB_03597e78;
        if (unaff_x23 == 0) goto LAB_035972a8;
        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
           (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_03598070;
        lVar14 = (long)(int)in_stack_00000030;
        *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        thunk_FUN_01f51358();
        if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
        if ((in_stack_00000048 != (long *)0x0) &&
           (lVar15 = thunk_FUN_01f116d0(in_stack_00000048,*(undefined8 *)(*in_stack_00000038 + 0x40)
                                       ), lVar15 == 0)) goto LAB_03598e3c;
        if (*(uint *)(in_stack_00000038 + 3) <= in_stack_00000030) goto LAB_03598070;
        in_stack_00000038[lVar14 + 4] = (long)in_stack_00000048;
        thunk_FUN_01f51358(in_stack_00000038 + lVar14 + 4,in_stack_00000048);
        uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
        if (uVar9 <= unaff_x25) goto LAB_03598070;
        lVar15 = *in_stack_00000028;
        if (lVar15 == 0) goto LAB_03597d84;
LAB_03597d6c:
        lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*in_stack_00000040 + 0x40));
        if (lVar11 == 0) goto LAB_03598e3c;
        uVar9 = in_stack_00000040[3];
LAB_03597d84:
        if ((uint)uVar9 <= in_stack_00000030) goto LAB_03598070;
        in_stack_00000040[lVar14 + 4] = lVar15;
        in_stack_00000030 = in_stack_00000030 + 1;
        thunk_FUN_01f51358(in_stack_00000040 + lVar14 + 4,lVar15);
        unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar9 = unaff_x25;
LAB_03597e78:
        do {
          uVar6 = *(uint *)(in_stack_00000040 + 3);
          uVar10 = (ulong)uVar6;
          unaff_x25 = uVar9 + 1;
          if ((long)(int)uVar6 <= (long)unaff_x25) {
            if (in_stack_00000030 != 1) {
              if (in_stack_00000030 == 0) {
                uVar17 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u16__);
                uVar17 = FUN_035ac8e0(uVar17,0);
                thunk_FUN_01efb3a4(Method_Unity_Burst_BurstString_ParseFormatToFormatOptions__);
                uVar19 = thunk_FUN_01f117cc();
                FUN_0356cf38(uVar19,uVar17,0);
                goto LAB_03598ee0;
              }
              if ((int)in_stack_00000030 < 2) {
                uVar6 = 0;
                goto LAB_0359812c;
              }
              if (uVar6 == 0) goto LAB_03598070;
              lVar14 = 0;
              lVar15 = 0;
              uVar6 = 0;
              bVar2 = false;
              goto LAB_03597f4c;
            }
            if (in_stack_00000020 != 0) {
              if (unaff_x23 == 0) goto LAB_035972a8;
              if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_03598070;
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_035972a8;
              lVar14 = FUN_0358d9a0(*(long *)(unaff_x23 + 0x20),0);
              lVar15 = *in_stack_00000058;
              if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_035972a8;
              if ((int)in_stack_00000038[3] == 0) goto LAB_03598070;
              lVar11 = in_stack_00000038[4];
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              bVar4 = FUN_03583338(lVar11,0,0);
              lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s16__);
              if (lVar14 == 0) {
                lVar18 = 0;
              }
              else {
                uVar17 = *(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
                lVar18 = thunk_FUN_01f116d0(lVar14,uVar17);
                if (lVar18 == 0) goto LAB_035981e4;
              }
              uVar17 = *(undefined8 *)(lVar15 + 0x18);
              FUN_035ac8e8(lVar11,0);
              *(long *)(lVar11 + 0x10) = lVar18;
              thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar18);
              *(int *)(lVar11 + 0x18) = (int)uVar17;
              *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
              *in_stack_00000010 = lVar11;
              thunk_FUN_01f51358(in_stack_00000010,lVar11);
              if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_03598070;
              uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
              lVar14 = *in_stack_00000058;
              if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrund_n_s64__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_035992f0(uVar17,lVar14);
              uVar6 = (uint)in_stack_00000040[3];
              unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
            }
            if (uVar6 == 0) goto LAB_03598070;
            plVar8 = in_stack_00000040 + 4;
            plVar16 = (long *)*plVar8;
            if (((plVar16 == (long *)0x0) ||
                (lVar14 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0))
                , lVar14 == 0)) || (*in_stack_00000058 == 0)) goto LAB_035972a8;
            iVar5 = *(int *)(*in_stack_00000058 + 0x18);
            if (*(int *)(lVar14 + 0x18) != iVar5) {
              if (iVar5 < *(int *)(lVar14 + 0x18)) {
                plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                              );
                lVar15 = *in_stack_00000058;
                if (lVar15 == 0) goto LAB_035972a8;
                uVar9 = 0;
                plVar12 = plVar16 + 4;
                goto LAB_03598460;
              }
              if ((int)in_stack_00000040[3] == 0) goto LAB_03598070;
              plVar16 = (long *)*plVar8;
              if (plVar16 == (long *)0x0) goto LAB_035972a8;
              uVar6 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
              if ((uVar6 >> 1 & 1) != 0) goto LAB_03598d8c;
              plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                             ,*(undefined4 *)(lVar14 + 0x18));
              uVar6 = *(int *)(lVar14 + 0x18) - 1;
              FUN_0358d498(*in_stack_00000058,0,plVar16,0,uVar6,0);
              if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
              if ((int)in_stack_00000038[3] == 0) goto LAB_03598070;
              lVar15 = in_stack_00000038[4];
              lVar14 = FUN_01f08890(*(undefined8 *)
                                     Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__
                                    ,1);
              if ((*in_stack_00000058 == 0) || (lVar14 == 0)) goto LAB_035972a8;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03598070;
              *(uint *)(lVar14 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar6;
              lVar14 = thunk_FUN_0358ccb0(lVar15,lVar14,0);
              if (plVar16 == (long *)0x0) goto LAB_035972a8;
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0)
                 ) goto LAB_03598e3c;
              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_03598070;
              plVar12 = plVar16 + (long)(int)uVar6 + 4;
              *plVar12 = lVar14;
              thunk_FUN_01f51358(plVar12,lVar14);
              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_03598070;
              lVar14 = *in_stack_00000058;
              if (lVar14 == 0) goto LAB_035972a8;
              plVar12 = (long *)*plVar12;
              if (plVar12 != (long *)0x0) {
                bVar4 = *(byte *)(*(long *)
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                                 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)
                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                   )) goto LAB_03598f58;
              }
              FUN_0358d498(lVar14,uVar6,plVar12,0,*(int *)(lVar14 + 0x18) - uVar6,0);
              *in_stack_00000058 = (long)plVar16;
              thunk_FUN_01f51358(in_stack_00000058,plVar16);
              goto LAB_03598d8c;
            }
            if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
            if ((int)in_stack_00000038[3] == 0) goto LAB_03598070;
            lVar15 = in_stack_00000038[4];
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03583338(lVar15,0,0);
            if ((uVar9 & 1) == 0) goto LAB_03598d8c;
            plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,*(undefined4 *)(lVar14 + 0x18));
            uVar6 = *(int *)(lVar14 + 0x18) - 1;
            FUN_0358d498(*in_stack_00000058,0,plVar16,0,uVar6,0);
            if ((int)in_stack_00000038[3] == 0) goto LAB_03598070;
            lVar15 = in_stack_00000038[4];
            lVar14 = FUN_01f08890(*(undefined8 *)
                                   Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__
                                  ,1);
            if (lVar14 == 0) goto LAB_035972a8;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03598070;
            *(undefined4 *)(lVar14 + 0x20) = 1;
            lVar14 = thunk_FUN_0358ccb0(lVar15,lVar14,0);
            if (plVar16 == (long *)0x0) goto LAB_035972a8;
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
            goto LAB_03598e3c;
            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_03598070;
            plVar12 = plVar16 + (long)(int)uVar6 + 4;
            *plVar12 = lVar14;
            thunk_FUN_01f51358(plVar12,lVar14);
            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_03598070;
            lVar14 = *in_stack_00000058;
            if (lVar14 == 0) goto LAB_035972a8;
            if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_03598070;
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_035972a8;
            bVar4 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                             + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)
                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
               )) goto LAB_03598f58;
            FUN_0358cf48(plVar12,*(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20),0,0);
            goto LAB_03598d7c;
          }
          if (uVar10 <= unaff_x25) goto LAB_03598070;
          in_stack_00000028 = in_stack_00000040 + uVar9 + 5;
          uVar10 = FUN_034b27d8(*in_stack_00000028,0,0);
          uVar9 = unaff_x25;
        } while ((uVar10 & 1) != 0);
        if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_03598070;
        plVar16 = (long *)*in_stack_00000028;
        if ((plVar16 == (long *)0x0) ||
           (unaff_x27 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0)),
           unaff_x27 == 0)) goto LAB_035972a8;
        uVar10 = *(ulong *)(unaff_x27 + 0x18);
        lVar14 = *in_stack_00000058;
        if (uVar10 == 0) {
          if (lVar14 == 0) goto LAB_035972a8;
          if (*(long *)(lVar14 + 0x18) == 0) goto LAB_035973f4;
          if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_03598070;
          plVar16 = (long *)*in_stack_00000028;
          if (plVar16 == (long *)0x0) goto LAB_035972a8;
          uVar6 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
          if ((uVar6 >> 1 & 1) != 0) goto LAB_035973f4;
          goto LAB_03597e78;
        }
        if (lVar14 == 0) goto LAB_035972a8;
        uVar6 = *(uint *)(lVar14 + 0x18);
        iVar5 = (int)uVar10;
        if ((int)uVar6 < iVar5) {
          uVar7 = iVar5 - 1;
          if ((int)uVar6 < (int)uVar7) {
            plVar16 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
            do {
              if ((uint)uVar10 <= uVar6) goto LAB_03598070;
              plVar8 = (long *)*plVar16;
              if (plVar8 == (long *)0x0) goto LAB_035972a8;
              lVar14 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
              puVar3 = 
              Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__;
              lVar15 = *(long *)
                        Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
              ;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar15);
                lVar15 = *(long *)puVar3;
              }
              if (lVar14 == **(long **)(lVar15 + 0xb8)) {
                uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
                break;
              }
              uVar10 = *(ulong *)(unaff_x27 + 0x18);
              uVar6 = uVar6 + 1;
              plVar16 = plVar16 + 1;
              uVar7 = (int)uVar10 - 1;
            } while ((int)uVar6 < (int)uVar7);
          }
          if (uVar6 != uVar7) goto LAB_03597e78;
          if ((uint)uVar10 <= uVar6) goto LAB_03598070;
          plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
          plVar16 = (long *)*plVar8;
          if (plVar16 == (long *)0x0) goto LAB_035972a8;
          lVar14 = (**(code **)(*plVar16 + 0x1f8))(plVar16,*(undefined8 *)(*plVar16 + 0x200));
          puVar3 = Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
          ;
          lVar15 = *(long *)
                    Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
          ;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar15);
            lVar15 = *(long *)puVar3;
          }
          if (lVar14 != **(long **)(lVar15 + 0xb8)) goto LAB_0359768c;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_03598070;
          plVar16 = (long *)*plVar8;
          if ((plVar16 == (long *)0x0) ||
             (lVar14 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
             lVar14 == 0)) goto LAB_035972a8;
          uVar10 = FUN_035841e4(lVar14,0);
          if ((uVar10 & 1) == 0) goto LAB_03597e78;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_03598070;
          plVar16 = (long *)*plVar8;
          uVar17 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s64__;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar17 = FUN_03579868(uVar17,0);
          if (plVar16 == (long *)0x0) goto LAB_035972a8;
          uVar10 = (**(code **)(*plVar16 + 0x208))
                             (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
          unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          if ((uVar10 & 1) == 0) goto LAB_03597e78;
          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_03598070;
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
             plVar16 == (long *)0x0)) goto LAB_035972a8;
LAB_03597ec8:
          in_stack_00000048 =
               (long *)(**(code **)(*plVar16 + 0x438))(plVar16,*(undefined8 *)(*plVar16 + 0x440));
        }
        else {
          if (iVar5 == 0) goto LAB_03598070;
          uVar7 = iVar5 - 1;
          lVar14 = (long)(int)uVar7;
          plVar8 = (long *)(unaff_x27 + lVar14 * 8 + 0x20);
          plVar16 = (long *)*plVar8;
          if ((plVar16 == (long *)0x0) ||
             (lVar15 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
             lVar15 == 0)) goto LAB_035972a8;
          uVar10 = FUN_035841e4(lVar15,0);
          if (iVar5 < (int)uVar6) {
            if ((uVar10 & 1) != 0) {
              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_03598070;
              plVar16 = (long *)*plVar8;
              uVar17 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s64__;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar17 = FUN_03579868(uVar17,0);
              if (plVar16 == (long *)0x0) goto LAB_035972a8;
              uVar10 = (**(code **)(*plVar16 + 0x208))
                                 (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
              unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
              if ((uVar10 & 1) != 0) {
                if (unaff_x23 == 0) goto LAB_035972a8;
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
                lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                if (lVar15 == 0) goto LAB_035972a8;
                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_03598070;
                if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) == uVar7) {
LAB_03597ea0:
                  if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_03598070;
                  plVar8 = (long *)*plVar8;
                  if ((plVar8 != (long *)0x0) &&
                     (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                     plVar16 != (long *)0x0)) goto LAB_03597ec8;
                  goto LAB_035972a8;
                }
              }
            }
            goto LAB_03597e78;
          }
          if ((uVar10 & 1) != 0) {
            if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_03598070;
            plVar16 = (long *)*plVar8;
            uVar17 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s64__;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar17 = FUN_03579868(uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_035972a8;
            uVar9 = (**(code **)(*plVar16 + 0x208))
                              (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
            unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
            if ((uVar9 & 1) == 0) {
              in_stack_00000048 = (long *)0x0;
              goto LAB_03597690;
            }
            if (unaff_x23 == 0) goto LAB_035972a8;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
            lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_035972a8;
            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_03598070;
            if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) != uVar7) goto LAB_0359768c;
            if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_03598070;
            plVar16 = (long *)*plVar8;
            if ((plVar16 == (long *)0x0) ||
               (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
               unaff_x26 == 0)) goto LAB_035972a8;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_03598070;
            if (plVar16 == (long *)0x0) goto LAB_035972a8;
            uVar9 = (**(code **)(*plVar16 + 0x2a8))
                              (plVar16,*(undefined8 *)(unaff_x26 + lVar14 * 8 + 0x20),
                               *(undefined8 *)(*plVar16 + 0x2b0));
            if ((uVar9 & 1) == 0) goto LAB_03597ea0;
          }
LAB_0359768c:
          in_stack_00000048 = (long *)0x0;
        }
LAB_03597690:
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03583338(in_stack_00000048,0,0);
        if ((uVar9 & 1) == 0) {
          if (*in_stack_00000058 == 0) goto LAB_035972a8;
          unaff_w19 = *(uint *)(*in_stack_00000058 + 0x18);
        }
        else {
          unaff_w19 = *(int *)(unaff_x27 + 0x18) - 1;
        }
        if ((int)unaff_w19 < 1) {
          uVar6 = 0;
          goto LAB_03597af4;
        }
        unaff_w20 = 0;
        unaff_x24 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
LAB_035976e0:
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_w20) goto LAB_03598070;
        unaff_x28 = (long)(int)unaff_w20;
        plVar16 = *(long **)(unaff_x27 + unaff_x28 * 8 + 0x20);
        if ((plVar16 == (long *)0x0) ||
           (unaff_x29 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
           unaff_x29 == (long *)0x0)) goto LAB_035972a8;
        uVar9 = FUN_035841f4(unaff_x29,0);
        if ((uVar9 & 1) != 0) {
          unaff_x29 = (long *)(**(code **)(*unaff_x29 + 0x438))
                                        (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x440));
        }
        if (unaff_x23 == 0) goto LAB_035972a8;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_035972a8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_03598070;
        if (unaff_x26 == 0) goto LAB_035972a8;
        uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
        if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_03598070;
        uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03582560(unaff_x29,uVar17,0);
        if ((uVar9 & 1) != 0) goto LAB_03597ad4;
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
          lVar14 = *unaff_x24;
          if (lVar14 == 0) goto LAB_035972a8;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_03598070;
          lVar15 = *in_stack_00000058;
          if (lVar15 == 0) goto LAB_035972a8;
          uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
          if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_03598070;
          lVar14 = *unaff_x22;
          lVar15 = *(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar14 = *unaff_x22;
          }
          if (lVar15 == *(long *)(*(long *)(lVar14 + 0xb8) + 0x18)) goto LAB_03597ad4;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_035972a8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_03598070;
        lVar15 = *in_stack_00000058;
        if (lVar15 == 0) goto LAB_035972a8;
        uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_03598070;
        if (*(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20) == 0) goto LAB_03597ad4;
        uVar17 = *(undefined8 *)Method_System_Convert_ToUInt64__;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar17 = FUN_03579868(uVar17,0);
        uVar9 = FUN_03582560(unaff_x29,uVar17,0);
        if ((uVar9 & 1) != 0) goto LAB_03597ad4;
        if (unaff_x29 == (long *)0x0) goto LAB_035972a8;
        uVar9 = FUN_035849ac(unaff_x29,0);
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_035972a8;
        if ((*(uint *)(lVar14 + 0x18) <= unaff_w20) ||
           (uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar6))
        goto LAB_03598070;
        uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        param_1 = FUN_03582560(uVar17,0,0);
        unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        if ((uVar9 & 1) == 0) goto code_r0x035979d0;
        uVar6 = unaff_w20;
      } while ((param_1 & 1) != 0);
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_03598070;
      lVar14 = *unaff_x24;
      if (lVar14 == 0) goto LAB_035972a8;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_03598070;
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_035972a8;
      uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_03598070;
      uVar17 = *(undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrund_n_s64__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar4 = *(byte *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0x130);
      if ((*(byte *)(*unaff_x29 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(unaff_x29);
      }
      uVar9 = FUN_03599194(uVar17,unaff_x29);
      unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
joined_r0x03597ad0:
      uVar6 = unaff_w20;
    } while ((uVar9 & 1) == 0);
  } while( true );
LAB_03597f4c:
  if (unaff_x23 == 0) goto LAB_035972a8;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_03598070;
  if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar14 + 1, uVar10 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_03598070;
  lVar18 = in_stack_00000040[lVar15 + 4];
  lVar20 = in_stack_00000040[lVar14 + 5];
  lVar11 = in_stack_00000038[lVar15 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar14 * 8);
  lVar15 = in_stack_00000038[lVar14 + 5];
  if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrund_n_s64__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar5 = FUN_03599474(lVar18,uVar17,lVar11,lVar20,uVar19,lVar15);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar14 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar14) {
    lVar15 = (long)(int)uVar6;
    lVar14 = lVar14 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_03598070;
    goto LAB_03597f4c;
  }
  unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (bVar2) {
    uVar17 = thunk_FUN_01efb3a4(
                               Method_System_ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType__
                               );
    uVar17 = FUN_035ac8e0(uVar17,0);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<object>__);
    uVar19 = thunk_FUN_01f117cc();
    FUN_034b0a20(uVar19,uVar17,0);
LAB_03598ee0:
    uVar17 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar19,uVar17);
  }
LAB_0359812c:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_035972a8;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_03598070;
    plVar16 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_035972a8;
    lVar14 = FUN_0358d9a0(lVar14,0);
    lVar15 = *in_stack_00000058;
    if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_035972a8;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
    lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar4 = FUN_03583338(lVar11,0,0);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_s16__);
    if (lVar14 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
      lVar18 = thunk_FUN_01f116d0(lVar14,uVar17);
      if (lVar18 == 0) {
LAB_035981e4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar14,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar15 + 0x18);
    FUN_035ac8e8(lVar11,0);
    *(long *)(lVar11 + 0x10) = lVar18;
    thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar18);
    *(int *)(lVar11 + 0x18) = (int)uVar17;
    *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar11;
    thunk_FUN_01f51358(in_stack_00000010,lVar11);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_03598070;
    lVar14 = *plVar16;
    lVar15 = *in_stack_00000058;
    if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrund_n_s64__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035992f0(lVar14,lVar15);
    unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_03598070;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar14 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0)),
      lVar14 == 0)) || (*in_stack_00000058 == 0)) goto LAB_035972a8;
  iVar5 = *(int *)(*in_stack_00000058 + 0x18);
  if (*(int *)(lVar14 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03583338(lVar15,0,0);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,*(undefined4 *)(lVar14 + 0x18));
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_0358d498(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,1)
      ;
      if (lVar14 == 0) goto LAB_035972a8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03598070;
      *(undefined4 *)(lVar14 + 0x20) = 1;
      lVar14 = thunk_FUN_0358ccb0(lVar15,lVar14,0);
      if (plVar16 == (long *)0x0) goto LAB_035972a8;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
      goto LAB_03598e3c;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_03598070;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar14;
      thunk_FUN_01f51358(plVar12,lVar14);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_03598070;
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_035972a8;
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_03598070;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_035972a8;
      bVar4 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                       + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__))
      {
LAB_03598f58:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar12);
      }
      FUN_0358cf48(plVar12,*(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto LAB_03598dfc;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar14 + 0x18)) {
      plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_035972a8;
      uVar9 = 0;
      plVar12 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_03598070;
              plVar13 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
              if ((plVar13 == (long *)0x0) ||
                 (lVar15 = (**(code **)(*plVar13 + 0x1f8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_035972a8;
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)
                 ) goto LAB_03598e3c;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_03598070;
              *plVar12 = lVar15;
              thunk_FUN_01f51358(plVar12,lVar15);
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar9 = uVar9 + 1;
              plVar12 = plVar12 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
          lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_03583338(lVar15,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_03598070;
            plVar12 = *(long **)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_035972a8;
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
            goto LAB_03598e3c;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
            lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01f08890(*(undefined8 *)
                                   Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__
                                  ,1);
            lVar14 = thunk_FUN_0358ccb0(lVar14,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_035972a8;
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
            goto LAB_03598e3c;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          if (uVar1 <= uVar7) goto LAB_03598070;
          plVar16[(long)(int)uVar7 + 4] = lVar14;
          thunk_FUN_01f51358(plVar16 + (long)(int)uVar7 + 4,lVar14);
LAB_03598dfc:
          *in_stack_00000058 = (long)plVar16;
          thunk_FUN_01f51358(in_stack_00000058,plVar16);
          goto LAB_03598e0c;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_03598070;
        if (plVar16 == (long *)0x0) goto LAB_035972a8;
        lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
        goto LAB_03598e3c;
        if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_03598070;
        *plVar12 = lVar15;
        thunk_FUN_01f51358(plVar12,lVar15);
        lVar15 = *in_stack_00000058;
        uVar9 = uVar9 + 1;
        plVar12 = plVar12 + 1;
        if (lVar15 == 0) goto LAB_035972a8;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_03598070;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_035972a8;
    uVar7 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,*(undefined4 *)(lVar14 + 0x18));
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_0358d498(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_035972a8;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_03598070;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,1)
      ;
      if ((*in_stack_00000058 == 0) || (lVar14 == 0)) goto LAB_035972a8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03598070;
      *(uint *)(lVar14 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar7;
      lVar14 = thunk_FUN_0358ccb0(lVar15,lVar14,0);
      if (plVar16 == (long *)0x0) goto LAB_035972a8;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
      goto LAB_03598e3c;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_03598070;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar14;
      thunk_FUN_01f51358(plVar12,lVar14);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_03598070;
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_035972a8;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                         + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__)
           ) goto LAB_03598f58;
      }
      FUN_0358d498(lVar14,uVar7,plVar12,0,*(int *)(lVar14 + 0x18) - uVar7,0);
      *in_stack_00000058 = (long)plVar16;
      thunk_FUN_01f51358(in_stack_00000058,plVar16);
    }
  }
LAB_03598e0c:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_03598e18;
  goto LAB_03598070;
  while( true ) {
    lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_03598e3c;
    if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_03598070;
    *plVar12 = lVar15;
    thunk_FUN_01f51358(plVar12,lVar15);
    lVar15 = *in_stack_00000058;
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if (lVar15 == 0) break;
LAB_03598460:
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar14 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_035986cc;
      goto LAB_03598658;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_03598070;
    if (plVar16 == (long *)0x0) break;
  }
  goto LAB_035972a8;
LAB_035973f4:
  if (unaff_x23 == 0) goto LAB_035972a8;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_03598070;
  lVar14 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01f51358();
  uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
  if (uVar9 <= unaff_x25) goto LAB_03598070;
  lVar15 = *in_stack_00000028;
  if (lVar15 != 0) goto LAB_03597d6c;
  goto LAB_03597d84;
  while( true ) {
    plVar13 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_035972a8;
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_03598e3c;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_03598070;
    *plVar12 = lVar15;
    thunk_FUN_01f51358(plVar12,lVar15);
    uVar6 = *(uint *)(lVar14 + 0x18);
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_03598658:
    if (uVar6 <= (uint)uVar9) goto LAB_03598070;
  }
LAB_035986cc:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar15 = in_stack_00000038[4];
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03583338(lVar15,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar10 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_03598070;
        plVar12 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar12 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
           plVar16 == (long *)0x0)) goto LAB_035972a8;
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
        goto LAB_03598e3c;
        uVar7 = *(uint *)(plVar16 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_03598070;
        lVar14 = in_stack_00000038[4];
        uVar17 = FUN_01f08890(*(undefined8 *)
                               Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                              1);
        lVar14 = thunk_FUN_0358ccb0(lVar14,uVar17,0);
        if (plVar16 == (long *)0x0) goto LAB_035972a8;
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0)) {
LAB_03598e3c:
          uVar17 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar17,0);
        }
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar6 < uVar7) {
        plVar16[(long)(int)uVar6 + 4] = lVar14;
        thunk_FUN_01f51358(plVar16 + (long)(int)uVar6 + 4,lVar14);
LAB_03598d7c:
        *in_stack_00000058 = (long)plVar16;
        thunk_FUN_01f51358(in_stack_00000058,plVar16);
LAB_03598d8c:
        if ((int)in_stack_00000040[3] != 0) {
LAB_03598e18:
          return *plVar8;
        }
      }
    }
LAB_03598070:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_035972a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


