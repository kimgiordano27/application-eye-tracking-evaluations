/*
FUNCTION_NAME: FUN_03806bcc
ENTRY_POINT: 03806bcc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Type propagation algorithm not settling */

long FUN_03806bcc(long param_1,long param_2,long param_3,long param_4,undefined1 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *local_58;
  
  puVar2 = 
  Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__;
  if ((DAT_045390b5 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                );
    FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_SizeOf<Vector4>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__);
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_SizeOf<IntPtr>__);
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(
                Method_System_Runtime_InteropServices_Marshal_SizeOf<CAPI_ovrMatchmakingCustomQueryData>__
                );
    DAT_045390b5 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_58 = (long *)0x0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar6 = *(long *)puVar2;
  }
  puVar3 = Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
  plVar12 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
  if (param_3 != 0) {
    lVar6 = *(long *)Method_UnityEngine_UI_LayoutGroup_SetProperty<RectOffset>__;
    local_58 = (long *)0x0;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar6 = *(long *)puVar3;
    }
    plVar7 = (long *)**(long **)(lVar6 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_03807110;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x238))
                               (plVar7,param_3,*(undefined8 *)(param_1 + 0xc0),
                                *(undefined8 *)(param_1 + 0xf0),&local_58,
                                *(undefined8 *)(*plVar7 + 0x240));
    if (plVar7 == (long *)0x0) {
      if (local_58 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)puVar2 + 0x130);
        if (bVar5 <= *(byte *)(*local_58 + 0x130)) {
          plVar12 = local_58;
          if (*(long *)(*(long *)(*local_58 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar2) {
            plVar12 = (long *)0x0;
          }
          goto joined_r0x0380707c;
        }
      }
      plVar12 = (long *)0x0;
    }
    else {
      lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,4);
      if (lVar6 == 0) goto LAB_03807110;
      if ((*(int *)(lVar6 + 0x18) == 0) ||
         (*(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
         *(int *)(lVar6 + 0x18) == 1)) goto LAB_03807114;
      *(long *)(lVar6 + 0x28) = param_3;
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar8 = *(long *)puVar3;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_03807110;
      uVar9 = FUN_037f6b90(**(long **)(lVar8 + 0xb8),0);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_03807114;
      *(undefined8 *)(lVar6 + 0x30) = uVar9;
      uVar9 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_03807114;
      *(undefined8 *)(lVar6 + 0x38) = uVar9;
      FUN_03805714(param_1,*(undefined8 *)
                            Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__
                   ,lVar6,plVar7);
    }
  }
joined_r0x0380707c:
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x73) == '\0') {
      puVar11 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__;
      if (param_4 != 0) {
LAB_03806e80:
        FUN_0380d0d8(param_1,*puVar11);
      }
    }
    else if (param_4 != 0) {
      lVar6 = *(long *)(param_1 + 0x48);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01c1d1e8();
      }
      bVar5 = FUN_03893b28(param_4,0);
      if (lVar6 == 0) goto LAB_03807110;
      *(byte *)(lVar6 + 0x10) = bVar5 & 1;
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_03807110;
      if ((*(char *)(*(long *)(param_1 + 0x48) + 0x10) != '\0') &&
         (puVar11 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__,
         *(int *)(param_2 + 0x24) == 3)) goto LAB_03806e80;
    }
  }
  if (plVar12 == (long *)0x0) goto LAB_03807110;
  uVar10 = FUN_0389cba0(plVar12,0);
  if ((uVar10 & 1) != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x72) == '\0') {
      return param_2;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
      uVar1 = *(undefined8 *)(lVar6 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_03808eec(uVar9,uVar1);
      FUN_03807e68(param_1,*(undefined8 *)
                            Method_System_Runtime_InteropServices_Marshal_SizeOf<CAPI_ovrMatchmakingCustomQueryData>__
                   ,uVar9);
      return 0;
    }
    goto LAB_03807110;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_03807110;
  lVar6 = FUN_037cd07c(*(long *)(param_1 + 0x28),plVar12,0);
  uVar10 = FUN_0380aa64(param_1);
  if ((uVar10 & 1) == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(param_1 + 0xf8) != 3;
  }
  if (lVar6 == 0) {
    uVar10 = thunk_FUN_03152714(plVar12[3],*(undefined8 *)(param_1 + 0x80),0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__ +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar6 = FUN_038e0c74(plVar12,0);
      if (lVar6 == 0) {
        lVar6 = FUN_03803f98(plVar12);
      }
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x78);
        thunk_FUN_01c21c38();
        if (lVar6 != 0) goto LAB_03806f30;
      }
    }
    uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    puVar11 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<Vector4>__;
LAB_03806fc8:
    FUN_03805568(param_1,*puVar11,uVar9,bVar4);
    return 0;
  }
LAB_03806f30:
  *param_5 = 1;
  if (*(char *)(lVar6 + 0x72) != '\0') {
    uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    puVar11 = (undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__;
    goto LAB_03806fc8;
  }
  if (param_2 != 0) {
    uVar10 = FUN_038043f8(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(param_2 + 0x28),
                          *(undefined4 *)(param_2 + 0x90));
    if ((uVar10 & 1) == 0) {
      lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,2);
      uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = uVar9;
          lVar8 = *(long *)(param_1 + 0x48);
          if (lVar8 == 0) goto LAB_03807110;
          uVar9 = *(undefined8 *)(lVar8 + 0x30);
          uVar1 = *(undefined8 *)(lVar8 + 0x38);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_03808eec(uVar9,uVar1);
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x28) = uVar9;
            FUN_038080a8(param_1,*(undefined8 *)
                                  Method_System_Runtime_InteropServices_Marshal_SizeOf<IntPtr>__,
                         lVar6);
            return 0;
          }
        }
LAB_03807114:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      goto LAB_03807110;
    }
    lVar6 = FUN_037cc2a8(lVar6,0);
    if (lVar6 == 0) goto LAB_03807110;
    *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    uVar9 = FUN_037cbce4(param_2,0);
    *(undefined8 *)(lVar6 + 0x38) = uVar9;
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(*(long *)(param_1 + 0x48) + 0x28) = param_2;
    return lVar6;
  }
LAB_03807110:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


