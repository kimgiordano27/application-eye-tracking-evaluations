/*
FUNCTION_NAME: FUN_06de3bc0
ENTRY_POINT: 06de3bc0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_06de3bc0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  
  if ((DAT_076ea0fa & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_System_Data_LookupNode_Eval__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_Looper__ctor__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_Looper_EnqueueMessage__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_ListContainsItem_Contains__);
    thunk_FUN_032e1da0(Method_ReadyPlayerMe_AvatarCreator_LogoutElement_Logout__);
    thunk_FUN_032e1da0(PTR_DAT_072814e0);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_LooseAssemblyName__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<Type>__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__
                      );
    thunk_FUN_032e1da0(Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__);
    thunk_FUN_032e1da0(Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__);
    thunk_FUN_032e1da0(Method_Keyboard_KeyboardManager_OnSpacePress__);
    thunk_FUN_032e1da0(Method_System_Runtime_InteropServices_Marshal_SizeOf<Vector4>__);
    thunk_FUN_032e1da0(Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__);
    thunk_FUN_032e1da0(
                      Method_System_Resources_ManifestBasedResourceGroveler_GetNeutralResourcesLanguage__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07281220);
    DAT_076ea0fa = 1;
  }
  local_60 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_58 = param_1;
  thunk_FUN_0333a630(&local_58,param_1);
  if (local_58 == 0) goto LAB_06de4108;
  uVar3 = FUN_06de1d20(*(undefined8 *)(local_58 + 0x10),&local_60);
  if ((uVar3 & 1) == 0) {
    if ((local_58 == 0) || (*(long *)(local_58 + 0x10) == 0)) goto LAB_06de4108;
    uVar3 = FUN_057aa998(*(long *)(local_58 + 0x10),
                         *(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<byte>__
                         ,0);
    if ((uVar3 & 1) == 0) {
      if (((local_58 == 0) || (*(long *)(local_58 + 0x10) == 0)) ||
         (uVar3 = FUN_057aa998(*(long *)(local_58 + 0x10),
                               *(undefined8 *)
                                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__
                               ,0), local_58 == 0)) goto LAB_06de4108;
      lVar4 = *(long *)(local_58 + 0x10);
      if ((uVar3 & 1) != 0) goto LAB_06de3d78;
      uVar3 = thunk_FUN_057aa644(lVar4,*(undefined8 *)Method_Keyboard_KeyboardManager_OnSpacePress__
                                 ,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)
                 Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar7 = (long *)FUN_059324dc(uVar5,0);
        if ((plVar7 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0)),
           local_58 == 0)) goto LAB_06de4108;
        uVar5 = FUN_057aaeec(uVar5,*(undefined8 *)PTR_DAT_07281220,*(undefined8 *)(local_58 + 0x10),
                             0);
        FUN_06de1d20(uVar5,&local_60);
        goto LAB_06de3e30;
      }
    }
    else {
      if (local_58 == 0) goto LAB_06de4108;
      lVar4 = *(long *)(local_58 + 0x10);
LAB_06de3d78:
      if (lVar4 == 0) goto LAB_06de4108;
      uVar5 = FUN_057ace0c(lVar4,*(undefined8 *)
                                  Method_System_Runtime_InteropServices_Marshal_SizeOf<Vector4>__,
                           *(undefined8 *)
                            Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__,0);
      uVar3 = FUN_06de1d20(uVar5,&local_60);
      if ((uVar3 & 1) != 0) goto LAB_06de3e30;
    }
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_ToList<Type>__ + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar8 = FUN_06de428c(&local_58);
  }
  else {
LAB_06de3e30:
    puVar2 = Method_Unity_AppUI_Core_Looper__ctor__;
    puVar1 = Method_Unity_VisualScripting_ListContainsItem_Contains__;
    if (local_60 == 0) {
LAB_06de4108:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_041e3694(&local_50,local_60,
                 *(undefined8 *)Method_Unity_VisualScripting_LooseAssemblyName__ctor__);
    uStack_78 = uStack_48;
    local_80 = local_50;
    local_70 = local_40;
    do {
      uVar3 = FUN_052d44b4(&local_80,*(undefined8 *)puVar2);
      lVar4 = local_58;
      plVar7 = local_70;
      if ((uVar3 & 1) == 0) {
        FUN_052d44b0(&local_80,*(undefined8 *)Method_System_Data_LookupNode_Eval__);
        plVar7 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,1);
        if ((local_58 != 0) && (plVar7 != (long *)0x0)) {
          lVar4 = *(long *)(local_58 + 0x10);
          if ((lVar4 != 0) &&
             (lVar8 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar5,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar7[4] = lVar4;
          thunk_FUN_0333a630(plVar7 + 4,lVar4);
          if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bb2c20(*(undefined8 *)
                        Method_System_Resources_ManifestBasedResourceGroveler_GetNeutralResourcesLanguage__
                       ,plVar7,0);
          if (local_58 != 0) {
            uVar5 = FUN_057a25c4(*(undefined8 *)
                                  Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__,
                                 *(undefined8 *)(local_58 + 0x10),0);
            lVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072814e0);
            FUN_06d2765c(lVar4,uVar5,0);
            return lVar4;
          }
        }
        goto LAB_06de4108;
      }
      uVar10 = param_2[1];
      uVar5 = *param_2;
      uVar12 = param_2[3];
      plVar11 = (long *)param_2[2];
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar8 = *local_70;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_06de3ee8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(local_70,*(long *)puVar1,2);
LAB_06de3ee8:
      local_50 = uVar5;
      uStack_48 = uVar10;
      local_40 = plVar11;
      uStack_38 = uVar12;
      uVar3 = (*(code *)*puVar6)(plVar7,lVar4,&local_50,puVar6[1]);
    } while ((uVar3 & 1) == 0);
    FUN_052d44b0(&local_80,*(undefined8 *)Method_System_Data_LookupNode_Eval__);
    lVar4 = local_58;
    uVar10 = param_2[1];
    uVar5 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_ReadyPlayerMe_AvatarCreator_LogoutElement_Logout__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06de4090;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(plVar7,*(long *)Method_ReadyPlayerMe_AvatarCreator_LogoutElement_Logout__,
                          0);
LAB_06de4090:
    local_50 = uVar5;
    uStack_48 = uVar10;
    local_40 = (long *)uVar12;
    uStack_38 = uVar13;
    lVar8 = (*(code *)*puVar6)(plVar7,lVar4,&local_50,puVar6[1]);
    lVar4 = local_58;
    if (lVar8 != 0) {
      if (*(int *)(*(long *)Method_System_Linq_Enumerable_ToList<Type>__ + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06de2f00(lVar4,lVar8);
      FUN_06de2f6c(local_58,lVar8);
    }
  }
  return lVar8;
}


