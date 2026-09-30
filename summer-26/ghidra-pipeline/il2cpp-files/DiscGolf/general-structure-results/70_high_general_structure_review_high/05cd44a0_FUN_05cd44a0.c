/*
FUNCTION_NAME: FUN_05cd44a0
ENTRY_POINT: 05cd44a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_3
*/


void FUN_05cd44a0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_48;
  undefined1 local_34 [4];
  
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  if ((DAT_06dc2cef & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1c6b8);
    FUN_02d965b8(PTR_DAT_06a0cff0);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<Vector4>__ctor__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_Field<Vector4>_GetValue__);
    FUN_02d965b8(Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>__ctor__);
    FUN_02d965b8(
                Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>_set_ShouldIncludePredicate__
                );
    DAT_06dc2cef = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05cd427c();
  if ((uVar3 & 1) == 0) {
LAB_05cd4658:
    if ((*(byte *)(param_1 + 0x50) >> 3 & 1) != 0) {
      uVar3 = FUN_05cf567c(param_1,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x40);
      thunk_FUN_02da4860();
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Vector4>_GetValue__;
      if ((param_2 == 0) && (lVar9 != 0)) {
        lVar5 = *(long *)Method_UnityEngine_Rendering_DebugUI_Field<Vector4>_GetValue__;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        puVar7 = *(undefined8 **)(lVar5 + 0xb8);
        lVar8 = puVar7[1];
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar6 = *puVar7;
          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a1c6b8);
          FUN_0554ebec(lVar8,uVar6,
                       *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector4>__ctor__,0)
          ;
          plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar4 = lVar8;
          LeanTween__value(plVar4,lVar8);
        }
        if (*(int *)(*(long *)PTR_DAT_06a0cff0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        Oculus_Avatar2_CAPI__OvrAvatar2Streaming_DeserializeRecording_WithResult
                  (lVar9,lVar8,param_1,0);
        return;
      }
    }
    FUN_05cf58ac(param_1,param_2,0);
    return;
  }
  plVar4 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
  lVar9 = *(long *)(param_1 + 0x40);
  thunk_FUN_02da4860();
  puVar1 = PTR_DAT_069fb9c0;
  local_34[0] = lVar9 != 0;
  lVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_34);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar9 != 0) &&
     (lVar5 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_05cd475c:
    uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar9;
    LeanTween__value(plVar4 + 4,lVar9);
    local_48 = param_2;
    lVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x58),&local_48);
    if ((lVar9 != 0) &&
       (lVar5 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_05cd475c;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar9;
      LeanTween__value(plVar4 + 5,lVar9);
      uVar6 = FUN_0540edec(*(undefined8 *)
                            Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>__ctor__
                           ,plVar4,0);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar9);
      }
      FUN_05cd42e0(param_1,uVar6,
                   *(undefined8 *)
                    Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>_set_ShouldIncludePredicate__
                  );
      goto LAB_05cd4658;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


