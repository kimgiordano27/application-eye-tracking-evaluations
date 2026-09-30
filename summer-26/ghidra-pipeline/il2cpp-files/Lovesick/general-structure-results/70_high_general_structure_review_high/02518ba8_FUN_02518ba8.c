/*
FUNCTION_NAME: FUN_02518ba8
ENTRY_POINT: 02518ba8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0251917c) */

void FUN_02518ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_037829c2 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4495);
    thunk_FUN_00d48444(Method_System_Nullable<Oni_ConstraintType>_get_Value__);
    thunk_FUN_00d48444(System_Action<InputDevice,_InputDeviceChange>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_9__);
    thunk_FUN_00d48444(Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<fsObjectProcessor>__ctor__);
    thunk_FUN_00d48444(System_Linq_Expressions_Expression<TDelegate>_var);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Length>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vbsl_s8__);
    thunk_FUN_00d48444(Method_System_Convert_ToInt32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Tween,_TweenLink>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TeleportPoint>_get_Count__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_Register<object>__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                      );
    DAT_037829c2 = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  if (param_4 != (long *)0x0) {
    uVar4 = FUN_024fb0b0(param_4,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    plVar5 = (long *)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_9__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02518d54;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar5,*(long *)
                                    Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_9__
                            ,0);
LAB_02518d54:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar2 = System_Linq_Expressions_Expression<TDelegate>_var;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
               ) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02518dd0;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_00d59724(plVar5,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                              ,0);
LAB_02518dd0:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar4 == 0) goto LAB_02519114;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_025190fc;
        }
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02518e34;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_00d59724(plVar5,*(long *)
                                      Method_System_Net_FtpWebRequest_get_UseDefaultCredentials__,0)
        ;
LAB_02518e34:
        (*(code *)*puVar6)(local_e0,plVar5,puVar6[1]);
        uStack_88 = uStack_c8;
        uStack_90 = uStack_d0;
        local_a0 = local_e0;
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<fsObjectProcessor>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        auVar13 = FUN_026c3bfc(local_a0,param_2,param_3,0);
        local_b0 = auVar13;
        uVar7 = FUN_026c3bf4(local_a0,0);
        local_e0 = auVar13;
        FUN_01133388(local_e0,uVar7,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Length>__ctor__
                    );
        local_80 = param_6;
        uStack_78 = param_7;
        local_e0 = local_b0;
        FUN_011334ac(local_e0,&local_80,param_8,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vbsl_s8__);
        local_e0 = local_b0;
        FUN_0113377c(0x3f800000,local_e0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Tween,_TweenLink>_Clear__);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bVar1 = *(byte *)(*(long *)StringLiteral_4495 + 300);
        if (*(byte *)(*param_4 + 300) < bVar1) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = param_4;
          if (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_4495) {
            plVar8 = (long *)0x0;
          }
        }
        uVar4 = FUN_02681b9c(plVar8,0,0);
        if ((uVar4 & 1) != 0) {
          auVar13 = FUN_02657f80(local_b0._0_8_,local_b0._8_8_,0);
          FUN_025192a0(param_1,auVar13._8_8_,auVar13._0_8_,auVar13._8_8_);
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_Register<object>__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01132de8(local_b0,*(undefined8 *)
                                       Method_System_Collections_Generic_List<TeleportPoint>_get_Count__
                            );
        if ((uVar4 & 1) != 0) {
          auVar13 = FUN_0265b660(local_b0._0_8_,local_b0._8_8_,0);
          lVar9 = *(long *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__;
          local_c0 = auVar13;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar9 = *(long *)
                     Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__;
          }
          FUN_0265b728(local_c0,**(char **)(lVar9 + 0xb8) == '\0',0);
        }
        lVar9 = FUN_02502cc0(param_4,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *(long *)puVar3;
        uVar7 = *(undefined8 *)(lVar9 + 0x58);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
        }
        uVar4 = FUN_0268b4e0(uVar7,param_4,0);
        if ((uVar4 & 1) != 0) {
          if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010e58e8(param_5,local_e0,
                       *(undefined8 *)Method_System_Nullable<Oni_ConstraintType>_get_Value__);
          auVar13 = local_b0;
          FUN_01133658(local_e0,local_e0._0_8_,*(undefined8 *)Method_System_Convert_ToInt32__);
          local_e0 = auVar13;
          lVar9 = FUN_010e6090(param_5,*(undefined8 *)
                                        System_Action<InputDevice,_InputDeviceChange>_TypeInfo);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar4 = 0;
            uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              local_e0 = local_b0;
              FUN_01132ea8(local_e0,*(undefined8 *)(lVar9 + 0x20 + uVar4 * 8),*(undefined8 *)puVar2)
              ;
              uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_025190fc:
    if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_10310) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02519130;
    }
  }
LAB_02519114:
  puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_10310,0);
LAB_02519130:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


