/*
FUNCTION_NAME: FUN_05cd3df0
ENTRY_POINT: 05cd3df0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_05cd3df0(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_06dc2cee & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0cff0);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<float>_set_setter__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<uint>__ctor__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<uint>_GetValue__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_getter__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_setter__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>_GetValue__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<Vector3>__ctor__);
    DAT_06dc2cee = 1;
  }
  puVar5 = Method_UnityEngine_Rendering_DebugUI_Field<Vector3>__ctor__;
  puVar4 = Method_UnityEngine_Rendering_DebugUI_Field<uint>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  bVar2 = *(byte *)(param_1 + 0x50);
  if ((bVar2 >> 3 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd3ce0(param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
    bVar2 = *(byte *)(param_1 + 0x50);
  }
  bVar1 = bVar2 >> 1 & 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    bVar1 = 1;
  }
  if ((bVar2 & 1) == 0) {
LAB_05cd3f10:
    if ((bVar1 != 0) && (uVar7 = FUN_05ce4054(param_1,0), (uVar7 & 1) == 0)) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_05cd427c();
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05cd43d0(param_1,*(undefined8 *)
                              Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,
                     *(undefined8 *)puVar5);
      }
      lVar11 = *param_2;
      if (lVar11 == 0) {
        if (*(int *)(*(long *)PTR_DAT_06a0cff0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar11 = FUN_0554afdc(0);
        *param_2 = lVar11;
        LeanTween__value(param_2,lVar11);
        lVar11 = *param_2;
        if (lVar11 != 0) goto LAB_05cd3fa4;
      }
      else {
LAB_05cd3fa4:
        thunk_FUN_02da4860();
        *(long *)(param_1 + 0x40) = lVar11;
        LeanTween__value((long *)(param_1 + 0x40),lVar11);
        if ((param_3 & 1) == 0) {
          *param_2 = 0;
          LeanTween__value(param_2,0);
        }
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_05cd427c();
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
        lVar11 = *(long *)(param_1 + 0x40);
        thunk_FUN_02da4860();
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar8[4] = lVar11;
        LeanTween__value(plVar8 + 4,lVar11);
        uVar10 = FUN_0540edec(*(undefined8 *)
                               Method_UnityEngine_Rendering_DebugUI_Field<uint>_GetValue__,plVar8,0)
        ;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        FUN_05cd42e0(param_1,uVar10,*(undefined8 *)puVar5);
      }
      goto UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch9startPositiony;
    }
  }
  else {
    uVar6 = FUN_05ce4054(param_1,0);
    if ((uVar6 & 1) != 0 || bVar1 != 0) goto LAB_05cd3f10;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_05cd427c();
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05cd43d0(param_1,*(undefined8 *)
                            Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_setter__,
                   *(undefined8 *)puVar5);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_05cd427c();
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd43d0(param_1,*(undefined8 *)
                          Method_UnityEngine_Rendering_DebugUI_Field<float>_set_setter__,
                 *(undefined8 *)puVar5);
  }
  *param_2 = 0;
  LeanTween__value(param_2,0);
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = FUN_05cf567c(param_1,0), (uVar7 & 1) == 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd3ce0(param_1,*(undefined8 *)
                          Method_UnityEngine_Rendering_DebugUI_Field<uint>_get_getter__,
                 *(undefined8 *)puVar5);
  }
UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch9startPositiony:
  uVar6 = FUN_05cf567c(param_1,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_05cd427c();
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05cd43d0(param_1,*(undefined8 *)
                            Method_UnityEngine_Rendering_DebugUI_Field<Vector2>_GetValue__,
                   *(undefined8 *)puVar5);
    }
    FUN_05cf58ac(param_1,0,0);
  }
  return uVar6 & 1;
}


